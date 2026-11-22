# Reconstrucao — estado inicial

## Artefato implementado

- `include/client_id.h`: definicao C de `_CLIENT_ID` com dois campos de largura ponteiro.
- Evidencia do inventario Ghidra: tamanho de 16 bytes e dois campos em x64.
- Verificacao de compilacao: `static_assert` / `_Static_assert` exige 16 bytes.

## Criterio de confianca

- **Confirmado pelo inventario enviado:** nome `_CLIENT_ID`, tamanho 16 bytes, dois campos.
- **Reconstrucao semantica:** `UniqueProcess` e `UniqueThread`, ambos com largura de HANDLE.
- **Nao afirmado:** que esta seja a declaracao textual original do WDK/NT ou que todos os tipos do kernel estejam recuperados.

## Proximas estruturas prioritarias

1. `_EPROCESS`
2. `_ETHREAD`
3. `_KPROCESS`
4. `_KTHREAD`
5. `_CONTEXT`

Os layouts dessas estruturas so serao adicionados quando os campos, offsets e tamanhos puderem ser conferidos nos dados de origem. O pseudocodigo descompilado sera usado para validar referencias e semantica, nao para inventar campos.

## Limitacao atual de ingestao

O GitHub recebeu as sete partes em `dados/`. A integracao atual retorna o conteudo do arquivo pequeno, mas nao devolve o texto das partes grandes de 20 MiB. Por isso, esta primeira estrutura usa apenas a evidencia ja legivel e o layout semantico conhecido de CLIENT_ID. A analise das demais estruturas depende de tornar os arquivos grandes acessiveis em fragmentos menores.
