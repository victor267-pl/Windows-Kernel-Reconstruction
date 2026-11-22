#!/usr/bin/env python3
"""Generate Ghidra prototypes only when labels, types, and call arities agree."""
from pathlib import Path
from collections import defaultdict,Counter
import re,json,hashlib

src=Path("reconstrucao/src"); out=Path("reconstrucao/include")
files=sorted(src.glob("decompiled_*.c"))
by_name=defaultdict(set); rejected=Counter(); seen=0
def parameter_count(sig):
    m=re.search(r"\((.*)\)$",sig,re.S)
    if not m: return None,False
    body=m.group(1).strip()
    if not body or body=="void": return 0,False
    depth=0; bracket=0; brace=0; commas=0
    for ch in body:
        if ch=="(": depth+=1
        elif ch==")": depth-=1
        elif ch=="[": bracket+=1
        elif ch=="]": bracket-=1
        elif ch=="{": brace+=1
        elif ch=="}": brace-=1
        elif ch=="," and depth==0 and bracket==0 and brace==0: commas+=1
    return commas+1,"..." in body

candidates={}
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
        if ";" in sig: rejected["body_text_before_first_brace"]+=1; continue
        sig=re.sub(r"\s+"," ",sig)
        if not sig.endswith(")"): rejected["signature_not_terminated"]+=1; continue
        match=re.search(r"([A-Za-z_]\w*)\s*\(",sig)
        if not match: rejected["function_name_not_found"]+=1; continue
        name=match.group(1)
        if name!=label: rejected["label_signature_mismatch"]+=1; continue
        prefix=sig[:match.start()].strip()
        for cc in ("__fastcall","__cdecl","__stdcall","__thiscall","__usercall","__spoils","__noreturn","const","volatile","static","extern"):
            prefix=prefix.replace(cc," ")
        if not prefix.strip(): rejected["missing_return_type"]+=1; continue
        if re.search(r"\b(undefined|code|uint3|int7|unkint9|unkuint9|BADSPACEBASE|_JBTYPE|_locale_t|wctype_t|wint_t)\b",sig):
            rejected["unresolved_type"]+=1; continue
        sig=re.sub(r"\bulong\b","uint32_t",sig)
        sig=re.sub(r"\bDWORD64\b","uint64_t",sig)
        sig=re.sub(r"\bPVOID\b","void *",sig)
        argc,varargs=parameter_count(sig)
        by_name[name].add(sig+";")
        candidates[name]=(sig+";",argc,varargs)
        seen+=1

unique={name:next(iter(sigs)) for name,sigs in by_name.items() if len(sigs)==1}
conflicts={name:sorted(sigs) for name,sigs in by_name.items() if len(sigs)>1}
arity=defaultdict(set)
for path in files:
    text=path.read_text(encoding="utf-8",errors="replace")
    text=re.sub(r"/\*.*?\*/|//[^\n]*"," ",text,flags=re.S)
    text=re.sub(r'"(?:\\.|[^"\\])*"','""',text)
    for m in re.finditer(r"\b([A-Za-z_]\w*)\s*\(",text):
        name=m.group(1)
        if name not in unique: continue
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

arity_mismatch={}
for name in list(unique):
    expected,varargs=candidates[name][1],candidates[name][2]
    observed=sorted(arity.get(name,set()))
    bad=[n for n in observed if (n<expected if varargs else n!=expected)]
    if bad:
        arity_mismatch[name]={"expected":expected,"observed":observed}
        del unique[name]
rejected["call_arity_mismatch"]=len(arity_mismatch)

out.mkdir(parents=True,exist_ok=True)
lines=["#ifndef NT_GHIDRA_FUNCTION_PROTOTYPES_H","#define NT_GHIDRA_FUNCTION_PROTOTYPES_H",
'#include "ghidra_types.h"','#include "context.h"','#include <stdarg.h>',"",
"/* Generated only from clean signatures with call-arity cross-checks. */",
"typedef struct _SLIST_HEADER *PSLIST_HEADER;","typedef int32_t NTSTATUS;","typedef void *HANDLE;",
"typedef uint64_t ULONGLONG;","typedef int errno_t;","typedef size_t rsize_t;",
"typedef struct _EXCEPTION_RECORD _EXCEPTION_RECORD;","typedef struct _IMAGE_DOS_HEADER IMAGE_DOS_HEADER;"]
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
"unique_prototypes_before_arity_check":len(by_name)-len(conflicts),
"unique_prototypes":len(unique),"conflicting_names_omitted":len(conflicts),
"rejected_signatures":dict(rejected),"arity_mismatch_examples":dict(list(arity_mismatch.items())[:200]),
"header_sha256":hashlib.sha256(header.encode()).hexdigest()}
Path("reconstrucao/extraidos/function_prototypes.json").write_text(json.dumps(report,indent=2,ensure_ascii=False)+"\n",encoding="utf-8")
md=["# Protótipos de funções Ghidra","",f"- Assinaturas limpas examinadas: {seen}",
f"- Protótipos únicos antes da checagem de chamadas: {len(by_name)-len(conflicts)}",
f"- Protótipos mantidos após checagem de aridade: {len(unique)}",
f"- Nomes com assinaturas conflitantes: {len(conflicts)}",
f"- Funções excluídas por incompatibilidade no número de argumentos: {len(arity_mismatch)}",
"","Protótipos derivados do Ghidra. A aridade foi comparada com chamadas observadas nos quatro arquivos; tipos ainda precisam de validação semântica."]
md += ["","## Motivos de exclusão",""]+[f"- {k}: {v}" for k,v in rejected.items()]
md += ["","## Exemplos de incompatibilidade de argumentos",""]+[f"- {n}: esperado {v['expected']}; observado {v['observed']}" for n,v in list(arity_mismatch.items())[:100]]
Path("reconstrucao/extraidos/FUNCTION_PROTOTYPES.md").write_text("\n".join(md)+"\n",encoding="utf-8")
print(json.dumps({k:v for k,v in report.items() if k!="arity_mismatch_examples"},indent=2))
