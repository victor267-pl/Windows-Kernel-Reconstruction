#!/usr/bin/env python3
from pathlib import Path
import re,json
files=sorted(Path("dados").glob("*.txt"))
patterns={
 "ghidra_function_label":re.compile(r"^\\s*(?:Function|Função)\\s*[:=]",re.I),
 "ghidra_address_label":re.compile(r"^\\s*(?:0x)?[0-9a-fA-F]{8,16}\\s*[:|]"),
 "c_function_signature":re.compile(r"^\\s*(?:(?:[A-Za-z_][\\w:*<> ]*?)\\s+)?(?:FUN_[0-9a-fA-F]+|[A-Za-z_][\\w]*)\\s*\\([^;]*\\)\\s*(?:\\{|$)"),
 "decompiler_header":re.compile(r"^\\s*(?:/\\*.*(?:Function|Address)|//.*(?:Function|Address))",re.I),
 "ghidra_type_metadata":re.compile(r"^\\s*(?:Nome:|Classe:|Categoria:|Campo\\s+\\d+\\s+\\|)")
}
counts={k:0 for k in patterns}; samples={k:[] for k in patterns}
for p in files:
 with p.open(encoding="utf-8",errors="replace") as f:
  for n,line in enumerate(f,1):
   for k,rx in patterns.items():
    if rx.search(line):
     counts[k]+=1
     if len(samples[k])<35:samples[k].append({"file":p.name,"line":n,"text":line.rstrip()[:500]})
out={"files":[{"name":p.name,"bytes":p.stat().st_size} for p in files],"counts":counts,"samples":samples}
Path("reconstrucao/extraidos/function_format_probe.json").write_text(json.dumps(out,ensure_ascii=False,indent=2)+"\\n",encoding="utf-8")
print(json.dumps({"files":out["files"],"counts":counts,"samples":samples},ensure_ascii=False,indent=2))
