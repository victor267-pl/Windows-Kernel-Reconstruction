# Extração do PDB do kernel NT

- Arquivo: `reconstrucao/entrada/ntkrnlmp.pdb` (11563008 bytes)
- Ferramenta: `/usr/lib/llvm-21/bin/llvm-pdbutil` (Ubuntu LLVM version 21.1.8
  Optimized build.)
- GUID: `CE884F70-F5A9-025D-53DB-35D8BE8BFF79`
- Validação de correspondência pelo Microsoft SymChk: **PDB Matched=TRUE; DBG Matched=TRUE; DBI Age=1; Type Info=TRUE**.
- O resumo LLVM apresenta InfoStream Age=6. Esse valor não substitui o DBI Age informado pelo SymChk.

## Resultados dos dumps

- `types.txt`: 54559 linhas
- `globals.txt`: 7105 linhas
- `publics.txt`: 99181 linhas
- `symbols.txt`: 22913 linhas
- `modules.txt`: 8320 linhas
- `section_headers.txt`: 566 linhas
- `section_map.txt`: 115 linhas

A quantidade de linhas é uma métrica bruta, não uma contagem de tipos/símbolos únicos.
Foram extraídos a lista de compilands (-modules), os cabeçalhos de seção da imagem (-section-headers) e o mapa de seções do PDB (-section-map).
Esses metadados permitem converter endereços públicos segment:offset em RVAs sem supor que o índice de segmento coincide com a ordem das seções PE.
A saída vazia de símbolos não é interpretada como ausência comprovada de variáveis: o PDB está stripped e o SymChk reportou Global syms=FALSE e NumSyms=0.
O PDB foi reportado pelo SymChk com Global syms=FALSE e NumSyms=0; a disponibilidade
de globais e públicos deve ser interpretada conforme o conteúdo efetivo dos dumps.
Esta extração não reconstrói corpos de funções nem comprova compilação ou boot.
