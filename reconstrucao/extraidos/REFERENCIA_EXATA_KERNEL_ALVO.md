# Referência exata do kernel-alvo

Dados coletados no computador de origem em 2026-11-22 e fornecidos pelo usuário.

## Sistema informado pelo usuário

- Edição: Windows 11 Pro (confirmada pelo usuário).
- Arquitetura: x64.
- Build do sistema reportada pelo PowerShell: 26300.
- `WindowsVersion` reportada: 2009 (campo legado; não identifica sozinho a versão comercial).

## ntoskrnl.exe

- Caminho: `C:\\Windows\\System32\\ntoskrnl.exe`
- Descrição: NT Kernel & System
- Nome interno/original: `ntkrnlmp.exe`
- Versão do arquivo: `10.0.26100.9974`
- SHA-256: `F6F275F67C7EF44FC2DF2D828658FB31EAFFD41018AC5A0FD9440E08D9912C30`

## Identidade CodeView do PDB

- Nome: `ntkrnlmp.pdb`
- GUID: `CE884F70-F5A9-025D-53DB-35D8BE8BFF79`
- Age: `1`
- Chave do servidor de símbolos: `CE884F70F5A9025D53DB35D8BE8BFF791`
- Caminho padrão no Microsoft Symbol Server:
  `https://msdl.microsoft.com/download/symbols/ntkrnlmp.pdb/CE884F70F5A9025D53DB35D8BE8BFF791/ntkrnlmp.pdb`

O PDB local não foi encontrado na coleta inicial. A identidade GUID+Age foi lida do diretório de depuração RSDS do executável, portanto é a identidade que deve ser usada para obter os símbolos correspondentes.

## Observação de compatibilidade

O build reportado do sistema (26300) e a versão do arquivo do kernel (26100.9974) são diferentes. Não se deve presumir que sejam o mesmo número de build. A reconstrução deve usar a identidade real do binário e validar cada artefato contra o GUID+Age acima.

Este registro documenta a proveniência do alvo; não afirma que o PDB já foi baixado, que o código compila ou que o kernel inicializa.
