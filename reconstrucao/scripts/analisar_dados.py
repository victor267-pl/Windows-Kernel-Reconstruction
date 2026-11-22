#!/usr/bin/env python3
from pathlib import Path
import re, json

ROOT = Path("dados")
OUT = Path("reconstrucao/extraidos")
OUT.mkdir(parents=True, exist_ok=True)
targets = ["_EPROCESS", "_ETHREAD", "_KPROCESS", "_KTHREAD", "_CONTEXT"]
files = sorted(ROOT.glob("*.txt"))
if not files:
    raise SystemExit("Nenhum TXT encontrado em dados/")

stats = {}
for target in targets:
    hits = []
    pattern = re.compile(re.escape(target), re.IGNORECASE)
    for path in files:
        try:
            with path.open("r", encoding="utf-8", errors="replace") as f:
                for n, line in enumerate(f, 1):
                    if pattern.search(line):
                        hits.append({"file": path.name, "line": n, "text": line.rstrip()[:1200]})
        except OSError as e:
            print(f"Aviso: {path}: {e}")
    stats[target] = hits
    (OUT / f"{target.strip('_').lower()}_ocorrencias.jsonl").write_text(
        "".join(json.dumps(x, ensure_ascii=False) + "\n" for x in hits),
        encoding="utf-8"
    )

# Extrai blocos de inventário no formato Nome: <tipo>, incluindo linhas até o próximo Nome:
wanted = set(targets)
blocks = {t: [] for t in targets}
for path in files:
    with path.open("r", encoding="utf-8", errors="replace") as f:
        current_name = None
        current = []
        def save():
            if current_name in wanted and current:
                blocks[current_name].append((path.name, current[:500]))
        for line in f:
            m = re.match(r"\s*Nome:\s*(\S+)", line)
            if m:
                save()
                current_name = m.group(1)
                current = [line.rstrip()]
            elif current_name:
                current.append(line.rstrip())
        save()

for target, items in blocks.items():
    with (OUT / f"{target.strip('_').lower()}_blocos.txt").open("w", encoding="utf-8") as out:
        for filename, lines in items:
            out.write(f"===== {filename} =====\n")
            out.write("\n".join(lines) + "\n\n")

lines = [
    "# Relatório automático de evidências do Ghidra",
    "",
    f"Arquivos TXT analisados: {len(files)}",
    "",
    "| Alvo | Ocorrências textuais | Blocos de inventário |",
    "|---|---:|---:|",
]
for t in targets:
    lines.append(f"| {t} | {len(stats[t])} | {len(blocks[t])} |")
lines += ["", "## Arquivos de saída", ""]
for t in targets:
    stem = t.strip("_").lower()
    lines += [f"- `{stem}_ocorrencias.jsonl`: linhas em que o nome aparece, com arquivo e número da linha.",
              f"- `{stem}_blocos.txt`: blocos de inventário reconhecidos no formato `Nome: ...`."]
lines += ["", "## Limites", "",
          "Ocorrência textual não prova, por si só, que um símbolo seja uma definição. Os blocos são preservados como evidência bruta; offsets, campos e tamanhos só devem ser declarados após conferir o conteúdo correspondente.",
          "A rotina não inventa layouts nem modifica os arquivos originais."]
(OUT / "RELATORIO.md").write_text("\n".join(lines) + "\n", encoding="utf-8")
print("\n".join(lines[:14]))
