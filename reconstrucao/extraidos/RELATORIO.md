# Relatório automático de evidências do Ghidra

Arquivos TXT analisados: 7

| Alvo | Ocorrências textuais | Blocos de inventário |
|---|---:|---:|
| _EPROCESS | 165 | 3 |
| _ETHREAD | 117 | 3 |
| _KPROCESS | 59 | 3 |
| _KTHREAD | 240 | 4 |
| _CONTEXT | 954 | 4 |

## Arquivos de saída

- `eprocess_ocorrencias.jsonl`: linhas em que o nome aparece, com arquivo e número da linha.
- `eprocess_blocos.txt`: blocos de inventário reconhecidos no formato `Nome: ...`.
- `ethread_ocorrencias.jsonl`: linhas em que o nome aparece, com arquivo e número da linha.
- `ethread_blocos.txt`: blocos de inventário reconhecidos no formato `Nome: ...`.
- `kprocess_ocorrencias.jsonl`: linhas em que o nome aparece, com arquivo e número da linha.
- `kprocess_blocos.txt`: blocos de inventário reconhecidos no formato `Nome: ...`.
- `kthread_ocorrencias.jsonl`: linhas em que o nome aparece, com arquivo e número da linha.
- `kthread_blocos.txt`: blocos de inventário reconhecidos no formato `Nome: ...`.
- `context_ocorrencias.jsonl`: linhas em que o nome aparece, com arquivo e número da linha.
- `context_blocos.txt`: blocos de inventário reconhecidos no formato `Nome: ...`.

## Limites

Ocorrência textual não prova, por si só, que um símbolo seja uma definição. Os blocos são preservados como evidência bruta; offsets, campos e tamanhos só devem ser declarados após conferir o conteúdo correspondente.
A rotina não inventa layouts nem modifica os arquivos originais.
