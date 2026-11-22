#!/usr/bin/env python3
"""Validate the exact NT PDB and export machine-readable symbol evidence."""
from pathlib import Path
import re
import shutil
import subprocess
import sys

ROOT = Path(__file__).resolve().parents[2]
PDB = ROOT / "reconstrucao/entrada/ntkrnlmp.pdb"
OUT = ROOT / "reconstrucao/extraidos/pdb"
EXPECTED_GUID = "ce884f70-f5a9-025d-53db-35d8be8bff79"
EXPECTED_AGE = "1"

def run(tool, *args, output=None):
    cmd = [tool, "dump", *args, str(PDB)]
    proc = subprocess.run(cmd, text=True, stdout=subprocess.PIPE, stderr=subprocess.STDOUT)
    if proc.returncode:
        raise RuntimeError(f"Falha ({proc.returncode}) em {' '.join(cmd)}:\n{proc.stdout[-6000:]}")
    if output:
        (OUT / output).write_text(proc.stdout, encoding="utf-8")
    return proc.stdout

def main():
    if not PDB.is_file():
        raise SystemExit(f"PDB ausente: {PDB}")
    tool = shutil.which("llvm-pdbutil")
    if not tool:
        raise SystemExit("llvm-pdbutil não encontrado; instale o pacote LLVM.")
    OUT.mkdir(parents=True, exist_ok=True)

    summary = run(tool, "-summary", output="summary.txt")
    guid_match = re.search(r"\bGuid\s*:\s*\{?([0-9A-Fa-f-]{36})\}?", summary, re.I)
    age_match = re.search(r"\bAge\s*:\s*(\d+)", summary, re.I)
    if not guid_match or not age_match:
        raise SystemExit("Não foi possível extrair GUID/Age do resumo do PDB. Consulte summary.txt.")
    guid = guid_match.group(1).lower()
    age = age_match.group(1)
    if guid != EXPECTED_GUID or age != EXPECTED_AGE:
        raise SystemExit(f"PDB incompatível: GUID={guid}, Age={age}; esperado {EXPECTED_GUID}, Age={EXPECTED_AGE}")

    commands = [
        ("-types", "types.txt"),
        ("-globals", "globals.txt"),
        ("-publics", "publics.txt"),
        ("-symbols", "symbols.txt"),
    ]
    counts = {}
    for option, filename in commands:
        content = run(tool, option, output=filename)
        counts[filename] = len(content.splitlines())

    report = [
        "# Validação e extração do PDB do kernel",
        "",
        f"- Arquivo: `reconstrucao/entrada/ntkrnlmp.pdb`",
        f"- Tamanho: {PDB.stat().st_size} bytes",
        f"- GUID: `{guid}`",
        f"- Age: `{age}`",
        "- Compatibilidade com a identidade extraída de `ntoskrnl.exe`: **confirmada**",
        "",
        "## Dumps gerados",
        "",
    ]
    for filename, lines in counts.items():
        report.append(f"- `{filename}`: {lines} linhas")
    report += [
        "",
        "Os dumps completos são publicados como artefato do GitHub Actions. A extração não",
        "equivale a reconstruir os corpos das funções nem comprova compilação ou boot.",
    ]
    (ROOT / "reconstrucao/extraidos/PDB_EXTRACTION_REPORT.md").write_text(
        "\n".join(report) + "\n", encoding="utf-8"
    )
    print("\n".join(report))

if __name__ == "__main__":
    try:
        main()
    except Exception as exc:
        print(f"ERRO: {exc}", file=sys.stderr)
        raise
