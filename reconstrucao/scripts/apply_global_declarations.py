#!/usr/bin/env python3
"""Idempotently include evidence-backed global declarations in extracted C units."""
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
SRC = ROOT / "reconstrucao" / "src"
INCLUDE = '#include "../include/ghidra_global_declarations.h"'

def main():
    changed = []
    for path in sorted(SRC.glob("decompiled_*.c")):
        text = path.read_text(encoding="utf-8", errors="replace")
        if INCLUDE in text:
            continue
        anchor = '#include "../include/ghidra_types.h"'
        if anchor not in text:
            raise SystemExit(f"Missing include anchor in {path}")
        text = text.replace(anchor, anchor + "\n" + INCLUDE, 1)
        path.write_text(text, encoding="utf-8")
        changed.append(path.name)
    print({"source_units": len(list(SRC.glob("decompiled_*.c"))),
           "updated_units": changed})

if __name__ == "__main__":
    main()
