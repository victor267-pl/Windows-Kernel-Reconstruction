# Grafo de tipos CodeView extraído do PDB

- Registros TPI: 12085
- UDTs: 4124
- UDTs completos com field list e tamanho: 1991
- UDTs forward declarations: 1713
- Registros LF_FIELDLIST: 2383

## Layouts confirmados diretamente no TPI

### _EPROCESS
- Índice: 0x1C75
- Tamanho: 2112 bytes
- Campos: 264
- Pcb — offset 0; tipo CodeView 6325 (_KPROCESS)
- ProcessLock — offset 456; tipo CodeView 4843 (_EX_PUSH_LOCK)
- UniqueProcessId — offset 464; tipo CodeView 1539 (void*)
- ActiveProcessLinks — offset 472; tipo CodeView 4201 (_LIST_ENTRY)
- RundownProtect — offset 488; tipo CodeView 5452 (_EX_RUNDOWN_REF)
- Flags2 — offset 496; tipo CodeView 34 (unsigned long)
- JobNotReallyActive — offset 496; tipo CodeView 4679 (sem nome resolvido)
- AccountingFolded — offset 496; tipo CodeView 4680 (sem nome resolvido)
- NewProcessReported — offset 496; tipo CodeView 4681 (sem nome resolvido)
- ExitProcessReported — offset 496; tipo CodeView 4682 (sem nome resolvido)
- ReportCommitChanges — offset 496; tipo CodeView 4683 (sem nome resolvido)
- LastReportMemory — offset 496; tipo CodeView 4684 (sem nome resolvido)

### _ETHREAD
- Índice: 0x1C42
- Tamanho: 1944 bytes
- Campos: 149
- Tcb — offset 0; tipo CodeView 4121 (_KTHREAD)
- CreateTime — offset 1216; tipo CodeView 4265 (_LARGE_INTEGER)
- ExitTime — offset 1224; tipo CodeView 4265 (_LARGE_INTEGER)
- KeyedWaitChain — offset 1224; tipo CodeView 4201 (_LIST_ENTRY)
- PostBlockList — offset 1240; tipo CodeView 4201 (_LIST_ENTRY)
- ForwardLinkShadow — offset 1240; tipo CodeView 1539 (void*)
- StartAddress — offset 1248; tipo CodeView 1539 (void*)
- TerminationPort — offset 1256; tipo CodeView 7220 (sem nome resolvido)
- ReaperLink — offset 1256; tipo CodeView 4358 (sem nome resolvido)
- KeyedWaitValue — offset 1256; tipo CodeView 1539 (void*)
- ActiveTimerListLock — offset 1264; tipo CodeView 35 (unsigned __int64)
- ActiveTimerListHead — offset 1272; tipo CodeView 4201 (_LIST_ENTRY)

### _KPROCESS
- Índice: 0x1B49
- Tamanho: 456 bytes
- Campos: 65
- Header — offset 0; tipo CodeView 4321 (_DISPATCHER_HEADER)
- ProfileListHead — offset 24; tipo CodeView 4201 (_LIST_ENTRY)
- DirectoryTableBase — offset 40; tipo CodeView 35 (unsigned __int64)
- ThreadListHead — offset 48; tipo CodeView 4201 (_LIST_ENTRY)
- ProcessLock — offset 64; tipo CodeView 34 (unsigned long)
- ProcessTimerDelay — offset 68; tipo CodeView 34 (unsigned long)
- DeepFreezeStartTime — offset 72; tipo CodeView 35 (unsigned __int64)
- Affinity — offset 80; tipo CodeView 4832 (sem nome resolvido)
- AutoBoostState — offset 88; tipo CodeView 6965 (_KAB_UM_PROCESS_CONTEXT)
- ReadyListHead — offset 104; tipo CodeView 4201 (_LIST_ENTRY)
- SwapListEntry — offset 120; tipo CodeView 4219 (_SINGLE_LIST_ENTRY)
- ActiveProcessors — offset 128; tipo CodeView 6967 (sem nome resolvido)

### _KTHREAD
- Índice: 0x1B72
- Tamanho: 1216 bytes
- Campos: 237
- Header — offset 0; tipo CodeView 4321 (_DISPATCHER_HEADER)
- SListFaultAddress — offset 24; tipo CodeView 1539 (void*)
- QuantumTarget — offset 32; tipo CodeView 35 (unsigned __int64)
- InitialStack — offset 40; tipo CodeView 1539 (void*)
- StackLimit — offset 48; tipo CodeView 4199 (sem nome resolvido)
- StackBase — offset 56; tipo CodeView 1539 (void*)
- ThreadLock — offset 64; tipo CodeView 35 (unsigned __int64)
- CycleTime — offset 72; tipo CodeView 4190 (sem nome resolvido)
- CurrentRunTime — offset 80; tipo CodeView 34 (unsigned long)
- ExpectedRunTime — offset 84; tipo CodeView 34 (unsigned long)
- KernelStack — offset 88; tipo CodeView 1539 (void*)
- StateSaveArea — offset 96; tipo CodeView 6986 (sem nome resolvido)

### _CONTEXT
- Índice: 0x1538
- Tamanho: 1232 bytes
- Campos: 64
- P1Home — offset 0; tipo CodeView 35 (unsigned __int64)
- P2Home — offset 8; tipo CodeView 35 (unsigned __int64)
- P3Home — offset 16; tipo CodeView 35 (unsigned __int64)
- P4Home — offset 24; tipo CodeView 35 (unsigned __int64)
- P5Home — offset 32; tipo CodeView 35 (unsigned __int64)
- P6Home — offset 40; tipo CodeView 35 (unsigned __int64)
- ContextFlags — offset 48; tipo CodeView 34 (unsigned long)
- MxCsr — offset 52; tipo CodeView 34 (unsigned long)
- SegCs — offset 56; tipo CodeView 33 (unsigned short)
- SegDs — offset 58; tipo CodeView 33 (unsigned short)
- SegEs — offset 60; tipo CodeView 33 (unsigned short)
- SegFs — offset 62; tipo CodeView 33 (unsigned short)

## Comparação com o manifesto de layouts existente

- _EPROCESS: tamanho PDB 2112 / manifesto 2112 bytes; tamanhos iguais=True; campos com nome+offset coincidentes=150; conflitos de offset=1
  - Conflito LastAppState: manifesto offset 1703; PDB offset(s) [1696]
- _ETHREAD: tamanho PDB 1944 / manifesto 1944 bytes; tamanhos iguais=True; campos com nome+offset coincidentes=66; conflitos de offset=0
- _KPROCESS: tamanho PDB 456 / manifesto 456 bytes; tamanhos iguais=True; campos com nome+offset coincidentes=52; conflitos de offset=0
- _KTHREAD: tamanho PDB 1216 / manifesto 1216 bytes; tamanhos iguais=True; campos com nome+offset coincidentes=108; conflitos de offset=0
- _CONTEXT: tamanho PDB 1232 / manifesto 1232 bytes; tamanhos iguais=True; campos com nome+offset coincidentes=45; conflitos de offset=0

## Limites

- Os registros preservam índices CodeView e offsets fornecidos pelo PDB.
- Este relatório não gera declarações C automaticamente nem resolve todos os tipos primitivos.
- Tipos forward são associados a definições completas apenas por unique name idêntico.
