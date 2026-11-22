# Declarações internas conservadoras

- Arquivos C: 4
- Definições FUN_ examinadas: 30606
- Protótipos existentes ignorados: 18743
- Declarações de encaminhamento adicionadas: 10820
- Conflitos de tipo de retorno omitidos: 0

O tipo de retorno vem da definição extraída. A lista de parâmetros fica intencionalmente sem protótipo para não afirmar aridades que a própria auditoria encontrou como conflitantes. Isso reduz declarações implícitas, mas não valida ABI nem resolve dependências externas.

## Motivos de exclusão

- invalid_return_type: 979
- unresolved_return_type: 59
- noncanonical_return_type: 14
