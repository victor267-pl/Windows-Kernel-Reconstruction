#!/usr/bin/env python3
"""Extract Ghidra C-like decompiler functions from the original text dumps.

This preserves decompiler output rather than claiming recovery of Microsoft's
original source. Functions are grouped by input shard to keep Git objects sane.
"""
from pathlib import Path
import re, json, hashlib

ROOT = Path(".")
INPUTS = sorted((ROOT / "dados").glob("AnalisarKernel_parte_*.txt"))
OUT = ROOT / "reconstrucao" / "src"
REPORT = ROOT / "reconstrucao" / "extraidos" / "function_extraction.json"
LABEL = re.compile(r"^\s*FUNÇÃO\s*:\s*(\S+)\s*$", re.I)
SIG_START = re.compile(
    r"^\s*(?:(?:[\w:*<>]+(?:\s+|\s*\*\s*))+)?"
    r"(?:FUN_[0-9A-Fa-f]+|[A-Za-z_]\w*)\s*\("
)
TYPE_WORDS = ("void ", "undefined", "bool ", "char ", "byte ", "short ",
              "ushort ", "int ", "uint ", "longlong ", "ulonglong ",
              "float ", "double ", "wchar_t ")

def brace_end(text, open_pos):
    depth = 0
    i = open_pos
    state = "code"
    while i < len(text):
        c = text[i]
        n = text[i + 1] if i + 1 < len(text) else ""
        if state == "code":
            if c == "/" and n == "*":
                state = "block"; i += 2; continue
            if c == "/" and n == "/":
                state = "line"; i += 2; continue
            if c == '"':
                state = "string"; i += 1; continue
            if c == "'":
                state = "char"; i += 1; continue
            if c == "{": depth += 1
            elif c == "}":
                depth -= 1
                if depth == 0: return i + 1
        elif state == "block":
            if c == "*" and n == "/": state = "code"; i += 2; continue
        elif state == "line":
            if c == "\n": state = "code"
        elif state in ("string", "char"):
            if c == "\\": i += 2; continue
            if (state == "string" and c == '"') or (state == "char" and c == "'"):
                state = "code"
        i += 1
    return None

def extract_file(path):
    text = path.read_text(encoding="utf-8", errors="replace")
    lines = text.splitlines(keepends=True)
    starts = []
    pos = 0
    for idx, line in enumerate(lines):
        m = LABEL.match(line)
        if m: starts.append((idx, pos, m.group(1)))
        pos += len(line)
    extracted, rejected, label_mismatches = [], [], []
    for n, (line_idx, label_pos, label) in enumerate(starts):
        section_end = starts[n+1][1] if n+1 < len(starts) else len(text)
        section = text[label_pos:section_end]
        address_match = re.search(r"ENDEREÇO\s*:\s*([0-9A-Fa-f]+)", section)
        address = address_match.group(1) if address_match else None
        # Skip metadata/separator lines and find the decompiler's function signature.
        section_lines = section.splitlines(keepends=True)
        sig_line = None
        sig_offset = 0
        running = 0
        for j, line in enumerate(section_lines[1:], 1):
            stripped = line.strip()
            if not stripped or stripped.startswith(("=", "/*", "*", "//", "ENDEREÇO:")):
                running += len(line); continue
            if SIG_START.match(line):
                sig_line = j
                sig_offset = running
                break
            running += len(line)
        if sig_line is None:
            rejected.append({"name": label, "reason": "signature_not_found"})
            continue
        candidate = "".join(section_lines[sig_line:])
        open_rel = candidate.find("{")
        if open_rel < 0:
            rejected.append({"name": label, "reason": "opening_brace_not_found"})
            continue
        # Signature and local declarations begin at candidate start; balance function body.
        end_rel = brace_end(candidate, open_rel)
        if end_rel is None:
            rejected.append({"name": label, "reason": "unbalanced_body"})
            continue
        function = candidate[:end_rel].strip()
        # Keep valid bodies even when the display label is an alias for the signature.
        actual = re.search(r"([A-Za-z_]\w*)\s*\(", function)
        if actual and actual.group(1) != label:
            label_mismatches.append({"label": label, "signature_name": actual.group(1)})
        extracted.append((label, function, address))
    return extracted, rejected, label_mismatches

OUT.mkdir(parents=True, exist_ok=True)
REPORT.parent.mkdir(parents=True, exist_ok=True)
summary = {"inputs": [], "total_extracted": 0, "total_rejected": 0, "functions": []}
for path in INPUTS:
    funcs, rejected, mismatches = extract_file(path)
    shard = re.search(r"parte_(\d+)", path.name).group(1)
    out_path = OUT / f"decompiled_{shard}.c"
    preamble = (
        "/* AUTO-GENERATED Ghidra decompilation reconstruction. */\n"
        "/* Not Microsoft's original source; names/types may be unresolved. */\n"
        '#include "../include/ghidra_types.h"\n'
        '#include "../include/ghidra_function_prototypes.h"\n'
        '#include "../include/ghidra_internal_forward_decls.h"\n\n'
    )
    body = "\n\n".join(
        f"/* Ghidra label: {name} */\n/* Ghidra address: {address or 'unknown'} */\n{code}"
        for name, code, address in funcs
    )
    out_path.write_text(preamble + body + ("\n" if body else ""), encoding="utf-8")
    digest = hashlib.sha256(out_path.read_bytes()).hexdigest()
    summary["inputs"].append({
        "file": path.name, "output": str(out_path), "functions": len(funcs),
        "rejected": len(rejected), "label_mismatches": len(mismatches), "mismatch_examples": mismatches[:20], "output_bytes": out_path.stat().st_size,
        "sha256": digest, "rejected_functions": rejected
    })
    summary["total_extracted"] += len(funcs)
    summary["total_rejected"] += len(rejected)
    summary["functions"].extend(
        {"name": name, "address": address, "source": path.name,
         "signature_name": (re.search(r"([A-Za-z_]\w*)\s*\(", code).group(1)
                            if re.search(r"([A-Za-z_]\w*)\s*\(", code) else None)}
        for name, code, address in funcs
    )
REPORT.write_text(json.dumps(summary, ensure_ascii=False, indent=2) + "\n", encoding="utf-8")
rejected_rows=[]
for item in summary["inputs"]:
    for entry in item["rejected_functions"]:
        rejected_rows.append({"source":item["file"],"name":entry["name"],"reason":entry["reason"]})
md=["# Funções não extraídas automaticamente","",
    f"- Total de blocos sem corpo recuperável: {len(rejected_rows)}",
    "",
    "Estes blocos não foram convertidos em implementações C porque o parser não encontrou um corpo de função balanceado. Em particular, ausência de chave pode indicar apenas uma declaração externa, não uma implementação omitida.",
    ""]
md += [f"- {row['name']} — {row['reason']} — {row['source']}" for row in rejected_rows]
Path("reconstrucao/extraidos/REJECTED_FUNCTIONS.md").write_text("\n".join(md)+"\n",encoding="utf-8")
print(json.dumps({k:v for k,v in summary.items() if k != "functions"}, ensure_ascii=False, indent=2))

# Trigger extraction workflow after workflow registration.

