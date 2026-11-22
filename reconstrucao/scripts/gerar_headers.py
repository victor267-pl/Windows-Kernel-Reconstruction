#!/usr/bin/env python3
from pathlib import Path
import re, json, sys

ROOT = Path("reconstrucao/extraidos")
OUT = Path("reconstrucao/include")
OUT.mkdir(parents=True, exist_ok=True)
TARGETS = {
    "_EPROCESS": ("eprocess_blocos.txt", 2112, 226, "/ntkrnlmp.pdb"),
    "_ETHREAD": ("ethread_blocos.txt", 1944, 76, "/ntkrnlmp.pdb"),
    "_KPROCESS": ("kprocess_blocos.txt", 456, 53, "/ntkrnlmp.pdb"),
    "_KTHREAD": ("kthread_blocos.txt", 1216, 124, "/ntkrnlmp.pdb"),
    "_CONTEXT": ("context_blocos.txt", 1232, 46, "/ntkrnlmp.pdb"),
}
FIELD_RE = re.compile(
    r"^\s*Campo\s+(\d+)\s+\|\s+Nome:\s*(.*?)\s+\|\s+Offset:\s*(\d+)\s+\|\s+Tamanho:\s*(\d+)\s+\|\s+Tipo:\s*(.*?)\s+\|\s+Comentário:\s*(.*)$"
)
def parse_block(path, target, category):
    text = path.read_text(encoding="utf-8")
    blocks = re.split(r"(?=^===== )", text, flags=re.M)
    for block in blocks:
        if not block.startswith("====="):
            continue
        name = re.search(r"^Nome:\s*(.+)$", block, re.M)
        cat = re.search(r"^Categoria:\s*(.+)$", block, re.M)
        cls = re.search(r"^Classe:\s*(.+)$", block, re.M)
        size = re.search(r"^Tamanho:\s*(\d+)$", block, re.M)
        count = re.search(r"^Quantidade de campos:\s*(\d+)$", block, re.M)
        if not all((name, cat, cls, size, count)):
            continue
        if name.group(1) != target or cat.group(1) != category or cls.group(1) != "StructureDB":
            continue
        fields=[]
        for line in block.splitlines():
            m=FIELD_RE.match(line)
            if m:
                fields.append({
                    "index":int(m.group(1)), "name":m.group(2), "offset":int(m.group(3)),
                    "size":int(m.group(4)), "type":m.group(5), "comment":m.group(6)
                })
        return int(size.group(1)), int(count.group(1)), fields
    raise ValueError(f"Definição única não encontrada: {target} ({category})")

def ident(s):
    s=re.sub(r"[^A-Za-z0-9_]", "_", s)
    if not s or s[0].isdigit(): s="_"+s
    return s

manifest={}
for target,(filename,expected_size,expected_count,category) in TARGETS.items():
    size,count,fields=parse_block(ROOT/filename,target,category)
    if size != expected_size or count != expected_count or len(fields) != count:
        raise ValueError(f"{target}: tamanho/campos divergentes: size={size}, count={count}, linhas={len(fields)}")
    for f in fields:
        if f["size"] <= 0 or f["offset"] < 0 or f["offset"] + f["size"] > size:
            raise ValueError(f"{target}: campo fora dos limites: {f}")
    # This first pass deliberately models the complete ABI footprint as raw bytes.
    # Exact member offsets and original Ghidra types are retained in macros and JSON.
    base=target.strip("_").lower()
    guard=f"WRK_RECON_{base.upper()}_H"
    typedef=ident(target.strip("_"))
    lines=[
        f"#ifndef {guard}", f"#define {guard}", "",
        "#include <stdint.h>", "",
        f"/* Layout x64 extraido do inventario Ghidra: {target}.",
        f" * Tamanho total confirmado: {size} bytes; campos inventariados: {count}.",
        " * O armazenamento e opaco nesta etapa: tipos aninhados, unioes e bitfields",
        " * nao sao reinterpretados como C ate serem validados individualmente.",
        " */",
        f"typedef struct {target} {{",
        f"    uint8_t _storage[{size}];",
        f"}} {typedef}, *P{typedef};", "",
        f"#define {typedef.upper()}_SIZE {size}u",
    ]
    used={}
    for f in fields:
        if f["name"].lower() == "null":
            continue
        n=ident(f["name"]).upper()
        used[n]=used.get(n,0)+1
        suffix=f"_{used[n]}" if used[n]>1 else ""
        lines += [
            f"/* Campo {f['index']}: {f['name']} | tipo Ghidra: {f['type']} | tamanho: {f['size']} */",
            f"#define {typedef.upper()}_OFFSET_{n}{suffix} {f['offset']}u",
            f"#define {typedef.upper()}_FIELD_SIZE_{n}{suffix} {f['size']}u",
        ]
    lines += ["", "#if defined(__cplusplus)",
              f'static_assert(sizeof({typedef}) == {size}, "{typedef} size mismatch");',
              "#else",
              f'_Static_assert(sizeof({typedef}) == {size}, "{typedef} size mismatch");',
              "#endif", "", f"#endif /* {guard} */", ""]
    (OUT/f"{base}.h").write_text("\n".join(lines),encoding="utf-8")
    manifest[target]={"size":size,"field_count":count,"category":category,"fields":fields}
(OUT/"nt_kernel_layouts.h").write_text("\n".join(
    f'#include "{name}.h"' for name in ["kprocess","kthread","eprocess","ethread","context"]
)+"\n",encoding="utf-8")
Path("reconstrucao/extraidos/layout_manifest.json").write_text(
    json.dumps(manifest,ensure_ascii=False,indent=2)+"\n",encoding="utf-8")
print("Gerados 5 headers, um agregador e um manifesto JSON.")
for name,item in manifest.items():
    print(f"{name}: {item['size']} bytes; {item['field_count']} campos.")
