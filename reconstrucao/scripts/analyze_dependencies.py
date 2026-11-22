#!/usr/bin/env python3
"""Inventory function and data dependencies in extracted Ghidra C files."""
from pathlib import Path
from collections import Counter
import re, json, hashlib

SRC=Path("reconstrucao/src")
OUT=Path("reconstrucao/extraidos")
files=sorted(SRC.glob("decompiled_*.c"))
def scrub(s):
    s=re.sub(r"/\*.*?\*/"," ",s,flags=re.S)
    s=re.sub(r"//[^\n]*"," ",s)
    s=re.sub(r'"(?:\\.|[^"\\])*"','""',s)
    s=re.sub(r"'(?:\\.|[^'\\])*'","''",s)
    return s

definitions={}
all_text=[]
for p in files:
    raw=p.read_text(encoding="utf-8",errors="replace")
    clean=scrub(raw)
    all_text.append((p,clean))
    for m in re.finditer(r"(?m)^\s*(?:[\w:*]+\s+)+([A-Za-z_]\w*)\s*\([^;{}]*\)\s*\{",clean):
        definitions.setdefault(m.group(1),[]).append(str(p))
defined=set(definitions)
calls=Counter(); globals_=Counter(); funrefs=Counter(); datrefs=Counter()
for p,s in all_text:
    for name in re.findall(r"\b([A-Za-z_]\w*)\s*\(",s):
        if name not in {"if","while","switch","for","sizeof","return"}:
            calls[name]+=1
    for name in re.findall(r"\b(?:DAT|UNK|LAB|PTR|SUB|in|extraout|stack|uRam|uStack|s|c|b|d|f|u|local)_[A-Za-z0-9_]+\b",s):
        globals_[name]+=1
    for name in re.findall(r"\bFUN_[0-9A-Fa-f]+\b",s): funrefs[name]+=1
    for name in re.findall(r"\bDAT_[0-9A-Fa-f]+\b",s): datrefs[name]+=1
unresolved={k:v for k,v in calls.items() if k not in defined and not k.startswith(("CONCAT","SUB","ZEXT","SEXT","ROUND","ABS","FABS","NAN","INFINITY"))}
summary={
 "source_files":[{"path":str(p),"bytes":p.stat().st_size,"sha256":hashlib.sha256(p.read_bytes()).hexdigest()} for p in files],
 "defined_functions":len(defined),"unique_call_names":len(calls),
 "unresolved_call_names":len(unresolved),"unique_global_like_symbols":len(globals_),
 "fun_symbol_references":len(funrefs),"dat_symbol_references":len(datrefs),
 "duplicate_definitions":{k:v for k,v in definitions.items() if len(v)>1},
 "most_referenced_unresolved_calls":sorted(unresolved.items(),key=lambda x:(-x[1],x[0]))[:500],
 "most_referenced_globals":globals_.most_common(500),
 "most_referenced_FUN_symbols":funrefs.most_common(500),
 "most_referenced_DAT_symbols":datrefs.most_common(500)}
OUT.mkdir(parents=True,exist_ok=True)
(OUT/"symbol_dependencies.json").write_text(json.dumps(summary,indent=2,ensure_ascii=False)+"\n",encoding="utf-8")
md=["# Inventário de símbolos e dependências C","",
 f"- Arquivos C analisados: {len(files)}",
 f"- Definições de funções reconhecidas: {len(defined)}",
 f"- Nomes de chamadas distintos: {len(calls)}",
 f"- Chamadas sem definição local: {len(unresolved)}",
 f"- Símbolos globais semelhantes a dados: {len(globals_)}",
 f"- Referências FUN_: {len(funrefs)}",f"- Referências DAT_: {len(datrefs)}",
 f"- Definições duplicadas: {len(summary['duplicate_definitions'])}","",
 "## Chamadas externas mais frequentes",""]
md += [f"- {n} — {c}" for n,c in summary["most_referenced_unresolved_calls"][:100]]
md += ["","## Símbolos globais mais frequentes",""]
md += [f"- {n} — {c}" for n,c in summary["most_referenced_globals"][:100]]
(OUT/"SYMBOL_DEPENDENCIES.md").write_text("\n".join(md)+"\n",encoding="utf-8")
print(json.dumps({k:summary[k] for k in ("defined_functions","unique_call_names","unresolved_call_names","unique_global_like_symbols","fun_symbol_references","dat_symbol_references")},indent=2))
