#!/usr/bin/env python3
"""Validate the NT kernel PDB and export symbol/type evidence."""
from pathlib import Path
import os
import shutil
import subprocess
import sys

ROOT = Path(__file__).resolve().parents[2]
PDB = ROOT / "reconstrucao/entrada/ntkrnlmp.pdb"
OUT = ROOT / "reconstrucao/extraidos/pdb"
EXPECTED_GUID = "ce884f70-f5a9-025d-53db-35d8be8bff79"
EXPECTED_AGE = "1"

def find_tool():
    candidates = [
        os.environ.get("LLVM_PDBUTIL"),
        shutil.which("llvm-pdbutil"),
        *[str(p) for p in sorted(Path("/usr/lib").glob("llvm-*/bin/llvm-pdbutil"), reverse=True)],
        *[str(p) for p in sorted(Path("/usr/bin").glob("llvm-pdbutil-[0-9]*"), reverse=True)],
    ]
    for candidate in candidates:
        if candidate and Path(candidate).is_file() and os.access(candidate, os.X_OK):
            # Reject man pages and other non-ELF candidates.
            try:
                with open(candidate, "rb") as f:
                    if f.read(4) == b"\x7fELF":
                        return candidate
            except OSError:
                pass
    raise SystemExit("Executável llvm-pdbutil não encontrado. Instale o pacote LLVM completo.")

def run(tool, *args, output=None, allow_failure=False):
    cmd = [tool, "dump", *args, str(PDB)]
    proc = subprocess.run(cmd, text=True, stdout=subprocess.PIPE, stderr=subprocess.STDOUT)
    if output:
        (OUT / output).write_text(proc.stdout, encoding="utf-8")
    if proc.returncode and not allow_failure:
        raise RuntimeError(f"Falha ({proc.returncode}) em {' '.join(cmd)}:\n{proc.stdout[-6000:]}")
    return proc.returncode, proc.stdout

def main():
    if not PDB.is_file():
        raise SystemExit(f"PDB ausente: {PDB}")
    OUT.mkdir(parents=True, exist_ok=True)
    tool = find_tool()
    version = subprocess.run([tool, "--version"], text=True, stdout=subprocess.PIPE, stderr=subprocess.STDOUT).stdout.strip()
    _, summary = run(tool, "-summary", output="summary.txt")
    _, dbi = run(tool, "-dbi-stream", output="dbi-stream.txt", allow_failure=True)

    import re
    guid_match = re.search(r"\bGuid\s*:\s*\{?([0-9A-Fa-f-]{36})\}?", summary, re.I)
    info_age = re.search(r"\bAge\s*:\s*(\d+)", summary, re.I)
    # DBI stream output exposes the DBI header Age independently of the PDB InfoStream Age.
    dbi_age = re.search(r"\bAge\s*[:=]\s*(\d+)", dbi, re.I)
    guid = guid_match.group(1).lower() if guid_match else "não encontrado"
    info_age_value = info_age.group(1) if info_age else "não encontrado"
    dbi_age_value = dbi_age.group(1) if dbi_age else "não encontrado"

    report = [
        "# Validação e extração do PDB do kernel",
        "",
        f"- PDB: `reconstrucao/entrada/ntkrnlmp.pdb` ({PDB.stat().st_size} bytes)",
        f"- Ferramenta: `{tool}` ({version})",
        f"- GUID InfoStream: `{guid}`",
        f"- Age InfoStream: `{info_age_value}`",
        f"- Age DBI Stream: `{dbi_age_value}`",
        "- SymChk da Microsoft: **PDB Matched=TRUE; DBI Age=1; Type Info=TRUE** (saída fornecida pelo usuário)",
        "",
    ]
    if guid != EXPECTED_GUID or dbi_age_value != EXPECTED_AGE:
        report += [
            "**Extração interrompida:** a identidade ainda não foi confirmada pelos campos esperados.",
            "Os arquivos `summary.txt` e `dbi-stream.txt` foram preservados para diagnóstico.",
        ]
        (ROOT / "reconstrucao/extraidos/PDB_EXTRACTION_REPORT.md").write_text("\n".join(report) + "\n", encoding="utf-8")
        raise SystemExit(f"Identidade não confirmada: GUID={guid}, Info Age={info_age_value}, DBI Age={dbi_age_value}")

    counts = {}
    for option, filename in [
        ("-types", "types.txt"),
        ("-globals", "globals.txt"),
        ("-publics", "publics.txt"),
        ("-symbols", "symbols.txt"),
    ]:
        _, output = run(tool, option, output=filename)
        counts[filename] = len(output.splitlines())

    report += ["## Dumps gerados", ""]
    report += [f"- `{name}`: {count} linhas" for name, count in counts.items()]
    report += [
        "",
        "A extração de tipos não implica reconstrução dos corpos das funções nem comprova compilação ou boot.",
    ]
    (ROOT / "reconstrucao/extraidos/PDB_EXTRACTION_REPORT.md").write_text("\n".join(report) + "\n", encoding="utf-8")
    print("\n".join(report))

if __name__ == "__main__":
    try:
        main()
    except Exception as exc:
        print(f"ERRO: {exc}", file=sys.stderr)
        raise
