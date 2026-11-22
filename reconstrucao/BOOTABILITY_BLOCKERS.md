# Requisitos para um kernel inicializável e distribuição open source

## Estado verificado do repositório

Na revisão do commit `50b6296e92cf189ab2133c7ae1cd75530febe7f5`:

- Existem quatro unidades C extraídas de pseudocódigo Ghidra, headers de layouts e protótipos e relatórios de dependências.
- Os quatro arquivos C ainda falham no diagnóstico GCC.
- Não há arquivos `.exe`, `.sys`, `.dll`, `.pdb`, `.efi` ou imagem de disco no histórico de arquivos do repositório.
- Não há implementação identificada de bootloader, HAL, inicialização de memória, interrupções, scheduler inicial, drivers de armazenamento/console ou configuração de linkedição para imagem de kernel.
- O workflow de diagnóstico é uma verificação de compilação de C, não um build de kernel Windows.

## O que falta para o objetivo

### 1. Evidência binária e símbolos
É necessário ter o executável exato do kernel alvo e seu PDB correspondente (ou uma fonte equivalente verificável), incluindo versão, arquitetura, timestamp/identidade de imagem e endereços. Sem isso, não é tecnicamente válido atribuir tipos/valores a milhares de símbolos `DAT_` apenas pelo nome.

### 2. Tradução do pseudocódigo
Resolver os tipos Ghidra não representáveis diretamente em C, operações vetoriais de 128 bits, variáveis especiais, convenções de chamada, protótipos conflitantes e os 23 blocos rejeitados. Helpers de sincronização como `LOCK`/`UNLOCK` precisam preservar a semântica observada; não podem ser stubs vazios.

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

Não foi adicionado um arquivo de licença permissiva global. A reconstrução deriva de análise de binário e pseudocódigo associados ao Windows; não há evidência no repositório de que o projeto tenha direitos para relicenciar conteúdo derivado da Microsoft. Uma licença para scripts e código original novo deve delimitar explicitamente seu escopo e não alegar licenciar código proprietário, binários ou símbolos de terceiros. A ausência de licença não deve ser interpretada como autorização para redistribuir esses materiais.

## Decisão técnica

O estado atual é **reconstrução parcial não compilável e não inicializável**. Não há evidência suficiente para afirmar que o kernel NT alvo pode ser reconstruído integralmente ou inicializado a partir dos artefatos presentes. O trabalho deve avançar por dependências demonstráveis e testes incrementais; não por declarações globais, funções vazias ou símbolos inventados.
