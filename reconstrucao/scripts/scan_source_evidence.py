#!/usr/bin/env python3
"""Search original Ghidra/PDB text shards for evidence about unresolved symbols."""
from pathlib import Path
from collections import Counter
import json

queries=["DAT_140e0a740","DAT_140fc7d20","DAT_140fc7b04","DAT_140fc7a88",
"DAT_140fc7ab8","DAT_140fc9c40","DAT_140e07748","FUN_140a94cf0",
"FUN_140aa9060","unkint9","unkuint9","undefined"]
files=sorted(Path("dados").glob("*.txt"))
result={"files_scanned":[],"queries":{}}
for p in files:
    hits=Counter()
    with p.open("r",encoding="utf-8",errors="replace") as f:
        for line_no,line in enumerate(f,1):
            for q in queries:
                if q in line:
                    hits[q]+=1
                    bucket=result["queries"].setdefault(q,{"total_hits":0,"examples":[]})
                    bucket["total_hits"]+=1
                    if len(bucket["examples"])<12:
                        bucket["examples"].append({"file":p.name,"line":line_no,"text":line.rstrip()[:600]})
    result["files_scanned"].append({"file":p.name,"hits":dict(hits)})
Path("reconstrucao/extraidos/source_symbol_evidence.json").write_text(json.dumps(result,indent=2,ensure_ascii=False)+"\n",encoding="utf-8")
md=["# Evidências dos símbolos nos dumps originais","",
"Busca literal nos TXT de origem. Uma ocorrência de uso não é, por si só, uma declaração de tipo ou valor.",""]
for q,info in result["queries"].items():
    md += ["## "+q,"- Ocorrências: "+str(info["total_hits"])]
    for e in info["examples"]:
        md.append("- "+e["file"]+":"+str(e["line"])+" — "+e["text"])
    md.append("")
Path("reconstrucao/extraidos/SOURCE_SYMBOL_EVIDENCE.md").write_text("\n".join(md)+"\n",encoding="utf-8")
print(json.dumps({q:v["total_hits"] for q,v in result["queries"].items()},indent=2))


