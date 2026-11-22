#!/usr/bin/env python3
"""Generate forward prototypes from exact Ghidra-decompiled function signatures."""
from pathlib import Path
from collections import defaultdict
import re,json,hashlib

src=Path("reconstrucao/src")
out=Path("reconstrucao/include")
files=sorted(src.glob("decompiled_*.c"))
by_name=defaultdict(set)
seen=0
for path in files:
    text=path.read_text(encoding="utf-8",errors="replace")
    markers=list(re.finditer(r"/\*\s*Ghidra label:\s*([^*]+?)\s*\*/",text))
    for i,m in enumerate(markers):
        end=markers[i+1].start() if i+1<len(markers) else len(text)
        block=text[m.end():end]
        block=re.sub(r"^\s*/\*\s*Ghidra address:[^*]*\*/","",block,count=1)
        brace=block.find("{")
        if brace<0: continue
        sig=re.sub(r"/\*.*?\*/|//[^\n]*"," ",block[:brace],flags=re.S).strip()
        sig=re.sub(r"\s+"," ",sig)
        if not sig.endswith(")"): continue
        match=re.search(r"([A-Za-z_]\w*)\s*\(",sig)
        if not match: continue
        name=match.group(1)
        if name in {"if","while","switch","for"}: continue
        by_name[name].add(sig+";")
        seen+=1
unique={name:next(iter(sigs)) for name,sigs in by_name.items() if len(sigs)==1}
conflicts={name:sorted(sigs) for name,sigs in by_name.items() if len(sigs)>1}
out.mkdir(parents=True,exist_ok=True)
lines=["#ifndef NT_GHIDRA_FUNCTION_PROTOTYPES_H","#define NT_GHIDRA_FUNCTION_PROTOTYPES_H",
'#include "ghidra_types.h"',"",
"/* Generated from extracted Ghidra signatures; conflicting signatures are omitted. */"]
for name in sorted(unique):
    lines.append(unique[name])
lines += ["","#endif"]
header="\n".join(lines)+"\n"
(out/"ghidra_function_prototypes.h").write_text(header,encoding="utf-8")
for path in files:
    text=path.read_text(encoding="utf-8",errors="replace")
    inc='#include "../include/ghidra_types.h"\n'
    replacement=inc+'#include "../include/ghidra_function_prototypes.h"\n'
    if '#include "../include/ghidra_function_prototypes.h"' not in text:
        text=text.replace(inc,replacement,1)
        path.write_text(text,encoding="utf-8")
report={"source_files":len(files),"function_definitions_seen":seen,
"unique_prototypes":len(unique),"conflicting_names_omitted":len(conflicts),
"conflicts":conflicts,"header_sha256":hashlib.sha256(header.encode()).hexdigest()}
Path("reconstrucao/extraidos/function_prototypes.json").write_text(json.dumps(report,indent=2,ensure_ascii=False)+"\n",encoding="utf-8")
md=["# Protótipos de funções Ghidra","",
f"- Definições examinadas: {seen}",
f"- Protótipos únicos gerados: {len(unique)}",
f"- Nomes com assinaturas conflitantes omitidos: {len(conflicts)}",
"",
"Os protótipos reproduzem as assinaturas observadas no pseudocódigo; não certificam a ABI original nem substituem headers WDK."]
md += ["","## Conflitos omitidos",""]+[f"- {n}: "+ " | ".join(v) for n,v in sorted(conflicts.items())]
Path("reconstrucao/extraidos/FUNCTION_PROTOTYPES.md").write_text("\n".join(md)+"\n",encoding="utf-8")
print(json.dumps({k:v for k,v in report.items() if k!="conflicts"},indent=2))

