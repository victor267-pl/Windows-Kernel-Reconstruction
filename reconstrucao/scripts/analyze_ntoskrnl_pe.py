#!/usr/bin/env python3
from pathlib import Path
from collections import Counter
import hashlib,json,re,struct,uuid
ROOT=Path(__file__).resolve().parents[2]
EXE=ROOT/"reconstrucao/entrada/ntoskrnl.exe"
SRC=ROOT/"reconstrucao/src"
OUT=ROOT/"reconstrucao/extraidos"
def main():
 d=EXE.read_bytes()
 if d[:2]!=b"MZ": raise SystemExit("Assinatura MZ ausente")
 pe=struct.unpack_from("<I",d,0x3c)[0]
 if d[pe:pe+4]!=b"PE\0\0": raise SystemExit("Assinatura PE inválida")
 machine,nsec,timestamp,_,_,optsz,chars=struct.unpack_from("<HHIIIHH",d,pe+4)
 o=pe+24; magic=struct.unpack_from("<H",d,o)[0]
 if magic==0x20b: base=struct.unpack_from("<Q",d,o+24)[0]; is64=True; dd=o+112
 elif magic==0x10b: base=struct.unpack_from("<I",d,o+28)[0]; is64=False; dd=o+96
 else: raise SystemExit("Optional header inválido")
 entry=struct.unpack_from("<I",d,o+16)[0]; sizeimg,headers=struct.unpack_from("<II",d,o+56)
 dirs=[{"rva":struct.unpack_from("<I",d,dd+i*8)[0],"size":struct.unpack_from("<I",d,dd+i*8+4)[0]} for i in range(16)]
 so=o+optsz; secs=[]
 for i in range(nsec):
  p=so+i*40; name=d[p:p+8].split(b"\0")[0].decode("ascii","replace")
  vs,va,rs,rp=struct.unpack_from("<IIII",d,p+8); fl=struct.unpack_from("<I",d,p+36)[0]
  secs.append({"name":name,"va":va,"vs":vs,"rs":rs,"rp":rp,"flags":fl})
 def off_rva(r):
  if r<headers and r<len(d): return r
  for s in secs:
   if s["va"]<=r<s["va"]+max(s["vs"],s["rs"]):
    delta=r-s["va"]; return s["rp"]+delta if delta<s["rs"] else None
  return None
 cvs=[]; dbg=dirs[6]; dp=off_rva(dbg["rva"]) if dbg["rva"] else None
 if dp is not None:
  for p in range(dp,dp+dbg["size"]-27,28):
   _,_,_,_,typ,sz,_,rp=struct.unpack_from("<IIHHIIII",d,p)
   if typ==2 and rp and rp+sz<=len(d):
    b=d[rp:rp+sz]
    if b[:4]==b"RSDS" and len(b)>=24:
     cvs.append({"guid":str(uuid.UUID(bytes_le=b[4:20])).upper(),"age":struct.unpack_from("<I",b,20)[0],"pdb_path":b[24:].split(b"\0")[0].decode("utf8","replace")})
 counts=Counter(); first={}; xor_stack_uses=Counter()
 for f in SRC.glob("decompiled_*.c"):
  t=f.read_text(encoding="utf8",errors="replace")
  for line_no,line in enumerate(t.splitlines(),1):
      for m in re.finditer(r"\bDAT_([0-9A-Fa-f]{8,16})\b",line):
       v=int(m.group(1),16); counts[v]+=1; first.setdefault(v,{"file":f.name,"line":line_no})
       if re.search(re.escape(m.group(0))+r"\s*\^\s*\(ulonglong\)\s*auStack_",line):
        xor_stack_uses[v]+=1
 mapped=[]; sec_counts=Counter(); storage_counts=Counter()
 for v,n in counts.items():
  r=v-base if v>=base else None
  s=next((x for x in secs if r is not None and x["va"]<=r<x["va"]+max(x["vs"],x["rs"])),None)
  fo=off_rva(r) if r is not None else None
  state="outside_image" if s is None else ("mapped_to_file" if fo is not None else "virtual_only")
  delta=(r-s["va"]) if s is not None else None
  if s is None:
   storage="outside_image"; preview=None; initial="unknown"
  elif delta < s["rs"]:
   storage="file_backed"; preview=d[fo:fo+16].hex() if fo is not None else None; initial="bytes_from_PE_file"
  elif delta < s["vs"]:
   storage="loader_zero_fill"; preview="00"*16; initial="zero_filled_by_PE_loader"
  else:
   storage="raw_padding_outside_virtual_size"; preview=None; initial="not_a_validated_loaded_global"
  if s: sec_counts[s["name"]]+=n
  storage_counts[storage]+=n
  mapped.append({"va":hex(v),"rva":hex(r) if r is not None else None,"references":n,
   "section":s["name"] if s else None,"mapping":state,"storage_state":storage,
   "file_offset":fo,"initial_state":initial,"raw_preview_16_bytes":preview,"first_source":first[v]})
 mapped.sort(key=lambda x:-x["references"])
 semantic_candidates=[]
 for item in mapped:
  if item["storage_state"]=="file_backed" and item["file_offset"] is not None:
   value=struct.unpack_from("<Q",d,item["file_offset"])[0]
   va=int(item["va"],16)
   if value==0x00002B992DDFA232 and xor_stack_uses[va]>=3:
    semantic_candidates.append({"va":item["va"],"candidate":"__security_cookie",
     "confidence":"high_candidate_not_PDB_symbol","raw_qword":hex(value),
     "xor_with_stack_local_uses":xor_stack_uses[va],
     "evidence":["The initial 64-bit value equals the documented default x64 MSVC security-cookie constant.",
      "The decompiled source repeatedly XORs this global with stack-local addresses, matching stack-cookie prologue/epilogue behavior."]})
 result={"file":str(EXE.relative_to(ROOT)),"bytes":len(d),"sha256":hashlib.sha256(d).hexdigest(),"machine":hex(machine),"pe32_plus":is64,"timestamp":timestamp,"image_base":hex(base),"entry_rva":hex(entry),"size_image":sizeimg,"sections":secs,"codeview":cvs,"dat_unique":len(counts),"dat_references":sum(counts.values()),"dat_section_references":dict(sec_counts),"dat_storage_reference_counts":dict(storage_counts),"semantic_candidates":semantic_candidates,"dat_map":mapped}
 OUT.mkdir(parents=True,exist_ok=True)
 (OUT/"ntoskrnl_pe_analysis.json").write_text(json.dumps(result,indent=2)+"\n")
 lines=["# Análise da imagem PE do ntoskrnl.exe","",f"- Bytes: {len(d)}",f"- SHA-256: {result['sha256']}",f"- Machine: {hex(machine)}",f"- ImageBase: {hex(base)}",f"- Entry RVA: {hex(entry)}",f"- Endereços DAT_ únicos: {len(counts)}",f"- Referências DAT_: {sum(counts.values())}","","## Identidade CodeView"]
 lines += [f"- GUID {x['guid']}; Age {x['age']}; PDB {x['pdb_path']}" for x in cvs] or ["- Nenhum RSDS encontrado."]
 lines += ["","## Seções","|Nome|RVA|VirtualSize|RawSize|","|---|---:|---:|---:|"]
 lines += [f"|{s['name']}|{hex(s['va'])}|{hex(s['vs'])}|{hex(s['rs'])}|" for s in secs]
 lines += ["","## Estado físico dos endereços DAT_",
 "Contagem por referências, não por símbolos. `loader_zero_fill` significa que o RVA está na cauda virtual da seção além dos bytes armazenados no arquivo; o loader PE fornece zeros nessa região.",
 ]+[f"- {k}: {v}" for k,v in storage_counts.most_common()]
 lines += ["","## Referências DAT_ por seção"]+[f"- {k}: {v}" for k,v in sec_counts.most_common()]
 lines += ["","## 100 endereços DAT_ mais referenciados",
  "|VA|RVA|Refs|Seção|Mapeamento|Armazenamento|16 bytes iniciais (hex)|",
  "|---|---|---:|---|---|---|---|"]
 lines += [f"|{x['va']}|{x['rva']}|{x['references']}|{x['section']}|{x['mapping']}|{x['storage_state']}|{x['raw_preview_16_bytes']}|" for x in mapped[:100]]
 lines += ["","## Candidatos semânticos apoiados por evidência"]
 lines += [f"- {x['va']}: provável `{x['candidate']}` (confiança alta, ainda não confirmado por símbolo PDB); valor bruto {x['raw_qword']}; usos XOR com variável local de stack: {x['xor_with_stack_local_uses']}." for x in semantic_candidates] or ["- Nenhum candidato passou pelos critérios."]
 lines += ["","## Interpretação e limites",
 "- `file_backed`: há bytes correspondentes no executável; o preview é evidência bruta, não um tipo C.",
 "- `loader_zero_fill`: endereço dentro de VirtualSize, mas além de SizeOfRawData; a imagem carregada começa com zeros nessa região.",
 "- `outside_image`: endereço não pertence a uma seção mapeada pelo PE.",
 "- O mapeamento não atribui tipos, nomes semânticos ou layouts C aos DAT_."]
 (OUT/"NTOSKRNL_PE_ANALYSIS.md").write_text("\n".join(lines)+"\n")
 print(json.dumps({"bytes":len(d),"sha256":result["sha256"],"machine":hex(machine),"image_base":hex(base),"codeview":cvs,"dat_unique":len(counts),"dat_references":sum(counts.values()),"section_refs":dict(sec_counts)},indent=2))
if __name__=="__main__": main()
