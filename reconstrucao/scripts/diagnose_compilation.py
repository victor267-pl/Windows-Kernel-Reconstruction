#!/usr/bin/env python3
"""Diagnostic-only C syntax pass; this is not a kernel build."""
from pathlib import Path
from collections import Counter
import subprocess,re,json

files=sorted(Path("reconstrucao/src").glob("decompiled_*.c"))
report={"mode":"diagnostic_only","compiler":"gcc","files":[],"missing_types":{},"undeclared_identifiers":{},"error_classes":{}}
type_counts=Counter(); ident_counts=Counter(); classes=Counter()
for path in files:
    cmd=["gcc","-std=gnu11","-fsyntax-only","-fmax-errors=120","-w",
         "-Ireconstrucao/include","-include","reconstrucao/include/ghidra_types.h",str(path)]
    p=subprocess.run(cmd,text=True,stdout=subprocess.PIPE,stderr=subprocess.PIPE)
    lines=p.stderr.splitlines()
    local_types=Counter(); local_ids=Counter(); local_classes=Counter()
    for line in lines:
        m=re.search(r"unknown type name [‘']([^’']+)",line)
        if m: local_types[m.group(1)]+=1
        m=re.search(r"‘([^’]+)’ undeclared",line)
        if m: local_ids[m.group(1)]+=1
        if "expected" in line: local_classes["syntax_expected"]+=1
        elif "unknown type name" in line: local_classes["unknown_type"]+=1
        elif "undeclared" in line: local_classes["undeclared_identifier"]+=1
        elif "conflicting types" in line: local_classes["conflicting_type"]+=1
        elif "redefinition" in line: local_classes["redefinition"]+=1
        elif "error:" in line: local_classes["other_error"]+=1
    type_counts.update(local_types); ident_counts.update(local_ids); classes.update(local_classes)
    report["files"].append({"path":str(path),"returncode":p.returncode,
      "diagnostic_lines":sum(1 for x in lines if "error:" in x),
      "truncated_at_error_limit":"maximum error count" in p.stderr,
      "first_diagnostics":[x for x in lines if "error:" in x][:30]})
report["missing_types"]=dict(type_counts.most_common(500))
report["undeclared_identifiers"]=dict(ident_counts.most_common(500))
report["error_classes"]=dict(classes)
report["files_failed"]=sum(1 for x in report["files"] if x["returncode"]!=0)
Path("reconstrucao/extraidos").mkdir(parents=True,exist_ok=True)
Path("reconstrucao/extraidos/compiler_diagnostics.json").write_text(json.dumps(report,indent=2,ensure_ascii=False)+"\n",encoding="utf-8")
md=["# Diagnóstico de compilação C","",
"Este teste é apenas diagnóstico de sintaxe. Não equivale a um build do kernel NT.",
f"- Arquivos examinados: {len(files)}",
f"- Arquivos com erros: {report['files_failed']}",
f"- Tipos não declarados distintos: {len(type_counts)}",
f"- Identificadores não declarados distintos: {len(ident_counts)}","",
"## Tipos ausentes mais frequentes",""]
md += [f"- {k}: {v}" for k,v in type_counts.most_common(100)]
md += ["","## Identificadores ausentes mais frequentes",""]
md += [f"- {k}: {v}" for k,v in ident_counts.most_common(100)]
md += ["","## Classes de erro",""]+[f"- {k}: {v}" for k,v in classes.items()]
Path("reconstrucao/extraidos/COMPILER_DIAGNOSTICS.md").write_text("\n".join(md)+"\n",encoding="utf-8")
print(json.dumps({"files":len(files),"files_failed":report["files_failed"],
 "missing_type_names":len(type_counts),"undeclared_identifiers":len(ident_counts),
 "error_classes":dict(classes)},indent=2))
