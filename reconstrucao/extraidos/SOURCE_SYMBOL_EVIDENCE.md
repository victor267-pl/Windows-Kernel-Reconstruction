# Evidências dos símbolos nos dumps originais

Busca literal nos TXT de origem. Uma ocorrência de uso não é, por si só, uma declaração de tipo ou valor.

## undefined
- Ocorrências: 394382
- AnalisarKernel_parte_01.txt:13 — void FUN_140200008(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
- AnalisarKernel_parte_01.txt:14 —                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
- AnalisarKernel_parte_01.txt:15 —                   undefined8 *param_9,undefined8 *param_10,undefined8 param_11,undefined8 param_12,
- AnalisarKernel_parte_01.txt:16 —                   undefined8 *param_13,undefined8 param_14,undefined8 param_15,undefined8 *param_16,
- AnalisarKernel_parte_01.txt:17 —                   undefined8 param_17,undefined8 param_18,undefined8 *param_19,undefined8 param_20,
- AnalisarKernel_parte_01.txt:18 —                   undefined8 param_21,undefined8 *param_22,undefined8 param_23,undefined8 param_24,
- AnalisarKernel_parte_01.txt:19 —                   undefined8 *param_25,undefined8 param_26,undefined8 param_27,undefined8 *param_28,
- AnalisarKernel_parte_01.txt:20 —                   undefined8 param_29,undefined8 param_30,undefined8 *param_31,undefined8 param_32,
- AnalisarKernel_parte_01.txt:21 —                   undefined8 param_33,undefined8 *param_34,undefined8 param_35,undefined8 param_36)
- AnalisarKernel_parte_01.txt:24 —   undefined1 auStack_2f8 [32];
- AnalisarKernel_parte_01.txt:25 —   undefined4 uStack_2d8;
- AnalisarKernel_parte_01.txt:26 —   undefined1 *puStack_2d0;

## DAT_140e0a740
- Ocorrências: 4201
- AnalisarKernel_parte_01.txt:112 —   uStack_18 = DAT_140e0a740 ^ (ulonglong)auStack_2f8;
- AnalisarKernel_parte_01.txt:643 —   uStack_30 = DAT_140e0a740 ^ (ulonglong)auStack_128;
- AnalisarKernel_parte_01.txt:722 —   uStack_18 = DAT_140e0a740 ^ (ulonglong)auStack_68;
- AnalisarKernel_parte_01.txt:1766 —   uStack_18 = DAT_140e0a740 ^ (ulonglong)auStack_158;
- AnalisarKernel_parte_01.txt:1972 —   uStack_18 = DAT_140e0a740 ^ (ulonglong)auStack_78;
- AnalisarKernel_parte_01.txt:2183 —   uStack_10 = DAT_140e0a740 ^ (ulonglong)auStack_58;
- AnalisarKernel_parte_01.txt:2240 —   uStack_18 = DAT_140e0a740 ^ (ulonglong)auStack_c8;
- AnalisarKernel_parte_01.txt:2453 —   uStack_38 = DAT_140e0a740 ^ (ulonglong)auStack_188;
- AnalisarKernel_parte_01.txt:2729 —   uStack_18 = DAT_140e0a740 ^ (ulonglong)auStack_118;
- AnalisarKernel_parte_01.txt:3359 —   uStack_38 = DAT_140e0a740 ^ (ulonglong)auStack_2d8;
- AnalisarKernel_parte_01.txt:3552 —   uStack_18 = DAT_140e0a740 ^ (ulonglong)auStack_c8;
- AnalisarKernel_parte_01.txt:3680 —   uStack_28 = DAT_140e0a740 ^ (ulonglong)auStack_d8;

## DAT_140fc7d20
- Ocorrências: 2347
- AnalisarKernel_parte_01.txt:362 —   if (DAT_140fc7d20 != 0) {
- AnalisarKernel_parte_01.txt:539 —   if (DAT_140fc7d20 != 0) {
- AnalisarKernel_parte_01.txt:668 —       if (((byte)in_CR8 < 2) && (DAT_140fc7d20 != 0)) {
- AnalisarKernel_parte_01.txt:1005 —   if (DAT_140fc7d20 != 0) {
- AnalisarKernel_parte_01.txt:1596 —   if (DAT_140fc7d20 != 0) goto LAB_140201cd7;
- AnalisarKernel_parte_01.txt:1618 —       if (DAT_140fc7d20 != 0) {
- AnalisarKernel_parte_01.txt:2109 —   if (DAT_140fc7d20 != 0) {
- AnalisarKernel_parte_01.txt:2126 —   if (DAT_140fc7d20 != 0) {
- AnalisarKernel_parte_01.txt:2803 —     if (DAT_140fc7d20 != 0) {
- AnalisarKernel_parte_01.txt:2869 —     if (DAT_140fc7d20 != 0) {
- AnalisarKernel_parte_01.txt:3392 —       if (((byte)in_CR8 < 2) && (uVar15 = 2, DAT_140fc7d20 != 0)) {
- AnalisarKernel_parte_01.txt:3492 —       if (((byte)in_CR8 < 2) && (DAT_140fc7d20 != 0)) {

## DAT_140fc7ab8
- Ocorrências: 869
- AnalisarKernel_parte_01.txt:397 —       if ((((DAT_140fc62ac & uVar4) == 0) && ((DAT_140fc7ab8 & 0x40) != 0)) &&
- AnalisarKernel_parte_01.txt:595 —         if ((((DAT_140fc62ac & uVar8) == 0) && ((DAT_140fc7ab8 & 0x40) != 0)) &&
- AnalisarKernel_parte_01.txt:811 —         if (((DAT_140fc62ac & uVar10) == 0) && ((DAT_140fc7ab8 & 0x40) != 0)) {
- AnalisarKernel_parte_01.txt:2185 —     if (((DAT_140fc7a90 >> 8 & 0xf) + 4 < 0xf) && ((char)DAT_140fc7ab8 < '\0')) {
- AnalisarKernel_parte_01.txt:2735 —   if (((char)DAT_140fc7ab8 < '\0') && ((DAT_140fc7a90 >> 8 & 0xf) + 3 < 0xe)) {
- AnalisarKernel_parte_01.txt:2943 —             if ((((DAT_140fc62ac & uVar17) == 0) && ((DAT_140fc7ab8 & 0x40) != 0)) &&
- AnalisarKernel_parte_01.txt:3791 —   uVar1 = (ulonglong)DAT_140fc7ab8;
- AnalisarKernel_parte_01.txt:3793 —   if (((char)DAT_140fc7ab8 < '\0') &&
- AnalisarKernel_parte_01.txt:5776 —     if ((DAT_140fc7ab8 & 0x4000000) == 0) {
- AnalisarKernel_parte_01.txt:5813 —   uVar5 = (ulonglong)DAT_140fc7ab8;
- AnalisarKernel_parte_01.txt:5815 —   if ((DAT_140fc7ab8 & 4) == 0) {
- AnalisarKernel_parte_01.txt:5820 —   if ((DAT_140fc7ab8 & 2) == 0) {

## DAT_140fc7b04
- Ocorrências: 890
- AnalisarKernel_parte_01.txt:445 —   if ((((uint)DAT_140fc7b04 & 0x1000) != 0) && (cVar2 != '\0')) {
- AnalisarKernel_parte_01.txt:2965 —         bVar10 = bVar10 & (byte)((uint)DAT_140fc7b04 >> 0xc) & 1;
- AnalisarKernel_parte_01.txt:8568 —   if ((((uint)DAT_140fc7b04 & 0x40000) != 0) && ((uVar16 & 3) != 0)) {
- AnalisarKernel_parte_01.txt:12883 —   if ((DAT_140fc7b04._4_4_ & 0x400000) == 0) {
- AnalisarKernel_parte_01.txt:17079 —   if (((DAT_140fc7b04._2_1_ & 0x21) == 0) || (DAT_140f0e27c != 0)) {
- AnalisarKernel_parte_01.txt:17186 —     if (((DAT_140fc7b04._2_1_ & 1) == 0) || (DAT_140f0e27c != 0)) {
- AnalisarKernel_parte_01.txt:25470 —     if (((DAT_140fc7b04._2_1_ & 0x21) == 0) || (DAT_140f0e27c != 0)) {
- AnalisarKernel_parte_01.txt:25498 —     if (((DAT_140fc7b04._2_1_ & 0x21) == 0) || (DAT_140f0e27c != 0)) {
- AnalisarKernel_parte_01.txt:25540 —       if (((DAT_140fc7b04._2_1_ & 1) == 0) || (DAT_140f0e27c != 0)) {
- AnalisarKernel_parte_01.txt:25551 —     if (((DAT_140fc7b04._2_1_ & 1) == 0) || (DAT_140f0e27c != 0)) {
- AnalisarKernel_parte_01.txt:25615 —     if (((DAT_140fc7b04._2_1_ & 0x21) == 0) || (DAT_140f0e27c != 0)) {
- AnalisarKernel_parte_01.txt:25728 —   if (((DAT_140fc7b04._2_1_ & 1) == 0) || (in_RAX = 0, DAT_140f0e27c != 0)) {

## DAT_140fc9c40
- Ocorrências: 593
- AnalisarKernel_parte_01.txt:2917 —       lVar4 = (&DAT_140fc9c40)[uVar18];
- AnalisarKernel_parte_01.txt:8317 —     lVar2 = (&DAT_140fc9c40)
- AnalisarKernel_parte_01.txt:8330 —      ((&DAT_140fc9c40)
- AnalisarKernel_parte_01.txt:10752 —       puVar15 = (ulonglong *)(&DAT_140fc9c40)[uVar4];
- AnalisarKernel_parte_01.txt:10806 —       puVar15 = (ulonglong *)(&DAT_140fc9c40)[uVar4];
- AnalisarKernel_parte_01.txt:10865 —     puVar15 = (ulonglong *)(&DAT_140fc9c40)[unaff_RBX];
- AnalisarKernel_parte_01.txt:10872 —   puVar14 = *(ulonglong **)((&DAT_140fc9c40)[uVar4 & 0x7fffffff] + 0x8e48);
- AnalisarKernel_parte_01.txt:11154 —           puVar17 = (ulonglong *)(&DAT_140fc9c40)[uVar13];
- AnalisarKernel_parte_01.txt:11194 —         puVar17 = (ulonglong *)(&DAT_140fc9c40)[uVar13];
- AnalisarKernel_parte_01.txt:11201 —       puVar19 = *(ulonglong **)((&DAT_140fc9c40)[uVar13 & 0x7fffffff] + 0x8e48);
- AnalisarKernel_parte_01.txt:11269 —   puVar17 = (ulonglong *)(&DAT_140fc9c40)[uVar13];
- AnalisarKernel_parte_01.txt:11461 —       if ((*(byte *)((&DAT_140fc9c40)[uVar2] + 0x23) & 1) != 0) {

## DAT_140fc7a88
- Ocorrências: 560
- AnalisarKernel_parte_01.txt:15135 —     if ((((DAT_140fc7a88 >> 0x24 & 1) != 0) && ((uVar7 & 0x20) == 0)) &&
- AnalisarKernel_parte_01.txt:18416 —   if ((DAT_140fc7a88 & 0x8000) == 0) {
- AnalisarKernel_parte_01.txt:18457 —       if (((((uVar8 & 0x20) == 0 || (uVar8 & 0x42) == 0) && ((DAT_140fc7a88 & 0x600000) != 0)) &&
- AnalisarKernel_parte_01.txt:18482 —     if ((((DAT_140fc7a88 >> 0x24 & 1) != 0) && (((byte)uVar8 & 0x21) == 1)) &&
- AnalisarKernel_parte_01.txt:19374 —               (((DAT_140e30208 != (void *)0x0 && ((DAT_140fc7a88 >> 0x28 & 1) != 0)) &&
- AnalisarKernel_parte_01.txt:19412 —       if ((((DAT_140fc7a88 >> 0x24 & 1) != 0) && ((uVar9 & 0x20) == 0)) &&
- AnalisarKernel_parte_01.txt:21765 —     if ((((puVar8[-4] & 0x3e0) == 0) && ((char)DAT_140fc7a88 < '\0')) &&
- AnalisarKernel_parte_01.txt:22497 —             if ((((DAT_140fc7a88 >> 0x24 & 1) != 0) && ((uVar13 & 0x20) == 0)) &&
- AnalisarKernel_parte_01.txt:23745 —         ((((DAT_140fc7a88 & 0x600000) != 0 &&
- AnalisarKernel_parte_01.txt:24553 —                 (((DAT_140fc7a88 & 0x400) == 0 ||
- AnalisarKernel_parte_01.txt:24557 —           else if (((DAT_140fc7a88 & 0x8000) != 0) && ((*(byte *)(lVar14 + 0x10) & 0x40) != 0)) {
- AnalisarKernel_parte_01.txt:24669 —      ((((DAT_140fc7a88 & 0x8000) == 0 || (uVar4 < 0xffff800000000000)) || ((uVar10 & 2) == 0)))) {

## DAT_140e07748
- Ocorrências: 390
- AnalisarKernel_parte_01.txt:114209 —   if (5 < DAT_140e07748) {
- AnalisarKernel_parte_01.txt:115018 —     if ((DAT_140e07748 < 6) || (cVar2 = FUN_14042b0b0(&DAT_140e07748,0x400000000000), cVar2 == '\0')
- AnalisarKernel_parte_01.txt:115037 —     if (((iVar3 == 0) || (DAT_140e07748 < 6)) ||
- AnalisarKernel_parte_01.txt:115038 —        (cVar2 = FUN_14042b0b0(&DAT_140e07748,0x400000000000), cVar2 == '\0')) goto LAB_140294154;
- AnalisarKernel_parte_01.txt:115049 —   FUN_1404a9b40(&DAT_140e07748,puVar4);
- AnalisarKernel_parte_01.txt:117413 —     if ((5 < DAT_140e07748) && (cVar4 = FUN_14042b0b0(&DAT_140e07748,0x400000000000), cVar4 != '\0')
- AnalisarKernel_parte_01.txt:117442 —       FUN_1403a0f70(&DAT_140e07748,&DAT_14004bf6d,0,0);
- AnalisarKernel_parte_01.txt:119882 —     if (5 < DAT_140e07748) {
- AnalisarKernel_parte_01.txt:119934 —       FUN_1404a9b40(&DAT_140e07748,&DAT_140050982);
- AnalisarKernel_parte_01.txt:257554 —     if (5 < DAT_140e07748) {
- AnalisarKernel_parte_01.txt:257589 —       FUN_1404a9b40(&DAT_140e07748,&DAT_140050ad3);
- AnalisarKernel_parte_01.txt:460937 —           if (DAT_140e07748 < 6) goto LAB_14042c7ea;

## unkint9
- Ocorrências: 86
- AnalisarKernel_parte_01.txt:714322 —   unkint9 Var2;
- AnalisarKernel_parte_01.txt:714323 —   unkint9 Var3;
- AnalisarKernel_parte_01.txt:714324 —   unkint9 Var4;
- AnalisarKernel_parte_01.txt:714325 —   unkint9 Var5;
- AnalisarKernel_parte_01.txt:714326 —   unkint9 Var6;
- AnalisarKernel_parte_01.txt:714327 —   unkint9 Var7;
- AnalisarKernel_parte_01.txt:714328 —   unkint9 Var8;
- AnalisarKernel_parte_01.txt:714329 —   unkint9 Var9;
- AnalisarKernel_parte_01.txt:714330 —   unkint9 Var10;
- AnalisarKernel_parte_01.txt:715075 —   unkint9 Var2;
- AnalisarKernel_parte_01.txt:715076 —   unkint9 Var3;
- AnalisarKernel_parte_01.txt:715077 —   unkint9 Var4;

## unkuint9
- Ocorrências: 4012
- AnalisarKernel_parte_01.txt:714504 —       Var2 = (unkuint9)(ulonglong)((unkuint9)uVar139 + (unkuint9)*puVar142) +
- AnalisarKernel_parte_01.txt:714505 —              (unkuint9)SUB168(auVar11 * auVar75,0);
- AnalisarKernel_parte_01.txt:714506 —       Var4 = (unkuint9)uVar143 + (unkuint9)SUB168(auVar11 * auVar75,8) +
- AnalisarKernel_parte_01.txt:714507 —              (unkuint9)((char)((unkuint9)uVar139 + (unkuint9)*puVar142 >> 0x40) != '\0');
- AnalisarKernel_parte_01.txt:714513 —       Var2 = (unkuint9)(ulonglong)Var4 + (unkuint9)SUB168(auVar12 * auVar76,0) +
- AnalisarKernel_parte_01.txt:714514 —              (unkuint9)((char)((unkuint9)Var2 >> 0x40) != '\0');
- AnalisarKernel_parte_01.txt:714515 —       Var5 = (unkuint9)uVar141 + (unkuint9)SUB168(auVar12 * auVar76,8) +
- AnalisarKernel_parte_01.txt:714516 —              (unkuint9)((char)((unkuint9)Var4 >> 0x40) != '\0');
- AnalisarKernel_parte_01.txt:714521 —       Var4 = (unkuint9)(ulonglong)Var5 + (unkuint9)SUB168(auVar13 * auVar77,0) +
- AnalisarKernel_parte_01.txt:714522 —              (unkuint9)((char)((unkuint9)Var2 >> 0x40) != '\0');
- AnalisarKernel_parte_01.txt:714523 —       Var6 = (unkuint9)uVar140 + (unkuint9)SUB168(auVar13 * auVar77,8) +
- AnalisarKernel_parte_01.txt:714524 —              (unkuint9)((char)((unkuint9)Var5 >> 0x40) != '\0');

## FUN_140a94cf0
- Ocorrências: 3
- AnalisarKernel_parte_03.txt:128 —   EtwRegister(&DAT_14001bcb8,FUN_140a94cf0,0,&DAT_140f07240);
- AnalisarKernel_parte_03.txt:691783 — FUNÇÃO: FUN_140a94cf0
- AnalisarKernel_parte_03.txt:691787 — void FUN_140a94cf0(undefined8 param_1,int param_2)

## FUN_140aa9060
- Ocorrências: 3
- AnalisarKernel_parte_03.txt:144 —   PoRegisterPowerSettingCallback(0,&DAT_14001a0b8,FUN_140aa9060,0,&DAT_140f06d38);
- AnalisarKernel_parte_03.txt:711658 — FUNÇÃO: FUN_140aa9060
- AnalisarKernel_parte_03.txt:711662 — undefined8 FUN_140aa9060(longlong *param_1,int *param_2)

