#!/usr/bin/env python3
"""Cross-reference PDB names with decompiled Ghidra labels without guessing semantics."""
from pathlib import Path
from collections import Counter, defaultdict
import json, re, hashlib

ROOT = Path(__file__).resolve().parents[2]
PDB_DIR = ROOT / "reconstrucao/extraidos/pdb"
SRC_DIR = ROOT / "reconstrucao/src"
OUT = ROOT / "reconstrucao/extraidos"
DUMP_FILES = ["globals.txt", "publics.txt", "symbols.txt", "types.txt"]
NAME_RE = re.compile(r"`([^`\n]+)`")

def main():
    missing = [name for name in DUMP_FILES if not (PDB_DIR / name).is_file()]
    if missing:
        raise SystemExit("Dumps PDB ausentes: " + ", ".join(missing))
    pdb_names = defaultdict(Counter)
    pdb_type_names = set()
    for filename in DUMP_FILES:
        content = (PDB_DIR / filename).read_text(encoding="utf-8", errors="replace")
        for line in content.splitlines():
            names = NAME_RE.findall(line)
            for name in names:
                pdb_names[name][filename] += 1
            if filename == "types.txt" and re.search(r"LF_(?:STRUCTURE|CLASS|UNION|ENUM)", line):
                pdb_type_names.update(names)

    source_labels = Counter()
    source_locations = defaultdict(list)
    source_hashes = []
    for path in sorted(SRC_DIR.glob("decompiled_*.c")):
        raw = path.read_bytes()
        source_hashes.append({"file": path.name, "bytes": len(raw),
                              "sha256": hashlib.sha256(raw).hexdigest()})
        for n, line in enumerate(raw.decode("utf-8", errors="replace").splitlines(), 1):
            match = re.search(r"Ghidra label:\s*([^*]+)", line)
            if match:
                name = match.group(1).strip()
                source_labels[name] += 1
                source_locations[name].append({"file": path.name, "line": n})

    pdb_set = set(pdb_names)
    matched = sorted(set(source_labels) & pdb_set)
    unmatched_pdb = sorted(pdb_set - set(source_labels))
    unmatched_source = sorted(set(source_labels) - pdb_set)
    rows = [{"name": name, "ghidra_occurrences": source_labels[name],
             "pdb_records": dict(pdb_names[name]),
             "source_locations": source_locations[name][:10]} for name in matched]
    result = {
        "purpose": "Exact-name cross-reference only; no address, type, size, or initializer is inferred.",
        "pdb_files": {name: {"bytes": (PDB_DIR/name).stat().st_size,
                             "sha256": hashlib.sha256((PDB_DIR/name).read_bytes()).hexdigest()}
                      for name in DUMP_FILES},
        "source_files": source_hashes,
        "counts": {"unique_pdb_names": len(pdb_set),
                   "unique_ghidra_function_labels": len(source_labels),
                   "exact_name_matches": len(matched),
                   "pdb_names_without_exact_ghidra_label": len(unmatched_pdb),
                   "ghidra_labels_without_exact_pdb_name": len(unmatched_source),
                   "pdb_type_names_detected": len(pdb_type_names)},
        "exact_matches": rows,
        "pdb_names_without_exact_ghidra_label_sample": unmatched_pdb[:5000],
        "ghidra_labels_without_exact_pdb_name_sample": unmatched_source[:5000],
        "pdb_type_names": sorted(pdb_type_names),
    }
    (OUT / "pdb_source_cross_reference.json").write_text(
        json.dumps(result, indent=2, ensure_ascii=False) + "\n", encoding="utf-8")
    md = ["# Cruzamento de nomes do PDB com funções decompiladas", "",
          "Cruzamento literal. Correspondência não prova equivalência semântica; ausência de correspondência não prova ausência de símbolo.", "",
          f"- Nomes distintos nos dumps PDB: {len(pdb_set)}",
          f"- Labels Ghidra: {len(source_labels)}",
          f"- Correspondências exatas: {len(matched)}",
          f"- Nomes PDB sem label Ghidra exato: {len(unmatched_pdb)}",
          f"- Labels Ghidra sem nome PDB exato: {len(unmatched_source)}",
          f"- Nomes de tipos compostos detectados: {len(pdb_type_names)}", "",
          "## Correspondências exatas (amostra até 300)", ""]
    for row in rows[:300]:
        loc = ", ".join(f"{x['file']}:{x['line']}" for x in row["source_locations"][:3])
        md.append(f"- `{row['name']}` — {row['ghidra_occurrences']} label(s); PDB: {row['pdb_records']}; {loc}")
    md += ["", "## Limites", "",
           "- Não associa automaticamente símbolos DAT_ a variáveis globais nomeadas.",
           "- Não infere endereços, tipos, tamanhos, valores iniciais ou semântica.",
           "- Os nomes de tipos são candidatos textuais e precisam de validação estrutural.", ""]
    (OUT / "PDB_SOURCE_CROSS_REFERENCE.md").write_text("\n".join(md), encoding="utf-8")
    print(json.dumps(result["counts"], indent=2))

if __name__ == "__main__":
    main()
