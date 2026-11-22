# Investigação da identidade do PDB

A primeira execução do extrator leu `Age=6` no resumo produzido por `llvm-pdbutil dump -summary` e interrompeu a extração. Essa leitura, isoladamente, não foi suficiente para concluir que o PDB era incompatível.

## Validação independente pelo SymChk

Em 2026-11-22, o SymChk da Microsoft foi executado contra `C:\Windows\System32\ntoskrnl.exe` usando o servidor oficial de símbolos. Resultado fornecido pelo usuário:

- PDB: `ntkrnlmp.pdb`
- GUID: `CE884F70-F5A9-025D-53DB-35D8BE8BFF79`
- DBI Age: `1`
- `PDB Matched: TRUE`
- `DBG Matched: TRUE`
- `Type Info: TRUE`
- `Global syms: FALSE`
- `NumSyms: 0`
- Resultado: `SYMCHK: PASSED`

Portanto, o SymChk confirmou que o PDB corresponde ao executável e contém informações de tipos. A diferença observada pelo LLVM precisa ser discriminada entre os campos Age do PDB Info Stream e do DBI Stream; não deve ser usada, sem essa distinção, para rejeitar o arquivo.

## Consequência para a reconstrução

- A extração de tipos pode prosseguir após a validação correta do DBI Age.
- O SymChk reportou ausência de símbolos globais e `NumSyms: 0`; não se deve prometer que esse PDB fornecerá definições de globais ou símbolos privados.
- A extração de tipos e símbolos, por si só, não reconstrói os corpos das funções nem comprova compilação ou boot do kernel.
