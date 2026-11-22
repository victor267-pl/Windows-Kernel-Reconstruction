# Roadmap de aproximação incremental

Este roadmap separa duas metas que não devem ser confundidas: **ter um kernel de pesquisa que inicia** e **reconstruir um kernel compatível com Windows NT**.

| Marco | Entrega verificável | Critério de aceite |
|---|---|---|
| P0 — bootstrap | ELF x86-64, Multiboot2, long mode, paginação inicial e serial | ISO inicia em QEMU e imprime `BOOT_OK` |
| P1 — plataforma | GDT/TSS, IDT, exceções, PIC/APIC, timer e ACPI | testes de exceção/interrupção em QEMU |
| P2 — memória | mapa físico, allocator de páginas, mapeamento virtual e heap | testes de alocação, proteção e liberação |
| P3 — execução | context switch, threads, scheduler e sincronização | teste concorrente determinístico |
| P4 — modelo de objetos | objetos, handles, referência/vida útil e dispatcher de espera | testes de contrato e stress |
| P5 — integração seletiva | portar rotinas decompiladas com dependências satisfeitas | testes diferenciais e revisão de ABI por rotina |
| P6 — compatibilidade NT | boot chain, loader, HAL, importações, drivers de boot e contratos internos | inicialização da versão exata do Windows em VM |

## Regra para avançar rotinas do NT

Cada rotina selecionada precisa de:
- endereço e limites de função confirmados no PE;
- assinatura/protótipo sustentado por chamadas e, quando disponível, PDB;
- tipos e offsets confirmados por TPI/uso;
- globais e dependências catalogadas;
- convenção de chamada, IRQL, locking e efeitos colaterais documentados;
- testes de unidade ou harness que comparem comportamento observável com a referência.

Uma rotina sem dependências resolvidas fica isolada como evidência, não é ligada ao kernel executável. Não substituir chamadas desconhecidas por funções vazias que retornem sucesso.

## Decisão de arquitetura

O bootstrap usa GRUB/Multiboot2 para obter um primeiro ambiente x86-64 controlado. Isso não reproduz o bootloader do Windows. A camada de plataforma começa independente e só recebe código recuperado quando o contrato for compatível. A imagem produzida nos marcos P0–P5 é um kernel experimental autônomo; somente o marco P6 pode sustentar uma alegação de boot do Windows NT.
