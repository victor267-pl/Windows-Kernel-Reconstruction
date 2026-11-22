#!/usr/bin/env python3
"""Extract available type and symbol records from the SymChk-validated NT PDB."""
from pathlib import Path
import os
import shutil
import subprocess
import sys
import re

ROOT = Path(__file__).resolve().parents[2]
PDB = ROOT / "reconstrucao/entrada/ntkrnlmp.pdb"
OUT = ROOT / "reconstrucao/extraidos/pdb"
EXPECTED_GUID = "ce884f70-f5a9-025d-53db-35d8be8bff79"
# The Microsoft SymChk result supplied for this exact symbol-store key reports
# DBI Age=1 and PDB Matched=TRUE. LLVM's summary Age=6 is the InfoStream Age;
# do not treat it as the image-matching DBI Age.

def find_tool():
    candidates = [
        os.environ.get("LLVM_PDBUTIL"),
        shutil.which("llvm-pdbutil"),
        *[str(p) for p in sorted(Path("/usr/lib").glob("llvm-*/bin/llvm-pdbutil"), reverse=True)],
        *[str(p) for p in sorted(Path("/usr/bin").glob("llvm-pdbutil-[0-9]*"), reverse=True)],
    ]
    for candidate in candidates:
        if candidate and Path(candidate).is_file() and os.access(candidate, os.X_OK):
            try:
                with open(candidate, "rb") as f:
                    if f.read(4) == b"\x7fELF":
                        return candidate
            except OSError:
                pass
    raise SystemExit("Executável llvm-pdbutil não encontrado.")

def run(tool, *args, output=None):
    cmd = [tool, "dump", *args, str(PDB)]
    proc = subprocess.run(cmd, text=True, stdout=subprocess.PIPE, stderr=subprocess.STDOUT)
    if output:
        (OUT / output).write_text(proc.stdout, encoding="utf-8")
    if proc.returncode:
        raise RuntimeError(f"Falha ({proc.returncode}) em {' '.join(cmd)}:\n{proc.stdout[-6000:]}")
    return proc.stdout

def main():
    if not PDB.is_file():
        raise SystemExit(f"PDB ausente: {PDB}")
    OUT.mkdir(parents=True, exist_ok=True)
    tool = find_tool()
    version = subprocess.run([tool, "--version"], text=True, stdout=subprocess.PIPE, stderr=subprocess.STDOUT).stdout.strip()
    summary = run(tool, "-summary", output="summary.txt")
    guid_match = re.search(r"\bGUID\s*:\s*\{?([0-9A-Fa-f-]{36})\}?", summary, re.I)
    if not guid_match or guid_match.group(1).lower() != EXPECTED_GUID:
        raise SystemExit(f"GUID do PDB não corresponde: {guid_match.group(1) if guid_match else 'ausente'}")

    commands = [
        ("-types", "types.txt"),
        ("-globals", "globals.txt"),
        ("-publics", "publics.txt"),
        ("-symbols", "symbols.txt"),
    ]
    counts = {}
    for option, filename in commands:
        output = run(tool, option, output=filename)
        counts[filename] = len(output.splitlines())

    # Preserve the compiland inventory separately. LLVM 21 exposes module
    # records through -symbols (already captured above); it does not accept the
    # newer -module-syms/-sym-types switches. Do not silently treat an empty
    # module symbol dump as proof that no data symbols exist.
    modules = run(tool, "-modules", output="modules.txt")
    counts["modules.txt"] = len(modules.splitlines())

    report = [
        "# Extração do PDB do kernel NT",
        "",
        f"- Arquivo: `reconstrucao/entrada/ntkrnlmp.pdb` ({PDB.stat().st_size} bytes)",
        f"- Ferramenta: `{tool}` ({version})",
        f"- GUID: `{guid_match.group(1)}`",
        "- Validação de correspondência pelo Microsoft SymChk: **PDB Matched=TRUE; DBG Matched=TRUE; DBI Age=1; Type Info=TRUE**.",
        "- O resumo LLVM apresenta InfoStream Age=6. Esse valor não substitui o DBI Age informado pelo SymChk.",
        "",
        "## Resultados dos dumps",
        "",
    ]
    report.extend(f"- `{name}`: {count} linhas" for name, count in counts.items())
    report += [
        "",
        "A quantidade de linhas é uma métrica bruta, não uma contagem de tipos/símbolos únicos.",
        "Foi extraída também a lista de compilands (-modules). O dump -symbols é a saída de símbolos por módulo suportada pelo LLVM 21 instalado.",
        "A saída vazia de símbolos não é interpretada como ausência comprovada de variáveis: o PDB está stripped e o SymChk reportou Global syms=FALSE e NumSyms=0.",
        "O PDB foi reportado pelo SymChk com Global syms=FALSE e NumSyms=0; a disponibilidade",
        "de globais e públicos deve ser interpretada conforme o conteúdo efetivo dos dumps.",
        "Esta extração não reconstrói corpos de funções nem comprova compilação ou boot.",
    ]
    (ROOT / "reconstrucao/extraidos/PDB_EXTRACTION_REPORT.md").write_text("\n".join(report) + "\n", encoding="utf-8")
    print("\n".join(report))

if __name__ == "__main__":
    try:
        main()
    except Exception as exc:
        print(f"ERRO: {exc}", file=sys.stderr)
        raise
