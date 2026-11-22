#!/usr/bin/env python3
"""Inventory labels, calls, and data references in extracted Ghidra C."""
from pathlib import Path
from collections import Counter
import re, json, hashlib

src=Path("reconstrucao/src")
out=Path("reconstrucao/extraidos")
files=sorted(src.glob("decompiled_*.c"))
def clean(s):
    s=re.sub(r"/\*.*?\*/"," ",s,flags=re.S)
    s=re.sub(r"//[^\n]*"," ",s)
    s=re.sub(r'"(?:\\.|[^"\\])*"','""',s)
    s=re.sub(r"'(?:\\.|[^'\\])*'","''",s)
    return s
labels=Counter()
calls=Counter()
data=Counter()
funrefs=Counter()
per_file=[]
for p in files:
    raw=p.read_text(encoding="utf-8",errors="replace")
    found=re.findall(r"/\*\s*Ghidra label:\s*([^*]+?)\s*\*/",raw)
    labels.update(x.strip() for x in found)
    s=clean(raw)
    calls.update(n for n in re.findall(r"\b([A-Za-z_]\w*)\s*\(",s)
                 if n not in {"if","while","switch","for","sizeof","return"})
    data.update(re.findall(r"\bDAT_[0-9A-Fa-f]+\b",s))
    funrefs.update(re.findall(r"\bFUN_[0-9A-Fa-f]+\b",s))
    per_file.append({"path":str(p),"bytes":p.stat().st_size,
                     "sha256":hashlib.sha256(p.read_bytes()).hexdigest(),
                     "function_labels":len(found)})
local_names=set(labels)
local_funrefs={n:c for n,c in funrefs.items() if n in local_names}
unmatched_funrefs={n:c for n,c in funrefs.items() if n not in local_names}
external_calls={n:c for n,c in calls.items() if n not in local_names and not n.startswith("FUN_")}
duplicates={n:c for n,c in labels.items() if c>1}
summary={
 "source_files":per_file,
 "extracted_function_labels":sum(labels.values()),
 "unique_function_labels":len(labels),
 "duplicate_function_labels":duplicates,
 "unique_call_identifiers":len(calls),
 "unmatched_FUN_references":len(unmatched_funrefs),
 "local_FUN_references":len(local_funrefs),
 "unique_DAT_data_symbols":len(data),
 "most_referenced_external_or_unmatched_calls":external_calls and sorted(external_calls.items(),key=lambda x:(-x[1],x[0]))[:500] or [],
 "most_referenced_DAT_symbols":data.most_common(500),
 "unmatched_FUN_symbol_examples":sorted(unmatched_funrefs.items(),key=lambda x:(-x[1],x[0]))[:300]
}
out.mkdir(parents=True,exist_ok=True)
(out/"symbol_dependencies.json").write_text(json.dumps(summary,indent=2,ensure_ascii=False)+"\n",encoding="utf-8")
md=["# Inventário de símbolos e dependências C","",
 f"- Arquivos C analisados: {len(files)}",
 f"- Blocos de função extraídos (marcadores): {sum(labels.values())}",
 f"- Nomes de função distintos: {len(labels)}",
 f"- Marcadores duplicados: {len(duplicates)}",
 f"- Identificadores chamados: {len(calls)}",
 f"- Referências FUN_ correspondentes a rótulos extraídos: {len(local_funrefs)}",
 f"- Referências FUN_ sem rótulo correspondente: {len(unmatched_funrefs)}",
 f"- Símbolos de dados DAT_ distintos: {len(data)}","",
 "## Chamadas externas ou nomes sem correspondência local",""]
md += [f"- {n} — {c}" for n,c in summary["most_referenced_external_or_unmatched_calls"][:100]]
md += ["","## Símbolos DAT_ mais referenciados",""]
md += [f"- {n} — {c}" for n,c in summary["most_referenced_DAT_symbols"][:100]]
(out/"SYMBOL_DEPENDENCIES.md").write_text("\n".join(md)+"\n",encoding="utf-8")
print(json.dumps({k:summary[k] for k in ("extracted_function_labels","unique_function_labels","unique_call_identifiers","unmatched_FUN_references","local_FUN_references","unique_DAT_data_symbols")},indent=2))


