# Protótipo inicializável de pesquisa

Este diretório cria uma **base experimental x86-64 inicializável**, separada da reconstrução do NT. O objetivo é obter um ambiente de boot reproduzível no qual partes recuperadas e verificadas possam ser portadas progressivamente.

**Não é o Windows NT, não carrega drivers do Windows e não é compatível com o carregador do Windows.** O fato de iniciar no QEMU valida somente o bootstrap independente.

## Build e teste

O GitHub Actions instala GCC/binutils, GRUB, xorriso e QEMU, compila um ELF freestanding, cria uma ISO Multiboot2 e inicia a ISO em QEMU. O teste exige a mensagem serial `BOOT_OK`.

Artefatos do workflow:
- `kernel.elf`: núcleo freestanding de teste.
- `kernel.iso`: imagem inicializável pelo GRUB/Multiboot2.
- `serial.log`: saída serial do teste.

## Arquitetura de aproximação

1. **Bootstrap independente:** entrada Multiboot2, transição para long mode, paginação inicial e serial.
2. **HAL mínima própria:** abstrações explícitas para CPU, interrupções, temporizador, memória física/virtual e I/O. Nada disso é presumido equivalente à HAL NT.
3. **Camada de tipos/ABI NT:** tipos e layouts só entram quando sustentados pelo PDB, pelo binário e por referências cruzadas; cada item recebe proveniência e nível de confiança.
4. **Portabilidade seletiva:** rotinas decompiladas são portadas por subsistema, com contratos de entrada/saída, dependências e testes. Não se liga diretamente o dump C inteiro.
5. **Compatibilidade progressiva:** scheduler, dispatcher, objetos, memória e I/O seriam implementados em camadas próprias. Rotinas NT só podem substituir componentes depois de compatibilidade semântica e de ABI demonstrada.

## Limite fundamental

Um kernel que apenas imprime uma mensagem no QEMU não é um kernel NT aproximado em funcionamento. Para inicializar o Windows real, seria necessário produzir uma imagem NT compatível com o boot chain, ABI, HAL, importações, estruturas globais, drivers de boot e contratos internos da versão exata. Este protótipo não afirma resolver esses requisitos.

## Segurança de desenvolvimento

Teste somente em QEMU/VM descartável. Não grave a ISO em disco físico nem tente substituir `ntoskrnl.exe` de uma instalação Windows.
