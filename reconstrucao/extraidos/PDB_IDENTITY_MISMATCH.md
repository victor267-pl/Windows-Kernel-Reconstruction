# Divergência de identidade do PDB

A primeira execução de `extract_nt_pdb.py` leu o cabeçalho interno do PDB com LLVM 21.1.6.

| Campo | Identidade extraída de `ntoskrnl.exe` | PDB enviado |
|---|---|---|
| GUID | `CE884F70-F5A9-025D-53DB-35D8BE8BFF79` | `CE884F70-F5A9-025D-53DB-35D8BE8BFF79` |
| Age | `1` | `6` |

**Resultado: incompatível.** A igualdade do GUID não compensa a divergência de Age. Os dumps de tipos e símbolos não foram aceitos nem usados na reconstrução.

O PDB precisa ser obtido novamente pelo mecanismo de símbolos do Windows, que consulta a identidade completa registrada no executável. Depois da substituição, a validação deve confirmar GUID e Age antes de exportar os dados.
