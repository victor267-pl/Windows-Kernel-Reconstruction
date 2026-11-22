# Protótipos de funções Ghidra

- Assinaturas limpas examinadas: 32473
- Protótipos únicos gerados: 32463
- Nomes com assinaturas conflitantes omitidos: 2

Somente assinaturas cujo nome coincide com o rótulo Ghidra foram incluídas. Protótipos reproduzem o pseudocódigo e não certificam a ABI original.

## Assinaturas rejeitadas

- missing_return_type: 1093
- label_signature_mismatch: 217
- body_text_before_first_brace: 43

## Conflitos omitidos

- write_char: void write_char(byte param_1,longlong *param_2,int *param_3); | void write_char(wchar_t param_1,FILE *param_2,int *param_3);
- write_multi_char: void write_multi_char(undefined1 param_1,int param_2,undefined8 param_3,int *param_4); | void write_multi_char(undefined2 param_1,int param_2,undefined8 param_3,int *param_4);
