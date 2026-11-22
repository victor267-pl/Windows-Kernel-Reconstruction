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


## Evidências de símbolos e protótipos C

- Varredura dos sete dumps originais confirma milhares de referências textuais a símbolos globais Ghidra, incluindo `DAT_140e0a740` (4.201 ocorrências), `DAT_140fc7d20` (2.347), `DAT_140fc7b04` (890), `DAT_140fc7ab8` (869), `DAT_140fc9c40` (593), `DAT_140fc7a88` (560) e `DAT_140e07748` (390). As ocorrências disponíveis são usos em pseudocódigo; não bastam para atribuir tipo/valor global com segurança.
- `SOURCE_SYMBOL_EVIDENCE.md` guarda amostras com arquivo e linha de origem.
- Foram gerados **33.556 protótipos C** a partir de assinaturas limpas que coincidem com o rótulo da função Ghidra. 217 assinaturas com divergência de rótulo, 43 trechos com texto de corpo antes da primeira chave e dois nomes com assinaturas conflitantes foram excluídos do header de protótipos.
- Header gerado: `include/ghidra_function_prototypes.h`. Os quatro arquivos C incluem esse header, reduzindo chamadas sem protótipo quando a assinatura local foi recuperada.
- `FUNCTION_PROTOTYPES.md` documenta critérios e exclusões.
- `COMPILER_ERROR_CONTEXTS.md` associa os primeiros erros do GCC às funções e linhas específicas, permitindo corrigir dependências sem declarar símbolos arbitrariamente.
- Limitação: protótipos reproduzem assinaturas do Ghidra, não são validação ABI nem headers WDK. Variáveis globais `DAT_`, símbolos de registradores, tipos desconhecidos e helpers decompilador ainda exigem resolução específica.


## Auditoria de protótipos e nova validação

- O cabeçalho final contém **20.642 protótipos** mantidos após comparar a aridade das assinaturas Ghidra com os pontos de chamada encontrados nos quatro arquivos C.
- Outros **11.639 nomes** foram excluídos da geração automática porque as chamadas observadas não concordam com o número de parâmetros da assinatura recuperada. Isso evita esconder incompatibilidades com protótipos incorretos.
- A auditoria independente de `prototype_arity_report.json` confirmou que os 20.642 protótipos mantidos não apresentam incompatibilidade de aridade nos pontos de chamada examinados.
- Os aliases WDK/CRT usados pelo cabeçalho foram preservados: `NTSTATUS`, `HANDLE`, `ULONGLONG`, `PCONTEXT`, `errno_t`, `rsize_t` e declarações opacas para tipos referenciados por ponteiro. Tipos sem largura/semântica conhecida foram excluídos em vez de receber aliases arbitrários.
- A validação GCC posterior não acusa mais erros dentro do cabeçalho de protótipos. Os quatro arquivos decompilados ainda falham na análise de sintaxe/semântica: permanecem globais `DAT_` sem declaração, variáveis especiais Ghidra (`FiberData`, `SystemReserved1`), tipos sem largura conhecida (`undefined`, `unkint9`, `code`), helpers Ghidra (`CONCAT71`, `LOCK`, `UNLOCK`) e funções WDK/importadas ou chamadas com assinaturas ainda não recuperadas.
- O diagnóstico limita-se aos primeiros 120 erros por arquivo; não representa a contagem completa de erros. Não há ainda um build de kernel.
- Arquivos de referência: `extraidos/prototype_arity_report.json`, `extraidos/PROTOTYPE_ARITY_AUDIT.md`, `extraidos/compiler_diagnostics.json` e `extraidos/COMPILER_ERROR_CONTEXTS.md`.


## Blocos não extraídos — análise individual

- O relatório `extraidos/REJECTED_FUNCTIONS.md` lista os **23** blocos que não viraram corpos C e informa o motivo e o TXT de origem.
- 16 são marcados como `opening_brace_not_found`: o dump contém um rótulo, mas o parser não encontrou corpo de implementação. Não foram preenchidos com stubs nem confundidos com código recuperado.
- 4 falharam em localizar a assinatura (`signature_not_found`).
- 3 apresentam corpo sem balanceamento de chaves (`unbalanced_body`), exigindo inspeção manual do trecho original.
- A extração foi reexecutada com sucesso e manteve o include do cabeçalho de protótipos auditados nos quatro arquivos C.


## Correção de estado — commit 2026-11-22

A nota anterior sobre ingestão limitada não descreve mais todo o estado do projeto. A árvore atual contém os dois binários de entrada e os artefatos extraídos deles:

- `entrada/ntoskrnl.exe`: 13.172.176 bytes; x64; SHA-256 registrado em `extraidos/NTOSKRNL_PE_ANALYSIS.md`.
- `entrada/ntkrnlmp.pdb`: 11.563.008 bytes; SymChk confirmou correspondência com o executável (GUID `CE884F70-F5A9-025D-53DB-35D8BE8BFF79`, DBI Age 1).
- Extração PDB: TPI, publics, globals, symbols, modules e mapas de seção em `extraidos/pdb/`.
- Grafo CodeView: 12.085 registros TPI, 4.124 UDTs; layouts principais comparados com o manifesto.
- Análise PE: 12.428 endereços DAT_ distintos e 99.277 referências; a classificação de endereços não equivale, por si só, à recuperação dos tipos C.

No commit atual, o workflow mais recente de declarações internas terminou com sucesso como automação, mas o diagnóstico GCC continua falhando nos quatro arquivos decompilados. O relatório atual registra 105 identificadores não declarados distintos; a execução automatizada não significa que o código C esteja compilável nem que exista uma imagem de kernel ligada ou inicializável.

A afirmação de que os arquivos `.exe` e `.pdb` não estão no repositório estava incorreta e foi corrigida em `BOOTABILITY_BLOCKERS.md`. Não é necessário reenviar esses arquivos.

## Atualização técnica — 22/11/2026

- Evidência de `DAT_140e0a740`: endereço file-backed em `.data`, valor inicial bruto `0x00002B992DDFA232` e milhares de usos XOR com endereços locais de stack. Foi registrado como candidato de alta confiança ao cookie de segurança x64, sem alegar que o nome original foi recuperado.
- Foi adicionada uma definição C inicializada para esse global candidato e um header `ghidra_global_declarations.h`; os quatro arquivos C decompilados agora incluem o header.
- A execução GitHub Actions `45053605922` concluiu a integração e refez o diagnóstico. A referência a `DAT_140e0a740` deixou de aparecer entre os identificadores não declarados.
- O novo diagnóstico expôs `undefined3` como tipo ausente. Foi representado como `uint3` (container de 32 bits para valor Ghidra de 24 bits), coerente com os helpers escalares já existentes. A execução `45053684504` confirmou **zero nomes de tipos ausentes**.
- Diagnóstico atual: **4/4 unidades C ainda falham**; **106 identificadores não declarados distintos**; classes registradas: 152 erros de identificador não declarado, 302 outros erros, 123 erros de sintaxe/estrutura esperada, 22 declarações implícitas e 3 tipos conflitantes. A contagem de erros pode mudar conforme correções permitem ao compilador avançar.
- A geração conservadora atual examinou 33.823 definições e adicionou 11.811 declarações de encaminhamento sem aridade. Isso não comprova ABI nem linkedição.
- **Não foi produzido um executável de kernel, não houve linkedição NT e não houve teste de boot em VM.** O objetivo de inicialização permanece não atingido.
