# Requisitos para um kernel inicializável e distribuição open source

## Estado verificado no commit atual

- O repositório contém os binários de entrada: `reconstrucao/entrada/ntoskrnl.exe` (13.172.176 bytes) e `reconstrucao/entrada/ntkrnlmp.pdb` (11.563.008 bytes).
- A análise PE registra SHA-256 `f6f275f67c7ef44fc2df2d828658fb31eaffd41018ac5a0fd9440e08d9912c30`, arquitetura x64, ImageBase `0x140000000`, Entry RVA `0xb643c0` e identidade CodeView GUID `CE884F70-F5A9-025D-53DB-35D8BE8BFF79` / Age 1.
- O relatório de extração confirma SymChk: PDB Matched=TRUE, DBG Matched=TRUE, DBI Age=1 e Type Info=TRUE. O PDB tem TPI extraído; o relatório registra também ausência de símbolos globais privados (Global syms=FALSE / NumSyms=0). Não confundir isso com ausência dos arquivos binários.
- O grafo CodeView registra 12.085 registros TPI, 4.124 UDTs e layouts para `_EPROCESS`, `_ETHREAD`, `_KPROCESS`, `_KTHREAD` e `_CONTEXT`, com tamanhos conferidos entre PDB e manifesto.
- Existem quatro unidades C de pseudocódigo Ghidra, headers de layouts/protótipos e relatórios de dependências.
- O diagnóstico GCC mais recente ainda encontra erros nos quatro arquivos C; o workflow de diagnóstico não é um build nem uma linkedição do kernel Windows.
- Ainda não há implementação integrada de bootloader, HAL, inicialização de memória/interrupções, drivers mínimos ou configuração de linkedição de imagem.

## O que falta para o objetivo

### 1. Resolução de símbolos globais
O executável e o PDB exatos já estão no repositório. O PDB extraído fornece tipos e símbolos públicos, mas o relatório informa que não fornece símbolos globais privados. A resolução dos `DAT_` precisa combinar endereços/RVAs do PE, seções e bytes reais, referências do pseudocódigo e tipos/estruturas CodeView. Não atribuir tipos arbitrários apenas pelo nome do rótulo.

### 2. Tradução do pseudocódigo
Resolver os tipos Ghidra não representáveis diretamente em C, operações vetoriais de 128 bits, variáveis especiais, convenções de chamada, protótipos conflitantes e os 23 blocos rejeitados. Helpers de sincronização como `LOCK`/`UNLOCK` precisam preservar a semântica observada; não podem ser stubs vazios. O diagnóstico atual registra 105 identificadores não declarados distintos e classes de erro adicionais; consultar sempre `extraidos/COMPILER_DIAGNOSTICS.md` e `COMPILER_ERROR_CONTEXTS.md` do commit atual, não contagens históricas.

### 3. Ambiente de build do kernel
Um kernel Windows x64 depende de ABI, headers/import libraries compatíveis, linker, seções, relocations, entry point, configuração de imagem e interfaces de HAL/boot. Uma compilação GCC isolada dos corpos de funções não satisfaz esses requisitos.

### 4. Caminho de inicialização
Para uma imagem realmente inicializável, precisam existir e ser integrados: carregador compatível com o formato da imagem, transferência correta de controle, estado de CPU esperado, mapa de memória, inicialização de page tables, IDT/GDT, interrupções, temporizadores, gerenciamento físico/virtual de memória, HAL e drivers mínimos de console/armazenamento. Os componentes precisam ser compatíveis com a versão e arquitetura do kernel alvo.

### 5. Validação
Critérios mínimos antes de chamar o resultado de inicializável:
- compilação e linkedição completos sem símbolos indefinidos;
- validação de formato, entry point, relocations e seções;
- execução em VM com log serial/depuração;
- testes de inicialização repetidos e tratamento de falhas;
- documentação da versão/arquitetura e dos componentes necessários.

## Distribuição open source

Não foi adicionado um arquivo de licença permissiva global. A reconstrução deriva de análise de binário e pseudocódigo associados ao Windows; não há evidência no repositório de que o projeto tenha direitos para relicenciar conteúdo derivado da Microsoft. Uma licença para scripts e código original novo deve delimitar explicitamente seu escopo e não alegar licenciar código proprietário, binários ou símbolos de terceiros.

## Decisão técnica

O estado atual é **reconstrução parcial, ainda não compilável como kernel completo e não inicializável**. Os binários de entrada e evidências de símbolos estão presentes; o bloqueio atual não é falta desses arquivos, mas a tradução semântica dos corpos decompilados, a resolução dos dados/globais, as dependências de ABI/ligação e a ausência do caminho completo de boot. O trabalho deve avançar por dependências demonstráveis e testes incrementais, sem funções vazias ou símbolos inventados.

## Atualização após integração de evidências — 22/11/2026

- A integração atual declara e define `DAT_140e0a740` como global de 64 bits inicializado com `0x00002B992DDFA232`, com identificação de alta confiança como candidato ao cookie de segurança x64. O endereço, valor PE e padrões XOR sustentam a hipótese; não é um símbolo PDB privado recuperado.
- O tipo Ghidra `undefined3` foi mapeado para o container `uint3` de 32 bits, com a largura lógica de 24 bits preservada pelos helpers escalares.
- O CI confirmou que não restam nomes de tipos ausentes no diagnóstico, mas as quatro unidades C ainda falham: 106 identificadores não declarados distintos e erros adicionais de sintaxe, tipos conflitantes e funções implícitas.
- Nenhuma destas alterações constitui build ou link de kernel. Continuam ausentes o ambiente/ABI de linkedição NT, a resolução semântica dos demais globais e helpers, o caminho de boot e a validação em VM.

## Evidência adicional de globais — 22/11/2026

- `DAT_140fc7ad0` foi declarado como ponteiro para `uint32_t`, apoiado pelo uso explícito como `(uint *)`, desreferência e aritmética de ponteiro; o endereço está no zero-fill de `.data`.
- `DAT_140f0cf28` foi declarado como armazenamento de largura `uintptr_t`, apoiado pelo uso de seu endereço como argumento de `KeAcquireSpinLockRaiseToDpc` (spin lock x64); também está no zero-fill de `.data`.
- O arquivo `src/reconstructed_globals.c` passou na verificação isolada GCC com `-Wall -Wextra -Werror`. Os corpos decompilados continuam sem compilar como unidades completas e o kernel continua sem link ou boot testado.
