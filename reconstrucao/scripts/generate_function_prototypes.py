#!/usr/bin/env python3
"""Generate only clean forward prototypes whose Ghidra label matches the C signature."""
from pathlib import Path
from collections import defaultdict,Counter
import re,json,hashlib

src=Path("reconstrucao/src"); out=Path("reconstrucao/include")
files=sorted(src.glob("decompiled_*.c"))
by_name=defaultdict(set); rejected=Counter(); seen=0
for path in files:
    text=path.read_text(encoding="utf-8",errors="replace")
    markers=list(re.finditer(r"/\*\s*Ghidra label:\s*([^*]+?)\s*\*/",text))
    for i,m in enumerate(markers):
        label=m.group(1).strip()
        end=markers[i+1].start() if i+1<len(markers) else len(text)
        block=text[m.end():end]
        block=re.sub(r"^\s*/\*\s*Ghidra address:[^*]*\*/","",block,count=1)
        brace=block.find("{")
        if brace<0: rejected["no_function_body"]+=1; continue
        sig=re.sub(r"/\*.*?\*/|//[^\n]*"," ",block[:brace],flags=re.S).strip()
        if ";" in sig:
            rejected["body_text_before_first_brace"]+=1; continue
        sig=re.sub(r"\s+"," ",sig)
        if not sig.endswith(")"):
            rejected["signature_not_terminated"]+=1; continue
        match=re.search(r"([A-Za-z_]\w*)\s*\(",sig)
        if not match:
            rejected["function_name_not_found"]+=1; continue
        name=match.group(1)
        if name!=label:
            rejected["label_signature_mismatch"]+=1; continue
        prefix=sig[:match.start()].strip()
        for cc in ("__fastcall","__cdecl","__stdcall","__thiscall","__usercall","__spoils","__noreturn","const","volatile","static","extern"):
            prefix=prefix.replace(cc," ")
        prefix=prefix.strip()
        if not prefix:
            rejected["missing_return_type"]+=1; continue
        if re.search(r"\b(undefined|code|uint3|int7|unkint9|unkuint9)\b",sig):
            rejected["unresolved_type"]+=1; continue
        sig=re.sub(r"\bulong\b","uint32_t",sig)
        sig=re.sub(r"\bDWORD64\b","uint64_t",sig)
        sig=re.sub(r"\bPVOID\b","void *",sig)
        by_name[name].add(sig+";"); seen+=1
unique={name:next(iter(sigs)) for name,sigs in by_name.items() if len(sigs)==1}
conflicts={name:sorted(sigs) for name,sigs in by_name.items() if len(sigs)>1}
out.mkdir(parents=True,exist_ok=True)
lines=["#ifndef NT_GHIDRA_FUNCTION_PROTOTYPES_H","#define NT_GHIDRA_FUNCTION_PROTOTYPES_H",
'#include "ghidra_types.h"','#include <stdarg.h>','#include <wchar.h>',"",
"/* Generated only from clean signatures matching their Ghidra function labels. */","typedef struct _SLIST_HEADER *PSLIST_HEADER;"]
for name in sorted(unique): lines.append(unique[name])
lines += ["","#endif"]
header="\n".join(lines)+"\n"
(out/"ghidra_function_prototypes.h").write_text(header,encoding="utf-8")
for path in files:
    text=path.read_text(encoding="utf-8",errors="replace")
    inc='#include "../include/ghidra_types.h"\n'
    replacement=inc+'#include "../include/ghidra_function_prototypes.h"\n'
    if '#include "../include/ghidra_function_prototypes.h"' not in text:
        text=text.replace(inc,replacement,1); path.write_text(text,encoding="utf-8")
report={"source_files":len(files),"clean_definitions_seen":seen,
"unique_prototypes":len(unique),"conflicting_names_omitted":len(conflicts),
"rejected_signatures":dict(rejected),"conflicts":conflicts,
"header_sha256":hashlib.sha256(header.encode()).hexdigest()}
Path("reconstrucao/extraidos/function_prototypes.json").write_text(json.dumps(report,indent=2,ensure_ascii=False)+"\n",encoding="utf-8")
md=["# Protótipos de funções Ghidra","",
f"- Assinaturas limpas examinadas: {seen}",
f"- Protótipos únicos gerados: {len(unique)}",
f"- Nomes com assinaturas conflitantes omitidos: {len(conflicts)}",
"",
"Somente assinaturas cujo nome coincide com o rótulo Ghidra foram incluídas. Protótipos reproduzem o pseudocódigo e não certificam a ABI original."]
md += ["","## Assinaturas rejeitadas",""]+[f"- {k}: {v}" for k,v in rejected.items()]
md += ["","## Conflitos omitidos",""]+[f"- {n}: "+ " | ".join(v) for n,v in sorted(conflicts.items())]
Path("reconstrucao/extraidos/FUNCTION_PROTOTYPES.md").write_text("\n".join(md)+"\n",encoding="utf-8")
print(json.dumps({k:v for k,v in report.items() if k!="conflicts"},indent=2))


