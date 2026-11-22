#!/usr/bin/env python3
"""Validate the NT kernel PDB and export machine-readable symbol evidence."""
from pathlib import Path
import re
import os
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
    tool = os.environ.get("LLVM_PDBUTIL") or shutil.which("llvm-pdbutil")
    if not tool:
        raise SystemExit("llvm-pdbutil não encontrado; instale o pacote LLVM.")
    OUT.mkdir(parents=True, exist_ok=True)

    summary = run(tool, "-summary", output="summary.txt")
    guid_match = re.search(r"\bGuid\s*:\s*\{?([0-9A-Fa-f-]{36})\}?", summary, re.I)
    if not guid_match:
        raise SystemExit("GUID não encontrado no resumo do PDB. Consulte summary.txt.")

    # The PDB Info Stream and DBI Stream carry separate Age fields. SymChk
    # reports the DBI Age for image matching; do not mistake the Info Stream
    # Age for it. Prefer an Age explicitly printed inside the DBI section.
    dbi_section = re.search(
        r"DBI Stream(.*?)(?:\n\S[^\n]*Stream|\Z)", summary, re.I | re.S
    )
    dbi_age_match = re.search(r"\bAge\s*:\s*(\d+)", dbi_section.group(1), re.I) if dbi_section else None
    all_ages = re.findall(r"\bAge\s*:\s*(\d+)", summary, re.I)
    if not dbi_age_match:
        raise SystemExit(
            "LLVM não expôs um campo Age identificável dentro da seção DBI Stream. "
            f"Valores Age encontrados no resumo: {all_ages or 'nenhum'}. "
            "A validação precisa distinguir Info Stream de DBI Stream; consulte summary.txt."
        )

    guid = guid_match.group(1).lower()
    age = dbi_age_match.group(1)
    if guid != EXPECTED_GUID or age != EXPECTED_AGE:
        raise SystemExit(
            f"PDB incompatível segundo os campos lidos: GUID={guid}, DBI Age={age}; "
            f"esperado GUID={EXPECTED_GUID}, DBI Age={EXPECTED_AGE}. "
            f"Todos os campos Age no resumo: {all_ages}"
        )

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
        "- Arquivo: `reconstrucao/entrada/ntkrnlmp.pdb`",
        f"- Tamanho: {PDB.stat().st_size} bytes",
        f"- GUID: `{guid}`",
        f"- DBI Age: `{age}`",
        f"- Valores Age apresentados no resumo: `{', '.join(all_ages) or 'nenhum'}`",
        "- Compatibilidade com a identidade extraída de `ntoskrnl.exe`: **confirmada**",
        "",
        "## Dumps gerados",
        "",
    ]
    for filename, lines in counts.items():
        report.append(f"- `{filename}`: {lines} linhas")
    report += [
        "",
        "A presença de tipos não implica que o PDB contenha símbolos globais ou públicos. "
        "Consulte os respectivos dumps e as métricas do SymChk.",
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
