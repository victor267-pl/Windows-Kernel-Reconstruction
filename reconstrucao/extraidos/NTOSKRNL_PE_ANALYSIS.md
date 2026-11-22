# Análise da imagem PE do ntoskrnl.exe

- Bytes: 13172176
- SHA-256: f6f275f67c7ef44fc2df2d828658fb31eaffd41018ac5a0fd9440e08d9912c30
- Machine: 0x8664
- ImageBase: 0x140000000
- Entry RVA: 0xb643c0
- Endereços DAT_ únicos: 12428
- Referências DAT_: 99277

## Identidade CodeView
- GUID CE884F70-F5A9-025D-53DB-35D8BE8BFF79; Age 1; PDB ntkrnlmp.pdb

## Seções
|Nome|RVA|VirtualSize|RawSize|
|---|---:|---:|---:|
|.rdata|0x1000|0xe0080|0xe1000|
|.pdata|0xe2000|0x6f8f4|0x70000|
|.idata|0x152000|0x297c|0x3000|
|.edata|0x155000|0x1b546|0x1c000|
|PROTDATA|0x171000|0x1|0x1000|
|GFIDS|0x172000|0xab5c|0xb000|
|Pad1|0x17d000|0x83000|0x0|
|.text|0x200000|0x506481|0x507000|
|PAGE|0x707000|0x45c698|0x45d000|
|PAGELK|0xb64000|0x2646c|0x27000|
|POOLCODE|0xb8b000|0x2529|0x3000|
|PAGEKD|0xb8e000|0x5dea|0x6000|
|PAGEVRFY|0xb94000|0x31509|0x32000|
|PAGEHDLS|0xbc6000|0x2380|0x3000|
|PAGEBGFX|0xbc9000|0x6964|0x7000|
|TRACESUP|0xbd0000|0x19a3|0x2000|
|PAGECMRC|0xbd2000|0x104d|0x2000|
|KVASCODE|0xbd4000|0x2498|0x3000|
|KSCP|0xbd7000|0x840|0x1000|
|DRVPRX|0xbd8000|0xb7|0x1000|
|fothk|0xbd9000|0x1000|0x1000|
|INITKDBG|0xbda000|0x19c36|0x1a000|
|MINIEX|0xbf4000|0x26bc|0x3000|
|INIT|0xbf7000|0xa373b|0xa4000|
|Pad2|0xc9b000|0x165000|0x0|
|.data|0xe00000|0x1c52a8|0x10000|
|ALMOSTRO|0xfc6000|0x9c80|0x2000|
|CACHEALI|0xfd0000|0x8d80|0x1000|
|PAGEDATA|0xfd9000|0x1b490|0x2000|
|PAGEVRFD|0xff5000|0x13c50|0xa000|
|INITDATA|0x1009000|0x214b4|0x1000|
|Pad3|0x102b000|0x1d5000|0x0|
|CFGRO|0x1200000|0x2040|0x3000|
|Pad4|0x1203000|0x1fd000|0x0|
|.rsrc|0x1400000|0x38cf0|0x39000|
|.reloc|0x1439000|0x1666c|0x17000|

## Estado físico dos endereços DAT_
Contagem por referências, não por símbolos. `loader_zero_fill` significa que o RVA está na cauda virtual da seção além dos bytes armazenados no arquivo; o loader PE fornece zeros nessa região.
- loader_zero_fill: 60700
- file_backed: 35339
- outside_image: 3238

## Referências DAT_ por seção
- .data: 62917
- ALMOSTRO: 19514
- .rdata: 5992
- PAGEDATA: 3031
- CFGRO: 2019
- PAGEVRFD: 875
- CACHEALI: 539
- PAGE: 539
- INITDATA: 382
- INIT: 81
- .text: 71
- PAGEVRFY: 39
- .idata: 14
- PROTDATA: 11
- PAGELK: 9
- KVASCODE: 2
- PAGEHDLS: 2
- MINIEX: 2

## 100 endereços DAT_ mais referenciados
|VA|RVA|Refs|Seção|Mapeamento|
|---|---|---:|---|---|
|0x140e0a740|0xe0a740|4151|.data|mapped_to_file|
|0x140fc8264|0xfc8264|3775|ALMOSTRO|virtual_only|
|0x140fc7d20|0xfc7d20|2320|ALMOSTRO|mapped_to_file|
|0x140f03f68|0xf03f68|2009|.data|virtual_only|
|0x141201840|0x1201840|1581|CFGRO|mapped_to_file|
|0x140f04b24|0xf04b24|1044|.data|virtual_only|
|0x140f04a80|0xf04a80|1017|.data|virtual_only|
|0x10|None|1012|None|outside_image|
|0x140fc7b04|0xfc7b04|881|ALMOSTRO|mapped_to_file|
|0x140fc7ab8|0xfc7ab8|867|ALMOSTRO|mapped_to_file|
|0x7fffffff0000|0x7ffebfff0000|852|None|outside_image|
|0x140fc62ac|0xfc62ac|696|ALMOSTRO|mapped_to_file|
|0x140e2dd00|0xe2dd00|652|.data|virtual_only|
|0x140fc7a88|0xfc7a88|605|ALMOSTRO|mapped_to_file|
|0x140e66448|0xe66448|599|.data|virtual_only|
|0x140fc9c40|0xfc9c40|593|ALMOSTRO|virtual_only|
|0x140e30108|0xe30108|545|.data|virtual_only|
|0x140f0e27c|0xf0e27c|520|.data|virtual_only|
|0x48|None|484|None|outside_image|
|0x140f0bb00|0xf0bb00|423|.data|virtual_only|
|0x140fc6000|0xfc6000|405|ALMOSTRO|mapped_to_file|
|0x140e07748|0xe07748|396|.data|mapped_to_file|
|0x140e38d80|0xe38d80|381|.data|virtual_only|
|0x140f8af78|0xf8af78|365|.data|virtual_only|
|0x140fc7a80|0xfc7a80|314|ALMOSTRO|mapped_to_file|
|0x140e37698|0xe37698|298|.data|virtual_only|
|0xff000087da|0xfdc00087da|267|None|outside_image|
|0x140fc7aa8|0xfc7aa8|257|ALMOSTRO|mapped_to_file|
|0x140f085e0|0xf085e0|250|.data|virtual_only|
|0x140fc6008|0xfc6008|245|ALMOSTRO|mapped_to_file|
|0x140f105a0|0xf105a0|236|.data|virtual_only|
|0x140fc7a90|0xfc7a90|226|ALMOSTRO|mapped_to_file|
|0x140010430|0x10430|226|.rdata|mapped_to_file|
|0x140f0d0c8|0xf0d0c8|222|.data|virtual_only|
|0x140e28380|0xe28380|217|.data|virtual_only|
|0x140fc7b48|0xfc7b48|213|ALMOSTRO|mapped_to_file|
|0x140011f40|0x11f40|212|.rdata|mapped_to_file|
|0x140fc82b0|0xfc82b0|210|ALMOSTRO|virtual_only|
|0x140f0e700|0xf0e700|197|.data|virtual_only|
|0x140fd98c8|0xfd98c8|196|PAGEDATA|mapped_to_file|
|0x140f23818|0xf23818|191|.data|virtual_only|
|0x140e67941|0xe67941|185|.data|virtual_only|
|0x140e2dd60|0xe2dd60|184|.data|virtual_only|
|0x140f04be0|0xf04be0|183|.data|virtual_only|
|0x140fc4310|0xfc4310|172|.data|virtual_only|
|0x140fc7e4c|0xfc7e4c|171|ALMOSTRO|mapped_to_file|
|0x140fc7ed8|0xfc7ed8|169|ALMOSTRO|mapped_to_file|
|0x140e09f68|0xe09f68|169|.data|mapped_to_file|
|0x140fc8800|0xfc8800|156|ALMOSTRO|virtual_only|
|0x140f47960|0xf47960|156|.data|virtual_only|
|0x140e68288|0xe68288|155|.data|virtual_only|
|0x140fd06c0|0xfd06c0|147|CACHEALI|mapped_to_file|
|0x140f8c958|0xf8c958|146|.data|virtual_only|
|0x140effc20|0xeffc20|137|.data|virtual_only|
|0x140fc6010|0xfc6010|134|ALMOSTRO|mapped_to_file|
|0x140f02618|0xf02618|133|.data|virtual_only|
|0x140ef7e10|0xef7e10|133|.data|virtual_only|
|0x140ef05f0|0xef05f0|131|.data|virtual_only|
|0x140f23810|0xf23810|130|.data|virtual_only|
|0x140f0f928|0xf0f928|130|.data|virtual_only|
|0x140fc7b40|0xfc7b40|129|ALMOSTRO|mapped_to_file|
|0x140e06c50|0xe06c50|128|.data|mapped_to_file|
|0x140fc7f78|0xfc7f78|125|ALMOSTRO|mapped_to_file|
|0x140fc7b30|0xfc7b30|125|ALMOSTRO|mapped_to_file|
|0x140e2dc44|0xe2dc44|123|.data|virtual_only|
|0xfffff6fb7dbed000|0xfffff6fa3dbed000|122|None|outside_image|
|0x140fc7ad0|0xfc7ad0|122|ALMOSTRO|mapped_to_file|
|0x140e35c80|0xe35c80|122|.data|virtual_only|
|0x140e2dc40|0xe2dc40|120|.data|virtual_only|
|0x140fc7ba8|0xfc7ba8|115|ALMOSTRO|mapped_to_file|
|0x1412018c0|0x12018c0|115|CFGRO|mapped_to_file|
|0x140fc82a0|0xfc82a0|115|ALMOSTRO|virtual_only|
|0xfffff6fb7dbedf68|0xfffff6fa3dbedf68|115|None|outside_image|
|0x140fc8120|0xfc8120|114|ALMOSTRO|virtual_only|
|0x140fc7d00|0xfc7d00|113|ALMOSTRO|mapped_to_file|
|0x140e67b01|0xe67b01|112|.data|virtual_only|
|0x140e660d0|0xe660d0|111|.data|virtual_only|
|0x140e37540|0xe37540|111|.data|virtual_only|
|0x140eff398|0xeff398|111|.data|virtual_only|
|0x140f07488|0xf07488|111|.data|virtual_only|
|0x140fc8280|0xfc8280|109|ALMOSTRO|virtual_only|
|0x140fc2e80|0xfc2e80|109|.data|virtual_only|
|0x140efaf20|0xefaf20|109|.data|virtual_only|
|0x140e0ec68|0xe0ec68|106|.data|mapped_to_file|
|0x140e68650|0xe68650|106|.data|virtual_only|
|0x140e67c70|0xe67c70|105|.data|virtual_only|
|0x140eff478|0xeff478|105|.data|virtual_only|
|0x140fc7aa0|0xfc7aa0|104|ALMOSTRO|mapped_to_file|
|0x140e376e8|0xe376e8|104|.data|virtual_only|
|0x140fc83c0|0xfc83c0|103|ALMOSTRO|virtual_only|
|0x140e66d40|0xe66d40|103|.data|virtual_only|
|0x140fc7d88|0xfc7d88|100|ALMOSTRO|mapped_to_file|
|0x140f8c980|0xf8c980|100|.data|virtual_only|
|0x140fc7b14|0xfc7b14|97|ALMOSTRO|mapped_to_file|
|0x140f90978|0xf90978|96|.data|virtual_only|
|0x140fc7b20|0xfc7b20|96|ALMOSTRO|mapped_to_file|
|0x140e66d78|0xe66d78|96|.data|virtual_only|
|0x140ffea00|0xffea00|94|PAGEVRFD|mapped_to_file|
|0x140f8f530|0xf8f530|92|.data|virtual_only|
|0x140fc8250|0xfc8250|92|ALMOSTRO|virtual_only|

## Interpretação e limites
- `file_backed`: há bytes correspondentes no executável; o preview é evidência bruta, não um tipo C.
- `loader_zero_fill`: endereço dentro de VirtualSize, mas além de SizeOfRawData; a imagem carregada começa com zeros nessa região.
- `outside_image`: endereço não pertence a uma seção mapeada pelo PE.
- O mapeamento não atribui tipos, nomes semânticos ou layouts C aos DAT_.
