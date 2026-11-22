#!/usr/bin/env python3
"""Parse CodeView TPI records into an evidence-preserving type graph."""
from pathlib import Path
from collections import Counter, defaultdict
import re, json, hashlib

ROOT = Path(".")
TYPE_FILE = ROOT / "reconstrucao/extraidos/pdb/types.txt"
OUT = ROOT / "reconstrucao/extraidos"
START = re.compile(r"^\s*(0x[0-9A-Fa-f]+) \| (LF_[A-Z0-9_]+) \[size = (\d+)\](?: `([^`]+)`)?\s*$")
HEX = r"(0x[0-9A-Fa-f]+)"

def parse_field(line):
    patterns = [
        (r"LF_MEMBER \[name = `([^`]+)`, Type = "+HEX+r"(?: \(([^)]*)\))?.*?offset = (\d+)", "member"),
        (r"LF_STMEMBER \[name = `([^`]+)`, Type = "+HEX, "static_member"),
        (r"LF_BCLASS \[type = "+HEX+r".*?offset = (\d+)", "base_class"),
        (r"LF_ENUMERATE \[.*?name = `([^`]+)`, value = ([^,\]]+)", "enumerator"),
    ]
    for pat, kind in patterns:
        m = re.search(pat, line)
        if not m: continue
        if kind == "member":
            return {"kind":kind,"name":m.group(1),"type_index":int(m.group(2),16),
                    "type_display":m.group(3),"offset":int(m.group(4))}
        if kind == "static_member":
            return {"kind":kind,"name":m.group(1),"type_index":int(m.group(2),16)}
        if kind == "base_class":
            return {"kind":kind,"type_index":int(m.group(1),16),"offset":int(m.group(2))}
        if kind == "enumerator":
            return {"kind":kind,"name":m.group(1),"value":m.group(2)}
    return None

def main():
    if not TYPE_FILE.is_file(): raise SystemExit(f"Arquivo ausente: {TYPE_FILE}")
    records=[]; cur=None
    for line in TYPE_FILE.read_text(encoding="utf-8",errors="replace").splitlines():
        m=START.match(line)
        if m:
            if cur: records.append(cur)
            cur={"index":int(m.group(1),16),"kind":m.group(2),"record_size":int(m.group(3)),
                 "name":m.group(4),"raw":[],"members":[]}
            continue
        if cur is None: continue
        cur["raw"].append(line.strip())
        if cur["kind"]=="LF_FIELDLIST":
            field=parse_field(line)
            if field: cur["members"].append(field)
    if cur: records.append(cur)
    by_index={r["index"]:r for r in records}
    for r in records:
        for line in r["raw"]:
            m=re.search(r"field list: "+HEX,line)
            if m:r["field_list_index"]=int(m.group(1),16)
            m=re.search(r"sizeof (\d+)",line)
            if m:r["sizeof"]=int(m.group(1))
            m=re.search(r"unique name: `([^`]+)`",line)
            if m:r["unique_name"]=m.group(1)
            m=re.search(r"referent = "+HEX,line)
            if m and r["kind"] in ("LF_POINTER","LF_MODIFIER"):
                r["referent_index"]=int(m.group(1),16)
            if "forward ref" in line:r["forward_ref"]=True
            m=re.search(r"kind = (ptr\d+)",line)
            if m:r["pointer_kind"]=m.group(1)
            m=re.search(r"return type = "+HEX+r".*?# args = (\d+), param list = "+HEX,line)
            if m:r["procedure"]={"return_type_index":int(m.group(1),16),
                                 "argument_count":int(m.group(2)),
                                 "argument_list_index":int(m.group(3),16)}
            m=re.search(r"element type = "+HEX+r".*?size = (\d+)",line)
            if m:r["array"]={"element_type_index":int(m.group(1),16),"size_bytes":int(m.group(2))}
            m=re.search(r"underlying type = "+HEX+r".*?length = (\d+), position = (\d+)",line)
            if m:r["bitfield"]={"underlying_type_index":int(m.group(1),16),
                                "length_bits":int(m.group(2)),"position_bits":int(m.group(3))}
    udts=[]
    for r in records:
        if r["kind"] not in ("LF_STRUCTURE","LF_CLASS","LF_UNION","LF_ENUM"): continue
        complete=not r.get("forward_ref",False) and "field_list_index" in r and "sizeof" in r
        fl=by_index.get(r.get("field_list_index"))
        udts.append({"type_index":r["index"],"kind":r["kind"],"name":r.get("name"),
                     "unique_name":r.get("unique_name"),"size_bytes":r.get("sizeof"),
                     "forward_ref":r.get("forward_ref",False),"complete":complete,
                     "field_list_index":r.get("field_list_index"),"field_list_found":bool(fl),
                     "fields":fl["members"] if fl else []})
    for u in udts:
        for field in u["fields"]:
            target=by_index.get(field.get("type_index"))
            if target:
                field["referenced_type_kind"]=target["kind"]
                field["referenced_type_name"]=target.get("name")
                field["referenced_type_index"]=target["index"]
    by_unique=defaultdict(list)
    for u in udts:
        if u["unique_name"]:by_unique[u["unique_name"]].append(u)
    for u in udts:
        if u["forward_ref"] and u["unique_name"]:
            candidates=[x for x in by_unique[u["unique_name"]] if x["complete"]]
            if candidates:u["complete_type_index"]=candidates[-1]["type_index"]
    key_names=("_EPROCESS","_ETHREAD","_KPROCESS","_KTHREAD","_CONTEXT")
    selected={n:[u for u in udts if u.get("name")==n and u["complete"]] for n in key_names}
    counts=Counter(r["kind"] for r in records)
    result={"source":str(TYPE_FILE),"source_bytes":TYPE_FILE.stat().st_size,
            "source_sha256":hashlib.sha256(TYPE_FILE.read_bytes()).hexdigest(),
            "record_count":len(records),"record_kind_counts":dict(counts),
            "udt_count":len(udts),"complete_udt_count":sum(u["complete"] for u in udts),
            "forward_udt_count":sum(u["forward_ref"] for u in udts),
            "fieldlist_count":counts.get("LF_FIELDLIST",0),
            "types":records,"udts":udts,"key_layouts":selected}
    (OUT/"pdb_type_graph.json").write_text(json.dumps(result,indent=2,ensure_ascii=False)+"\n",encoding="utf-8")
    md=["# Grafo de tipos CodeView extraído do PDB","",
        f"- Registros TPI: {len(records)}",f"- UDTs: {len(udts)}",
        f"- UDTs completos com field list e tamanho: {result['complete_udt_count']}",
        f"- UDTs forward declarations: {result['forward_udt_count']}",
        f"- Registros LF_FIELDLIST: {result['fieldlist_count']}","",
        "## Layouts confirmados diretamente no TPI",""]
    for name,items in selected.items():
        if not items: md += [f"### {name}","- Não encontrado",""]; continue
        u=items[-1]
        md += [f"### {name}",f"- Índice: 0x{u['type_index']:X}",
               f"- Tamanho: {u['size_bytes']} bytes",f"- Campos: {len(u['fields'])}"]
        for field in u["fields"][:12]:
            md.append(f"- {field.get('name',field['kind'])} — offset {field.get('offset','n/a')}; tipo CodeView {field.get('type_index','n/a')} ({field.get('type_display') or field.get('referenced_type_name') or 'sem nome resolvido'})")
        md.append("")
    md += ["## Limites","",
           "- Os registros preservam índices CodeView e offsets fornecidos pelo PDB.",
           "- Este relatório não gera declarações C automaticamente nem resolve todos os tipos primitivos.",
           "- Tipos forward são associados a definições completas apenas por unique name idêntico.",""]
    (OUT/"PDB_TYPE_GRAPH.md").write_text("\n".join(md),encoding="utf-8")
    print(json.dumps({"record_count":len(records),"udt_count":len(udts),
                      "complete_udt_count":result["complete_udt_count"],
                      "record_kind_counts":dict(counts),
                      "key_layouts":{k:[{"type_index":hex(u["type_index"]),
                                         "size":u["size_bytes"],"fields":len(u["fields"])} for u in v]
                                     for k,v in selected.items()}},indent=2))

if __name__=="__main__": main()
