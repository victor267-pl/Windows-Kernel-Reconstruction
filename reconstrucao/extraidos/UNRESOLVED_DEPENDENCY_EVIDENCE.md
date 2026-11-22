# Evidências de dependências ainda não resolvidas

Este relatório não cria declarações C. Ocorrências de DAT_ são usos; sem definição, seção, largura e valor do binário/PDB, não é seguro atribuir tipo ou inicializador.
- Símbolos DAT_: 12428 (99277 referências)
- Helpers Ghidra: 58 (42257 chamadas)
- Tipos Ghidra não resolvidos: 16 (318632 ocorrências)

## Símbolos globais mais usados

### DAT_140e0a740 — 4151 referências
- Acesso sintático aproximado: {'read': 4149, 'write': 2}
- decompiled_01.c:107 (FUN_140200008): `uStack_18 = DAT_140e0a740 ^ (ulonglong)auStack_2f8;`
- decompiled_01.c:565 (FUN_140200bc0): `uStack_30 = DAT_140e0a740 ^ (ulonglong)auStack_128;`
- decompiled_01.c:635 (FUN_140200dcc): `uStack_18 = DAT_140e0a740 ^ (ulonglong)auStack_68;`
### DAT_140fc8264 — 3775 referências
- Acesso sintático aproximado: {'read': 3774, 'write': 1}
- decompiled_02.c:327648 (FUN_1406bced0): `if (DAT_140fc8264 != 0) {`
- decompiled_02.c:327651 (FUN_1406bced0): `if ((uVar2 != 0) && ((uVar2 & DAT_140fc8264) != uVar2)) {`
- decompiled_02.c:327652 (FUN_1406bced0): `wrmsr(0x6a7,(ulonglong)(uVar2 & DAT_140fc8264) << 0x20 | uVar3 & 0xffffffff);`
### DAT_140fc7d20 — 2320 referências
- Acesso sintático aproximado: {'read': 2298, 'write': 22}
- decompiled_01.c:336 (FUN_140200740): `if (DAT_140fc7d20 != 0) {`
- decompiled_01.c:477 (FUN_140200a58): `if (DAT_140fc7d20 != 0) {`
- decompiled_01.c:590 (FUN_140200bc0): `if (((byte)in_CR8 < 2) && (DAT_140fc7d20 != 0)) {`
### DAT_140f03f68 — 2009 referências
- Acesso sintático aproximado: {'read': 2007, 'write': 2}
- decompiled_02.c:196814 (FUN_14061f940): `ExWaitForRundownProtectionRelease(&DAT_140f03f68);`
- decompiled_02.c:196817 (FUN_14061f940): `DAT_140f03f68 = 1;`
- decompiled_02.c:196984 (FUN_14061fb04): `DAT_140f03f68 = 0;`
### DAT_141201840 — 1581 referências
- Acesso sintático aproximado: {'write': 19, 'read': 1562}
- decompiled_01.c:5032 (FUN_1402061c0): `if (DAT_141201840 == '\0') {`
- decompiled_01.c:5313 (FUN_140206774): `bVar8 = DAT_141201840 == '\0';`
- decompiled_01.c:5424 (FUN_140206b78): `if (DAT_141201840 == '\0') {`
### DAT_140f04b24 — 1044 referências
- Acesso sintático aproximado: {'read': 1037, 'write': 7}
- decompiled_02.c:193079 (FUN_14061ae10): `if ((DAT_140f04b24 & 0x20) == 0) {`
- decompiled_02.c:193080 (FUN_14061ae10): `if ((DAT_140f04b24 >> 10 & 1) == 0) {`
- decompiled_02.c:193081 (FUN_14061ae10): `auStackX_8[0] = DAT_140f04b24 & 0xffffffe7;`
### DAT_140f04a80 — 1017 referências
- Acesso sintático aproximado: {'write': 256, 'read': 761}
- decompiled_01.c:529816 (FUN_1404a7cc8): `if ((DAT_140f04a80 == '\0') && (iVar2 = MmIsDriverVerifying(), iVar2 == 0)) {`
- decompiled_01.c:529854 (FUN_1404a7d28): `if ((DAT_140f04a80 == '\0') && (iVar2 = MmIsDriverVerifying(), iVar2 == 0)) {`
- decompiled_01.c:549153 (FUN_1404bc638): `if (((DAT_140f04a80 != '\0') && (param_1 != 0)) && (DAT_140ffea18 == 0)) {`
### DAT_00000010 — 1012 referências
- Acesso sintático aproximado: {'read': 1011, 'write': 1}
- decompiled_01.c:12563 (FUN_14020f6a0): `puStack_1a0 = &DAT_00000010;`
- decompiled_01.c:132358 (FUN_1402b75b0): `if (piStack_2a0 == (int *)&DAT_00000010) {`
- decompiled_01.c:354716 (FUN_1403db314): `puVar19 = &DAT_00000010;`
### DAT_140fc7b04 — 881 referências
- Acesso sintático aproximado: {'read': 881}
- decompiled_01.c:405 (FUN_140200820): `if ((((uint)DAT_140fc7b04 & 0x1000) != 0) && (cVar2 != '\0')) {`
- decompiled_01.c:2629 (FUN_140203198): `bVar10 = bVar10 & (byte)((uint)DAT_140fc7b04 >> 0xc) & 1;`
- decompiled_01.c:7773 (FUN_140209534): `if ((((uint)DAT_140fc7b04 & 0x40000) != 0) && ((uVar16 & 3) != 0)) {`
### DAT_140fc7ab8 — 867 referências
- Acesso sintático aproximado: {'read': 854, 'write': 13}
- decompiled_01.c:364 (FUN_1402007a8): `if ((((DAT_140fc62ac & uVar4) == 0) && ((DAT_140fc7ab8 & 0x40) != 0)) &&`
- decompiled_01.c:526 (KeSetSelectedCpuSetsThread): `if ((((DAT_140fc62ac & uVar8) == 0) && ((DAT_140fc7ab8 & 0x40) != 0)) &&`
- decompiled_01.c:717 (FUN_140200e70): `if (((DAT_140fc62ac & uVar10) == 0) && ((DAT_140fc7ab8 & 0x40) != 0)) {`
### DAT_7fffffff0000 — 852 referências
- Acesso sintático aproximado: {'read': 852}
- decompiled_01.c:55829 (FUN_140251940): `puVar14 = &DAT_7fffffff0000;`
- decompiled_01.c:55830 (FUN_140251940): `if (param_2 < &DAT_7fffffff0000) {`
- decompiled_01.c:56022 (FUN_140251d40): `puVar3 = (undefined8 *)&DAT_7fffffff0000;`
### DAT_140fc62ac — 696 referências
- Acesso sintático aproximado: {'read': 695, 'write': 1}
- decompiled_01.c:364 (FUN_1402007a8): `if ((((DAT_140fc62ac & uVar4) == 0) && ((DAT_140fc7ab8 & 0x40) != 0)) &&`
- decompiled_01.c:526 (KeSetSelectedCpuSetsThread): `if ((((DAT_140fc62ac & uVar8) == 0) && ((DAT_140fc7ab8 & 0x40) != 0)) &&`
- decompiled_01.c:717 (FUN_140200e70): `if (((DAT_140fc62ac & uVar10) == 0) && ((DAT_140fc7ab8 & 0x40) != 0)) {`
### DAT_140e2dd00 — 652 referências
- Acesso sintático aproximado: {'read': 639, 'write': 13}
- decompiled_01.c:13580 (FUN_140210e10): `if (DAT_140e2dd00 != 0) {`
- decompiled_01.c:13582 (FUN_140210e10): `uStack_138 = uStack_138 & ~DAT_140e2dd00;`
- decompiled_01.c:13803 (FUN_140211400): `if (DAT_140e2dd00 != 0) {`
### DAT_140fc7a88 — 605 referências
- Acesso sintático aproximado: {'read': 545, 'write': 60}
- decompiled_01.c:13879 (FUN_140211400): `if ((((DAT_140fc7a88 >> 0x24 & 1) != 0) && ((uVar7 & 0x20) == 0)) &&`
- decompiled_01.c:17672 (FUN_1402169b0): `(((DAT_140e30208 != (void *)0x0 && ((DAT_140fc7a88 >> 0x28 & 1) != 0)) &&`
- decompiled_01.c:17710 (FUN_1402169b0): `if ((((DAT_140fc7a88 >> 0x24 & 1) != 0) && ((uVar9 & 0x20) == 0)) &&`
### DAT_140e66448 — 599 referências
- Acesso sintático aproximado: {'read': 579, 'write': 20}
- decompiled_02.c:99329 (FUN_1405a5c70): `iVar1 = FUN_1408dfddc(DAT_140e66448,0xf,&pwStack_58);`
- decompiled_02.c:104634 (FUN_1405abcc4): `iVar1 = FUN_1408d2370(DAT_140e66448,*(undefined8 *)(param_1 + 0x30),1,0);`
- decompiled_02.c:104654 (FUN_1405abcc4): `iVar1 = FUN_1408d2370(DAT_140e66448,auStack_68,2);`
### DAT_140fc9c40 — 593 referências
- Acesso sintático aproximado: {'read': 592, 'write': 1}
- decompiled_01.c:2581 (FUN_140203198): `lVar4 = (&DAT_140fc9c40)[uVar18];`
- decompiled_01.c:7529 (FUN_140209410): `lVar2 = (&DAT_140fc9c40)`
- decompiled_01.c:7542 (FUN_140209410): `((&DAT_140fc9c40)`
### DAT_140e30108 — 545 referências
- Acesso sintático aproximado: {'read': 540, 'write': 5}
- decompiled_01.c:14894 (FUN_1402127f0): `(DAT_140e30108 +`
- decompiled_01.c:15394 (FUN_140213970): `((((*(longlong *)(DAT_140e30108 + (ulonglong)((uint)(uStack_e >> 0x1b) & 0x3ff) * 8) ==`
- decompiled_01.c:16711 (FUN_140215540): `(DAT_140e30108 +`
### DAT_140f0e27c — 520 referências
- Acesso sintático aproximado: {'read': 492, 'write': 28}
- decompiled_01.c:15697 (FUN_140214060): `if (((DAT_140fc7b04._2_1_ & 0x21) == 0) || (DAT_140f0e27c != 0)) {`
- decompiled_01.c:15804 (FUN_140214060): `if (((DAT_140fc7b04._2_1_ & 1) == 0) || (DAT_140f0e27c != 0)) {`
- decompiled_01.c:23400 (FUN_1402203d0): `if (((DAT_140fc7b04._2_1_ & 0x21) == 0) || (DAT_140f0e27c != 0)) {`
### DAT_00000048 — 484 referências
- Acesso sintático aproximado: {'read': 484}
- decompiled_02.c:321078 (FUN_1406bb4b0): `puVar5 = (ulonglong *)&DAT_00000048;`
- decompiled_02.c:322458 (FUN_1406bb940): `puVar5 = (ulonglong *)&DAT_00000048;`
- decompiled_02.c:324059 (FUN_1406bc080): `puVar3 = (ulonglong *)&DAT_00000048;`
### DAT_140f0bb00 — 423 referências
- Acesso sintático aproximado: {'read': 422, 'write': 1}
- decompiled_01.c:638 (FUN_140200dcc): `cVar1 = EtwEventEnabled(DAT_140f0bb00,&DAT_140010400);`
- decompiled_01.c:647 (FUN_140200dcc): `EtwWriteEx(DAT_140f0bb00,&DAT_140010400,0);`
- decompiled_01.c:60204 (FUN_140256bf0): `(DAT_140f0bb00 != 0)) &&`
### DAT_140fc6000 — 405 referências
- Acesso sintático aproximado: {'read': 399, 'write': 6}
- decompiled_01.c:2479 (FUN_140202ef0): `if (DAT_140fc6000 != 0) {`
- decompiled_01.c:2535 (FUN_140202ef0): `puVar4 = (undefined2 *)(ulonglong)(uint)DAT_140fc6000;`
- decompiled_01.c:2537 (FUN_140202ef0): `} while (uVar5 < DAT_140fc6000);`
### DAT_140e07748 — 396 referências
- Acesso sintático aproximado: {'read': 395, 'write': 1}
- decompiled_01.c:106317 (FUN_140293618): `if (5 < DAT_140e07748) {`
- decompiled_01.c:107029 (FUN_1402940f4): `if ((DAT_140e07748 < 6) || (cVar2 = FUN_14042b0b0(&DAT_140e07748,0x400000000000), cVar2 == '\0')`
- decompiled_01.c:107029 (FUN_1402940f4): `if ((DAT_140e07748 < 6) || (cVar2 = FUN_14042b0b0(&DAT_140e07748,0x400000000000), cVar2 == '\0')`
### DAT_140e38d80 — 381 referências
- Acesso sintático aproximado: {'read': 381}
- decompiled_01.c:2386 (FUN_140202ce0): `FUN_140202ef0(&DAT_140e38d80,1);`
- decompiled_01.c:2463 (FUN_140202ef0): `puVar4 = &DAT_140e38d80;`
- decompiled_01.c:2464 (FUN_140202ef0): `if (param_1 == &DAT_140e38d80) {`
### DAT_140f8af78 — 365 referências
- Acesso sintático aproximado: {'read': 362, 'write': 3}
- decompiled_02.c:102806 (FUN_1405a9ec4): `lVar4 = *(longlong *)(DAT_140f8af78 + 0x90);`
- decompiled_02.c:102807 (FUN_1405a9ec4): `uVar7 = (ulonglong)*(uint *)(DAT_140f8af78 + 0xb4);`
- decompiled_02.c:102837 (FUN_1405a9ec4): `uVar3 = *(uint *)(DAT_140f8af78 + 0xb4);`
### DAT_140fc7a80 — 314 referências
- Acesso sintático aproximado: {'read': 303, 'write': 11}
- decompiled_01.c:2579 (FUN_140203198): `if (DAT_140fc7a80 != 0) {`
- decompiled_01.c:2747 (FUN_140203198): `} while (uVar17 < DAT_140fc7a80);`
- decompiled_01.c:4905 (KeInvalidateRangeAllCaches): `if (1 < DAT_140fc7a80) {`
### DAT_140e37698 — 298 referências
- Acesso sintático aproximado: {'write': 18, 'read': 280}
- decompiled_01.c:102396 (FUN_14028ed00): `if (DAT_140e37698 == (uint *)0x0) {`
- decompiled_01.c:102418 (FUN_14028ed00): `if (*DAT_140e37698 < 6) {`
- decompiled_01.c:102422 (FUN_14028ed00): `if ((DAT_140e37698[4] >> 0xb & 1) != 0) {`
### DAT_ff000087da — 267 referências
- Acesso sintático aproximado: {'read': 267}
- decompiled_02.c:340571 (FUN_1406bf280): `if (DAT_ff000087da != '\0') {`
- decompiled_02.c:340955 (FUN_1406bfa90): `if (DAT_ff000087da != '\0') {`
- decompiled_02.c:341261 (FUN_1406bfbe8): `if (DAT_ff000087da != '\0') {`
### DAT_140fc7aa8 — 257 referências
- Acesso sintático aproximado: {'read': 255, 'write': 2}
- decompiled_01.c:58539 (FUN_140254a00): `uVar12 = *(uint *)(DAT_140fc7aa8 + 0x11a8);`
- decompiled_01.c:58550 (FUN_140254a00): `lVar6 = uVar7 * 0x20 + 0x11cc + DAT_140fc7aa8;`
- decompiled_01.c:58555 (FUN_140254a00): `(ulonglong)*(byte *)(DAT_140fc7aa8 + 0x1199 + uVar7 * 2) * 8;`
### DAT_140f085e0 — 250 referências
- Acesso sintático aproximado: {'read': 248, 'write': 2}
- decompiled_01.c:1761 (FUN_1402021f4): `cVar1 = EtwEventEnabled(DAT_140f085e0,puVar2);`
- decompiled_01.c:1773 (FUN_1402021f4): `EtwWriteEx(DAT_140f085e0,puVar2,0,0);`
- decompiled_01.c:107155 (FUN_140294404): `cVar1 = EtwEventEnabled(DAT_140f085e0,&DAT_1400106c8);`
### DAT_140fc6008 — 245 referências
- Acesso sintático aproximado: {'read': 244, 'write': 1}
- decompiled_01.c:7359 (FUN_140208ef8): `*(short *)(DAT_140fc6008 + 0x36a) = *(short *)(DAT_140fc6008 + 0x36a) + (short)uVar12;`
- decompiled_01.c:7359 (FUN_140208ef8): `*(short *)(DAT_140fc6008 + 0x36a) = *(short *)(DAT_140fc6008 + 0x36a) + (short)uVar12;`
- decompiled_01.c:195054 (FUN_14030d5fc): `*(short *)(DAT_140fc6008 + 0x36a) = *(short *)(DAT_140fc6008 + 0x36a) + 1;`
### DAT_140f105a0 — 236 referências
- Acesso sintático aproximado: {'read': 78, 'write': 158}
- decompiled_02.c:132195 (FUN_1405ceb20): `uVar3 = (ulonglong)(DAT_140f105a0 + 1U & 0x3f);`
- decompiled_02.c:132196 (FUN_1405ceb20): `DAT_140f105a0 = DAT_140f105a0 + 1;`
- decompiled_02.c:132196 (FUN_1405ceb20): `DAT_140f105a0 = DAT_140f105a0 + 1;`
### DAT_140010430 — 226 referências
- Acesso sintático aproximado: {'read': 226}
- decompiled_01.c:4987 (FUN_140206024): `uVar1 = DAT_140010430;`
- decompiled_01.c:13588 (FUN_140210e10): `*param_2 = DAT_140010430;`
- decompiled_01.c:17257 (FUN_140215e80): `*puVar5 = DAT_140010430;`
### DAT_140fc7a90 — 226 referências
- Acesso sintático aproximado: {'read': 176, 'write': 50}
- decompiled_01.c:571 (FUN_140200bc0): `if ((DAT_140fc7a90 & 8) == 0) {`
- decompiled_01.c:1935 (FUN_140202530): `if (((char)DAT_140fc7a90 < '\0') && (1 < DAT_140fc6018)) {`
- decompiled_01.c:1936 (FUN_140202530): `if (((DAT_140fc7a90 >> 8 & 0xf) + 4 < 0xf) && ((char)DAT_140fc7ab8 < '\0')) {`
### DAT_140f0d0c8 — 222 referências
- Acesso sintático aproximado: {'read': 220, 'write': 2}
- decompiled_01.c:514203 (FUN_1404967c4): `uStack_6c = *(uint *)(DAT_140f0d0c8 + 0xd4);`
- decompiled_01.c:544800 (FUN_1404b7b2c): `lVar1 = DAT_140f0d0c8;`
- decompiled_01.c:544810 (FUN_1404b7b2c): `*param_2 = *(int *)(DAT_140f0d0c8 + 0x48);`
### DAT_140e28380 — 217 referências
- Acesso sintático aproximado: {'read': 216, 'write': 1}
- decompiled_01.c:23725 (FUN_140220d08): `if ((code *)(param_1[4] ^ DAT_140e28380 ^ (ulonglong)param_1) == FUN_140221550) {`
- decompiled_01.c:23898 (FUN_140220e40): `if ((code *)(param_1[4] ^ DAT_140e28380 ^ (ulonglong)param_1) == FUN_140221550`
- decompiled_01.c:24103 (FUN_140221550): `if ((ulonglong *)(*(ulonglong *)(uVar1 + 0x10) ^ DAT_140e28380 ^ uVar1) == param_1) {`
### DAT_140fc7b48 — 213 referências
- Acesso sintático aproximado: {'read': 151, 'write': 62}
- decompiled_01.c:370957 (FUN_1403ef010): `uVar11 = DAT_140fc7b48._4_4_;`
- decompiled_01.c:370958 (FUN_1403ef010): `uVar17 = (uint)DAT_140fc7b48;`
- decompiled_01.c:370960 (FUN_1403ef010): `uStack_190 = (uint)DAT_140fc7b48;`
### DAT_140011f40 — 212 referências
- Acesso sintático aproximado: {'read': 212}
- decompiled_01.c:18446 (FUN_140218220): `uVar14 = uVar14 & ~((&DAT_140011f40)[uVar11] - 1);`
- decompiled_01.c:18556 (FUN_140218220): `(puVar15 + (-(&DAT_140011f40)[uVar6] & uVar14) * -6 + 0x44000000000) >>`
- decompiled_01.c:18670 (FUN_140218220): `~((&DAT_140011f40)[uVar14] - 1);`
### DAT_140fc82b0 — 210 referências
- Acesso sintático aproximado: {'read': 206, 'write': 4}
- decompiled_02.c:520084 (FUN_1406ce800): `if ((DAT_140fc82b0 <= (uint)pcStack_168) ||`
- decompiled_02.c:520085 (FUN_1406ce800): `(uVar13 = (uint)*(char *)(DAT_140fc82a0 + (ulonglong)DAT_140fc82b0 * 4 + uVar8),`
- decompiled_02.c:520583 (FUN_1406ce920): `if (uVar6 < DAT_140fc82b0) {`
### DAT_140f0e700 — 197 referências
- Acesso sintático aproximado: {'read': 124, 'write': 73}
- decompiled_01.c:111282 (FUN_14029936c): `lVar7 = FUN_1402f5ef0(&DAT_140f0e700,0,0);`
- decompiled_01.c:111284 (FUN_14029936c): `uVar5 = DAT_140f0e700 & 1;`
- decompiled_01.c:111285 (FUN_14029936c): `DAT_140f0e700 = DAT_140f0e700 | 1;`
### DAT_140fd98c8 — 196 referências
- Acesso sintático aproximado: {'read': 196}
- decompiled_03.c:1665 (FUN_1407818b0): `FUN_140a7333c(&DAT_140fd98c8,FUN_140787250,0);`
- decompiled_03.c:3381 (FUN_140783a08): `if (5 < DAT_140fd98c8) {`
- decompiled_03.c:3383 (FUN_140783a08): `cVar1 = FUN_14042b0b0(&DAT_140fd98c8,1);`
### DAT_140f23818 — 191 referências
- Acesso sintático aproximado: {'read': 189, 'write': 2}
- decompiled_01.c:1490 (FUN_140201bf0): `*(uint *)(DAT_140f23818 +`
- decompiled_01.c:3356 (FUN_140203fd4): `*(uint *)(DAT_140f23818 + (ulonglong)((uint)uVar6 * 0x40 + ((uint)uVar4 & 0xff)) * 4);`
- decompiled_01.c:7530 (FUN_140209410): `[*(uint *)(DAT_140f23818 +`
### DAT_140e67941 — 185 referências
- Acesso sintático aproximado: {'read': 174, 'write': 11}
- decompiled_01.c:636 (FUN_140200dcc): `if (DAT_140e67941 != '\0') {`
- decompiled_01.c:60203 (FUN_140256bf0): `(auStack_1a0[0] = 0x534f5248, auStack_1a8[0] = uVar8, DAT_140e67941 != '\0')) &&`
- decompiled_01.c:104844 (FUN_140291be4): `if (DAT_140e67941 != '\0') {`
### DAT_140e2dd60 — 184 referências
- Acesso sintático aproximado: {'read': 183, 'write': 1}
- decompiled_01.c:14872 (FUN_1402127f0): `if ((uVar14 <= DAT_140e2dd60) &&`
- decompiled_01.c:14929 (FUN_1402127f0): `if ((DAT_140e2dd60 < uVar21) ||`
- decompiled_01.c:17511 (FUN_1402169b0): `if ((DAT_140e2dd60 < plVar18) ||`
### DAT_140f04be0 — 183 referências
- Acesso sintático aproximado: {'read': 173, 'write': 10}
- decompiled_01.c:39534 (IoReleaseRemoveLockEx): `(((DAT_140f04be0 & 0x800) == 0 ||`
- decompiled_01.c:75787 (IoReuseIrp): `if ((DAT_140f04be0 & 0x10) != 0) {`
- decompiled_01.c:114095 (FUN_14029c398): `if ((DAT_140f04be0 & 0x10) == 0) {`
### DAT_140fc4310 — 172 referências
- Acesso sintático aproximado: {'read': 165, 'write': 7}
- decompiled_01.c:5935 (FUN_1402072f0): `lVar26 = DAT_140fc4310;`
- decompiled_01.c:5942 (FUN_1402072f0): `if (*(int *)(DAT_140fc4310 + 0xe4) == 5) {`
- decompiled_01.c:5945 (FUN_1402072f0): `if (*(int *)(DAT_140fc4310 + 0xdc) == 0x40) {`
### DAT_140fc7e4c — 171 referências
- Acesso sintático aproximado: {'read': 171}
- decompiled_01.c:44157 (FUN_140240370): `*(byte *)(lVar6 + -0x18) ^ DAT_140fc7e4c) * 8),lVar6,1,`
- decompiled_01.c:44587 (FUN_140240af0): `DAT_140fc7e4c) * 8);`
- decompiled_01.c:55845 (FUN_140251940): `(ulonglong)(byte)(*(byte *)(lStack_68 + -0x18) ^ bVar7 ^ DAT_140fc7e4c) * 8) ==`
### DAT_140e09f68 — 169 referências
- Acesso sintático aproximado: {'read': 169}
- decompiled_01.c:476903 (FUN_14046d6c4): `if (5 < DAT_140e09f68) {`
- decompiled_01.c:560281 (FUN_1404c9160): `if ((int)lVar4 + 4U < DAT_140e09f68) {`
- decompiled_01.c:560282 (FUN_1404c9160): `cVar2 = FUN_14042b0b0(&DAT_140e09f68,0x400000000000);`
### DAT_140fc7ed8 — 169 referências
- Acesso sintático aproximado: {'read': 168, 'write': 1}
- decompiled_01.c:26615 (FUN_1402249dc): `FUN_1406d1200((uVar8 + 0x800000000000 >> 3) + DAT_140fc7ed8,0x8a);`
- decompiled_01.c:26641 (FUN_1402249dc): `pbVar6 = (byte *)((uVar1 + 0x800000000000 >> 3) + DAT_140fc7ed8);`
- decompiled_01.c:27657 (FUN_1402260b0): `iVar5 = FUN_140688d60((uVar12 + 0x800000000000 >> 3) + DAT_140fc7ed8,`
### DAT_140f47960 — 156 referências
- Acesso sintático aproximado: {'read': 138, 'write': 18}
- decompiled_01.c:602582 (FUN_1404fef40): `if ((((DAT_ff00009122 & 2) != 0) && ((uVar1 & 0x300) != 0)) && ((DAT_140f47960 & 2) == 0)) {`
- decompiled_01.c:602625 (FUN_1404fefc0): `if ((DAT_140f47960 & 2) == 0) {`
- decompiled_01.c:602659 (FUN_1404fefc0): `if ((((DAT_ff00009122 & 2) != 0) && ((uVar1 & 0x300) != 0)) && ((DAT_140f47960 & 2) == 0)) {`
### DAT_140fc8800 — 156 referências
- Acesso sintático aproximado: {'read': 156}
- decompiled_01.c:44154 (FUN_140240370): `(&DAT_140fc8800 +`
- decompiled_01.c:44584 (FUN_140240af0): `(&DAT_140fc8800 +`
- decompiled_01.c:55844 (FUN_140251940): `(&DAT_140fc8800 +`
### DAT_140e68288 — 155 referências
- Acesso sintático aproximado: {'read': 150, 'write': 5}
- decompiled_01.c:152985 (FUN_1402d5210): `((DAT_140e68288 & 0x400000) == 0)) {`
- decompiled_01.c:375530 (FUN_1403f4d04): `((uVar4 < 0x40 && (((uint)(&DAT_140e68288)[uVar4 >> 5] >> ((byte)uVar4 & 0x1f) & 1) != 0)`
- decompiled_01.c:529893 (MmIsDriverVerifying): `if ((DAT_140e68288 != 0) && (*(longlong *)(param_1 + 0x28) != 0)) {`
### DAT_140fd06c0 — 147 referências
- Acesso sintático aproximado: {'read': 146, 'write': 1}
- decompiled_01.c:80448 (FUN_140273850): `psVar5 = (short *)(&DAT_140fd06c0)[uVar40];`
- decompiled_01.c:81738 (FUN_140275f48): `lStack_438 = (&DAT_140fd06c0)[uVar15];`
- decompiled_01.c:81739 (FUN_140275f48): `lStack_440 = (&DAT_140fd06c0)[*(ushort *)((longlong)pppuVar5 + 0x8a)];`
### DAT_140f8c958 — 146 referências
- Acesso sintático aproximado: {'read': 145, 'write': 1}
- decompiled_01.c:484941 (FUN_140476288): `param_1 = *(longlong *)(DAT_140f8c958 + 0x20);`
- decompiled_01.c:485189 (FUN_140476690): `uVar13 = *(undefined8 *)(DAT_140f8c958 + 0x20);`
- decompiled_01.c:485196 (FUN_140476690): `FUN_1408e8bc0(DAT_140f8c958,0,&uStack_70,~-(cVar21 != '\0') & 3);`
### DAT_140effc20 — 137 referências
- Acesso sintático aproximado: {'read': 137}
- decompiled_01.c:422262 (FUN_14042df38): `KeWaitForMutexObject(&DAT_140effc20,0,0,0,0);`
- decompiled_01.c:422274 (FUN_14042df38): `FUN_14034bbf0(&DAT_140effc20,1,4,auStackX_10);`
- decompiled_01.c:474131 (FUN_14046a69c): `KeWaitForMutexObject(&DAT_140effc20,0,0,0,0);`
### DAT_140fc6010 — 134 referências
- Acesso sintático aproximado: {'read': 126, 'write': 8}
- decompiled_01.c:44141 (FUN_140240370): `if (DAT_140fc6010 != 0) {`
- decompiled_01.c:44173 (FUN_140240370): `if (DAT_140fc6010 != 0) {`
- decompiled_01.c:44571 (FUN_140240af0): `if (DAT_140fc6010 != 0) {`
### DAT_140ef7e10 — 133 referências
- Acesso sintático aproximado: {'write': 38, 'read': 95}
- decompiled_03.c:86841 (FUN_1407eca50): `DAT_140ef7e10 = 0;`
- decompiled_03.c:191620 (FUN_140873140): `ppppppplVar11 = (longlong *******)FUN_1402f5ef0(&DAT_140ef7e10,0,0);`
- decompiled_03.c:191622 (FUN_140873140): `uVar21 = (ulonglong)DAT_140ef7e10 & 1;`
### DAT_140f02618 — 133 referências
- Acesso sintático aproximado: {'read': 123, 'write': 10}
- decompiled_01.c:12327 (FUN_14020f2b0): `if (((DAT_140f02618 != (int *)0x0) && (*DAT_140f02618 != 0)) &&`
- decompiled_01.c:12327 (FUN_14020f2b0): `if (((DAT_140f02618 != (int *)0x0) && (*DAT_140f02618 != 0)) &&`
- decompiled_01.c:12328 (FUN_14020f2b0): `(cVar3 = FUN_14042b0b0(DAT_140f02618,0x100), cVar3 != '\0')) {`
### DAT_140ef05f0 — 131 referências
- Acesso sintático aproximado: {'read': 77, 'write': 54}
- decompiled_01.c:369085 (FUN_1403ecf98): `if ((DAT_140ef05f0 >> 0xb & 1) != 0) {`
- decompiled_01.c:369089 (FUN_1403ecf98): `uVar10 = DAT_140ef05f0 & 0x8000;`
- decompiled_01.c:491833 (FUN_14047db40): `if (((((param_3 & 1) != 0) || ((DAT_140ef05f0 & 0x1000000) != 0)) ||`
### DAT_140f0f928 — 130 referências
- Acesso sintático aproximado: {'read': 93, 'write': 37}
- decompiled_02.c:644672 (FUN_1407595a4): `lVar2 = FUN_1402f5ef0(&DAT_140f0f928,0,0);`
- decompiled_02.c:644674 (FUN_1407595a4): `uVar1 = DAT_140f0f928 & 1;`
- decompiled_02.c:644675 (FUN_1407595a4): `DAT_140f0f928 = DAT_140f0f928 | 1;`
### DAT_140f23810 — 130 referências
- Acesso sintático aproximado: {'read': 128, 'write': 2}
- decompiled_01.c:1908 (KeRemoveProcessorAffinityEx): `uVar1 = *(uint *)(DAT_140f23810 + (ulonglong)param_2 * 4);`
- decompiled_01.c:2028 (FUN_140202738): `uVar1 = *(uint *)(DAT_140f23810 + uVar5 * 4);`
- decompiled_01.c:2057 (KeCheckProcessorAffinityEx): `uVar1 = *(uint *)(DAT_140f23810 + (param_2 & 0xffffffff) * 4);`
### DAT_140fc7b40 — 129 referências
- Acesso sintático aproximado: {'read': 111, 'write': 18}
- decompiled_01.c:8328 (FUN_14020a0c8): `if ((DAT_140fc7b40 & 0x200000) == 0) {`
- decompiled_01.c:9975 (FUN_14020bfa0): `if ((DAT_140fc7b40 & 0x200000) == 0) {`
- decompiled_01.c:10012 (FUN_14020bfa0): `if ((DAT_140fc7b40 & 0x200000) == 0) {`
### DAT_140e06c50 — 128 referências
- Acesso sintático aproximado: {'read': 128}
- decompiled_01.c:306471 (FUN_14039fec8): `if (5 < DAT_140e06c50) {`
- decompiled_01.c:306480 (FUN_14039fec8): `FUN_1403a0f70(&DAT_140e06c50,&DAT_1400455ec,0,0);`
- decompiled_01.c:306494 (FUN_14039fec8): `if (5 < DAT_140e06c50) {`
### DAT_140fc7b30 — 125 referências
- Acesso sintático aproximado: {'read': 124, 'write': 1}
- decompiled_01.c:4958 (FUN_140206024): `if ((DAT_140fc7b30 >> 0x23 & 1) == 0) {`
- decompiled_01.c:5069 (KeInvalidateRangeAllCachesNoIpi): `if ((DAT_140fc7b30 >> 0x23 & 1) == 0) {`
- decompiled_01.c:35315 (FUN_140231e80): `if (((uStack_104 & 0x1ff80000) != 0x10000000) || ((DAT_140fc7b30 >> 0x25 & 1) == 0))`
### DAT_140fc7f78 — 125 referências
- Acesso sintático aproximado: {'read': 124, 'write': 1}
- decompiled_01.c:56275 (KeSetTimer): `bVar6 = (byte)DAT_140fc7f78 & 0x3f;`
- decompiled_01.c:56276 (KeSetTimer): `uVar17 = (uVar17 >> bVar6 | uVar17 << 0x40 - bVar6) ^ DAT_140fc7f78;`
- decompiled_01.c:56827 (FUN_140252900): `bVar11 = (byte)DAT_140fc7f78 & 0x3f;`
### DAT_140e2dc44 — 123 referências
- Acesso sintático aproximado: {'read': 122, 'write': 1}
- decompiled_01.c:33309 (FUN_14022f6f0): `if (((DAT_140e2dc44 < DAT_140e2dc40) ||`
- decompiled_01.c:33311 (FUN_14022f6f0): `uVar8 < *puVar3)) || ((DAT_140e2dc40 != DAT_140e2dc44 && (puVar3[2] <= uVar8)))) {`
- decompiled_01.c:33313 (FUN_14022f6f0): `uVar6 = DAT_140e2dc44;`
### DAT_140e35c80 — 122 referências
- Acesso sintático aproximado: {'read': 120, 'write': 2}
- decompiled_01.c:19279 (FUN_140219a50): `if ((uVar7 <= DAT_140e2dd60) || ((DAT_140e35c80 <= uVar7 && (uVar7 < DAT_140e35c80 + 0x800)))) {`
- decompiled_01.c:19279 (FUN_140219a50): `if ((uVar7 <= DAT_140e2dd60) || ((DAT_140e35c80 <= uVar7 && (uVar7 < DAT_140e35c80 + 0x800)))) {`
- decompiled_01.c:22257 (FUN_14021e780): `((uVar4 = DAT_140e35c80, param_1 < DAT_140e35c80 ||`
### DAT_140fc7ad0 — 122 referências
- Acesso sintático aproximado: {'read': 113, 'write': 9}
- decompiled_01.c:429 (FUN_140200950): `if (DAT_140fc7ad0 != (uint *)0x0) {`
- decompiled_01.c:432 (FUN_140200950): `if (*DAT_140fc7ad0 != 0) {`
- decompiled_01.c:434 (FUN_140200950): `puVar1 = DAT_140fc7ad0;`
### DAT_fffff6fb7dbed000 — 122 referências
- Acesso sintático aproximado: {'read': 122}
- decompiled_01.c:19453 (FUN_140219c20): `param_2[2] = (ulonglong)&DAT_fffff6fb7dbed000;`
- decompiled_01.c:19569 (FUN_140219c20): `param_2[2] = (ulonglong)&DAT_fffff6fb7dbed000;`
- decompiled_01.c:21738 (FUN_14021d680): `if ((((*(uint *)(uVar2 + 0xb8) & 0xf) == 0) && (&DAT_fffff6fb7dbed000 <= puVar11)) &&`
### DAT_140e2dc40 — 120 referências
- Acesso sintático aproximado: {'read': 89, 'write': 31}
- decompiled_01.c:33309 (FUN_14022f6f0): `if (((DAT_140e2dc44 < DAT_140e2dc40) ||`
- decompiled_01.c:33310 (FUN_14022f6f0): `(puVar3 = (ulonglong *)((longlong)(int)DAT_140e2dc40 * 0x10 + DAT_140e2dca0),`
- decompiled_01.c:33311 (FUN_14022f6f0): `uVar8 < *puVar3)) || ((DAT_140e2dc40 != DAT_140e2dc44 && (puVar3[2] <= uVar8)))) {`
### DAT_140fc7ba8 — 115 referências
- Acesso sintático aproximado: {'read': 108, 'write': 7}
- decompiled_01.c:277714 (FUN_14037c8f0): `for (puVar3 = DAT_140fc7ba8; (undefined8 **)puVar3 != &DAT_140fc7ba8;`
- decompiled_01.c:277714 (FUN_14037c8f0): `for (puVar3 = DAT_140fc7ba8; (undefined8 **)puVar3 != &DAT_140fc7ba8;`
- decompiled_01.c:277719 (FUN_14037c8f0): `for (puVar3 = DAT_140fc7ba8; (undefined8 **)puVar3 != &DAT_140fc7ba8;`
### DAT_140fc82a0 — 115 referências
- Acesso sintático aproximado: {'read': 112, 'write': 3}
- decompiled_02.c:520085 (FUN_1406ce800): `(uVar13 = (uint)*(char *)(DAT_140fc82a0 + (ulonglong)DAT_140fc82b0 * 4 + uVar8),`
- decompiled_02.c:520584 (FUN_1406ce920): `uVar6 = (uint)*(char *)(DAT_140fc82a0 + (ulonglong)DAT_140fc82b0 * 4 + uVar7);`
- decompiled_02.c:521103 (FUN_1406ce929): `uVar6 = (uint)*(char *)(DAT_140fc82a0 + (ulonglong)DAT_140fc82b0 * 4 + uVar7);`
### DAT_1412018c0 — 115 referências
- Acesso sintático aproximado: {'read': 114, 'write': 1}
- decompiled_01.c:59923 (FUN_140256650): `iVar11 = FUN_1406b7430((*(int *)(DAT_1412018c0 + (ulonglong)*(ushort *)(param_4 + 2) * 4)`
- decompiled_01.c:59924 (FUN_140256650): `>> 4) + DAT_1412018c0,param_4 + 8);`
- decompiled_02.c:520040 (FUN_1406ce800): `puVar16 = &DAT_1412018c0;`
### DAT_fffff6fb7dbedf68 — 115 referências
- Acesso sintático aproximado: {'read': 115}
- decompiled_01.c:17449 (FUN_1402169b0): `if (param_1 == (ulonglong *)&DAT_fffff6fb7dbedf68) {`
- decompiled_01.c:18901 (FUN_140218c60): `if (puVar10 != &DAT_fffff6fb7dbedf68) {`
- decompiled_01.c:20549 (FUN_14021baa0): `if (puStack_90 == &DAT_fffff6fb7dbedf68) {`
### DAT_140fc8120 — 114 referências
- Acesso sintático aproximado: {'read': 114}
- decompiled_01.c:1274 (FUN_140201958): `(iVar2 = KeIsSubsetAffinityEx(param_3,&DAT_140fc8120), iVar2 != 0)) {`
- decompiled_01.c:11974 (FUN_14020eaa0): `if (DAT_140fc8120 <= uVar14) {`
- decompiled_01.c:11975 (FUN_14020eaa0): `uVar13 = DAT_140fc8120;`
### DAT_140fc7d00 — 113 referências
- Acesso sintático aproximado: {'read': 103, 'write': 10}
- decompiled_01.c:358630 (FUN_1403e0270): `, (DAT_140fc7d00 & 2) != 0)) {`
- decompiled_01.c:570437 (FUN_1404d6490): `DAT_140fc7d00 = DAT_140fc7d00 | 4;`
- decompiled_01.c:570437 (FUN_1404d6490): `DAT_140fc7d00 = DAT_140fc7d00 | 4;`
### DAT_140e67b01 — 112 referências
- Acesso sintático aproximado: {'read': 106, 'write': 6}
- decompiled_01.c:1758 (FUN_1402021f4): `if (DAT_140e67b01 != '\0') {`
- decompiled_01.c:107152 (FUN_140294404): `if (DAT_140e67b01 != '\0') {`
- decompiled_01.c:108377 (FUN_140295650): `if ((DAT_140e67b01 != '\0') && (cVar13 = EtwEventEnabled(DAT_140f085e0,puVar18), cVar13 != '\0'))`
### DAT_140e37540 — 111 referências
- Acesso sintático aproximado: {'read': 104, 'write': 7}
- decompiled_01.c:14754 (FUN_1402127f0): `bVar5 = ExAcquireSpinLockExclusive(&DAT_140e37540);`
- decompiled_01.c:14758 (FUN_1402127f0): `FUN_140268ac0(&DAT_140e37540,uVar18 & 0xff);`
- decompiled_01.c:23241 (FUN_14022014c): `ExAcquireSpinLockExclusiveAtDpcLevel(&DAT_140e37540);`
### DAT_140e660d0 — 111 referências
- Acesso sintático aproximado: {'read': 103, 'write': 8}
- decompiled_02.c:84347 (FUN_140593068): `if ((*(int *)(DAT_140e660d0 + 0x538) != 4) || (*(longlong *)(DAT_140e660d0 + 0x530) == 0)) {`
- decompiled_02.c:84347 (FUN_140593068): `if ((*(int *)(DAT_140e660d0 + 0x538) != 4) || (*(longlong *)(DAT_140e660d0 + 0x530) == 0)) {`
- decompiled_02.c:84350 (FUN_140593068): `lVar10 = *(longlong *)(DAT_140e660d0 + 0x530) + -0x2000;`
### DAT_140eff398 — 111 referências
- Acesso sintático aproximado: {'read': 80, 'write': 31}
- decompiled_02.c:587063 (FUN_14070bb8c): `lVar5 = FUN_1402f5ef0(&DAT_140eff398,0,0);`
- decompiled_02.c:587065 (FUN_14070bb8c): `uVar2 = DAT_140eff398 & 1;`
- decompiled_02.c:587066 (FUN_14070bb8c): `DAT_140eff398 = DAT_140eff398 | 1;`
### DAT_140f07488 — 111 referências
- Acesso sintático aproximado: {'read': 80, 'write': 31}
- decompiled_01.c:528377 (FUN_1404a62ec): `lVar3 = FUN_1402f5ef0(&DAT_140f07488,0,0);`
- decompiled_01.c:528379 (FUN_1404a62ec): `uVar11 = DAT_140f07488 & 1;`
- decompiled_01.c:528380 (FUN_1404a62ec): `DAT_140f07488 = DAT_140f07488 | 1;`
### DAT_140efaf20 — 109 referências
- Acesso sintático aproximado: {'read': 59, 'write': 50}
- decompiled_01.c:75975 (IoFreeIrp): `uVar7 = ExAcquireSpinLockShared(&DAT_140efaf20);`
- decompiled_01.c:76006 (IoFreeIrp): `DAT_140efaf20 = DAT_140efaf20 & 0xbfffffff;`
- decompiled_01.c:76006 (IoFreeIrp): `DAT_140efaf20 = DAT_140efaf20 & 0xbfffffff;`
### DAT_140fc2e80 — 109 referências
- Acesso sintático aproximado: {'read': 80, 'write': 29}
- decompiled_02.c:592204 (FUN_1407118d0): `lVar7 = FUN_1402f5ef0(&DAT_140fc2e80,0,0);`
- decompiled_02.c:592206 (FUN_1407118d0): `uVar2 = DAT_140fc2e80 & 1;`
- decompiled_02.c:592207 (FUN_1407118d0): `DAT_140fc2e80 = DAT_140fc2e80 | 1;`
### DAT_140fc8280 — 109 referências
- Acesso sintático aproximado: {'read': 108, 'write': 1}
- decompiled_02.c:520042 (FUN_1406ce800): `(puVar16 = &DAT_140fc8280, (*(uint *)((longlong)pvVar15 + 0x78) & 0x200000) != 0)) {`
- decompiled_02.c:520542 (FUN_1406ce920): `(puVar14 = &DAT_140fc8280, (*(uint *)((longlong)pvVar8 + 0x78) & 0x200000) != 0)) {`
- decompiled_02.c:521061 (FUN_1406ce929): `(puVar14 = &DAT_140fc8280, (*(uint *)((longlong)pvVar8 + 0x78) & 0x200000) != 0)) {`
### DAT_140e0ec68 — 106 referências
- Acesso sintático aproximado: {'read': 35, 'write': 71}
- decompiled_01.c:318555 (FUN_1403afbb4): `lVar7 = DAT_140e0ec68 + DAT_140013138;`
- decompiled_01.c:318556 (FUN_1403afbb4): `DAT_140e0ec68 = DAT_140e0ec68 + DAT_140013138;`
- decompiled_01.c:318556 (FUN_1403afbb4): `DAT_140e0ec68 = DAT_140e0ec68 + DAT_140013138;`
### DAT_140e68650 — 106 referências
- Acesso sintático aproximado: {'read': 100, 'write': 6}
- decompiled_01.c:543881 (FUN_1404b6e2c): `if ((DAT_140e68650 != 0) && (*(longlong *)(DAT_140e68650 + 8) != 0)) {`
- decompiled_01.c:543881 (FUN_1404b6e2c): `if ((DAT_140e68650 != 0) && (*(longlong *)(DAT_140e68650 + 8) != 0)) {`
- decompiled_02.c:244515 (HeadlessDispatch): `if ((DAT_140e68650 == 0) || (*(longlong *)(DAT_140e68650 + 8) == 0)) {`
### DAT_140e67c70 — 105 referências
- Acesso sintático aproximado: {'read': 104, 'write': 1}
- decompiled_02.c:183222 (FUN_14060e940): `(uint)*(byte *)(DAT_140fdab50 + 1) + (uint)*(byte *)(DAT_140e67c70 + 1)) * 4;`
- decompiled_02.c:183228 (FUN_14060e940): `if ((((-1 < iVar2) && (iVar2 = RtlAddAccessAllowedAce(lVar1,2,1,DAT_140e67c70), -1 < iVar2))`
- decompiled_02.c:237782 (FUN_1406570e4): `lVar1 = DAT_140e67c70;`
### DAT_140eff478 — 105 referências
- Acesso sintático aproximado: {'read': 104, 'write': 1}
- decompiled_01.c:88221 (FUN_14027d470): `if (DAT_140eff478 != 0) {`
- decompiled_01.c:88222 (FUN_14027d470): `lVar17 = *(longlong *)(DAT_140eff478 + 0x20);`
- decompiled_01.c:88226 (FUN_14027d470): `if (*(short *)(DAT_140eff478 + 0x66) != 0) {`
### DAT_140e376e8 — 104 referências
- Acesso sintático aproximado: {'read': 104}
- decompiled_01.c:16892 (FUN_140215e80): `if (((param_1 == &DAT_140e376e8) && (uVar15 < 0x41)) &&`
- decompiled_01.c:16909 (FUN_140215e80): `if ((param_1 == &DAT_140e376e8) || (param_1 == (ulonglong *)&DAT_140e35f00)) {`
- decompiled_01.c:17811 (FUN_140217590): `puVar13 = &DAT_140e376e8;`
### DAT_140fc7aa0 — 104 referências
- Acesso sintático aproximado: {'read': 103, 'write': 1}
- decompiled_01.c:5478 (FUN_140206ba8): `lVar18 = (ulonglong)DAT_140fc7aa0 * DAT_140f234a8;`
- decompiled_01.c:5490 (FUN_140206ba8): `FUN_140352ecc(param_1,uVar12,lVar18,DAT_140fc7aa0,4,1,0);`
- decompiled_01.c:55142 (FUN_140250c30): `lVar1 = (ulonglong)DAT_140fc7aa0 * lVar1;`
### DAT_140e66d40 — 103 referências
- Acesso sintático aproximado: {'read': 76, 'write': 27}
- decompiled_02.c:640154 (KseRegisterShimEx): `lVar7 = FUN_1402f5ef0(&DAT_140e66d40,0,0);`
- decompiled_02.c:640156 (KseRegisterShimEx): `uVar5 = DAT_140e66d40 & 1;`
- decompiled_02.c:640157 (KseRegisterShimEx): `DAT_140e66d40 = DAT_140e66d40 | 1;`
### DAT_140fc83c0 — 103 referências
- Acesso sintático aproximado: {'read': 103}
- decompiled_02.c:520043 (FUN_1406ce800): `puVar16 = (undefined8 *)&DAT_140fc83c0;`
- decompiled_02.c:520543 (FUN_1406ce920): `puVar14 = (undefined8 *)&DAT_140fc83c0;`
- decompiled_02.c:521062 (FUN_1406ce929): `puVar14 = (undefined8 *)&DAT_140fc83c0;`
### DAT_140f8c980 — 100 referências
- Acesso sintático aproximado: {'read': 100}
- decompiled_02.c:612663 (FUN_14072df70): `ExAcquireResourceSharedLite(&DAT_140f8c980,1);`
- decompiled_02.c:612688 (FUN_14072df70): `ExReleaseResourceLite(&DAT_140f8c980);`
- decompiled_02.c:613735 (IoReportRootDevice): `ExAcquireResourceExclusiveLite(&DAT_140f8c980,1);`
### DAT_140fc7d88 — 100 referências
- Acesso sintático aproximado: {'write': 18, 'read': 82}
- decompiled_01.c:5959 (FUN_1402072f0): `if (*DAT_140fc7d88 == 0) {`
- decompiled_01.c:5970 (FUN_1402072f0): `piVar23 = DAT_140fc7d88;`
- decompiled_01.c:5973 (FUN_1402072f0): `auVar12._0_8_ = *(ulonglong *)(DAT_140fc7d88 + 2);`
### DAT_140fc7b14 — 97 referências
- Acesso sintático aproximado: {'read': 97}
- decompiled_01.c:822 (FUN_140200fd8): `if ((DAT_140fc7b14 & 0x20) != 0) {`
- decompiled_01.c:1035 (FUN_140201280): `if ((iVar9 != iVar6) && ((DAT_140fc7b14 & 0x20) != 0)) {`
- decompiled_01.c:1955 (FUN_140202530): `bVar4 = (DAT_140fc7b14 & 0x10) != 0;`
### DAT_140e66d78 — 96 referências
- Acesso sintático aproximado: {'read': 96}
- decompiled_02.c:132198 (FUN_1405ceb20): `uVar1 = DAT_140e66d78;`
- decompiled_02.c:640139 (KseRegisterShimEx): `if ((DAT_140e66d78 & 2) != 0) {`
- decompiled_02.c:640205 (KseRegisterShimEx): `if ((DAT_140e66d78 & 1) != 0) {`
### DAT_140f90978 — 96 referências
- Acesso sintático aproximado: {'read': 91, 'write': 5}
- decompiled_01.c:554581 (HalQueryMaximumProcessorCount): `if (((((iVar1 == 1) || (iVar1 == 2)) || (iVar1 == 3)) || (iVar1 == 4)) && (DAT_140f90978 != 0)) {`
- decompiled_01.c:554582 (HalQueryMaximumProcessorCount): `uVar3 = *(uint *)(DAT_140f90978 + 0x3c);`
- decompiled_02.c:20146 (HalStartDynamicProcessor): `if (((iVar4 != 4) && (DAT_140fc1f81 == '\0')) && (DAT_140f90978 != (longlong *)0x0)) {`
### DAT_140fc7b20 — 96 referências
- Acesso sintático aproximado: {'read': 91, 'write': 5}
- decompiled_01.c:148054 (FUN_1402cf4ac): `puVar3 = (undefined8 *)(DAT_140fc7b20 + 0x10);`
- decompiled_01.c:152962 (FUN_1402d5210): `puVar14 = (undefined8 *)(DAT_140fc7b20 + 0x10);`
- decompiled_02.c:111746 (FUN_1405b68b8): `puVar6 = (undefined8 *)(DAT_140fc7b20 + 0x10);`
### DAT_140ffea00 — 94 referências
- Acesso sintático aproximado: {'read': 89, 'write': 5}
- decompiled_02.c:196312 (FUN_14061f048): `plVar13 = (longlong *)(*(longlong *)(DAT_140ffea00 + 0x10) + lVar12);`
- decompiled_02.c:196315 (FUN_14061f048): `(iVar8 = FUN_140b9c128((lVar6 + 2) * 0x10 + DAT_140ffea00,param_1,param_2), iVar8 == 0)) {`
- decompiled_02.c:196374 (FUN_14061f1a8): `plVar8 = (longlong *)(*(longlong *)(DAT_140ffea00 + 0x4010) + lVar4 * 0x10);`
### DAT_140f8f530 — 92 referências
- Acesso sintático aproximado: {'read': 65, 'write': 27}
- decompiled_02.c:70352 (FUN_140582120): `lVar4 = FUN_1402f5ef0(&DAT_140f8f530,0,0);`
- decompiled_02.c:70354 (FUN_140582120): `uVar1 = DAT_140f8f530 & 1;`
- decompiled_02.c:70355 (FUN_140582120): `DAT_140f8f530 = DAT_140f8f530 | 1;`
### DAT_140fc8250 — 92 referências
- Acesso sintático aproximado: {'read': 91, 'write': 1}
- decompiled_01.c:56268 (KeSetTimer): `uVar17 = param_3 ^ DAT_140fc8250;`
- decompiled_01.c:56822 (FUN_140252900): `uVar29 = (ulonglong)puVar26 ^ DAT_140fc8250;`
- decompiled_01.c:57540 (FUN_140253ad0): `uVar18 = param_5 ^ DAT_140fc8250;`

## Helpers decompilador

### LOCK — 13214 chamadas
- decompiled_01.c:356 (FUN_1402007a8): `LOCK();`
- decompiled_01.c:518 (KeSetSelectedCpuSetsThread): `LOCK();`
- decompiled_01.c:693 (FUN_140200e70): `LOCK();`
- decompiled_01.c:704 (FUN_140200e70): `LOCK();`
### UNLOCK — 13212 chamadas
- decompiled_01.c:360 (FUN_1402007a8): `UNLOCK();`
- decompiled_01.c:522 (KeSetSelectedCpuSetsThread): `UNLOCK();`
- decompiled_01.c:695 (FUN_140200e70): `UNLOCK();`
- decompiled_01.c:706 (FUN_140200e70): `UNLOCK();`
### CONCAT44 — 6776 chamadas
- decompiled_01.c:575 (FUN_140200bc0): `uStack_100 = (void *)CONCAT44(1,(undefined4)uStack_100);`
- decompiled_01.c:583 (FUN_140200bc0): `uStack_108 = CONCAT44(uStack_108._4_4_,2);`
- decompiled_01.c:598 (FUN_140200bc0): `uStack_108 = CONCAT44(uStack_108._4_4_,1);`
- decompiled_01.c:1820 (FUN_1402022c4): `uStackX_8 = CONCAT44(puVar2[5],(uint)uStackX_8);`
### SUB168 — 2662 chamadas
- decompiled_01.c:5976 (FUN_1402072f0): `pcVar35 = (code *)(SUB168(auVar12 * auVar21,8) + *(longlong *)(DAT_140fc7d88 + 4));`
- decompiled_01.c:6052 (FUN_1402072f0): `pcVar35 = (code *)(_DAT_fffff780000003b8 + SUB168(auVar4 * auVar13,8));`
- decompiled_01.c:6094 (FUN_1402072f0): `pcVar35 = (code *)(SUB168(auVar10 * auVar19,8) + *(longlong *)(DAT_140fc7d88 + 4));`
- decompiled_01.c:6172 (FUN_1402072f0): `lVar30 = SUB168(auVar5 * auVar14,8);`
### CONCAT71 — 2192 chamadas
- decompiled_01.c:445 (FUN_140200950): `FUN_140201790(puVar1 + uVar6 * 0x70 + 0x14,CONCAT71((int7)(uVar4 >> 8),4),1);`
- decompiled_01.c:574 (FUN_140200bc0): `uStack_100 = (void *)CONCAT71(uStack_100._1_7_,uVar2);`
- decompiled_01.c:589 (FUN_140200bc0): `uStack_100 = (void *)CONCAT71(uStack_100._1_7_,(byte)in_CR8);`
- decompiled_01.c:1118 (FUN_140201708): `FUN_140201790(DAT_140fc7ad0 + uVar3 * 0x70 + 0x14,CONCAT71((int7)(uVar3 >> 8),2),`
### CONCAT22 — 621 chamadas
- decompiled_01.c:3063 (FUN_140203980): `uStack_268 = CONCAT22(uStack_268._2_2_,uVar1 + 1);`
- decompiled_01.c:16533 (FUN_1402152dc): `uStackX_10 = CONCAT22((short)((uint)*(undefined4 *)(param_1 + 0x20) >> 0x10),`
- decompiled_01.c:16581 (FUN_1402153d0): `uStackX_8 = CONCAT22((short)((uint)*(undefined4 *)(param_1 + 0x20) >> 0x10),(short)uStackX_8 + 1`
- decompiled_01.c:16609 (FUN_140215488): `uStackX_8 = CONCAT22((short)((uint)*(undefined4 *)(param_1 + 0x20) >> 0x10),(short)uStackX_8 + 1`
### ZEXT816 — 560 chamadas
- decompiled_01.c:35445 (FUN_140231e80): `lVar34 = SUB168(ZEXT816(0x2539d7e9177b21cb) * auVar7,8);`
- decompiled_01.c:55198 (FUN_140250d48): `lVar4 = SUB168(ZEXT816(0x4f8b588e368f0847) * auVar2,8);`
- decompiled_01.c:101117 (FUN_14028d5e0): `lVar8 = SUB168(ZEXT816(0x47ae147ae147ae15) * auVar2,8);`
- decompiled_01.c:101140 (FUN_14028d5e0): `lVar8 = SUB168(ZEXT816(0x47ae147ae147ae15) * auVar3,8);`
### CONCAT14 — 500 chamadas
- decompiled_01.c:10671 (FUN_14020cbe0): `uStack_d0._0_5_ = CONCAT14((char)uStack_6c,(undefined4)uStack_d0);`
- decompiled_01.c:11017 (FUN_14020cbe0): `uStack_130._0_5_ = CONCAT14((char)uStack_9c,uVar12);`
- decompiled_01.c:11043 (FUN_14020cbe0): `uStack_130._0_5_ = CONCAT14((char)uStack_98,uVar12);`
- decompiled_01.c:11319 (FUN_14020cbe0): `uStack_158._0_5_ = CONCAT14((char)uStack_88,uVar12);`
### CONCAT62 — 401 chamadas
- decompiled_01.c:15430 (FUN_140213970): `if ((CONCAT62(uStack_e,uStack_10) & 0xffffffffff) == 0x3ffffffffe) {`
- decompiled_01.c:31436 (FUN_14022c080): `uStack_d8 = CONCAT62(uStack_d8._2_6_,2);`
- decompiled_01.c:31465 (FUN_14022c080): `uStack_d8 = CONCAT62(uStack_d8._2_6_,2);`
- decompiled_01.c:35860 (FUN_1402334a0): `uStack_b8 = CONCAT62(uStack_b8._2_6_,*puVar2);`
### CONCAT31 — 397 chamadas
- decompiled_01.c:407 (FUN_140200820): `CONCAT31((uint3)(*(uint *)(param_1 + 0x74) >> 0xb),`
- decompiled_01.c:2732 (FUN_140203198): `CONCAT31((uint3)(*(uint *)(lVar5 + 0x74) >> 0xb),`
- decompiled_01.c:3298 (FUN_140203e64): `CONCAT31((uint3)(DAT_140fc7a90 >> 0x15),(char)(DAT_140fc7a90 >> 0xd)) & 0xffffff01`
- decompiled_01.c:6997 (FUN_1402088e0): `CONCAT31((uint3)(*(uint *)(param_1 + 0x78) >> 0x11),`
### CARRY8 — 306 chamadas
- decompiled_01.c:642170 (FUN_140530940): `uVar3 = (ulonglong)(CARRY8(uVar3,uVar1) || CARRY8(uVar6,(ulonglong)(uStackX_24 != 0)));`
- decompiled_01.c:642170 (FUN_140530940): `uVar3 = (ulonglong)(CARRY8(uVar3,uVar1) || CARRY8(uVar6,(ulonglong)(uStackX_24 != 0)));`
- decompiled_01.c:642174 (FUN_140530940): `uVar3 = (ulonglong)(CARRY8(uVar4,uVar281) || CARRY8(uVar6,uVar3));`
- decompiled_01.c:642174 (FUN_140530940): `uVar3 = (ulonglong)(CARRY8(uVar4,uVar281) || CARRY8(uVar6,uVar3));`
### SUB161 — 268 chamadas
- decompiled_01.c:604853 (strstr): `uVar3 = (ushort)(SUB161(auVar16 >> 7,0) & 1) | (ushort)(SUB161(auVar16 >> 0xf,0) & 1) << 1 |`
- decompiled_01.c:604853 (strstr): `uVar3 = (ushort)(SUB161(auVar16 >> 7,0) & 1) | (ushort)(SUB161(auVar16 >> 0xf,0) & 1) << 1 |`
- decompiled_01.c:604854 (strstr): `(ushort)(SUB161(auVar16 >> 0x17,0) & 1) << 2 |`
- decompiled_01.c:604855 (strstr): `(ushort)(SUB161(auVar16 >> 0x1f,0) & 1) << 3 |`
### CONCAT11 — 186 chamadas
- decompiled_01.c:1808 (FUN_1402022c4): `uVar3 = CONCAT11(cVar9,uVar4);`
- decompiled_01.c:17306 (FUN_140215e80): `uStack_ff = CONCAT11(uStack_ff._1_1_,1);`
- decompiled_01.c:56114 (FUN_140251fcc): `return CONCAT11((char)uVar2,bVar3 & 7 | bVar6 << 3);`
- decompiled_01.c:57839 (FUN_140254108): `uStack_28._0_2_ = CONCAT11(param_3,(undefined1)uStack_28);`
### POPCOUNT — 136 chamadas
- decompiled_01.c:12069 (FUN_14020eaa0): `*(int *)plVar17 = (int)POPCOUNT(uStack_88);`
- decompiled_01.c:17899 (FUN_140217590): `DAT_140e37740 = DAT_140e37740 - POPCOUNT(~uVar18);`
- decompiled_01.c:73057 (KeQueryActiveProcessorCountEx): `return POPCOUNT((&DAT_140fc8128)[param_1]);`
- decompiled_01.c:79318 (FUN_140272b80): `uVar4 = (int)uVar15 + (int)POPCOUNT(*puVar9);`
### CONCAT12 — 133 chamadas
- decompiled_01.c:9501 (FUN_14020b590): `uStack_b8 = (uint)CONCAT12(1,(undefined2)uStack_b8);`
- decompiled_01.c:9652 (FUN_14020b590): `uStack_b4 = (uint)CONCAT12(1,(undefined2)uStack_b4);`
- decompiled_01.c:17684 (FUN_1402169b0): `CONCAT12((byte)((uint)uVar21 >> 0x10) & 0x3f | (char)uVar10 << 6,(short)uVar21);`
- decompiled_01.c:19914 (FUN_14021aae0): `uStackX_8 = CONCAT13(uStackX_8._3_1_,CONCAT12(uVar11,(undefined2)uStackX_8)) & 0xffefffff;`
### CONCAT13 — 104 chamadas
- decompiled_01.c:16284 (FUN_140214d40): `uStackX_10 = CONCAT13((char)param_2 + '0',0x526d73);`
- decompiled_01.c:17686 (FUN_1402169b0): `CONCAT13((char)((uint)uVar21 >> 0x18),auStackX_18._0_3_);`
- decompiled_01.c:19814 (FUN_14021a77c): `uStack_e8 = CONCAT13((byte)((uint)*(undefined4 *)(lVar1 + -0x21ffffffffe0) >> 0x18) &`
- decompiled_01.c:19914 (FUN_14021aae0): `uStackX_8 = CONCAT13(uStackX_8._3_1_,CONCAT12(uVar11,(undefined2)uStackX_8)) & 0xffefffff;`
### CONCAT42 — 69 chamadas
- decompiled_01.c:203746 (FUN_140316e20): `uStack_220 = CONCAT62(CONCAT42(uStack_220._4_4_,uStack_220._2_2_ + 1),`
- decompiled_01.c:355922 (FUN_1403dcc70): `uStack_18 = (ulonglong)CONCAT42(uStack_18._4_4_,*param_2) << 0x10;`
- decompiled_01.c:394891 (FUN_14040cbe4): `uStack_280 = (ulonglong)CONCAT42((int)(uStack_280 >> 0x20),(short)iVar11 * 2) << 0x10;`
- decompiled_01.c:394954 (FUN_14040cbe4): `uStack_280 = (ulonglong)CONCAT42((int)(uStack_280 >> 0x20),(short)iVar11 * 2) << 0x10;`
### CONCAT24 — 58 chamadas
- decompiled_01.c:20118 (FUN_14021b0e8): `*puVar6 = (ulonglong)CONCAT24(DAT_140fc6000,(uint)DAT_140fc6000);`
- decompiled_01.c:123913 (FUN_1402aa650): `*puVar6 = (ulonglong)CONCAT24(DAT_140fc6000,(uint)DAT_140fc6000);`
- decompiled_01.c:132771 (FUN_1402b75b0): `*puVar13 = (ulonglong)CONCAT24(DAT_140fc6000,(uint)DAT_140fc6000);`
- decompiled_01.c:164834 (FUN_1402e4814): `(plVar1 = (longlong *)CONCAT26(uStack_52,CONCAT24(uStack_54,uStack_58)),`
### CONCAT26 — 50 chamadas
- decompiled_01.c:164834 (FUN_1402e4814): `(plVar1 = (longlong *)CONCAT26(uStack_52,CONCAT24(uStack_54,uStack_58)),`
- decompiled_01.c:263353 (FUN_140369290): `uStack_78 = CONCAT26(1,uVar3);`
- decompiled_01.c:359880 (FUN_1403e1958): `pbVar4 = (byte *)CONCAT26(uStack_108,uStack_10e);`
- decompiled_01.c:419549 (FUN_14042a720): `*param_2 = CONCAT26(sVar9,CONCAT24(((short)uVar24 - sVar11) + 1,`
### ZEXT416 — 50 chamadas
- decompiled_01.c:305832 (FUN_14039f420): `auVar1 = auVar1 * (ZEXT416(_DAT_fffff78000000004) << 0x20);`
- decompiled_01.c:317142 (FUN_1403adef0): `auVar4 = ZEXT416(*puVar3) * ZEXT816(0x28);`
- decompiled_01.c:317284 (FUN_1403ae4c0): `auVar3 = ZEXT416(*param_1) * ZEXT816(0x28);`
- decompiled_01.c:317306 (FUN_1403ae4c0): `if ((SUB168(ZEXT416(param_3) * ZEXT816(0x28),8) == 0) &&`
### SUB164 — 47 chamadas
- decompiled_01.c:102597 (FUN_14028eed8): `SUB164(ZEXT816(7000) / auVar1,0) < 0x3e9)) goto LAB_14028efbd;`
- decompiled_01.c:147700 (FUN_1402cebc4): `(SUB164(SEXT816(-0x346dc5d63886594b) * SEXT816(DAT_1400107e0),0xc) >> 0x1f);`
- decompiled_01.c:615533 (FUN_14050b5a8): `uVar6 = (SUB164(ZEXT816(0x7010008004002001) * auVar4,0) ^`
- decompiled_01.c:615534 (FUN_14050b5a8): `SUB164(ZEXT816(0x7010008004002001) * auVar4,8) ^ uVar17) & 0x3f;`
### CONCAT16 — 30 chamadas
- decompiled_01.c:202178 (FUN_140316690): `uStackX_10._0_7_ = CONCAT16(2,(int6)uVar13);`
- decompiled_01.c:203740 (FUN_140316e20): `uStack_220._0_7_ = CONCAT16(2,(int6)uStack_160);`
- decompiled_01.c:204644 (FUN_140316e20): `uStack_208._0_7_ = CONCAT16(cVar27,(int6)uVar48);`
- decompiled_01.c:204852 (FUN_140316e20): `uStack_188._0_7_ = CONCAT16(cVar27,(int6)uVar48);`
### CONCAT53 — 30 chamadas
- decompiled_01.c:34851 (FUN_140231e80): `(uint)CONCAT53(uStack_128._3_5_,`
- decompiled_01.c:46755 (FUN_140243e10): `uStack_78 = CONCAT53(uStack_78._3_5_,`
- decompiled_01.c:52291 (FUN_14024c258): `uStack_c8 = CONCAT53(uStack_c8._3_5_,(int3)*(undefined4 *)(lVar13 + -0x21ffffffffe0)) |`
- decompiled_01.c:180909 (ExAcquireResourceExclusiveLite): `uStack_d8 = (void *)(CONCAT53((int5)uVar21,(undefined3)uStack_d8) & 0xffffffff00ffffff);`
### SUB84 — 30 chamadas
- decompiled_01.c:46206 (FUN_140242870): `uVar16 = SUB84(plVar27,0);`
- decompiled_01.c:152218 (FUN_1402d4568): `uStack_40 = SUB84(param_1,0);`
- decompiled_01.c:231197 (FUN_14033e880): `uStack_110 = SUB84(pcVar11,0);`
- decompiled_01.c:365645 (FUN_1403e901c): `uStack_50._0_4_ = SUB84(puVar7,0);`
### SEXT816 — 28 chamadas
- decompiled_01.c:147697 (FUN_1402cebc4): `lVar5 = SUB168(SEXT816(-0x346dc5d63886594b) * SEXT816(DAT_1400107e0),8);`
- decompiled_01.c:147697 (FUN_1402cebc4): `lVar5 = SUB168(SEXT816(-0x346dc5d63886594b) * SEXT816(DAT_1400107e0),8);`
- decompiled_01.c:147700 (FUN_1402cebc4): `(SUB164(SEXT816(-0x346dc5d63886594b) * SEXT816(DAT_1400107e0),0xc) >> 0x1f);`
- decompiled_01.c:147700 (FUN_1402cebc4): `(SUB164(SEXT816(-0x346dc5d63886594b) * SEXT816(DAT_1400107e0),0xc) >> 0x1f);`
### CONCAT17 — 26 chamadas
- decompiled_01.c:333414 (FUN_1403c0604): `uStack_88 = CONCAT17(uStack_88._7_1_,CONCAT16(bVar7,(undefined6)uStack_88)) | 0x2000000000000;`
- decompiled_01.c:333417 (FUN_1403c0604): `uStack_88 = CONCAT17(uStack_88._7_1_,CONCAT16(bVar8,(undefined6)uStack_88)) | 0x4000000000000;`
- decompiled_01.c:333452 (FUN_1403c0604): `uStack_88 = CONCAT17(bVar7,(undefined7)uStack_88);`
- decompiled_01.c:417951 (FUN_1404285d8): `uStack_68 = CONCAT17(*(undefined1 *)(uVar18 + 0x5d + (longlong)puVar17),`
### CONCAT21 — 26 chamadas
- decompiled_01.c:184285 (FUN_1402ff0f0): `uStackX_10 = (uint)CONCAT21(uVar2,cVar4);`
- decompiled_01.c:218724 (FUN_14032c184): `CONCAT21(CONCAT11((char)*param_1,`
- decompiled_01.c:429372 (FUN_14043663c): `CONCAT21(CONCAT11((char)*param_1,`
- decompiled_01.c:491723 (FUN_14047da54): `uStackX_18 = (uint)CONCAT21(CONCAT11((char)(((param_2 >> 0x10 & 0xff) * (uint)param_3) / 0xff) +`
### CONCAT35 — 17 chamadas
- decompiled_01.c:11486 (FUN_14020cbe0): `uStack_158 = CONCAT35(uStack_158._5_3_,0x2000000000);`
- decompiled_01.c:47013 (FUN_1402445a0): `uStack_178 = CONCAT35((int3)uVar12,(undefined5)uStack_178) | 0x80000000000;`
- decompiled_01.c:150677 (FUN_1402d29b4): `uStack_a8 = CONCAT35(uStack_a8._5_3_,0xff00000000);`
- decompiled_01.c:162921 (FUN_1402e2540): `uStack_568 = CONCAT35((int3)uVar12,(uint5)uStack_568);`
### CONCAT15 — 13 chamadas
- decompiled_01.c:252208 (FUN_140359664): `uStack_18 = (ulonglong)CONCAT15(param_4,CONCAT14(param_3,param_2));`
- decompiled_01.c:417985 (FUN_1404285d8): `uStack_68._0_6_ = CONCAT15(cVar5,(undefined5)uStack_68);`
- decompiled_01.c:564803 (FUN_1404cea58): `uStack_168._0_6_ = CONCAT15(bVar3 + 1,(uint5)uStack_168);`
- decompiled_01.c:567895 (FUN_1404d2e20): `CONCAT15(uStack_9b,`
### CONCAT61 — 13 chamadas
- decompiled_02.c:203594 (FUN_1406282f0): `uStack_50 = CONCAT71(CONCAT61(uStack_50._2_6_,param_3),param_4);`
- decompiled_02.c:209339 (FUN_140630890): `uStack_48 = CONCAT71(CONCAT61(uStack_48._2_6_,param_2),param_3);`
- decompiled_02.c:209406 (FUN_140630a30): `uStack_48 = CONCAT71(CONCAT61(uStack_48._2_6_,param_2),param_3);`
- decompiled_02.c:209479 (FUN_140630bd0): `uStack_40 = CONCAT71(CONCAT61(uStack_40._2_6_,param_3),param_4);`
### SUB81 — 12 chamadas
- decompiled_01.c:175368 (KeRemoveQueueEx): `uVar15 = SUB81(in_CR8,0);`
- decompiled_01.c:267240 (FUN_14036e680): `bVar11 = SUB81((ulonglong)lVar8 >> 0x3f,0);`
- decompiled_01.c:394654 (FUN_14040c6a4): `uVar4 = SUB81(psVar13,0);`
- decompiled_01.c:458684 (FUN_140458da4): `auStackX_8[0] = SUB81(ppppuVar20,0);`
### SBORROW4 — 10 chamadas
- decompiled_01.c:187978 (FUN_140303430): `if (SBORROW4(uStack_c0,uVar42) != iVar17 < 0) goto LAB_1403038da;`
- decompiled_01.c:277178 (FUN_14037bc7c): `bVar30 = SBORROW4(*(int *)(param_1 + 5),3);`
- decompiled_01.c:277184 (FUN_14037bc7c): `bVar30 = SBORROW4(iVar15,1);`
- decompiled_01.c:368595 (FUN_1403ec384): `if (bVar18 || SBORROW4(iVar9,iVar2) != iVar8 < 0) {`
### SUB82 — 9 chamadas
- decompiled_01.c:278314 (FUN_14037d2d4): `uStack_148._2_2_ = SUB82(uVar5,2);`
- decompiled_01.c:299033 (FUN_14039714c): `uStackX_10._0_2_ = SUB82(uStack_88,0);`
- decompiled_02.c:112766 (FUN_1405b7b38): `uStack_378._2_2_ = SUB82(uVar4,2);`
- decompiled_03.c:199389 (NtOpenThreadTokenEx): `uStack_50._2_2_ = SUB82(uVar11,2);`
### SUB86 — 8 chamadas
- decompiled_01.c:619892 (FUN_14050d740): `uStack_506 = SUB86(puVar76,0);`
- decompiled_01.c:620113 (FUN_14050d740): `uStack_4f6 = SUB86(puVar96,0);`
- decompiled_01.c:620582 (FUN_14050d740): `uStack_526 = SUB86(puVar76,0);`
- decompiled_04.c:164021 (FUN_140bda010): `uStack_786 = SUB86(puVar141,0);`
### CONCAT51 — 6 chamadas
- decompiled_01.c:188380 (FUN_140303430): `uStackX_8 = CONCAT62(CONCAT51((int5)(uStackX_8 >> 0x18),(char)uStack_c0),`
- decompiled_02.c:212979 (FUN_140635b60): `uStack_60 = CONCAT71(CONCAT61(CONCAT51(uStack_60._3_5_,param_5),param_6),param_7);`
- decompiled_03.c:123732 (FUN_14081cce0): `_auStack_38 = (int6)CONCAT61(CONCAT51(_auStack_35,(char)(uVar5 >> 8)),(char)(uVar5 >> 0x10)) << 8;`
- decompiled_03.c:396932 (FUN_14097ac68): `(int6)CONCAT61(CONCAT51(uStack_40._3_5_,(char)(uVar7 >> 8)),(char)(uVar7 >> 0x10)) << 8;`
### SBORROW8 — 4 chamadas
- decompiled_01.c:604779 (strstr): `if (SBORROW8(uVar5,0xff0)) {`
- decompiled_01.c:607948 (wcsstr): `if (SBORROW8(uVar4,0xff0)) {`
- decompiled_01.c:640777 (FUN_14052fe90): `bVar225 = SBORROW8(param_2,1);`
- decompiled_02.c:6291 (FUN_1405339c0): `(unkuint9)SBORROW8((longlong)puVar283,0x80);`
### SUB1510 — 4 chamadas
- decompiled_03.c:236555 (FUN_1408b09b0): `auVar34._1_10_ = SUB1510(auVar33 << 0x30,5);`
- decompiled_03.c:236593 (FUN_1408b09b0): `auVar37._1_10_ = SUB1510(auVar36 << 0x30,5);`
- decompiled_03.c:236629 (FUN_1408b09b0): `auVar40._1_10_ = SUB1510(auVar39 << 0x30,5);`
- decompiled_03.c:236667 (FUN_1408b09b0): `auVar43._1_10_ = SUB1510(auVar42 << 0x30,5);`
### SUB1512 — 4 chamadas
- decompiled_03.c:236560 (FUN_1408b09b0): `auVar28._3_12_ = SUB1512(auVar34 << 0x20,3);`
- decompiled_03.c:236598 (FUN_1408b09b0): `auVar29._3_12_ = SUB1512(auVar37 << 0x20,3);`
- decompiled_03.c:236634 (FUN_1408b09b0): `auVar30._3_12_ = SUB1512(auVar40 << 0x20,3);`
- decompiled_03.c:236672 (FUN_1408b09b0): `auVar31._3_12_ = SUB1512(auVar43 << 0x20,3);`
### SUB158 — 4 chamadas
- decompiled_03.c:236552 (FUN_1408b09b0): `auVar33._1_8_ = SUB158(auVar32 << 0x40,7);`
- decompiled_03.c:236590 (FUN_1408b09b0): `auVar36._1_8_ = SUB158(auVar35 << 0x40,7);`
- decompiled_03.c:236626 (FUN_1408b09b0): `auVar39._1_8_ = SUB158(auVar38 << 0x40,7);`
- decompiled_03.c:236664 (FUN_1408b09b0): `auVar42._1_8_ = SUB158(auVar41 << 0x40,7);`
### SUB83 — 4 chamadas
- decompiled_01.c:11016 (FUN_14020cbe0): `uStack_130._5_3_ = SUB83(uVar24,5);`
- decompiled_01.c:11318 (FUN_14020cbe0): `uStack_158._5_3_ = SUB83(uVar24,5);`
- decompiled_01.c:163660 (FUN_1402e2540): `uStack_540._5_3_ = SUB83(uVar12,5);`
- decompiled_02.c:573916 (FUN_1406e79b4): `uStack000000000000007a._3_3_ = SUB83(uVar19,5);`
### ZEXT216 — 4 chamadas
- decompiled_01.c:604813 (strstr): `auVar15 = pshuflw(in_XMM1,ZEXT216(CONCAT11(cVar1,cVar1)),0);`
- decompiled_01.c:607526 (wcschr): `auVar6 = pshuflw(in_XMM1,ZEXT216((ushort)_Ch),0);`
- decompiled_01.c:607833 (wcsrchr): `iVar2 = pcmpistri(ZEXT216((ushort)_Ch),*(undefined1 (*) [16])_Str,0x41);`
- decompiled_01.c:607972 (wcsstr): `auVar13 = pshuflw(in_XMM1,ZEXT216((ushort)wVar7),0);`
### CARRY2 — 3 chamadas
- decompiled_02.c:410414 (FUN_1406c46f0): `(ushort)CARRY2((ushort)uVar3,(ushort)*puVar8));`
- decompiled_02.c:410434 (FUN_1406c46f0): `return (uint)(ushort)((ushort)uVar3 + param_1) + (uint)CARRY2((ushort)uVar3,param_1);`
- decompiled_02.c:410438 (FUN_1406c46f0): `(uint)CARRY2((ushort)uVar3,(ushort)*puVar8));`
### CONCAT25 — 3 chamadas
- decompiled_03.c:236516 (FUN_1408b09b0): `(CONCAT52((int5)(CONCAT43((int)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)((uint)`
- decompiled_04.c:89287 (FUN_140b7f130): `CONCAT25(CONCAT11(*(undefined1 *)((longlong)param_1 + 0x1a),(char)param_1[6]),`
- decompiled_04.c:188925 (FUN_140c27478): `CONCAT17(0xf,CONCAT25(0xe0d,(undefined5)uRam0000000140f909a8));`
### CONCAT41 — 3 chamadas
- decompiled_01.c:181221 (ExAcquireResourceExclusiveLite): `uStack_d8 = (void *)CONCAT53(CONCAT41(uStack_d8._4_4_,(char)iVar15),(undefined3)uStack_d8);`
- decompiled_02.c:39317 (FUN_14055b7cc): `CONCAT41(*(undefined4 *)(lVar2 + 8 + uVar6 * 8),*(undefined1 *)(lVar2 + 7 + uVar6 * 8));`
- decompiled_02.c:105014 (FUN_1405ac710): `KeBugCheckEx(0x1f2,param_1,param_2,param_4,(ulonglong)(CONCAT41(param_3,param_5) & 0xffff));`
### CONCAT43 — 3 chamadas
- decompiled_02.c:385529 (FUN_1406c2c80): `CONCAT43(uStack_13c,CONCAT12(uStack_13d,CONCAT11(uStack_13e,uStack_13f))));`
- decompiled_03.c:236516 (FUN_1408b09b0): `(CONCAT52((int5)(CONCAT43((int)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)((uint)`
- decompiled_03.c:609007 (FUN_140a89788): `uVar15 = CONCAT17(uStack_61,CONCAT43(uStack_65,CONCAT21(uStack_67,uStack_68)));`
### SUB167 — 3 chamadas
- decompiled_01.c:549615 (FUN_1404bcc90): `return CONCAT71(SUB167(ZEXT816(0xd6bf94d5e57a42bd) * auVar1,1),uVar5);`
- decompiled_01.c:573018 (FUN_1404d9a14): `return CONCAT71(SUB167(ZEXT816(0xd6bf94d5e57a42bd) * auVar3,1),uVar7);`
- decompiled_01.c:590274 (FUN_1404f0acc): `return CONCAT71(SUB167(auVar2 * auVar3,9),`
### ZEXT24 — 3 chamadas
- decompiled_02.c:290629 (FUN_14069830c): `auStack_d8._0_4_ = ZEXT24(*(ushort *)*param_1);`
- decompiled_02.c:290650 (FUN_14069830c): `auStack_d8._4_4_ = ZEXT24(*(ushort *)*param_1);`
- decompiled_02.c:290667 (FUN_14069830c): `auStack_d8._0_4_ = ZEXT24(*(ushort *)*param_1);`
### CONCAT23 — 2 chamadas
- decompiled_01.c:458197 (FUN_140458a2c): `_auStack_cb8 = (uint6)CONCAT23(10,CONCAT12(*(undefined1 *)(param_1 + 8),`
- decompiled_04.c:45524 (FUN_140b032a4): `_auStack_cc8 = (uint6)CONCAT23(10,CONCAT12(cVar6,*(undefined2 *)(param_1 + 4)));`
### SBORROW1 — 2 chamadas
- decompiled_03.c:355011 (FUN_1409469e4): `bVar11 = SBORROW1(cVar1,'\v');`
- decompiled_03.c:355015 (FUN_1409469e4): `bVar11 = SBORROW1(cVar1,'\n');`
### SUB41 — 2 chamadas
- decompiled_04.c:37241 (FUN_140af37f0): `bStack_7a0 = SUB41(uStack_7a8,0);`
- decompiled_04.c:38178 (FUN_140af5814): `uStack_78._3_1_ = SUB41(uVar9,3);`
### SUB87 — 2 chamadas
- decompiled_03.c:571753 (FUN_140a5e6fc): `uStackX_10._1_7_ = SUB87(uVar8,1);`
- decompiled_03.c:636580 (FUN_140aa8a98): `PTR_LOOP_140e08230._0_7_ = SUB87(puVar9,0);`
### CONCAT34 — 1 chamadas
- decompiled_03.c:236516 (FUN_1408b09b0): `(CONCAT52((int5)(CONCAT43((int)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)((uint)`
### CONCAT52 — 1 chamadas
- decompiled_03.c:236516 (FUN_1408b09b0): `(CONCAT52((int5)(CONCAT43((int)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)((uint)`
### SCARRY4 — 1 chamadas
- decompiled_02.c:50677 (FUN_140569750): `if ((int)*plVar1 == 0 || SCARRY4((int)lVar2,1) != (int)*plVar1 < 0) {`
### SUB1612 — 1 chamadas
- decompiled_02.c:46904 (FUN_140564bf0): `auStack_78 = SUB1612(*(undefined1 (*) [16])(lVar8 + lVar4),0);`
### SUB162 — 1 chamadas
- decompiled_01.c:102596 (FUN_14028eed8): `(auVar1._8_8_ = 0, auVar1._0_8_ = uVar2, uVar6 = SUB162(ZEXT816(7000) / auVar1,0),`
### SUB42 — 1 chamadas
- decompiled_04.c:13823 (FUN_140ad4134): `uStack_18 = CONCAT22(SUB42(uVar2,2),(short)uVar6 * 2);`
### SUB85 — 1 chamadas
- decompiled_01.c:199518 (FUN_140312730): `uStack_38._3_5_ = SUB85(uVar3,3);`

## Tipos não resolvidos

### undefined8 — 168455 ocorrências
- decompiled_01.c:8 (FUN_140200008): `void FUN_140200008(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,`
- decompiled_01.c:8 (FUN_140200008): `void FUN_140200008(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,`
- decompiled_01.c:8 (FUN_140200008): `void FUN_140200008(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,`
### undefined4 — 77793 ocorrências
- decompiled_01.c:20 (FUN_140200008): `undefined4 uStack_2d8;`
- decompiled_01.c:457 (FUN_1402009ec): `FUN_1402009ec(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,`
- decompiled_01.c:457 (FUN_1402009ec): `FUN_1402009ec(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,`
### undefined1 — 38077 ocorrências
- decompiled_01.c:19 (FUN_140200008): `undefined1 auStack_2f8 [32];`
- decompiled_01.c:21 (FUN_140200008): `undefined1 *puStack_2d0;`
- decompiled_01.c:22 (FUN_140200008): `undefined1 auStack_2c8 [32];`
### code — 13289 ocorrências
- decompiled_01.c:660 (FUN_140200e70): `code *pcVar3;`
- decompiled_01.c:685 (FUN_140200e70): `pcVar3 = (code *)swi(0x29);`
- decompiled_01.c:1390 (FUN_140201bf0): `code *pcVar8;`
### undefined2 — 8910 ocorrências
- decompiled_01.c:406 (FUN_140200820): `FUN_1403c0604(param_1,*(undefined2 *)(param_1 + 0x248),`
- decompiled_01.c:495 (KeSetSelectedCpuSetsThread): `undefined2 uVar6;`
- decompiled_01.c:1886 (FUN_1402023e8): `FUN_14037dda0(puVar2,*(undefined2 *)((longlong)pvVar4 + 0x2dba),uVar3);`
### unkuint9 — 7519 ocorrências
- decompiled_01.c:639038 (FUN_14052f850): `Var2 = (unkuint9)(ulonglong)((unkuint9)uVar139 + (unkuint9)*puVar142) +`
- decompiled_01.c:639038 (FUN_14052f850): `Var2 = (unkuint9)(ulonglong)((unkuint9)uVar139 + (unkuint9)*puVar142) +`
- decompiled_01.c:639038 (FUN_14052f850): `Var2 = (unkuint9)(ulonglong)((unkuint9)uVar139 + (unkuint9)*puVar142) +`
### undefined — 2646 ocorrências
- decompiled_01.c:1737 (FUN_1402021f4): `undefined *puVar2;`
- decompiled_01.c:7867 (FUN_140209980): `if ((lVar1 - 1U < 0xfffffffffffffffd) && (*(undefined **)(lVar1 + 0x220) != &DAT_140fd0f00))`
- decompiled_01.c:7882 (FUN_140209980): `if (*(undefined **)(param_2 + 0x220) != &DAT_140fd0f00) {`
### int7 — 1228 ocorrências
- decompiled_01.c:445 (FUN_140200950): `FUN_140201790(puVar1 + uVar6 * 0x70 + 0x14,CONCAT71((int7)(uVar4 >> 8),4),1);`
- decompiled_01.c:1118 (FUN_140201708): `FUN_140201790(DAT_140fc7ad0 + uVar3 * 0x70 + 0x14,CONCAT71((int7)(uVar3 >> 8),2),`
- decompiled_01.c:1119 (FUN_140201708): `CONCAT71((int7)(uVar3 * 0x1c0 >> 8),param_1));`
### uint3 — 256 ocorrências
- decompiled_01.c:407 (FUN_140200820): `CONCAT31((uint3)(*(uint *)(param_1 + 0x74) >> 0xb),`
- decompiled_01.c:2732 (FUN_140203198): `CONCAT31((uint3)(*(uint *)(lVar5 + 0x74) >> 0xb),`
- decompiled_01.c:2942 (FUN_140203934): `(((uVar3 = CONCAT71((uint7)(uint3)(uVar2 >> 8),1), cVar1 == '\x02' || (cVar1 == '\x03')) ||`
### undefined7 — 161 ocorrências
- decompiled_01.c:8476 (FUN_14020a6b0): `undefined7 extraout_var;`
- decompiled_01.c:8478 (FUN_14020a6b0): `undefined7 uVar12;`
- decompiled_01.c:8754 (FUN_14020a6b0): `uVar12 = (undefined7)(uVar11 >> 8);`
### unkint9 — 84 ocorrências
- decompiled_01.c:638856 (FUN_14052f850): `unkint9 Var2;`
- decompiled_01.c:638857 (FUN_14052f850): `unkint9 Var3;`
- decompiled_01.c:638858 (FUN_14052f850): `unkint9 Var4;`
### undefined3 — 76 ocorrências
- decompiled_01.c:34872 (FUN_140231e80): `CONCAT13((char)((uint)uVar3 >> 0x18),(undefined3)uStackX_8);`
- decompiled_01.c:34947 (FUN_140231e80): `*(uint *)(lVar24 + -0x21ffffffffe0) = CONCAT13((char)((uint)uVar3 >> 0x18),(undefined3)uStack_128)`
- decompiled_01.c:57873 (FUN_140254108): `*param_1 = CONCAT13((char)uVar2,(undefined3)uStack_28) | 0x40000000;`
### BADSPACEBASE — 67 ocorrências
- decompiled_01.c:10069 (FUN_14020c320): `register0x00000020 = *(BADSPACEBASE **)(param_1 + 0x8e58);`
- decompiled_01.c:10075 (FUN_14020c320): `register0x00000020 = (BADSPACEBASE *)((longlong)register0x00000020 + 8);`
- decompiled_01.c:10122 (FUN_14020c440): `register0x00000020 = *(BADSPACEBASE **)(param_1 + 0x8e58);`
### undefined6 — 61 ocorrências
- decompiled_01.c:11899 (FUN_14020eaa0): `undefined6 uStack_9e;`
- decompiled_01.c:242651 (FUN_14034dfcc): `undefined6 uStack_186;`
- decompiled_01.c:245637 (FUN_140351c00): `undefined6 uStack_66;`
### undefined5 — 8 ocorrências
- decompiled_01.c:47013 (FUN_1402445a0): `uStack_178 = CONCAT35((int3)uVar12,(undefined5)uStack_178) | 0x80000000000;`
- decompiled_01.c:417985 (FUN_1404285d8): `uStack_68._0_6_ = CONCAT15(cVar5,(undefined5)uStack_68);`
- decompiled_03.c:22576 (FUN_14079b288): `undefined5 uStack_b5;`
### unkuint10 — 2 ocorrências
- decompiled_03.c:444230 (FUN_1409b92b0): `auVar15._6_10_ = (unkuint10)auVar4._8_6_ << 0x10;`
- decompiled_03.c:444246 (FUN_1409b92b0): `auVar16._6_10_ = (unkuint10)auVar5._8_6_ << 0x10;`
