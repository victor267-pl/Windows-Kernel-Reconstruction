# Evidências das estruturas prioritárias

Fonte: inventário exportado do Ghidra em `dados/Kernel_Consulta_20261122_105236_parte_01.txt`, categoria `/ntkrnlmp.pdb`, exceto `_CONTEXT`, que também aparece em `/excpt.h`.

| Estrutura | Tamanho | Campos | Estado da evidência |
|---|---:|---:|---|
| `_KPROCESS` | 456 bytes | 53 | Definição StructureDB localizada |
| `_KTHREAD` | 1216 bytes | 124 | Definição StructureDB localizada |
| `_EPROCESS` | 2112 bytes | 226 | Definição StructureDB localizada |
| `_ETHREAD` | 1944 bytes | 76 | Definição StructureDB localizada |
| `_CONTEXT` | 1232 bytes | 46 | Duas definições StructureDB: `/excpt.h` e `/ntkrnlmp.pdb`; tamanhos e contagens coincidem |

## Relações estruturais já confirmadas

- `_EPROCESS.Pcb`: offset 0, tamanho 456, tipo `_KPROCESS`.
- `_ETHREAD.Tcb`: offset 0, tamanho 1216, tipo `_KTHREAD`.
- `_CONTEXT`: os campos de registradores começam em offsets explícitos no inventário; o bloco de 512 bytes em offset 256 aparece como união/tipo interno, e não deve ser expandido sem recuperar a definição correspondente.

## Verificações pendentes antes de publicar headers semânticos

1. Comparar todas as definições repetidas de cada estrutura e verificar se são idênticas.
2. Recuperar os tipos aninhados e uniões referenciados pelos campos.
3. Converter os tipos primitivos do Ghidra para tipos C de largura fixa.
4. Gerar headers e compilar testes de tamanho, alinhamento e offsets.
5. Cruzar os layouts com referências do pseudocódigo descompilado.

Os tamanhos e contagens acima são transcritos do inventário. A existência de uma definição StructureDB não prova, sozinha, que todos os tipos aninhados já foram reconstruídos.
