#!/usr/bin/env python3
"""Filter generated Ghidra prototypes against observed call-site arity."""
from pathlib import Path
from collections import defaultdict
import re,json,hashlib

src=Path("reconstrucao/src"); inc=Path("reconstrucao/include/ghidra_function_prototypes.h")
files=sorted(src.glob("decompiled_*.c"))
header=inc.read_text(encoding="utf-8",errors="replace")
lines=header.splitlines()
prototypes={}
for line in lines:
    s=line.strip()
    if not s.endswith(";"): continue
    m=re.search(r"([A-Za-z_]\w*)\s*\((.*)\);$",s)
    if not m: continue
    name=m.group(1); body=m.group(2).strip()
    if not body or body=="void": argc=0; varargs=False
    else:
        depth=0; bracket=0; brace=0; commas=0
        for ch in body:
            if ch=="(": depth+=1
            elif ch==")": depth-=1
            elif ch=="[": bracket+=1
            elif ch=="]": bracket-=1
            elif ch=="{": brace+=1
            elif ch=="}": brace-=1
            elif ch=="," and depth==0 and bracket==0 and brace==0: commas+=1
        argc=commas+1; varargs="..." in body
    prototypes[name]={"line":s,"argc":argc,"varargs":varargs}
arity=defaultdict(set)
for path in files:
    text=path.read_text(encoding="utf-8",errors="replace")
    text=re.sub(r"/\*.*?\*/|//[^\n]*"," ",text,flags=re.S)
    text=re.sub(r'"(?:\\.|[^"\\])*"','""',text)
    for m in re.finditer(r"\b([A-Za-z_]\w*)\s*\(",text):
        name=m.group(1)
        if name not in prototypes: continue
        pos=m.end(); depth=1; bracket=0; brace=0; commas=0; has_content=False
        while pos<len(text) and depth:
            ch=text[pos]
            if ch=="(": depth+=1
            elif ch==")":
                depth-=1
                if depth==0: break
            elif ch=="[": bracket+=1
            elif ch=="]": bracket-=1
            elif ch=="{": brace+=1
            elif ch=="}": brace-=1
            elif ch=="," and depth==1 and bracket==0 and brace==0: commas+=1
            if not ch.isspace() and ch not in ",)": has_content=True
            pos+=1
        if depth==0: arity[name].add(0 if not has_content else commas+1)
mismatches={}
kept=[]
for name,item in prototypes.items():
    observed=sorted(arity.get(name,set()))
    fixed=item["argc"]-1 if item["varargs"] else item["argc"]
    bad=[n for n in observed if (n<fixed if item["varargs"] else n!=fixed)]
    if bad: mismatches[name]={"expected":fixed,"observed":observed}
    else: kept.append(item["line"])
preamble=[]
for line in lines:
    s=line.strip()
    is_prototype=s.endswith(";") and re.search(r"^[A-Za-z_][^;]*\b[A-Za-z_]\w*\s*\(.*\);$",s)
    if not is_prototype and s!="#endif":
        preamble.append(line)
new_header="\n".join(preamble+sorted(kept)+["","#endif"])+"\n"
inc.write_text(new_header,encoding="utf-8")
report={"source_files":len(files),"prototypes_before":len(prototypes),"prototypes_after":len(kept),
"excluded_arity_mismatch":len(mismatches),"examples":dict(list(mismatches.items())[:200]),
"header_sha256":hashlib.sha256(new_header.encode()).hexdigest()}
Path("reconstrucao/extraidos/prototype_arity_report.json").write_text(json.dumps(report,indent=2,ensure_ascii=False)+"\n",encoding="utf-8")
md=["# Auditoria de aridade dos protótipos","",f"- Protótipos antes: {len(prototypes)}",
f"- Protótipos mantidos: {len(kept)}",f"- Excluídos por incompatibilidade: {len(mismatches)}",
"","Uma declaração foi mantida apenas quando a quantidade de argumentos das chamadas observadas coincide com a assinatura Ghidra."]
md += ["","## Exemplos excluídos",""]+[f"- {n}: esperado {v['expected']}; observado {v['observed']}" for n,v in list(mismatches.items())[:100]]
Path("reconstrucao/extraidos/PROTOTYPE_ARITY_AUDIT.md").write_text("\n".join(md)+"\n",encoding="utf-8")
print(json.dumps({k:v for k,v in report.items() if k!="examples"},indent=2))

