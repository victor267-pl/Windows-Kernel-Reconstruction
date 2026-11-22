#!/usr/bin/env python3
"""Diagnostic-only C syntax pass with function-level error context."""
from pathlib import Path
from collections import Counter
import subprocess,re,json

files=sorted(Path("reconstrucao/src").glob("decompiled_*.c"))
report={"mode":"diagnostic_only","compiler":"gcc","files":[],"missing_types":{},
"undeclared_identifiers":{},"error_classes":{},"error_contexts":[]}
type_counts=Counter(); ident_counts=Counter(); classes=Counter()
for path in files:
    source=path.read_text(encoding="utf-8",errors="replace").splitlines()
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
        elif "implicit declaration" in line: local_classes["implicit_function"]+=1
        elif "conflicting types" in line: local_classes["conflicting_type"]+=1
        elif "redefinition" in line: local_classes["redefinition"]+=1
        elif "error:" in line: local_classes["other_error"]+=1
        loc=re.search(r":(\d+):(\d+): error:",line)
        if loc and len(report["error_contexts"])<400:
            lineno=int(loc.group(1)); start=max(1,lineno-3); end=min(len(source),lineno+3)
            owner="unknown"
            for prior in range(lineno-1,0,-1):
                if "Ghidra label:" in source[prior-1]:
                    owner=source[prior-1].split("Ghidra label:",1)[1].strip()
                    break
            report["error_contexts"].append({"file":str(path),"line":lineno,"function":owner,
                "diagnostic":line,"context":"\n".join(f"{n}: {source[n-1]}" for n in range(start,end+1))})
    type_counts.update(local_types); ident_counts.update(local_ids); classes.update(local_classes)
    report["files"].append({"path":str(path),"returncode":p.returncode,
      "diagnostic_lines":sum(1 for x in lines if "error:" in x),
      "truncated_at_error_limit":"maximum error count" in p.stderr,
      "first_diagnostics":[x for x in lines if "error:" in x][:30]})
report["missing_types"]=dict(type_counts.most_common(500))
report["undeclared_identifiers"]=dict(ident_counts.most_common(500))
report["error_classes"]=dict(classes)
report["files_failed"]=sum(1 for x in report["files"] if x["returncode"]!=0)
out=Path("reconstrucao/extraidos"); out.mkdir(parents=True,exist_ok=True)
(out/"compiler_diagnostics.json").write_text(json.dumps(report,indent=2,ensure_ascii=False)+"\n",encoding="utf-8")
md=["# Diagnóstico de compilação C","",
"Teste diagnóstico, não equivalente a um build do kernel NT.",
f"- Arquivos examinados: {len(files)}",
f"- Arquivos com erros: {report['files_failed']}",
f"- Tipos não declarados distintos: {len(type_counts)}",
f"- Identificadores não declarados distintos: {len(ident_counts)}","",
"## Tipos ausentes",""]+[f"- {k}: {v}" for k,v in type_counts.most_common(100)]
md += ["","## Identificadores ausentes",""]+[f"- {k}: {v}" for k,v in ident_counts.most_common(100)]
md += ["","## Classes de erro",""]+[f"- {k}: {v}" for k,v in classes.items()]
(out/"COMPILER_DIAGNOSTICS.md").write_text("\n".join(md)+"\n",encoding="utf-8")
ctx=["# Contextos dos primeiros erros de compilação","",
"Cada erro está associado ao marcador de função Ghidra mais próximo. O contexto serve para reconstrução orientada por evidência.",""]
for item in report["error_contexts"]:
    ctx += [f"## {item['function']} — {item['file']}:{item['line']}",item["diagnostic"],"",
            *[ "    "+line for line in item["context"].splitlines() ],""]
(out/"COMPILER_ERROR_CONTEXTS.md").write_text("\n".join(ctx)+"\n",encoding="utf-8")
print(json.dumps({"files":len(files),"files_failed":report["files_failed"],
 "missing_type_names":len(type_counts),"undeclared_identifiers":len(ident_counts),
 "error_contexts":len(report["error_contexts"]),"error_classes":dict(classes)},indent=2))









