#!/usr/bin/env python3
"""Generate conservative forward declarations for extracted internal FUN_ functions.

Only the return type is copied from an actual extracted definition. The empty
parameter list is intentional C old-style declaration syntax: it avoids
pretending that unreliable decompiler call-site arities are validated.
"""
from pathlib import Path
from collections import defaultdict
import re, json, hashlib

SRC = Path("reconstrucao/src")
INC = Path("reconstrucao/include")
OUT = Path("reconstrucao/extraidos")
FILES = sorted(SRC.glob("decompiled_*.c"))
KNOWN = {
    "void","undefined1","undefined2","undefined4","undefined8","byte","ushort",
    "uint","ulonglong","longlong","int","char","short","long","unsigned",
    "signed","int8_t","uint8_t","int16_t","uint16_t","int32_t","uint32_t",
    "int64_t","uint64_t","uintptr_t","intptr_t","bool","float","double",
    "size_t","ssize_t"
}
UNKNOWN = {"undefined","code","uint3","int7","unkint9","unkuint9","BADSPACEBASE"}

def main():
    existing = (INC / "ghidra_function_prototypes.h").read_text(encoding="utf-8", errors="replace")
    declared = set(re.findall(r"\b(FUN_[0-9A-Fa-f]+)\s*\(", existing))
    returns = defaultdict(set)
    rejects = defaultdict(int)
    scanned = 0

    for path in FILES:
        source = path.read_text(encoding="utf-8", errors="replace")
        markers = list(re.finditer(r"/\*\s*Ghidra label:\s*([^*]+?)\s*\*/", source))
        for i, marker in enumerate(markers):
            name = marker.group(1).strip()
            if not re.fullmatch(r"FUN_[0-9A-Fa-f]+", name):
                continue
            scanned += 1
            end = markers[i+1].start() if i+1 < len(markers) else len(source)
            block = source[marker.end():end]
            block = re.sub(r"^\s*/\*\s*Ghidra address:[^*]*\*/", "", block, count=1)
            brace = block.find("{")
            if brace < 0:
                rejects["no_body"] += 1
                continue
            sig = re.sub(r"/\*.*?\*/|//[^\n]*", " ", block[:brace], flags=re.S).strip()
            sig = re.sub(r"\s+", " ", sig)
            if not sig.endswith(")"):
                rejects["malformed_signature"] += 1
                continue
            match = re.search(r"\b" + re.escape(name) + r"\s*\(", sig)
            if not match:
                rejects["label_signature_mismatch"] += 1
                continue
            ret = sig[:match.start()].strip()
            ret = re.sub(r"\b(__fastcall|__cdecl|__stdcall|__thiscall|__usercall|__noreturn|static|extern|inline|const|volatile)\b", " ", ret)
            ret = re.sub(r"\s+", " ", ret).strip()
            if not ret or "*" not in ret and not re.fullmatch(r"[A-Za-z_]\w*(?:\s+[A-Za-z_]\w*)*", ret):
                rejects["invalid_return_type"] += 1
                continue
            tokens = re.findall(r"[A-Za-z_]\w*", ret)
            if any(t in UNKNOWN for t in tokens):
                rejects["unresolved_return_type"] += 1
                continue
            if any(t not in KNOWN for t in tokens):
                rejects["noncanonical_return_type"] += 1
                continue
            returns[name].add(ret)

    candidates = {}
    conflicts = {}
    for name, types in returns.items():
        if len(types) == 1 and name not in declared:
            candidates[name] = next(iter(types))
        elif len(types) > 1:
            conflicts[name] = sorted(types)

    header = [
        "#ifndef NT_GHIDRA_INTERNAL_FORWARD_DECLS_H",
        "#define NT_GHIDRA_INTERNAL_FORWARD_DECLS_H",
        '#include "ghidra_types.h"',
        "",
        "/*",
        " * Conservative declarations derived from extracted function definitions.",
        " * Parameter lists are intentionally unspecified; this is not an ABI prototype.",
        " * Do not use this header as proof of argument types or kernel linkability.",
        " */",
    ]
    for name in sorted(candidates):
        header.append(f"extern {candidates[name]} {name}();")
    header += ["", "#endif", ""]
    rendered = "\n".join(header)
    INC.mkdir(parents=True, exist_ok=True)
    (INC / "ghidra_internal_forward_decls.h").write_text(rendered, encoding="utf-8")

    changed = []
    include = '#include "../include/ghidra_internal_forward_decls.h"'
    for path in FILES:
        text = path.read_text(encoding="utf-8", errors="replace")
        if include in text:
            continue
        anchor = '#include "../include/ghidra_function_prototypes.h"'
        if anchor not in text:
            rejects["missing_source_include_anchor"] += 1
            continue
        text = text.replace(anchor, anchor + "\n" + include, 1)
        path.write_text(text, encoding="utf-8")
        changed.append(path.name)

    report = {
        "source_files": len(FILES),
        "internal_function_definitions_scanned": scanned,
        "existing_prototypes_skipped": len(declared),
        "forward_declarations_added": len(candidates),
        "conflicting_return_types_omitted": conflicts,
        "rejections": dict(rejects),
        "changed_source_files": changed,
        "header_sha256": hashlib.sha256(rendered.encode()).hexdigest(),
        "declaration_policy": "return type copied from definition; no parameter prototype asserted"
    }
    OUT.mkdir(parents=True, exist_ok=True)
    (OUT / "internal_forward_declarations.json").write_text(json.dumps(report, indent=2, ensure_ascii=False)+"\n", encoding="utf-8")
    md = [
        "# Declarações internas conservadoras",
        "",
        f"- Arquivos C: {len(FILES)}",
        f"- Definições FUN_ examinadas: {scanned}",
        f"- Protótipos existentes ignorados: {len(declared)}",
        f"- Declarações de encaminhamento adicionadas: {len(candidates)}",
        f"- Conflitos de tipo de retorno omitidos: {len(conflicts)}",
        "",
        "O tipo de retorno vem da definição extraída. A lista de parâmetros fica intencionalmente sem protótipo para não afirmar aridades que a própria auditoria encontrou como conflitantes. Isso reduz declarações implícitas, mas não valida ABI nem resolve dependências externas.",
        "",
        "## Motivos de exclusão",
        ""
    ] + [f"- {k}: {v}" for k, v in rejects.items()]
    (OUT / "INTERNAL_FORWARD_DECLARATIONS.md").write_text("\n".join(md)+"\n", encoding="utf-8")
    print(json.dumps({k:v for k,v in report.items() if k!="conflicting_return_types_omitted"}, indent=2))

if __name__ == "__main__":
    main()
