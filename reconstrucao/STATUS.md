# Reconstrucao — estado inicial

## Análise automatizada concluída

- Workflow `Analyze Ghidra kernel data` executado com sucesso em 2026-11-22.
- Os sete TXT foram analisados; os resultados estão em `extraidos/`.
- Ocorrências encontradas: `_EPROCESS` 165, `_ETHREAD` 117, `_KPROCESS` 59, `_KTHREAD` 240 e `_CONTEXT` 954.
- Definições StructureDB identificadas: `_EPROCESS` 2112 bytes / 226 campos; `_ETHREAD` 1944 bytes / 76 campos; `_KPROCESS` 456 bytes / 53 campos; `_KTHREAD` 1216 bytes / 124 campos; `_CONTEXT` 1232 bytes / 46 campos.
- Evidências e relações iniciais: `EVIDENCIAS_PRIORITARIAS.md`.
- A análise automatizada não equivale à reconstrução dos headers; tipos aninhados, uniões, offsets e compilação ainda precisam ser validados.

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
## Headers ABI gerados e compilados

- Foram gerados headers para `_EPROCESS`, `_ETHREAD`, `_KPROCESS`, `_KTHREAD` e `_CONTEXT`.
- Cada tipo reserva exatamente o tamanho registrado no inventário Ghidra e publica macros de offset/tamanho para os campos nomeados.
- Os nomes, tipos Ghidra, offsets e tamanhos completos dos campos foram preservados em `extraidos/layout_manifest.json`.
- O agregador é `include/nt_kernel_layouts.h`.
- Validação executada no GitHub Actions: compilação C11 com GCC, `-Wall -Wextra -Werror -pedantic`, e verificações estáticas de tamanho e offsets-base. Resultado: sucesso no run 45040788277.
- **Limite explícito:** os membros internos estão representados por armazenamento opaco (`uint8_t`), não por declarações semânticas C. Isso evita inventar layouts de tipos aninhados e uniões. A próxima etapa é reconstruir esses membros usando o inventário completo e validar cada dependência antes de substituir o armazenamento opaco.


## Reconstrução de funções C decompiladas

- Os dumps Ghidra foram processados e os corpos C foram gravados em `src/decompiled_01.c` até `src/decompiled_04.c`.
- Extração mais recente: **33.826 corpos de função**, com **23 blocos rejeitados** por não conterem assinatura/corpo recuperável pelo parser.
- O parser preserva o rótulo Ghidra, o endereço original e o nome da assinatura quando disponível em `extraidos/function_extraction.json`.
- A saída é pseudocódigo C decompilado. Não é o fonte original da Microsoft e não está pronta para linkedição como kernel.

## Dependências e diagnóstico de compilação

- `extraidos/SYMBOL_DEPENDENCIES.md` e `symbol_dependencies.json` catalogam rótulos, chamadas, referências FUN_ e símbolos DAT_.
- Inventário atual: 33.826 marcadores extraídos, 33.818 nomes distintos, 17.339 referências FUN_ correspondentes a rótulos locais, 3 referências FUN_ sem rótulo correspondente e 8.237 símbolos DAT_ distintos.
- `extraidos/COMPILER_DIAGNOSTICS.md` contém um diagnóstico GCC de sintaxe, não uma validação de build. Os quatro arquivos C falham nesse teste devido a declarações ausentes, tipos Ghidra não resolvidos e incompatibilidades do pseudocódigo.
- O diagnóstico encontrou 3 nomes de tipos ausentes de forma recorrente e 71 identificadores não declarados distintos nos trechos examinados. As primeiras ocorrências incluem variáveis globais DAT_ e registradores/variáveis especiais do Ghidra.
- Próxima etapa técnica: correlacionar os símbolos DAT_ e os tipos não resolvidos com o inventário de dados/PDB, reconstruir declarações com evidência e compilar unidades menores. Não adicionar declarações genéricas para mascarar erros sem determinar seus tipos.
