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
 counts=Counter(); first={}
 for f in SRC.glob("decompiled_*.c"):
  t=f.read_text(encoding="utf8",errors="replace")
  for line_no,line in enumerate(t.splitlines(),1):
  for m in re.finditer(r"\bDAT_([0-9A-Fa-f]{8,16})\b",line):
   v=int(m.group(1),16); counts[v]+=1; first.setdefault(v,{"file":f.name,"line":line_no})
 mapped=[]; sec_counts=Counter()
 for v,n in counts.items():
  r=v-base if v>=base else None; s=next((x for x in secs if r is not None and x["va"]<=r<x["va"]+max(x["vs"],x["rs"])),None)
  fo=off_rva(r) if r is not None else None
  state="outside_image" if s is None else ("mapped_to_file" if fo is not None else "virtual_only")
  if s: sec_counts[s["name"]]+=n
  mapped.append({"va":hex(v),"rva":hex(r) if r is not None else None,"references":n,"section":s["name"] if s else None,"mapping":state,"file_offset":fo,"first_source":first[v]})
 mapped.sort(key=lambda x:-x["references"])
 result={"file":str(EXE.relative_to(ROOT)),"bytes":len(d),"sha256":hashlib.sha256(d).hexdigest(),"machine":hex(machine),"pe32_plus":is64,"timestamp":timestamp,"image_base":hex(base),"entry_rva":hex(entry),"size_image":sizeimg,"sections":secs,"codeview":cvs,"dat_unique":len(counts),"dat_references":sum(counts.values()),"dat_section_references":dict(sec_counts),"dat_map":mapped}
 OUT.mkdir(parents=True,exist_ok=True)
 (OUT/"ntoskrnl_pe_analysis.json").write_text(json.dumps(result,indent=2)+"\n")
 lines=["# Análise da imagem PE do ntoskrnl.exe","",f"- Bytes: {len(d)}",f"- SHA-256: {result['sha256']}",f"- Machine: {hex(machine)}",f"- ImageBase: {hex(base)}",f"- Entry RVA: {hex(entry)}",f"- Endereços DAT_ únicos: {len(counts)}",f"- Referências DAT_: {sum(counts.values())}","","## Identidade CodeView"]
 lines += [f"- GUID {x['guid']}; Age {x['age']}; PDB {x['pdb_path']}" for x in cvs] or ["- Nenhum RSDS encontrado."]
 lines += ["","## Seções","|Nome|RVA|VirtualSize|RawSize|","|---|---:|---:|---:|"]
 lines += [f"|{s['name']}|{hex(s['va'])}|{hex(s['vs'])}|{hex(s['rs'])}|" for s in secs]
 lines += ["","## Referências DAT_ por seção"]+[f"- {k}: {v}" for k,v in sec_counts.most_common()]
 lines += ["","## 100 endereços DAT_ mais referenciados","|VA|RVA|Refs|Seção|Mapeamento|","|---|---|---:|---|---|"]
 lines += [f"|{x['va']}|{x['rva']}|{x['references']}|{x['section']}|{x['mapping']}|" for x in mapped[:100]]
 lines += ["","O mapeamento é estrutural: não atribui tipos, valores ou semântica aos DAT_."]
 (OUT/"NTOSKRNL_PE_ANALYSIS.md").write_text("\n".join(lines)+"\n")
 print(json.dumps({"bytes":len(d),"sha256":result["sha256"],"machine":hex(machine),"image_base":hex(base),"codeview":cvs,"dat_unique":len(counts),"dat_references":sum(counts.values()),"section_refs":dict(sec_counts)},indent=2))
if __name__=="__main__": main()
