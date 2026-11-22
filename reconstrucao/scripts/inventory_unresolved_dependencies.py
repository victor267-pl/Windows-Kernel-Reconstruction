#!/usr/bin/env python3
"""Build an evidence-only inventory of unresolved Ghidra globals and helpers."""
from pathlib import Path
from collections import Counter,defaultdict
import re,json,hashlib

files=sorted(Path("reconstrucao/src").glob("decompiled_*.c"))
data=defaultdict(lambda: {"count":0,"files":Counter(),"functions":Counter(),"samples":[],"access":Counter()})
helpers=defaultdict(lambda: {"count":0,"files":Counter(),"samples":[],"argument_shapes":Counter()})
unknown_types=defaultdict(lambda: {"count":0,"files":Counter(),"samples":[]})
current_patterns={
 "DAT":re.compile(r"\bDAT_[0-9A-Fa-f]+\b"),
 "FUN":re.compile(r"\bFUN_[0-9A-Fa-f]+\b"),
}
helper_re=re.compile(r"\b(CONCAT\d+|SUB\d+|ZEXT\d+|SEXT\d+|CARRY\d+|SCARRY\d+|SBORROW\d+|LOCK|UNLOCK|POPCOUNT)\s*\(")
unknown_re=re.compile(r"\b(undefined\d*|undefined|code|uint3|int7|unkint\d+|unkuint\d+|BADSPACEBASE)\b")
for path in files:
    text=path.read_text(encoding="utf-8",errors="replace")
    lines=text.splitlines()
    owner="unknown"
    for n,line in enumerate(lines,1):
        marker=re.search(r"Ghidra label:\s*([^*]+)",line)
        if marker: owner=marker.group(1).strip()
        for name in current_patterns["DAT"].findall(line):
            rec=data[name]; rec["count"]+=1; rec["files"][path.name]+=1; rec["functions"][owner]+=1
            before=line[:line.find(name)]; after=line[line.find(name)+len(name):]
            access="read"
            if re.match(r"\s*(?:\+\+|--|[+*/%&|^]?=)",after): access="write"
            elif re.search(r"(?:\+\+|--)\s*$",before): access="write"
            elif re.search(r"\b(?:&|\*)\s*$",before): access="address_or_deref"
            rec["access"][access]+=1
            if len(rec["samples"])<8: rec["samples"].append({"file":path.name,"line":n,"function":owner,"text":line.strip()[:500]})
        for m in helper_re.finditer(line):
            name=m.group(1); rec=helpers[name]; rec["count"]+=1; rec["files"][path.name]+=1
            tail=line[m.end():m.end()+180]
            rec["argument_shapes"][tail[:100]]+=1
            if len(rec["samples"])<12: rec["samples"].append({"file":path.name,"line":n,"function":owner,"text":line.strip()[:500]})
        for name in unknown_re.findall(line):
            rec=unknown_types[name]; rec["count"]+=1; rec["files"][path.name]+=1
            if len(rec["samples"])<8: rec["samples"].append({"file":path.name,"line":n,"function":owner,"text":line.strip()[:500]})

def clean(d):
    out={}
    for k,v in d.items():
        out[k]={"count":v["count"],"files":dict(v["files"].most_common()),
                "functions":dict(v["functions"].most_common(20)) if "functions" in v else None,
                "access":dict(v["access"]) if "access" in v else None,
                "argument_shapes":dict(v["argument_shapes"].most_common(20)) if "argument_shapes" in v else None,
                "samples":v["samples"]}
    return out
report={
 "purpose":"Evidence inventory only; no global type/value or helper semantics are guessed.",
 "source_files":[{"path":str(p),"bytes":p.stat().st_size,"sha256":hashlib.sha256(p.read_bytes()).hexdigest()} for p in files],
 "data_symbols":clean(data),"decompiler_helpers":clean(helpers),"unresolved_types":clean(unknown_types),
 "totals":{"data_symbols":len(data),"data_references":sum(x["count"] for x in data.values()),
 "helpers":len(helpers),"helper_calls":sum(x["count"] for x in helpers.values()),
 "unresolved_type_names":len(unknown_types),"unresolved_type_occurrences":sum(x["count"] for x in unknown_types.values())}}
out=Path("reconstrucao/extraidos"); out.mkdir(parents=True,exist_ok=True)
(out/"unresolved_dependency_evidence.json").write_text(json.dumps(report,indent=2,ensure_ascii=False)+"\n",encoding="utf-8")
md=["# Evidências de dependências ainda não resolvidas","",
"Este relatório não cria declarações C. Ocorrências de DAT_ são usos; sem definição, seção, largura e valor do binário/PDB, não é seguro atribuir tipo ou inicializador.",
f"- Símbolos DAT_: {report['totals']['data_symbols']} ({report['totals']['data_references']} referências)",
f"- Helpers Ghidra: {report['totals']['helpers']} ({report['totals']['helper_calls']} chamadas)",
f"- Tipos Ghidra não resolvidos: {report['totals']['unresolved_type_names']} ({report['totals']['unresolved_type_occurrences']} ocorrências)","",
"## Símbolos globais mais usados",""]
for name,rec in sorted(data.items(),key=lambda x:(-x[1]["count"],x[0]))[:100]:
    md.append(f"### {name} — {rec['count']} referências")
    md.append(f"- Acesso sintático aproximado: {dict(rec['access'])}")
    for s in rec["samples"][:3]: md.append(f"- {s['file']}:{s['line']} ({s['function']}): `{s['text']}`")
md += ["","## Helpers decompilador",""]
for name,rec in sorted(helpers.items(),key=lambda x:(-x[1]["count"],x[0])):
    md.append(f"### {name} — {rec['count']} chamadas")
    for s in rec["samples"][:4]: md.append(f"- {s['file']}:{s['line']} ({s['function']}): `{s['text']}`")
md += ["","## Tipos não resolvidos",""]
for name,rec in sorted(unknown_types.items(),key=lambda x:(-x[1]["count"],x[0])):
    md.append(f"### {name} — {rec['count']} ocorrências")
    for s in rec["samples"][:3]: md.append(f"- {s['file']}:{s['line']} ({s['function']}): `{s['text']}`")
(out/"UNRESOLVED_DEPENDENCY_EVIDENCE.md").write_text("\n".join(md)+"\n",encoding="utf-8")
print(json.dumps(report["totals"],indent=2))
