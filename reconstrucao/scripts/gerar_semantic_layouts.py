#!/usr/bin/env python3
"""Build evidence-driven semantic C views for the five priority NT structures."""
from pathlib import Path
import re, json, hashlib

DATA=Path("dados")
OUT=Path("reconstrucao")
INC=OUT/"include"
REPORT=OUT/"extraidos"/"semantic_reconstruction.json"
TARGETS={"_KPROCESS":456,"_KTHREAD":1216,"_EPROCESS":2112,"_ETHREAD":1944,"_CONTEXT":1232}
CATEGORY="/ntkrnlmp.pdb"
FIELD_RE=re.compile(r"^\s*Campo\s+(\d+)\s+\|\s+Nome:\s*(.*?)\s+\|\s+Offset:\s*(\d+)\s+\|\s+Tamanho:\s*(\d+)\s+\|\s+Tipo:\s*(.*?)\s+\|\s+Comentário:\s*(.*)$")
PRIMITIVES={
 "char":("int8_t",1),"signed char":("int8_t",1),"uchar":("uint8_t",1),"unsigned char":("uint8_t",1),
 "byte":("uint8_t",1),"undefined":("uint8_t",1),"bool":("uint8_t",1),
 "short":("int16_t",2),"ushort":("uint16_t",2),"unsigned short":("uint16_t",2),
 "word":("uint16_t",2),"wchar_t":("uint16_t",2),
 "long":("int32_t",4),"ulong":("uint32_t",4),"unsigned int":("uint32_t",4),"int":("int32_t",4),
 "dword":("uint32_t",4),"float":("float",4),
 "longlong":("int64_t",8),"ulong64":("uint64_t",8),"unsigned long long":("uint64_t",8),
 "long long":("int64_t",8),"double":("double",8),"ulonglong":("uint64_t",8),
 "void *":("uintptr_t",8)
}
def ident(s):
 s=re.sub(r"[^A-Za-z0-9_]","_",s)
 if not s or s[0].isdigit(): s="_"+s
 return s
def parse():
 found={}
 files=sorted(DATA.glob("*.txt"))
 if not files: raise RuntimeError("Nenhum TXT de origem em dados/")
 for p in files:
  current=None; fields=[]; meta={}
  def save():
   if not current or meta.get("class")!="StructureDB" or meta.get("category")!=CATEGORY: return
   try:
    size=int(meta["size"]); count=int(meta["count"])
   except (KeyError,ValueError): return
   if len(fields)!=count: return
   obj={"name":current,"size":size,"fields":list(fields),"source":p.name}
   found.setdefault(current,[]).append(obj)
  with p.open(encoding="utf-8",errors="replace") as f:
   for line in f:
    m=re.match(r"^\s*Nome:\s*(\S+)",line)
    if m:
     save(); current=m.group(1); fields=[]; meta={}
     continue
    for key,pat in [("category",r"^\s*Categoria:\s*(.*)$"),("class",r"^\s*Classe:\s*(.*)$"),("size",r"^\s*Tamanho:\s*(\d+)\s*$"),("count",r"^\s*Quantidade de campos:\s*(\d+)\s*$")]:
     x=re.match(pat,line)
     if x: meta[key]=x.group(1).strip()
    x=FIELD_RE.match(line)
    if x:
     fields.append({"index":int(x.group(1)),"name":x.group(2).strip(),"offset":int(x.group(3)),
                    "size":int(x.group(4)),"type":x.group(5).strip(),"comment":x.group(6).strip()})
   save()
 return found,files
def resolve(name, size, known):
 # Return an exact-width C representation only when the Ghidra spelling is unambiguous.
 t=name.strip()
 if t.endswith("*"):
  return ("uintptr_t", "pointer_as_64bit_address")
 arr=re.fullmatch(r"(.+?)\[(\d+)\]",t)
 if arr:
  base,n=arr.group(1).strip(),int(arr.group(2))
  if base in PRIMITIVES and PRIMITIVES[base][1]*n==size:
   return (f"{PRIMITIVES[base][0]}[{n}]", "primitive_array")
 if t in PRIMITIVES and PRIMITIVES[t][1]==size:
  return (PRIMITIVES[t][0], "primitive")
 for n,expected in TARGETS.items():
  if t==n and expected==size and n in known:
   return (ident(n.strip("_")), "validated_embedded_priority_type")
 return (f"uint8_t[{size}]", "opaque_unresolved_type")
def main():
 found,files=parse()
 selected={}
 for n,size in TARGETS.items():
  matches=[x for x in found.get(n,[]) if x["size"]==size]
  if len(matches)!=1: raise RuntimeError(f"{n}: esperava 1 definicao StructureDB de {size} bytes em {CATEGORY}, achei {len(matches)}")
  selected[n]=matches[0]
 # Verify every field is in bounds and non-overlapping before emitting members.
 for n,obj in selected.items():
  fs=sorted(obj["fields"],key=lambda x:(x["offset"],x["index"]))
  end=0
  for f in fs:
   if f["size"]<=0 or f["offset"]<end or f["offset"]+f["size"]>obj["size"]:
    raise RuntimeError(f"{n}: campo sobreposto/fora dos limites: {f}")
   end=f["offset"]+f["size"]
 # Definitions ordered so embedded priority structures precede their containers.
 order=["_KPROCESS","_KTHREAD","_CONTEXT","_EPROCESS","_ETHREAD"]
 lines=["#ifndef NT_SEMANTIC_LAYOUTS_H","#define NT_SEMANTIC_LAYOUTS_H","","#include <stddef.h>","#include <stdint.h>","","/* Gerado exclusivamente do inventario Ghidra /ntkrnlmp.pdb.",
        " * Campos primitivos e ponteiros sao tipados quando largura e representacao batem.",
        " * Tipos compostos sem definicao validada permanecem como bytes nomeados.",
        " * Isto e uma vista ABI reconstruida, nao o fonte original da Microsoft.",
        " */","#pragma pack(push, 1)",""]
 report={"source_files":[p.name for p in files],"category":CATEGORY,"structures":{}}
 for n in order:
  obj=selected[n]; typedef=ident(n.strip("_")); cursor=0; members=[]; used={}
  lines.append(f"typedef struct {typedef} {{")
  for f in sorted(obj["fields"],key=lambda x:(x["offset"],x["index"])):
   if f["offset"]>cursor:
    gap=f["offset"]-cursor
    lines.append(f"    uint8_t _padding_{cursor:04X}[{gap}];")
   raw=f["name"]
   nm=ident(raw) if raw and raw.lower()!="null" else f"_ghidra_field_{f['index']}"
   used[nm]=used.get(nm,0)+1
   if used[nm]>1: nm=f"{nm}_{used[nm]}"
   ctype,status=resolve(f["type"],f["size"],selected)
   if ctype.endswith("]"):
    base,count=ctype[:-1].split("[")
    decl=f"{base} {nm}[{count}];"
   else: decl=f"{ctype} {nm};"
   lines.append(f"    {decl} /* +0x{f['offset']:04X}; Ghidra={f['type']}; {status} */")
   members.append({"index":f["index"],"name":raw,"c_member":nm,"offset":f["offset"],"size":f["size"],"ghidra_type":f["type"],"c_type":ctype,"resolution":status})
   cursor=f["offset"]+f["size"]
  if cursor<obj["size"]: lines.append(f"    uint8_t _padding_{cursor:04X}[{obj['size']-cursor}];")
  lines += [f"}} {typedef};",f'_Static_assert(sizeof({typedef}) == {obj["size"]}, "{typedef} size");']
  for m in members:
   lines.append(f'_Static_assert(offsetof({typedef}, {m["c_member"]}) == {m["offset"]}, "{typedef}.{m["c_member"]} offset");')
  lines.append("")
  report["structures"][n]={"size":obj["size"],"field_count":len(members),"source":obj["source"],"members":members,
    "typed_fields":sum(m["resolution"]!="opaque_unresolved_type" for m in members),
    "opaque_fields":sum(m["resolution"]=="opaque_unresolved_type" for m in members)}
 lines += ["#pragma pack(pop)","","#endif"]
 INC.mkdir(parents=True,exist_ok=True); (INC/"nt_semantic_layouts.h").write_text("\n".join(lines)+"\n",encoding="utf-8")
 REPORT.parent.mkdir(parents=True,exist_ok=True); REPORT.write_text(json.dumps(report,ensure_ascii=False,indent=2)+"\n",encoding="utf-8")
 print(f"Arquivos de origem analisados: {len(files)}")
 for n,x in report["structures"].items():
  print(f'{n}: {x["typed_fields"]}/{x["field_count"]} campos tipados; {x["opaque_fields"]} mantidos opacos.')
if __name__=="__main__": main()
