#!/usr/bin/env python3
"""Reconcile PDB public symbol addresses with extracted Ghidra function addresses."""
from pathlib import Path
from collections import defaultdict, Counter
import json, re

ROOT = Path(".")
PDB = ROOT / "reconstrucao/extraidos/pdb"
SRC = ROOT / "reconstrucao/src"
OUT = ROOT / "reconstrucao/extraidos"
PE_JSON = OUT / "ntoskrnl_pe_analysis.json"

def parse_section_map(text):
    result = {}
    for line in text.splitlines():
        m = re.search(r"Section\s+([0-9A-Fa-f]+)\s+\|.*?\bframe\s*=\s*(\d+)", line)
        if m:
            result[int(m.group(1), 16)] = int(m.group(2))
    return result

def parse_publics(text):
    rows = []
    lines = text.splitlines()
    for i, line in enumerate(lines):
        m = re.search(r"\|\s*S_PUB32\s+\[size\s*=\s*\d+\]\s+\`([^\`\n]+)\`", line)
        if not m:
            continue
        detail = lines[i+1] if i+1 < len(lines) else ""
        a = re.search(r"flags\s*=\s*([^,]+),\s*addr\s*=\s*([0-9A-Fa-f]+):(\d+)", detail)
        if not a:
            continue
        rows.append({"name": m.group(1), "flags": a.group(1).strip(),
                     "segment": int(a.group(2), 16), "offset": int(a.group(3))})
    return rows

def parse_source_functions():
    found = defaultdict(list)
    for path in sorted(SRC.glob("decompiled_*.c")):
        lines = path.read_text(encoding="utf-8", errors="replace").splitlines()
        for i, line in enumerate(lines):
            m = re.search(r"Ghidra label:\s*([^*]+)", line)
            if not m:
                continue
            label = m.group(1).strip()
            address = None
            for j in range(i+1, min(i+4, len(lines))):
                a = re.search(r"Ghidra address:\s*([0-9A-Fa-f]+)", lines[j])
                if a:
                    address = int(a.group(1), 16)
                    break
            if address is not None:
                found[address].append({"label": label, "file": path.name, "line": i+1})
    return found

def main():
    required = [PDB/"publics.txt", PDB/"section_map.txt", PDB/"section_headers.txt", PE_JSON]
    missing = [str(x) for x in required if not x.is_file()]
    if missing:
        raise SystemExit("Arquivos necessários ausentes: " + ", ".join(missing))

    pe = json.loads(PE_JSON.read_text(encoding="utf-8"))
    image_base = int(pe["image_base"], 16)
    pe_sections = pe["sections"]
    section_map = parse_section_map((PDB/"section_map.txt").read_text(encoding="utf-8", errors="replace"))
    section_headers = (PDB/"section_headers.txt").read_text(encoding="utf-8", errors="replace")
    header_vas = {}
    blocks = re.split(r"(?=SECTION HEADER #\d+)", section_headers)
    for block in blocks:
        m = re.search(r"SECTION HEADER #(\d+)", block)
        if not m:
            continue
        n = int(m.group(1))
        va = re.search(r"\b([0-9A-Fa-f]+)\s+virtual address", block)
        if va:
            header_vas[n] = int(va.group(1), 16)

    header_checks = []
    for n, section in enumerate(pe_sections, 1):
        pdb_va = header_vas.get(n)
        if pdb_va is not None:
            header_checks.append({"section_number": n, "pe_name": section["name"],
                                  "pe_va": section["va"], "pdb_va": pdb_va,
                                  "matches": section["va"] == pdb_va})

    publics = parse_publics((PDB/"publics.txt").read_text(encoding="utf-8", errors="replace"))
    source = parse_source_functions()
    source_labels = {x["label"] for values in source.values() for x in values}
    by_address = defaultdict(list)
    stats = Counter()
    unresolved_segments = Counter()

    for item in publics:
        if item["flags"] != "function":
            stats["public_non_function"] += 1
            continue
        stats["public_functions"] += 1
        segment = item["segment"]
        map_index = segment - 1
        frame = section_map.get(map_index)
        if frame is None:
            stats["unmapped_segment"] += 1
            unresolved_segments[segment] += 1
            continue
        if frame < 1 or frame > len(pe_sections):
            stats["invalid_frame"] += 1
            unresolved_segments[segment] += 1
            continue
        section = pe_sections[frame-1]
        if item["offset"] >= section["vs"]:
            stats["offset_outside_virtual_section"] += 1
            continue
        rva = section["va"] + item["offset"]
        va = image_base + rva
        row = {**item, "frame": frame, "section": section["name"],
               "rva": hex(rva), "va": hex(va)}
        by_address[va].append(row)
        stats["mapped_public_functions"] += 1
        if section["flags"] & 0x20000000:
            stats["mapped_executable_public_functions"] += 1
        else:
            stats["public_function_flag_in_non_executable_section"] += 1

    matches = []
    rename_candidates = []
    for va, labels in source.items():
        pubs = by_address.get(va, [])
        if not pubs:
            continue
        unique_names = sorted({p["name"] for p in pubs})
        matches.append({"va": hex(va), "ghidra_labels": labels,
                        "pdb_public_names": unique_names, "pdb_records": pubs})
        stats["source_functions_with_public_address_match"] += 1
        fun_labels = [x for x in labels if x["label"].startswith("FUN_")]
        valid = [n for n in unique_names if re.fullmatch(r"[A-Za-z_]\w*", n)]
        if len(fun_labels) == 1 and len(valid) == 1 and len(unique_names) == 1 and valid[0] not in source_labels:
            rename_candidates.append({"address": hex(va), "old": fun_labels[0]["label"],
                                      "new": valid[0], "file": fun_labels[0]["file"],
                                      "line": fun_labels[0]["line"],
                                      "evidence": "unique S_PUB32 function name at exact matched virtual address"})
        elif fun_labels and len(unique_names) > 1:
            stats["ambiguous_public_aliases"] += 1
        elif fun_labels and valid:
            stats["name_collision_or_invalid_alias"] += 1

    result = {
        "image_base": hex(image_base),
        "public_records_parsed": len(publics),
        "section_map_entries": len(section_map),
        "pdb_pe_section_header_checks": header_checks,
        "pdb_pe_section_header_mismatches": sum(not x["matches"] for x in header_checks),
        "counts": dict(stats),
        "unmapped_segment_examples": dict(unresolved_segments.most_common(30)),
        "source_address_matches": matches,
        "unique_safe_rename_candidates": rename_candidates,
        "policy": "Address equality is required. A rename candidate must have exactly one public function name, one FUN_ source label, a valid C identifier, and no existing source-label collision. This script reports candidates only; it does not rewrite source."
    }
    (OUT/"pdb_public_address_reconciliation.json").write_text(json.dumps(result, indent=2, ensure_ascii=False)+"\n", encoding="utf-8")
    md = [
        "# Reconciliação de endereços públicos do PDB com funções Ghidra",
        "",
        f"- ImageBase: \`{hex(image_base)}\`",
        f"- Registros públicos lidos: {len(publics)}",
        f"- Entradas do mapa de seções: {len(section_map)}",
        f"- Símbolos públicos de função mapeados: {stats['mapped_public_functions']}",
        f"- Funções públicas em seções executáveis: {stats['mapped_executable_public_functions']}",
        f"- Funções Ghidra com endereço público idêntico: {stats['source_functions_with_public_address_match']}",
        f"- Candidatos de renomeação sem ambiguidade: {len(rename_candidates)}",
        f"- Segmentos sem mapeamento: {stats['unmapped_segment']}",
        f"- Offsets fora da seção virtual: {stats['offset_outside_virtual_section']}",
        "",
        "## Validação dos cabeçalhos de seção",
        ""
    ]
    md += [f"- Seção PE #{x['section_number']} \`{x['pe_name']}\`: RVA PE \`{hex(x['pe_va'])}\`, PDB \`{hex(x['pdb_va'])}\`, correspondência={x['matches']}." for x in header_checks]
    md += ["", "## Candidatos de renomeação por endereço exato", ""]
    md += [f"- \`{x['old']}\` → \`{x['new']}\` em \`{x['file']}:{x['line']}\`; VA \`{x['address']}\`." for x in rename_candidates[:500]]
    if not rename_candidates:
        md.append("- Nenhum candidato passou por todos os critérios.")
    md += ["", "## Limites", "",
           "- Os nomes vêm de registros públicos S_PUB32, não de símbolos privados de variáveis locais.",
           "- Um endereço idêntico associa o ponto de entrada público à função decompilada, mas não recupera o corpo original.",
           "- Este relatório não renomeia automaticamente funções nem infere protótipos.",
           ""]
    (OUT/"PDB_PUBLIC_ADDRESS_RECONCILIATION.md").write_text("\n".join(md), encoding="utf-8")
    print(json.dumps({"counts":dict(stats), "rename_candidates":len(rename_candidates),
                      "section_header_mismatches":result["pdb_pe_section_header_mismatches"]}, indent=2))

if __name__ == "__main__":
    main()
