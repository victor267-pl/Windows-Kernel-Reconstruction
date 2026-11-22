# Diagnóstico de compilação C

Teste diagnóstico, não equivalente a um build do kernel NT.
- Arquivos examinados: 4
- Arquivos com erros: 4
- Tipos não declarados distintos: 14
- Identificadores não declarados distintos: 27

## Tipos ausentes

- errno_t: 92
- rsize_t: 64
- PCONTEXT: 16
- BADSPACEBASE: 8
- NTSTATUS: 8
- _JBTYPE: 8
- unkint9: 8
- undefined: 8
- ULONGLONG: 4
- IMAGE_DOS_HEADER: 4
- HANDLE: 4
- _EXCEPTION_RECORD: 4
- _locale_t: 4
- wctype_t: 4

## Identificadores ausentes

- undefined: 4
- DAT_140e0a740: 3
- DAT_140fc7d20: 3
- FiberData: 3
- DAT_140f06d48: 3
- DAT_140fc62ac: 2
- DAT_140fc7ab8: 2
- unkuint9: 2
- DAT_140f06d38: 2
- DAT_140e0a590: 1
- DAT_140fc7b04: 1
- uint3: 1
- DAT_140fc7b10: 1
- DAT_140fc7ad0: 1
- DAT_140f0cf28: 1
- int7: 1
- DAT_140fc7c20: 1
- DAT_140fc6014: 1
- DAT_140fc7a90: 1
- DAT_14001bcb8: 1
- DAT_140f07240: 1
- DAT_14001a0b8: 1
- DAT_140f8c958: 1
- DAT_140f8adc0: 1
- DAT_140019790: 1
- DAT_140019778: 1
- DAT_140e66448: 1

## Classes de erro

- unknown_type: 236
- conflicting_type: 56
- undeclared_identifier: 46
- other_error: 92
- syntax_expected: 93
- implicit_function: 10
