# Declarações internas conservadoras

- Arquivos C: 4
- Definições FUN_ examinadas: 33823
- Protótipos existentes ignorados: 20643
- Declarações de encaminhamento adicionadas: 11811
- Conflitos de tipo de retorno omitidos: 0

O tipo de retorno vem da definição extraída. A lista de parâmetros fica intencionalmente sem protótipo para não afirmar aridades que a própria auditoria encontrou como conflitantes. Isso reduz declarações implícitas, mas não valida ABI nem resolve dependências externas.

## Motivos de exclusão

- invalid_return_type: 1093
- label_signature_mismatch: 257
- noncanonical_return_type: 60
- unresolved_return_type: 2
