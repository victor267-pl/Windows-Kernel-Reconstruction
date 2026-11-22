# Contextos dos primeiros erros de compilação

Cada erro está associado ao marcador de função Ghidra mais próximo. O contexto serve para reconstrução orientada por evidência.

## FUN_140200444 */ — reconstrucao/src/decompiled_01.c:216
reconstrucao/src/../include/ghidra_function_prototypes.h:216:43: error: unknown type name ‘code’

    213:   longlong *plVar4;
    214:   longlong lVar5;
    215:   
    216:   *(longlong *)(param_1 + 0x4e0) = *(longlong *)(param_1 + 0x4e0) + *(longlong *)(param_1 + 0x10);
    217:   uVar3 = *(ulonglong *)(param_1 + 0x4e8);
    218:   if (*(ulonglong *)(param_1 + 0x4e8) <= *(ulonglong *)(param_1 + 0x18)) {
    219:     uVar3 = *(ulonglong *)(param_1 + 0x18);

## KeSetSelectedCpuSetsThread */ — reconstrucao/src/decompiled_01.c:541
reconstrucao/src/../include/ghidra_function_prototypes.h:541:1: error: unknown type name ‘undefined’; did you mean ‘undefined8’?

    538:   return uVar5;
    539: }
    540: 
    541: /* Ghidra label: FUN_140200bc0 */
    542: /* Ghidra address: 140200bc0 */
    543: uint FUN_140200bc0(undefined8 param_1,undefined4 param_2)
    544: 

## FUN_140200e70 */ — reconstrucao/src/decompiled_01.c:706
reconstrucao/src/../include/ghidra_function_prototypes.h:706:19: error: unknown type name ‘code’

    703:     *puVar8 = 1;
    704:     LOCK();
    705:     *puVar9 = *puVar9;
    706:     UNLOCK();
    707:     uVar10 = 0;
    708:     while( true ) {
    709:       LOCK();

## FUN_140200fd8 */ — reconstrucao/src/decompiled_01.c:785
reconstrucao/src/../include/ghidra_function_prototypes.h:785:75: error: unknown type name ‘undefined’; did you mean ‘undefined8’?

    782:     if (param_2 != 0) {
    783:       *(longlong *)(param_1 + 0xf2) = param_2;
    784:       param_1[0x100] = 0x20;
    785:       LOCK();
    786:       param_1[0x1e] = param_1[0x1e] | 0x400000;
    787:       UNLOCK();
    788:       LOCK();

## FUN_140200fd8 */ — reconstrucao/src/decompiled_01.c:880
reconstrucao/src/../include/ghidra_function_prototypes.h:880:55: error: unknown type name ‘code’

    877:         bVar1 = *(byte *)(*(longlong *)((longlong)*ppvVar6 + 0x38) + 0x40);
    878:         *(byte *)(*(longlong *)((longlong)*ppvVar6 + 0x38) + 0x40) =
    879:              (bVar1 ^ (byte)param_1[0x81]) & 7 ^ bVar1;
    880:         uVar8 = FUN_14027835c();
    881:         ppvVar6 = ppvVar6 + 1;
    882:         uVar7 = uVar7 - 1;
    883:       } while (uVar7 != 0);

## FUN_140200fd8 */ — reconstrucao/src/decompiled_01.c:902
reconstrucao/src/../include/ghidra_function_prototypes.h:902:20: error: unknown type name ‘undefined’; did you mean ‘undefined8’?

    899:   }
    900:   return;
    901: }
    902: 
    903: /* Ghidra label: FUN_140201280 */
    904: /* Ghidra address: 140201280 */
    905: void FUN_140201280(longlong param_1,undefined8 param_2,char param_3)

## FUN_140201280 */ — reconstrucao/src/decompiled_01.c:915
reconstrucao/src/../include/ghidra_function_prototypes.h:915:1: error: unknown type name ‘undefined’; did you mean ‘undefined8’?

    912:   int iVar5;
    913:   int iVar6;
    914:   longlong lVar7;
    915:   ulonglong uVar8;
    916:   int iVar9;
    917:   longlong *plVar10;
    918:   undefined4 extraout_XMM0_Da;

## FUN_140201280 */ — reconstrucao/src/decompiled_01.c:960
reconstrucao/src/../include/ghidra_function_prototypes.h:960:1: error: unknown type name ‘code’

    957:       cVar3 = cVar3 + -1;
    958:       *(char *)(lVar7 + 0x338 + param_1) = cVar3;
    959:       if (cVar3 == '\0') {
    960:         *(uint *)(param_1 + 0x358) = *(uint *)(param_1 + 0x358) ^ 1 << ((int)(char)iVar9 & 0x1fU);
    961:       }
    962:     }
    963:     *(int *)(param_1 + 0x400) = iVar5;

## FUN_1402015a0 */ — reconstrucao/src/decompiled_01.c:1077
reconstrucao/src/../include/ghidra_function_prototypes.h:1077:1: error: unknown type name ‘undefined’; did you mean ‘undefined8’?

    1074:   return;
    1075: }
    1076: 
    1077: /* Ghidra label: FUN_14020164c */
    1078: /* Ghidra address: 14020164c */
    1079: void FUN_14020164c(uint param_1,char param_2)
    1080: 

## FUN_140201958 */ — reconstrucao/src/decompiled_01.c:1343
reconstrucao/src/../include/ghidra_function_prototypes.h:1343:1: error: unknown type name ‘undefined’; did you mean ‘undefined8’?

    1340:         puStack_38 = puStack_38 + 2;
    1341:         uVar8 = (uint)uVar4 + 1;
    1342:         uVar4 = (ulonglong)uVar8;
    1343:         param_2 = param_2 + 1;
    1344:         lVar10 = lVar10 + 2;
    1345:       } while (uVar8 < 0x20);
    1346:       if (param_4 == 0) {

## FUN_140201bf0 */ — reconstrucao/src/decompiled_01.c:1473
reconstrucao/src/../include/ghidra_function_prototypes.h:1473:37: error: unknown type name ‘code’

    1470:               plVar1 = (longlong *)plVar11[1];
    1471:               if ((*(longlong **)(lVar9 + 8) != plVar11) || ((longlong *)*plVar1 != plVar11))
    1472:               goto LAB_140201cd0;
    1473:               *plVar1 = lVar9;
    1474:               *(longlong **)(lVar9 + 8) = plVar1;
    1475:               param_1[0x23] = (longlong)plVar11;
    1476:             }

## FUN_140201ec0 */ — reconstrucao/src/decompiled_01.c:1566
reconstrucao/src/../include/ghidra_function_prototypes.h:1566:1: error: unknown type name ‘undefined’; did you mean ‘undefined8’?

    1563:   uStack_18 = DAT_140e0a740 ^ (ulonglong)auStack_158;
    1564:   acStack_138[0] = '\0';
    1565:   FUN_1406d1200(auStack_120,0,0x100);
    1566:   puVar1 = DAT_140fc7ad0;
    1567:   if (DAT_140fc7ad0 == (uint *)0x0) {
    1568:     return -0x3fffff45;
    1569:   }

## FUN_140201ec0 */ — reconstrucao/src/decompiled_01.c:1602
reconstrucao/src/../include/ghidra_function_prototypes.h:1602:26: error: unknown type name ‘code’

    1599:         FUN_14038b9f4(&uStack_128,HalAdjustResourceList,0,0);
    1600:         return iVar4;
    1601:       }
    1602:     }
    1603:   }
    1604: LAB_140201f9b:
    1605:   KeReleaseSpinLock(&DAT_140f0cf28,uVar3);

## FUN_140202010 */ — reconstrucao/src/decompiled_01.c:1617
reconstrucao/src/../include/ghidra_function_prototypes.h:1617:20: error: unknown type name ‘undefined’; did you mean ‘undefined8’?

    1614:   uint *puVar1;
    1615:   uint *puVar2;
    1616:   longlong lVar3;
    1617:   longlong *plVar4;
    1618:   undefined8 *puVar5;
    1619:   code *pcVar6;
    1620:   longlong lVar7;

## FUN_140202010 */ — reconstrucao/src/decompiled_01.c:1624
reconstrucao/src/../include/ghidra_function_prototypes.h:1624:1: error: unknown type name ‘undefined’; did you mean ‘undefined8’?

    1621:   uint *puVar8;
    1622:   undefined8 uVar9;
    1623:   undefined1 auStackX_20 [8];
    1624:   
    1625:   *param_4 = 0;
    1626:   if (param_2 != 0) {
    1627:     lVar3 = *(longlong *)(param_3 + 8);

## FUN_1402022c4 */ — reconstrucao/src/decompiled_01.c:1840
reconstrucao/src/../include/ghidra_function_prototypes.h:1840:1: error: unknown type name ‘undefined’; did you mean ‘undefined8’?

    1837:     if (0x1e < iVar6 - 1U) {
    1838:       iVar6 = 1;
    1839:     }
    1840:     iVar5 = (int)*(char *)(param_1 + 0x233);
    1841:     if (*(char *)(param_1 + 0x233) <= iVar6) {
    1842:       iVar5 = iVar6;
    1843:     }

## FUN_1402023e8 */ — reconstrucao/src/decompiled_01.c:1867
reconstrucao/src/../include/ghidra_function_prototypes.h:1867:1: error: unknown type name ‘undefined’; did you mean ‘undefined8’?

    1864: undefined1 FUN_1402023e8(void)
    1865: 
    1866: {
    1867:   longlong lVar1;
    1868:   undefined4 *puVar2;
    1869:   undefined8 uVar3;
    1870:   void *pvVar4;

## FUN_140202530 */ — reconstrucao/src/decompiled_01.c:1920
reconstrucao/src/../include/ghidra_function_prototypes.h:1920:73: error: unknown type name ‘va_list’

    1917: /* Ghidra label: FUN_140202530 */
    1918: /* Ghidra address: 140202530 */
    1919: ulonglong FUN_140202530(longlong param_1,undefined4 param_2)
    1920: 
    1921: {
    1922:   undefined8 uVar1;
    1923:   short sVar2;

## FUN_140202738 */ — reconstrucao/src/decompiled_01.c:2038
reconstrucao/src/../include/ghidra_function_prototypes.h:2038:1: error: unknown type name ‘undefined’; did you mean ‘undefined8’?

    2035:       return 1;
    2036:     }
    2037:     if (*(char *)(param_1 + 0x9608) == '\0') {
    2038:       return 0;
    2039:     }
    2040:     if (_DAT_fffff78000000008 <= *(ulonglong *)(param_1 + 0x9580)) {
    2041:       return 0;

## FUN_140202990 */ — reconstrucao/src/decompiled_01.c:2280
reconstrucao/src/../include/ghidra_function_prototypes.h:2280:1: error: unknown type name ‘undefined’; did you mean ‘undefined8’?

    2277:       else {
    2278:         uVar3 = DAT_140fc7bf8;
    2279:       }
    2280:       UNLOCK();
    2281:     } while (!bVar13);
    2282:     uVar3 = 0;
    2283:     if (uVar11 != 0) {

## FUN_140202990 */ — reconstrucao/src/decompiled_01.c:2284
reconstrucao/src/../include/ghidra_function_prototypes.h:2284:36: error: unknown type name ‘code’

    2281:     } while (!bVar13);
    2282:     uVar3 = 0;
    2283:     if (uVar11 != 0) {
    2284:       do {
    2285:         uVar5 = (short)uVar3 + 1;
    2286:         (&DAT_140fc91c0)[uVar3] = auStack_138[uVar3];
    2287:         uVar3 = (ulonglong)uVar5;

## FUN_140203980 */ — reconstrucao/src/decompiled_01.c:2977
reconstrucao/src/../include/ghidra_function_prototypes.h:2977:43: error: unknown type name ‘undefined’; did you mean ‘undefined8’?

    2974:   undefined8 uStack_2b0;
    2975:   undefined8 uStack_2a8;
    2976:   undefined8 *puStack_2a0;
    2977:   ulonglong uStack_298;
    2978:   undefined8 uStack_290;
    2979:   undefined8 uStack_288;
    2980:   undefined4 *puStack_280;

## FUN_140203d50 */ — reconstrucao/src/decompiled_01.c:3209
reconstrucao/src/../include/ghidra_function_prototypes.h:3209:19: error: unknown type name ‘undefined’; did you mean ‘undefined8’?

    3206:   undefined8 uStack_18;
    3207:   undefined8 uStack_10;
    3208:   
    3209:   lStack_28 = 0;
    3210:   uVar6 = (ulonglong)param_4;
    3211:   uStack_10 = 0;
    3212:   uStack_20 = 0;

## FUN_140204660 */ — reconstrucao/src/decompiled_01.c:3674
reconstrucao/src/../include/ghidra_function_prototypes.h:3674:72: error: unknown type name ‘code’

    3671:     }
    3672:     bVar3 = false;
    3673:     lVar6 = *(longlong *)(param_2 + 2);
    3674:     uVar9 = *(longlong *)(param_2 + 4) << 0xc;
    3675:   }
    3676:   if (uVar9 == 0) {
    3677:     return 0xc00000f0;

## FUN_140204eb0 */ — reconstrucao/src/decompiled_01.c:4161
reconstrucao/src/../include/ghidra_function_prototypes.h:4161:1: error: unknown type name ‘undefined’; did you mean ‘undefined8’?

    4158:             if (uStack_104 == 0) {
    4159:               lVar8 = 0;
    4160:             }
    4161:             else if (param_6 == '\0') {
    4162:               lVar8 = *(longlong *)
    4163:                        (((uVar16 * 8 + -0x28) - (longlong)puVar7) + (longlong)plStack_c0 +
    4164:                        (longlong)plVar10);

## FUN_140204eb0 */ — reconstrucao/src/decompiled_01.c:4198
reconstrucao/src/../include/ghidra_function_prototypes.h:4198:1: error: unknown type name ‘undefined’; did you mean ‘undefined8’?

    4195:                 lVar13 = *(longlong *)((longlong)FiberData + 0x8c00);
    4196:               }
    4197:               pvVar11 = (void *)((ulonglong)uStack_f0 & 0xff);
    4198:               *(undefined8 *)(lVar13 + 0x10) = uStack_e0;
    4199:               uVar12 = uStack_e0;
    4200:               if ((char)uStack_f0 != '\0') {
    4201:                 puVar2 = *(uint **)((longlong)FiberData + 0x8eb8);

## FUN_1402052f0 */ — reconstrucao/src/decompiled_01.c:4296
reconstrucao/src/../include/ghidra_function_prototypes.h:4296:1: error: unknown type name ‘undefined’; did you mean ‘undefined8’?

    4293: }
    4294: 
    4295: /* Ghidra label: FUN_1402052f0 */
    4296: /* Ghidra address: 1402052f0 */
    4297: int FUN_1402052f0(longlong param_1,undefined4 param_2,int *param_3)
    4298: 
    4299: {

## FUN_1402055c0 */ — reconstrucao/src/decompiled_01.c:4566
reconstrucao/src/../include/ghidra_function_prototypes.h:4566:1: error: unknown type name ‘undefined’; did you mean ‘undefined8’?

    4563:   while (*(ulonglong *)(lVar6 + 0x38) != uVar10) {
    4564:     iVar4 = FUN_1403e97f0(param_1,lVar6);
    4565:     if (iVar4 < 0) goto LAB_140205865;
    4566:     lVar1 = *(longlong *)(lVar6 + 0x18);
    4567:     if ((*(longlong *)(lVar1 + 0x38) + -1 + *(ulonglong *)(lVar1 + 0x30) < (uVar10 - 1) + uVar12) ||
    4568:        ((uVar13 - uVar10) + 1 < *(ulonglong *)(lVar1 + 0x30))) {
    4569:       bVar2 = false;

## FUN_1402055c0 */ — reconstrucao/src/decompiled_01.c:4568
reconstrucao/src/../include/ghidra_function_prototypes.h:4568:38: error: unknown type name ‘code’

    4565:     if (iVar4 < 0) goto LAB_140205865;
    4566:     lVar1 = *(longlong *)(lVar6 + 0x18);
    4567:     if ((*(longlong *)(lVar1 + 0x38) + -1 + *(ulonglong *)(lVar1 + 0x30) < (uVar10 - 1) + uVar12) ||
    4568:        ((uVar13 - uVar10) + 1 < *(ulonglong *)(lVar1 + 0x30))) {
    4569:       bVar2 = false;
    4570:     }
    4571:     else {

## FUN_140205970 */ — reconstrucao/src/decompiled_01.c:4709
reconstrucao/src/../include/ghidra_function_prototypes.h:4709:26: error: unknown type name ‘undefined’; did you mean ‘undefined8’?

    4706:         uVar14 = uStack_a4;
    4707:       }
    4708:       lVar10 = *(longlong *)(lVar16 + (ulonglong)uVar12 * 8);
    4709:       uVar9 = (ulonglong)(uVar13 + 1);
    4710:       alStack_78[uVar9] = lVar10;
    4711:     }
    4712:     uVar4 = *(uint *)(param_2 + 0x24 + uVar9 * 4);

## FUN_140205970 */ — reconstrucao/src/decompiled_01.c:4711
reconstrucao/src/../include/ghidra_function_prototypes.h:4711:26: error: unknown type name ‘undefined’; did you mean ‘undefined8’?

    4708:       lVar10 = *(longlong *)(lVar16 + (ulonglong)uVar12 * 8);
    4709:       uVar9 = (ulonglong)(uVar13 + 1);
    4710:       alStack_78[uVar9] = lVar10;
    4711:     }
    4712:     uVar4 = *(uint *)(param_2 + 0x24 + uVar9 * 4);
    4713:     bVar7 = (byte)uVar4;
    4714:     iVar2 = (int)uStack_a0;

## FUN_1402061c0 */ — reconstrucao/src/decompiled_01.c:5020
reconstrucao/src/../include/ghidra_function_prototypes.h:5020:20: error: unknown type name ‘PSLIST_HEADER’

    5017:   uVar2 = FUN_1402064e0(1,3,2,acStackX_10,abStackX_8);
    5018:   if ((char)uVar2 != '\0') {
    5019:     if ((DAT_140fc7a87 != '\0') &&
    5020:        (*(char *)(*(longlong *)((longlong)SystemReserved1[0xf] + 0xb8) + 0x160) == '\0')) {
    5021:       FUN_1406bc4a0();
    5022:     }
    5023:     if (DAT_140fc7d20 != 0) {

## FUN_1402061c0 */ — reconstrucao/src/decompiled_01.c:5020
reconstrucao/src/../include/ghidra_function_prototypes.h:5020:42: error: unknown type name ‘code’

    5017:   uVar2 = FUN_1402064e0(1,3,2,acStackX_10,abStackX_8);
    5018:   if ((char)uVar2 != '\0') {
    5019:     if ((DAT_140fc7a87 != '\0') &&
    5020:        (*(char *)(*(longlong *)((longlong)SystemReserved1[0xf] + 0xb8) + 0x160) == '\0')) {
    5021:       FUN_1406bc4a0();
    5022:     }
    5023:     if (DAT_140fc7d20 != 0) {

## FUN_1402061c0 */ — reconstrucao/src/decompiled_01.c:5020
reconstrucao/src/../include/ghidra_function_prototypes.h:5020:56: error: unknown type name ‘code’

    5017:   uVar2 = FUN_1402064e0(1,3,2,acStackX_10,abStackX_8);
    5018:   if ((char)uVar2 != '\0') {
    5019:     if ((DAT_140fc7a87 != '\0') &&
    5020:        (*(char *)(*(longlong *)((longlong)SystemReserved1[0xf] + 0xb8) + 0x160) == '\0')) {
    5021:       FUN_1406bc4a0();
    5022:     }
    5023:     if (DAT_140fc7d20 != 0) {

## FUN_1402061c0 */ — reconstrucao/src/decompiled_01.c:5021
reconstrucao/src/../include/ghidra_function_prototypes.h:5021:20: error: unknown type name ‘PSLIST_HEADER’

    5018:   if ((char)uVar2 != '\0') {
    5019:     if ((DAT_140fc7a87 != '\0') &&
    5020:        (*(char *)(*(longlong *)((longlong)SystemReserved1[0xf] + 0xb8) + 0x160) == '\0')) {
    5021:       FUN_1406bc4a0();
    5022:     }
    5023:     if (DAT_140fc7d20 != 0) {
    5024:       FUN_1404f6e08(in_CR8,abStackX_8[0]);

## FUN_1402061c0 */ — reconstrucao/src/decompiled_01.c:5021
reconstrucao/src/../include/ghidra_function_prototypes.h:5021:42: error: unknown type name ‘code’

    5018:   if ((char)uVar2 != '\0') {
    5019:     if ((DAT_140fc7a87 != '\0') &&
    5020:        (*(char *)(*(longlong *)((longlong)SystemReserved1[0xf] + 0xb8) + 0x160) == '\0')) {
    5021:       FUN_1406bc4a0();
    5022:     }
    5023:     if (DAT_140fc7d20 != 0) {
    5024:       FUN_1404f6e08(in_CR8,abStackX_8[0]);

## FUN_1402061c0 */ — reconstrucao/src/decompiled_01.c:5021
reconstrucao/src/../include/ghidra_function_prototypes.h:5021:56: error: unknown type name ‘code’

    5018:   if ((char)uVar2 != '\0') {
    5019:     if ((DAT_140fc7a87 != '\0') &&
    5020:        (*(char *)(*(longlong *)((longlong)SystemReserved1[0xf] + 0xb8) + 0x160) == '\0')) {
    5021:       FUN_1406bc4a0();
    5022:     }
    5023:     if (DAT_140fc7d20 != 0) {
    5024:       FUN_1404f6e08(in_CR8,abStackX_8[0]);

## KeInvalidateRangeAllCachesNoIpi */ — reconstrucao/src/decompiled_01.c:5063
reconstrucao/src/../include/ghidra_function_prototypes.h:5063:1: error: unknown type name ‘undefined’; did you mean ‘undefined8’?

    5060: 
    5061: {
    5062:   undefined1 *puVar1;
    5063:   ulonglong uVar2;
    5064:   
    5065:                     /* 0x206330  1332  KeInvalidateRangeAllCachesNoIpi */
    5066:   if (param_2 < DAT_140fc61d0) {

## KeInvalidateRangeAllCachesNoIpi */ — reconstrucao/src/decompiled_01.c:5063
reconstrucao/src/../include/ghidra_function_prototypes.h:5063:28: error: unknown type name ‘undefined’; did you mean ‘undefined8’?

    5060: 
    5061: {
    5062:   undefined1 *puVar1;
    5063:   ulonglong uVar2;
    5064:   
    5065:                     /* 0x206330  1332  KeInvalidateRangeAllCachesNoIpi */
    5066:   if (param_2 < DAT_140fc61d0) {

## FUN_1402064e0 */ — reconstrucao/src/decompiled_01.c:5182
reconstrucao/src/../include/ghidra_function_prototypes.h:5182:1: error: unknown type name ‘undefined’; did you mean ‘undefined8’?

    5179:       uVar5 = FUN_140206b78(param_2);
    5180:       if ((char)uVar5 != '\0') goto LAB_14020661d;
    5181:     }
    5182:     uVar5 = (ulonglong)DAT_140fc7a80;
    5183:     if (DAT_140fc7a80 == 1) goto LAB_1402065b7;
    5184:     if (param_3 == 0) {
    5185:       LOCK();

## FUN_140206630 */ — reconstrucao/src/decompiled_01.c:5221
reconstrucao/src/../include/ghidra_function_prototypes.h:5221:1: error: unknown type name ‘undefined’; did you mean ‘undefined8’?

    5218: 
    5219: /* Ghidra label: FUN_140206630 */
    5220: /* Ghidra address: 140206630 */
    5221: ulonglong FUN_140206630(longlong param_1,longlong param_2,undefined1 param_3,char param_4)
    5222: 
    5223: {
    5224:   char cVar1;

## FUN_140206630 */ — reconstrucao/src/decompiled_01.c:5242
reconstrucao/src/../include/ghidra_function_prototypes.h:5242:37: error: unknown type name ‘undefined’; did you mean ‘undefined8’?

    5239:             FUN_1402121d4();
    5240:           }
    5241:           else {
    5242:             FUN_14043eae4(0,0,param_3);
    5243:           }
    5244:           LOCK();
    5245:           DAT_140fd0080 = DAT_140fd0080 + 1;

## FUN_140206774 */ — reconstrucao/src/decompiled_01.c:5311
reconstrucao/src/../include/ghidra_function_prototypes.h:5311:1: error: unknown type name ‘undefined’; did you mean ‘undefined8’?

    5308:   uVar7 = 3;
    5309:   if (param_1 == 1) {
    5310:     uVar7 = 0x80000003;
    5311:   }
    5312:   else if (param_1 == 0) {
    5313:     bVar8 = DAT_141201840 == '\0';
    5314:   }

## FUN_140206a94 */ — reconstrucao/src/decompiled_01.c:5395
reconstrucao/src/../include/ghidra_function_prototypes.h:5395:26: error: unknown type name ‘undefined’; did you mean ‘undefined8’?

    5392:     }
    5393:     for (puVar3 = *(undefined8 **)(param_1 + 0x10); puVar3 != (undefined8 *)(param_1 + 0x10);
    5394:         puVar3 = (undefined8 *)*puVar3) {
    5395:       if (DAT_140fc1a30 == '\0') {
    5396:         FUN_1406c4fb0(*(undefined8 *)(puVar3[3] + 0x10),puVar3 + 4,0,1,&puStackX_10);
    5397:       }
    5398:     }

## FUN_140206ba8 */ — reconstrucao/src/decompiled_01.c:5530
reconstrucao/src/../include/ghidra_function_prototypes.h:5530:40: error: unknown type name ‘code’

    5527:         uVar14 = uVar16;
    5528:       }
    5529:       plVar21[-3] = uVar14;
    5530:       uVar15 = *(uint *)(param_1 + 0xd8);
    5531:       lVar18 = plVar21[-4];
    5532:       plVar21[-4] = *puVar2;
    5533:       lVar18 = lVar18 - *puVar2;

## FUN_140206ba8 */ — reconstrucao/src/decompiled_01.c:5616
reconstrucao/src/../include/ghidra_function_prototypes.h:5616:59: error: unknown type name ‘DWORD64’

    5613:               uVar15 = bVar10 & 0x7f;
    5614:             }
    5615:             FUN_14046ceb0(*(longlong *)(param_1 + 0x8eb8),uVar15,0);
    5616:           }
    5617:         }
    5618: LAB_140206d52:
    5619:         FUN_14020708c(puVar2,0,param_1,0);

## FUN_14020708c */ — reconstrucao/src/decompiled_01.c:5832
reconstrucao/src/../include/ghidra_function_prototypes.h:5832:65: error: unknown type name ‘va_list’

    5829:            ((((longlong *)*plVar6 != plVar15 || (*(longlong **)(*plVar4 + 8) != plVar4)) ||
    5830:             ((longlong *)*plVar5 != plVar4)))) goto LAB_1406e1207;
    5831:         *plVar6 = (longlong)plVar4;
    5832:         plVar15[1] = plVar4[1];
    5833:         *(longlong **)plVar4[1] = plVar15;
    5834:         plVar4[1] = (longlong)plVar6;
    5835:       }

## FUN_1402072f0 */ — reconstrucao/src/decompiled_01.c:6363
reconstrucao/src/../include/ghidra_function_prototypes.h:6363:26: error: unknown type name ‘undefined’; did you mean ‘undefined8’?

    6360:   }
    6361:   return;
    6362: }
    6363: 
    6364: /* Ghidra label: FUN_140207d10 */
    6365: /* Ghidra address: 140207d10 */
    6366: void FUN_140207d10(longlong param_1,void *param_2,longlong param_3)

## FUN_140208094 */ — reconstrucao/src/decompiled_01.c:6638
reconstrucao/src/../include/ghidra_function_prototypes.h:6638:1: error: unknown type name ‘undefined’; did you mean ‘undefined8’?

    6635:   *(longlong **)(puVar14 + 0x20) = alStack_50;
    6636:   *(undefined8 *)(puVar14 + -8) = 0x1402080fd;
    6637:   FUN_140206ba8(param_1);
    6638:   pbVar5 = *(byte **)(param_1 + 0x37e8);
    6639:   lStack_58 = 0;
    6640:   *(undefined8 *)(puVar14 + -8) = 0x140208119;
    6641:   FUN_1406d1200(pbVar5,0,0xf0);

## FUN_140208900 */ — reconstrucao/src/decompiled_01.c:7015
reconstrucao/src/../include/ghidra_function_prototypes.h:7015:20: error: unknown type name ‘code’

    7012:   undefined8 uVar5;
    7013:   bool bVar6;
    7014:   bool bVar7;
    7015:   bool bVar8;
    7016:   char cVar9;
    7017:   char cVar10;
    7018:   byte *pbVar11;

## FUN_140208900 */ — reconstrucao/src/decompiled_01.c:7083
reconstrucao/src/../include/ghidra_function_prototypes.h:7083:43: error: unknown type name ‘ulong’; did you mean ‘long’?

    7080:           goto LAB_1402089e7;
    7081:         }
    7082:         if (puVar16[3] <= *puVar16) {
    7083:           FUN_140452538(lVar15,puVar16,param_1);
    7084:           if (puVar18 == puVar16) {
    7085:             bVar8 = true;
    7086:           }

## FUN_140208900 */ — reconstrucao/src/decompiled_01.c:7117
reconstrucao/src/../include/ghidra_function_prototypes.h:7117:1: error: unknown type name ‘undefined’; did you mean ‘undefined8’?

    7114:     puVar14 = (ulonglong *)((ulonglong)*(uint *)(param_1 + 0xd8) + *(longlong *)(param_3 + 0x68));
    7115:   }
    7116:   pbVar4 = *(byte **)(param_1 + 0x37e8);
    7117:   puStack_60 = puVar13;
    7118:   puStack_58 = puVar16;
    7119:   FUN_1406d1200(pbVar4,0,0xf0);
    7120:   FUN_140209d90(pbVar4,param_2,0);

## FUN_140208ef8 */ — reconstrucao/src/decompiled_01.c:7456
reconstrucao/src/../include/ghidra_function_prototypes.h:7456:39: error: unknown type name ‘code’

    7453:             *(uint *)(lVar7 + 8) = uVar12;
    7454:             if ((DAT_140fc7b14 & 0x20) != 0) {
    7455:               FUN_1404fc940(*(undefined4 *)(uVar8 + 0x24),2);
    7456:             }
    7457:             wrmsr(0x400000c2,(ulonglong)uVar12);
    7458:             uVar12 = 1;
    7459:           }

## FUN_140209534 */ — reconstrucao/src/decompiled_01.c:7577
reconstrucao/src/../include/ghidra_function_prototypes.h:7577:1: error: unknown type name ‘undefined’; did you mean ‘undefined8’?

    7574:   undefined4 uVar12;
    7575:   ulonglong *puVar13;
    7576:   byte bVar14;
    7577:   ulonglong uVar15;
    7578:   uint uVar16;
    7579:   bool bVar17;
    7580:   byte bStackX_8;

## FUN_140209534 */ — reconstrucao/src/decompiled_01.c:7605
reconstrucao/src/../include/ghidra_function_prototypes.h:7605:36: error: unknown type name ‘wint_t’; did you mean ‘uint8_t’?

    7602:       }
    7603:       else {
    7604:         uVar16 = uVar8;
    7605:       }
    7606:       UNLOCK();
    7607:     } while (!bVar17);
    7608:     if ((uVar16 >> 0x15 & 1) != 0) {

## FUN_140209534 */ — reconstrucao/src/decompiled_01.c:7610
reconstrucao/src/../include/ghidra_function_prototypes.h:7610:20: error: unknown type name ‘code’

    7607:     } while (!bVar17);
    7608:     if ((uVar16 >> 0x15 & 1) != 0) {
    7609:       FUN_140283a40();
    7610:     }
    7611:   }
    7612:   bVar14 = **(byte **)(param_1 + 0x38);
    7613:   uStack_68 = param_1;

## FUN_140209534 */ — reconstrucao/src/decompiled_01.c:7620
reconstrucao/src/../include/ghidra_function_prototypes.h:7620:66: error: unknown type name ‘code’

    7617:     uVar16 = (uint)bVar6;
    7618:   }
    7619:   uStackX_18 = param_1 & 0xfffffffffffffffe | (ulonglong)uVar16;
    7620:   if (uVar16 == 0) {
    7621:     puVar13 = &uStack_68;
    7622:     uVar16 = 1;
    7623: LAB_1402095bf:

## FUN_140209534 */ — reconstrucao/src/decompiled_01.c:7656
reconstrucao/src/../include/ghidra_function_prototypes.h:7656:33: error: unknown type name ‘uint3’; did you mean ‘uint32’?

    7653:   if ((char)(bVar14 ^ **(byte **)(param_1 + 0x38)) < '\0') {
    7654:     FUN_140431610(param_1);
    7655:   }
    7656:   uVar15 = uStackX_18;
    7657:   if ((*(uint *)(param_1 + 0xec) & 0x800) == 0) {
    7658:     *(uint *)(param_1 + 0xec) = *(uint *)(param_1 + 0xec) | 0x800;
    7659:   }

## FUN_14020a6b0 */ — reconstrucao/src/decompiled_01.c:8523
reconstrucao/src/../include/ghidra_function_prototypes.h:8523:1: error: unknown type name ‘code’

    8520:       FUN_14046ceb0(*(longlong *)(lVar2 + 0x8eb8),uVar16,0);
    8521:     }
    8522:     bVar10 = *(byte *)(*(longlong *)(lVar2 + 0x38) + 0x40);
    8523:     bVar10 = bVar10 ^ (bVar10 ^ *(byte *)(uVar21 + 0x204)) & 7;
    8524:     uVar16 = *(uint *)(uVar21 + 0x50);
    8525:     if (*(uint *)(uVar21 + 0x50) <= *(uint *)(uVar21 + 0x54)) {
    8526:       uVar16 = *(uint *)(uVar21 + 0x54);

## FUN_14020a6b0 */ — reconstrucao/src/decompiled_01.c:8557
reconstrucao/src/../include/ghidra_function_prototypes.h:8557:1: error: unknown type name ‘undefined’; did you mean ‘undefined8’?

    8554:         *(undefined1 *)(lVar14 + 0x235) = 1;
    8555:       }
    8556:       if ((*(byte *)((longlong)param_1 + 0x22) & 1) == 0) {
    8557:         FUN_1402e7000(param_4,lVar14);
    8558:       }
    8559:     }
    8560:     else if (lVar14 == *(longlong *)(lVar2 + 0x18)) {

## FUN_14020abb0 */ — reconstrucao/src/decompiled_01.c:8807
reconstrucao/src/../include/ghidra_function_prototypes.h:8807:1: error: unknown type name ‘code’

    8804:       if (puVar3 <= param_3) {
    8805:         return;
    8806:       }
    8807:       uVar5 = *param_3;
    8808: LAB_14020ac03:
    8809:       param_3 = param_3 + 1;
    8810:       uVar6 = uVar5;

## FUN_14020b590 */ — reconstrucao/src/decompiled_01.c:9391
reconstrucao/src/../include/ghidra_function_prototypes.h:9391:1: error: unknown type name ‘undefined’; did you mean ‘undefined8’?

    9388:   undefined8 uStack_40;
    9389:   undefined8 uStack_38;
    9390:   undefined8 uStack_30;
    9391:   
    9392:   puVar16 = (undefined8 *)(param_3 + 0x9178);
    9393:   plVar17 = (longlong *)(param_3 + 0x9170);
    9394:   puStack_b0 = (undefined8 *)0x0;

## FUN_14020cbe0 */ — reconstrucao/src/decompiled_01.c:10748
reconstrucao/src/../include/ghidra_function_prototypes.h:10748:26: error: unknown type name ‘undefined’; did you mean ‘undefined8’?

    10745:           if (cVar4 != '\0') {
    10746:             cVar4 = FUN_140311700();
    10747:             if (cVar4 == '\0') {
    10748:               uVar24 = FUN_1402e8420(*(undefined2 *)(param_2 + 0x88),uVar24);
    10749:               uStack_110 = uVar24;
    10750:               if (DAT_140fc7d1c != 0) {
    10751:                 cVar4 = FUN_1404f983c(lVar11,param_1);

## FUN_14020cbe0 */ — reconstrucao/src/decompiled_01.c:10749
reconstrucao/src/../include/ghidra_function_prototypes.h:10749:26: error: unknown type name ‘undefined’; did you mean ‘undefined8’?

    10746:             cVar4 = FUN_140311700();
    10747:             if (cVar4 == '\0') {
    10748:               uVar24 = FUN_1402e8420(*(undefined2 *)(param_2 + 0x88),uVar24);
    10749:               uStack_110 = uVar24;
    10750:               if (DAT_140fc7d1c != 0) {
    10751:                 cVar4 = FUN_1404f983c(lVar11,param_1);
    10752:                 if (cVar4 != '\0') {

## FUN_14020cbe0 */ — reconstrucao/src/decompiled_01.c:10750
reconstrucao/src/../include/ghidra_function_prototypes.h:10750:26: error: unknown type name ‘undefined’; did you mean ‘undefined8’?

    10747:             if (cVar4 == '\0') {
    10748:               uVar24 = FUN_1402e8420(*(undefined2 *)(param_2 + 0x88),uVar24);
    10749:               uStack_110 = uVar24;
    10750:               if (DAT_140fc7d1c != 0) {
    10751:                 cVar4 = FUN_1404f983c(lVar11,param_1);
    10752:                 if (cVar4 != '\0') {
    10753:                   FUN_14040294c(param_2,&uStack_110);

## FUN_14020cbe0 */ — reconstrucao/src/decompiled_01.c:10751
reconstrucao/src/../include/ghidra_function_prototypes.h:10751:26: error: unknown type name ‘undefined’; did you mean ‘undefined8’?

    10748:               uVar24 = FUN_1402e8420(*(undefined2 *)(param_2 + 0x88),uVar24);
    10749:               uStack_110 = uVar24;
    10750:               if (DAT_140fc7d1c != 0) {
    10751:                 cVar4 = FUN_1404f983c(lVar11,param_1);
    10752:                 if (cVar4 != '\0') {
    10753:                   FUN_14040294c(param_2,&uStack_110);
    10754:                   uVar24 = uStack_110;

## FUN_14020cbe0 */ — reconstrucao/src/decompiled_01.c:10847
reconstrucao/src/../include/ghidra_function_prototypes.h:10847:1: error: unknown type name ‘undefined’; did you mean ‘undefined8’?

    10844:                 goto LAB_14020e320;
    10845:               }
    10846: LAB_14020e85b:
    10847:               uVar23 = uVar23 & ~*(ulonglong *)(lVar20 + 200);
    10848:               uVar24 = uVar24 & ~*(ulonglong *)(lVar20 + 200);
    10849:               uStack_110 = uVar23;
    10850:               FUN_14034eff0(alStack_f8 + 1);

## FUN_14020cbe0 */ — reconstrucao/src/decompiled_01.c:10850
reconstrucao/src/../include/ghidra_function_prototypes.h:10850:26: error: unknown type name ‘undefined’; did you mean ‘undefined8’?

    10847:               uVar23 = uVar23 & ~*(ulonglong *)(lVar20 + 200);
    10848:               uVar24 = uVar24 & ~*(ulonglong *)(lVar20 + 200);
    10849:               uStack_110 = uVar23;
    10850:               FUN_14034eff0(alStack_f8 + 1);
    10851:             }
    10852:           }
    10853:           if (uVar23 == 0) {

## FUN_14020cbe0 */ — reconstrucao/src/decompiled_01.c:10937
reconstrucao/src/../include/ghidra_function_prototypes.h:10937:26: error: unknown type name ‘PVOID’

    10934:           }
    10935:           FUN_140272b80(&uStack_b8,uVar17);
    10936:         }
    10937:         else {
    10938:           FUN_14020bf14(param_1 + 0x35e0,*(undefined1 *)(param_1 + 0x35d8));
    10939:         }
    10940:         if (*(char *)(param_1 + 0x35d9) == '\x02') {

## FUN_14020cbe0 */ — reconstrucao/src/decompiled_01.c:10976
reconstrucao/src/../include/ghidra_function_prototypes.h:10976:1: error: unknown type name ‘undefined’; did you mean ‘undefined8’?

    10973:     lStack_120 = 0;
    10974:     lStack_148 = 0;
    10975:     uStack_138 = 0;
    10976:     plStack_128 = (longlong *)0x0;
    10977:     uStack_130 = 0x2000000000;
    10978:     plStack_150 = (longlong *)0x0;
    10979:     uStack_158 = 0x2000000000;

## FUN_14020cbe0 */ — reconstrucao/src/decompiled_01.c:11021
reconstrucao/src/../include/ghidra_function_prototypes.h:11021:1: error: unknown type name ‘code’

    11018:       }
    11019:       uStack_108 = 0;
    11020:       uStack_18c = 0;
    11021:       uStack_198 = 0;
    11022:       plVar15 = plStack_128;
    11023:       uStack_138 = param_5;
    11024: LAB_14020cf3d:

## FUN_14020f2b0 */ — reconstrucao/src/decompiled_01.c:12411
reconstrucao/src/../include/ghidra_function_prototypes.h:12411:20: error: unknown type name ‘undefined’; did you mean ‘undefined8’?

    12408:               if (0x3ffff < uVar12) {
    12409:                 if (*(longlong *)(lVar7 + 8) != 0) {
    12410:                   FUN_140425064(param_1,lVar7);
    12411:                 }
    12412:                 lVar7 = *(longlong *)(param_1 + 0x48);
    12413:                 FUN_140488178(param_1,lVar11);
    12414:                 uVar12 = 0;

## FUN_14020f6a0 */ — reconstrucao/src/decompiled_01.c:12816
reconstrucao/src/../include/ghidra_function_prototypes.h:12816:19: error: unknown type name ‘DWORD64’

    12813:           lVar5 = *(longlong *)((longlong)pvVar9 + (ulonglong)uVar11 * 8 + 0x2dc0);
    12814:           if ((lVar5 != 0) &&
    12815:              ((uVar11 != *(byte *)((longlong)pvStack_1a8 + 0xd0) ||
    12816:               (lVar5 != *(longlong *)((longlong)pvStack_1a8 + 200))))) {
    12817:             uStack_1e8 = 0x80000004;
    12818:             if (iStack_1c4 != 1) {
    12819:               uStack_1e8 = 4;

## FUN_140210e10 */ — reconstrucao/src/decompiled_01.c:13515
reconstrucao/src/../include/ghidra_function_prototypes.h:13515:38: error: unknown type name ‘PVOID’

    13512:   undefined8 uStack_f8;
    13513:   undefined8 uStack_f0;
    13514:   ulonglong uStack_48;
    13515:   
    13516:   uStack_48 = DAT_140e0a740 ^ (ulonglong)auStack_158;
    13517:   iStack_124 = param_4;
    13518:   FUN_1406d1200(&lStack_118,0,200);

## FUN_140210e10 */ — reconstrucao/src/decompiled_01.c:13533
reconstrucao/src/../include/ghidra_function_prototypes.h:13533:38: error: unknown type name ‘code’

    13530:       uStack_110 = 0;
    13531:       uStack_108 = 9;
    13532:     }
    13533:     else {
    13534:       uStack_108 = 8;
    13535:       uStack_110 = 0;
    13536:       if ((*(uint *)(param_1 + 0xb8) & 0xf) == 0) {

## FUN_140210e10 */ — reconstrucao/src/decompiled_01.c:13537
reconstrucao/src/../include/ghidra_function_prototypes.h:13537:20: error: unknown type name ‘code’

    13534:       uStack_108 = 8;
    13535:       uStack_110 = 0;
    13536:       if ((*(uint *)(param_1 + 0xb8) & 0xf) == 0) {
    13537:         uStack_110 = 1;
    13538:       }
    13539:     }
    13540:     uStack_ff = 0;

## FUN_140211820 */ — reconstrucao/src/decompiled_01.c:13916
reconstrucao/src/../include/ghidra_function_prototypes.h:13916:20: error: unknown type name ‘code’

    13913:   ushort uVar4;
    13914:   longlong lVar5;
    13915:   void *pvVar6;
    13916:   longlong lVar7;
    13917:   ulonglong uVar8;
    13918:   longlong lVar9;
    13919:   void *in_CR8;

## FUN_140211820 */ — reconstrucao/src/decompiled_01.c:13916
reconstrucao/src/../include/ghidra_function_prototypes.h:13916:34: error: unknown type name ‘code’

    13913:   ushort uVar4;
    13914:   longlong lVar5;
    13915:   void *pvVar6;
    13916:   longlong lVar7;
    13917:   ulonglong uVar8;
    13918:   longlong lVar9;
    13919:   void *in_CR8;

## FUN_140211ed0 */ — reconstrucao/src/decompiled_01.c:14219
reconstrucao/src/../include/ghidra_function_prototypes.h:14219:1: error: unknown type name ‘code’

    14216:                 puVar3 = puVar4;
    14217:               } while (puVar4 != (ulonglong *)0x0);
    14218:               if (puVar6 != (ulonglong *)0x0) {
    14219:                 puVar11 = puVar6;
    14220:               }
    14221:             }
    14222:             break;

## FUN_140211ed0 */ — reconstrucao/src/decompiled_01.c:14219
reconstrucao/src/../include/ghidra_function_prototypes.h:14219:22: error: unknown type name ‘code’

    14216:                 puVar3 = puVar4;
    14217:               } while (puVar4 != (ulonglong *)0x0);
    14218:               if (puVar6 != (ulonglong *)0x0) {
    14219:                 puVar11 = puVar6;
    14220:               }
    14221:             }
    14222:             break;

## FUN_140211ed0 */ — reconstrucao/src/decompiled_01.c:14219
reconstrucao/src/../include/ghidra_function_prototypes.h:14219:36: error: unknown type name ‘code’

    14216:                 puVar3 = puVar4;
    14217:               } while (puVar4 != (ulonglong *)0x0);
    14218:               if (puVar6 != (ulonglong *)0x0) {
    14219:                 puVar11 = puVar6;
    14220:               }
    14221:             }
    14222:             break;

## FUN_140211ed0 */ — reconstrucao/src/decompiled_01.c:14220
reconstrucao/src/../include/ghidra_function_prototypes.h:14220:1: error: unknown type name ‘code’

    14217:               } while (puVar4 != (ulonglong *)0x0);
    14218:               if (puVar6 != (ulonglong *)0x0) {
    14219:                 puVar11 = puVar6;
    14220:               }
    14221:             }
    14222:             break;
    14223:           }

## FUN_140211ed0 */ — reconstrucao/src/decompiled_01.c:14220
reconstrucao/src/../include/ghidra_function_prototypes.h:14220:22: error: unknown type name ‘code’

    14217:               } while (puVar4 != (ulonglong *)0x0);
    14218:               if (puVar6 != (ulonglong *)0x0) {
    14219:                 puVar11 = puVar6;
    14220:               }
    14221:             }
    14222:             break;
    14223:           }

## FUN_140211ed0 */ — reconstrucao/src/decompiled_01.c:14220
reconstrucao/src/../include/ghidra_function_prototypes.h:14220:36: error: unknown type name ‘code’

    14217:               } while (puVar4 != (ulonglong *)0x0);
    14218:               if (puVar6 != (ulonglong *)0x0) {
    14219:                 puVar11 = puVar6;
    14220:               }
    14221:             }
    14222:             break;
    14223:           }

## FUN_140211ed0 */ — reconstrucao/src/decompiled_01.c:14285
reconstrucao/src/../include/ghidra_function_prototypes.h:14285:1: error: unknown type name ‘code’

    14282:       uStack_40 = (uVar13 - uStack_48) + 1;
    14283:       if ((puVar11[9] & 2) != 0) {
    14284:         *param_6 = *param_6 | 2;
    14285:       }
    14286:       if (!bVar2) {
    14287:         return uVar9;
    14288:       }

## FUN_140211ed0 */ — reconstrucao/src/decompiled_01.c:14285
reconstrucao/src/../include/ghidra_function_prototypes.h:14285:22: error: unknown type name ‘code’

    14282:       uStack_40 = (uVar13 - uStack_48) + 1;
    14283:       if ((puVar11[9] & 2) != 0) {
    14284:         *param_6 = *param_6 | 2;
    14285:       }
    14286:       if (!bVar2) {
    14287:         return uVar9;
    14288:       }

## FUN_140211ed0 */ — reconstrucao/src/decompiled_01.c:14285
reconstrucao/src/../include/ghidra_function_prototypes.h:14285:36: error: unknown type name ‘code’

    14282:       uStack_40 = (uVar13 - uStack_48) + 1;
    14283:       if ((puVar11[9] & 2) != 0) {
    14284:         *param_6 = *param_6 | 2;
    14285:       }
    14286:       if (!bVar2) {
    14287:         return uVar9;
    14288:       }

## FUN_140211ed0 */ — reconstrucao/src/decompiled_01.c:14351
reconstrucao/src/../include/ghidra_function_prototypes.h:14351:20: error: unknown type name ‘code’

    14348:       lVar5 = param_1;
    14349:     }
    14350:   } while( true );
    14351: }
    14352: 
    14353: /* Ghidra label: FUN_1402121d4 */
    14354: /* Ghidra address: 1402121d4 */

## FUN_140211ed0 */ — reconstrucao/src/decompiled_01.c:14351
reconstrucao/src/../include/ghidra_function_prototypes.h:14351:34: error: unknown type name ‘code’

    14348:       lVar5 = param_1;
    14349:     }
    14350:   } while( true );
    14351: }
    14352: 
    14353: /* Ghidra label: FUN_1402121d4 */
    14354: /* Ghidra address: 1402121d4 */

## FUN_1402121d4 */ — reconstrucao/src/decompiled_01.c:14384
reconstrucao/src/../include/ghidra_function_prototypes.h:14384:20: error: unknown type name ‘code’

    14381:   uVar3 = ~-(uint)(param_3 != '\0') & 4;
    14382:   uVar6 = uVar3 | 2;
    14383:   if (param_1 != 0) {
    14384:     uVar6 = uVar3;
    14385:   }
    14386:   uVar7 = (ulonglong)uVar6;
    14387:   if (param_2 == 0) {

## FUN_1402121d4 */ — reconstrucao/src/decompiled_01.c:14384
reconstrucao/src/../include/ghidra_function_prototypes.h:14384:34: error: unknown type name ‘code’

    14381:   uVar3 = ~-(uint)(param_3 != '\0') & 4;
    14382:   uVar6 = uVar3 | 2;
    14383:   if (param_1 != 0) {
    14384:     uVar6 = uVar3;
    14385:   }
    14386:   uVar7 = (ulonglong)uVar6;
    14387:   if (param_2 == 0) {

## FUN_1402121d4 */ — reconstrucao/src/decompiled_01.c:14417
reconstrucao/src/../include/ghidra_function_prototypes.h:14417:20: error: unknown type name ‘code’

    14414:     uVar3 = *(uint *)(DAT_140fd0c80 + 0x11a8);
    14415:     while( true ) {
    14416:       uVar1 = 0;
    14417:       if (uVar3 != 0) {
    14418:         for (; (uVar3 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
    14419:         }
    14420:       }

## FUN_1402121d4 */ — reconstrucao/src/decompiled_01.c:14417
reconstrucao/src/../include/ghidra_function_prototypes.h:14417:34: error: unknown type name ‘code’

    14414:     uVar3 = *(uint *)(DAT_140fd0c80 + 0x11a8);
    14415:     while( true ) {
    14416:       uVar1 = 0;
    14417:       if (uVar3 != 0) {
    14418:         for (; (uVar3 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
    14419:         }
    14420:       }

## FUN_1402121d4 */ — reconstrucao/src/decompiled_01.c:14450
reconstrucao/src/../include/ghidra_function_prototypes.h:14450:20: error: unknown type name ‘code’

    14447:   }
    14448:   else {
    14449:     uStack_40 = FUN_140359514();
    14450:   }
    14451: LAB_14021225b:
    14452:   FUN_1406c6320(uStack_60,&lStack_38,0x18);
    14453:   if (bVar2) {

## FUN_1402121d4 */ — reconstrucao/src/decompiled_01.c:14450
reconstrucao/src/../include/ghidra_function_prototypes.h:14450:34: error: unknown type name ‘code’

    14447:   }
    14448:   else {
    14449:     uStack_40 = FUN_140359514();
    14450:   }
    14451: LAB_14021225b:
    14452:   FUN_1406c6320(uStack_60,&lStack_38,0x18);
    14453:   if (bVar2) {

## FUN_1402123a0 */ — reconstrucao/src/decompiled_01.c:14483
reconstrucao/src/../include/ghidra_function_prototypes.h:14483:20: error: unknown type name ‘code’

    14480:       UNLOCK();
    14481:       if ((uVar3 & 1) == 0) {
    14482:         return 1;
    14483:       }
    14484:     }
    14485:     uVar4 = uVar4 + 1;
    14486:     if ((((DAT_140fc62ac & uVar4) == 0) && ((DAT_140fc7ab8 & 0x40) != 0)) &&

## FUN_1402123a0 */ — reconstrucao/src/decompiled_01.c:14483
reconstrucao/src/../include/ghidra_function_prototypes.h:14483:34: error: unknown type name ‘code’

    14480:       UNLOCK();
    14481:       if ((uVar3 & 1) == 0) {
    14482:         return 1;
    14483:       }
    14484:     }
    14485:     uVar4 = uVar4 + 1;
    14486:     if ((((DAT_140fc62ac & uVar4) == 0) && ((DAT_140fc7ab8 & 0x40) != 0)) &&

## FUN_140212530 */ — reconstrucao/src/decompiled_01.c:14584
reconstrucao/src/../include/ghidra_function_prototypes.h:14584:1: error: unknown type name ‘code’

    14581:     iVar6 = FUN_140208890(pvVar4,puVar8);
    14582:     if (iVar6 == 0) goto LAB_140212684;
    14583:   }
    14584:   else {
    14585:     puVar8 = (ushort *)0x0;
    14586:     uVar9 = 1;
    14587:     if (DAT_141201840 != '\0') {

## FUN_140212530 */ — reconstrucao/src/decompiled_01.c:14584
reconstrucao/src/../include/ghidra_function_prototypes.h:14584:22: error: unknown type name ‘code’

    14581:     iVar6 = FUN_140208890(pvVar4,puVar8);
    14582:     if (iVar6 == 0) goto LAB_140212684;
    14583:   }
    14584:   else {
    14585:     puVar8 = (ushort *)0x0;
    14586:     uVar9 = 1;
    14587:     if (DAT_141201840 != '\0') {

## FUN_140212530 */ — reconstrucao/src/decompiled_01.c:14584
reconstrucao/src/../include/ghidra_function_prototypes.h:14584:36: error: unknown type name ‘code’

    14581:     iVar6 = FUN_140208890(pvVar4,puVar8);
    14582:     if (iVar6 == 0) goto LAB_140212684;
    14583:   }
    14584:   else {
    14585:     puVar8 = (ushort *)0x0;
    14586:     uVar9 = 1;
    14587:     if (DAT_141201840 != '\0') {

## FUN_1402126f8 */ — reconstrucao/src/decompiled_01.c:14649
reconstrucao/src/../include/ghidra_function_prototypes.h:14649:26: error: unknown type name ‘code’

    14646:     }
    14647:     uStackX_8 = *(uint *)(lVar3 + 0x20) & 0xfffeffff | 0x60000;
    14648:     *(uint *)(lVar3 + 0x20) = uStackX_8;
    14649:     FUN_1402310d0(lVar3,0);
    14650:     LOCK();
    14651:     *(ulonglong *)(lVar3 + 0x18) = *(ulonglong *)(lVar3 + 0x18) & 0x7fffffffffffffff;
    14652:     UNLOCK();

## FUN_1402126f8 */ — reconstrucao/src/decompiled_01.c:14649
reconstrucao/src/../include/ghidra_function_prototypes.h:14649:40: error: unknown type name ‘code’

    14646:     }
    14647:     uStackX_8 = *(uint *)(lVar3 + 0x20) & 0xfffeffff | 0x60000;
    14648:     *(uint *)(lVar3 + 0x20) = uStackX_8;
    14649:     FUN_1402310d0(lVar3,0);
    14650:     LOCK();
    14651:     *(ulonglong *)(lVar3 + 0x18) = *(ulonglong *)(lVar3 + 0x18) & 0x7fffffffffffffff;
    14652:     UNLOCK();

## FUN_1402127f0 */ — reconstrucao/src/decompiled_01.c:14715
reconstrucao/src/../include/ghidra_function_prototypes.h:14715:1: error: unknown type name ‘code’

    14712:   undefined8 uStack_148;
    14713:   undefined8 uStack_140;
    14714:   undefined8 uStack_138;
    14715:   undefined8 uStack_130;
    14716:   undefined8 uStack_128;
    14717:   undefined8 uStack_120;
    14718:   undefined8 uStack_118;

## FUN_1402127f0 */ — reconstrucao/src/decompiled_01.c:14715
reconstrucao/src/../include/ghidra_function_prototypes.h:14715:22: error: unknown type name ‘code’

    14712:   undefined8 uStack_148;
    14713:   undefined8 uStack_140;
    14714:   undefined8 uStack_138;
    14715:   undefined8 uStack_130;
    14716:   undefined8 uStack_128;
    14717:   undefined8 uStack_120;
    14718:   undefined8 uStack_118;

## FUN_1402127f0 */ — reconstrucao/src/decompiled_01.c:14715
reconstrucao/src/../include/ghidra_function_prototypes.h:14715:36: error: unknown type name ‘code’

    14712:   undefined8 uStack_148;
    14713:   undefined8 uStack_140;
    14714:   undefined8 uStack_138;
    14715:   undefined8 uStack_130;
    14716:   undefined8 uStack_128;
    14717:   undefined8 uStack_120;
    14718:   undefined8 uStack_118;

## FUN_1402127f0 */ — reconstrucao/src/decompiled_01.c:14947
reconstrucao/src/../include/ghidra_function_prototypes.h:14947:20: error: unknown type name ‘code’

    14944:             UNLOCK();
    14945:             if (-1 < (longlong)uVar14) break;
    14946:             do {
    14947:               uVar16 = uVar16 + 1;
    14948:               if ((((DAT_140fc62ac & uVar16) == 0) && ((DAT_140fc7ab8 & 0x40) != 0)) &&
    14949:                  (cVar7 = FUN_14020cb70(), cVar7 != '\0')) {
    14950:                 FUN_14020cb40(uVar16);

## FUN_1402127f0 */ — reconstrucao/src/decompiled_01.c:14947
reconstrucao/src/../include/ghidra_function_prototypes.h:14947:34: error: unknown type name ‘code’

    14944:             UNLOCK();
    14945:             if (-1 < (longlong)uVar14) break;
    14946:             do {
    14947:               uVar16 = uVar16 + 1;
    14948:               if ((((DAT_140fc62ac & uVar16) == 0) && ((DAT_140fc7ab8 & 0x40) != 0)) &&
    14949:                  (cVar7 = FUN_14020cb70(), cVar7 != '\0')) {
    14950:                 FUN_14020cb40(uVar16);

## FUN_1402127f0 */ — reconstrucao/src/decompiled_01.c:14980
reconstrucao/src/../include/ghidra_function_prototypes.h:14980:20: error: unknown type name ‘code’

    14977:             LOCK();
    14978:             *(ulonglong *)(lVar12 + 0x18) = *(ulonglong *)(lVar12 + 0x18) & 0x7fffffffffffffff;
    14979:             UNLOCK();
    14980:             if ((((puVar22 == (ulonglong *)(*(ulonglong *)(lVar12 + 8) | 0x8000000000000000)) &&
    14981:                  (-1 < *(longlong *)(lVar12 + 0x28))) &&
    14982:                 (((*(ulonglong *)(lVar12 + 0x28) >> 0x28 & 1) == 0 &&
    14983:                  ((((*(uint *)(lVar12 + 0x20) >> 0x18 & 8) == 0 &&

## FUN_1402127f0 */ — reconstrucao/src/decompiled_01.c:14980
reconstrucao/src/../include/ghidra_function_prototypes.h:14980:34: error: unknown type name ‘code’

    14977:             LOCK();
    14978:             *(ulonglong *)(lVar12 + 0x18) = *(ulonglong *)(lVar12 + 0x18) & 0x7fffffffffffffff;
    14979:             UNLOCK();
    14980:             if ((((puVar22 == (ulonglong *)(*(ulonglong *)(lVar12 + 8) | 0x8000000000000000)) &&
    14981:                  (-1 < *(longlong *)(lVar12 + 0x28))) &&
    14982:                 (((*(ulonglong *)(lVar12 + 0x28) >> 0x28 & 1) == 0 &&
    14983:                  ((((*(uint *)(lVar12 + 0x20) >> 0x18 & 8) == 0 &&

## FUN_1402127f0 */ — reconstrucao/src/decompiled_01.c:15014
reconstrucao/src/../include/ghidra_function_prototypes.h:15014:20: error: unknown type name ‘code’

    15011:                 if (uStack_1c8 < 8) {
    15012:                   lVar17 = 2;
    15013:                 }
    15014:                 else {
    15015:                   FUN_1404641b0(puVar22,lVar11);
    15016:                   FUN_1402b9f00(uStack_198,iVar8 != 1);
    15017:                 }

## FUN_1402127f0 */ — reconstrucao/src/decompiled_01.c:15014
reconstrucao/src/../include/ghidra_function_prototypes.h:15014:34: error: unknown type name ‘code’

    15011:                 if (uStack_1c8 < 8) {
    15012:                   lVar17 = 2;
    15013:                 }
    15014:                 else {
    15015:                   FUN_1404641b0(puVar22,lVar11);
    15016:                   FUN_1402b9f00(uStack_198,iVar8 != 1);
    15017:                 }

## FUN_1402127f0 */ — reconstrucao/src/decompiled_01.c:15047
reconstrucao/src/../include/ghidra_function_prototypes.h:15047:20: error: unknown type name ‘code’

    15044:                     *(undefined4 *)((longlong)plStack_1c0 + 0x1c) = 0;
    15045:                     plStack_1c0[4] = 0;
    15046:                     plStack_1c0[5] = 0;
    15047:                     plStack_1d0 = plStack_1c0;
    15048:                   }
    15049:                   plVar20 = plStack_1d0;
    15050:                   FUN_140214a50(plStack_1d0);

## FUN_1402127f0 */ — reconstrucao/src/decompiled_01.c:15047
reconstrucao/src/../include/ghidra_function_prototypes.h:15047:34: error: unknown type name ‘code’

    15044:                     *(undefined4 *)((longlong)plStack_1c0 + 0x1c) = 0;
    15045:                     plStack_1c0[4] = 0;
    15046:                     plStack_1c0[5] = 0;
    15047:                     plStack_1d0 = plStack_1c0;
    15048:                   }
    15049:                   plVar20 = plStack_1d0;
    15050:                   FUN_140214a50(plStack_1d0);

## FUN_1402127f0 */ — reconstrucao/src/decompiled_01.c:15080
reconstrucao/src/../include/ghidra_function_prototypes.h:15080:1: error: unknown type name ‘code’

    15077:                   LOCK();
    15078:                   *(ulonglong *)(lVar12 + 0x18) = *(ulonglong *)(lVar12 + 0x18) & 0x7fffffffffffffff
    15079:                   ;
    15080:                   UNLOCK();
    15081:                   if (iVar9 != 0) {
    15082:                     bVar23 = plStack_1c0 != (longlong *)0x0;
    15083:                     if (!bVar23) {

## FUN_1402127f0 */ — reconstrucao/src/decompiled_01.c:15080
reconstrucao/src/../include/ghidra_function_prototypes.h:15080:22: error: unknown type name ‘code’

    15077:                   LOCK();
    15078:                   *(ulonglong *)(lVar12 + 0x18) = *(ulonglong *)(lVar12 + 0x18) & 0x7fffffffffffffff
    15079:                   ;
    15080:                   UNLOCK();
    15081:                   if (iVar9 != 0) {
    15082:                     bVar23 = plStack_1c0 != (longlong *)0x0;
    15083:                     if (!bVar23) {

## FUN_1402127f0 */ — reconstrucao/src/decompiled_01.c:15080
reconstrucao/src/../include/ghidra_function_prototypes.h:15080:36: error: unknown type name ‘code’

    15077:                   LOCK();
    15078:                   *(ulonglong *)(lVar12 + 0x18) = *(ulonglong *)(lVar12 + 0x18) & 0x7fffffffffffffff
    15079:                   ;
    15080:                   UNLOCK();
    15081:                   if (iVar9 != 0) {
    15082:                     bVar23 = plStack_1c0 != (longlong *)0x0;
    15083:                     if (!bVar23) {

## FUN_1402127f0 */ — reconstrucao/src/decompiled_01.c:15145
reconstrucao/src/../include/ghidra_function_prototypes.h:15145:1: error: unknown type name ‘code’

    15142:           }
    15143:           uVar21 = uStack_1b8;
    15144: LAB_14021320d:
    15145:           lVar11 = lStack_170;
    15146:           puVar19 = puStack_1e8;
    15147:           bVar23 = false;
    15148:           uVar10 = FUN_1402203d0(puStack_1e8 + 0x20,3,2,4);

## FUN_1402127f0 */ — reconstrucao/src/decompiled_01.c:15145
reconstrucao/src/../include/ghidra_function_prototypes.h:15145:22: error: unknown type name ‘code’

    15142:           }
    15143:           uVar21 = uStack_1b8;
    15144: LAB_14021320d:
    15145:           lVar11 = lStack_170;
    15146:           puVar19 = puStack_1e8;
    15147:           bVar23 = false;
    15148:           uVar10 = FUN_1402203d0(puStack_1e8 + 0x20,3,2,4);

## FUN_1402127f0 */ — reconstrucao/src/decompiled_01.c:15145
reconstrucao/src/../include/ghidra_function_prototypes.h:15145:36: error: unknown type name ‘code’

    15142:           }
    15143:           uVar21 = uStack_1b8;
    15144: LAB_14021320d:
    15145:           lVar11 = lStack_170;
    15146:           puVar19 = puStack_1e8;
    15147:           bVar23 = false;
    15148:           uVar10 = FUN_1402203d0(puStack_1e8 + 0x20,3,2,4);

## FUN_1402127f0 */ — reconstrucao/src/decompiled_01.c:15210
reconstrucao/src/../include/ghidra_function_prototypes.h:15210:20: error: unknown type name ‘code’

    15207:         puVar15 = puVar19;
    15208:       }
    15209:       bVar23 = false;
    15210:       puVar19 = puVar15;
    15211:       goto LAB_1402129fa;
    15212:     }
    15213:     uStack_1c8 = uStack_1c8 + 1;

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:216
reconstrucao/src/../include/ghidra_function_prototypes.h:216:43: error: unknown type name ‘code’

    213:           (unkuint9)((char)((unkuint9)Var13 >> 0x40) != '\0');
    214:   uVar3 = SUB168(auVar23 * auVar55,8) + (ulonglong)((char)((unkuint9)Var6 >> 0x40) != '\0');
    215:   auVar24._8_8_ = 0;
    216:   auVar24._0_8_ = uVar85;
    217:   auVar56._8_8_ = 0;
    218:   auVar56._0_8_ = *puVar80;
    219:   Var6 = (unkuint9)uVar4 + (unkuint9)SUB168(auVar24 * auVar56,0);

## FUN_140531c40 */ — reconstrucao/src/decompiled_02.c:541
reconstrucao/src/../include/ghidra_function_prototypes.h:541:1: error: unknown type name ‘undefined’; did you mean ‘undefined8’?

    538:   ulonglong uVar83;
    539:   ulonglong uVar84;
    540:   ulonglong uVar85;
    541:   ulonglong uVar86;
    542:   ulonglong uVar87;
    543:   undefined1 uStack0000000000000000;
    544:   

## FUN_140531c40 */ — reconstrucao/src/decompiled_02.c:706
reconstrucao/src/../include/ghidra_function_prototypes.h:706:19: error: unknown type name ‘code’

    703:           (unkuint9)((char)((unkuint9)Var11 >> 0x40) != '\0');
    704:   auVar36._8_8_ = 0;
    705:   auVar36._0_8_ = uVar84;
    706:   auVar68._8_8_ = 0;
    707:   auVar68._0_8_ = *(ulonglong *)(param_1 + 0x98);
    708:   Var11 = (unkuint9)(ulonglong)Var13 + (unkuint9)SUB168(auVar36 * auVar68,0) +
    709:           (unkuint9)((char)((unkuint9)Var7 >> 0x40) != '\0');

## FUN_140531c40 */ — reconstrucao/src/decompiled_02.c:785
reconstrucao/src/../include/ghidra_function_prototypes.h:785:75: error: unknown type name ‘undefined’; did you mean ‘undefined8’?

    782:   Var13 = (unkuint9)(ulonglong)Var14 + (unkuint9)uVar84 +
    783:           (unkuint9)((char)((unkuint9)Var11 >> 0x40) != '\0');
    784:   uVar12 = uVar4 * 2 + (ulonglong)(CARRY8(uVar83,uVar8) || CARRY8(uVar2,uVar87)) +
    785:            (ulonglong)((char)((unkuint9)Var16 >> 0x40) != '\0') + uVar84 +
    786:            (ulonglong)((char)((unkuint9)Var14 >> 0x40) != '\0');
    787:   uVar1 = (ulonglong)((char)((unkuint9)Var13 >> 0x40) != '\0');
    788:   uVar83 = uVar12 + uVar82;

## FUN_140531c70 */ — reconstrucao/src/decompiled_02.c:880
reconstrucao/src/../include/ghidra_function_prototypes.h:880:55: error: unknown type name ‘code’

    877:   Var6 = (unkuint9)param_2[4] + (unkuint9)param_3[4] +
    878:          (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
    879:   uVar5 = (ulonglong)Var6;
    880:   Var6 = (unkuint9)param_2[5] + (unkuint9)param_3[5] +
    881:          (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
    882:   uVar14 = (ulonglong)Var6;
    883:   Var7 = (unkuint9)*(ulonglong *)(param_1 + 0x100) + (unkuint9)uVar1;

## FUN_140531c70 */ — reconstrucao/src/decompiled_02.c:902
reconstrucao/src/../include/ghidra_function_prototypes.h:902:20: error: unknown type name ‘undefined’; did you mean ‘undefined8’?

    899:   uVar13 = (ulonglong)Var7;
    900:   if ((char)((unkuint9)Var6 >> 0x40) != '\0') {
    901:     uVar14 = uVar13;
    902:     uVar5 = uVar12;
    903:     uVar4 = uVar11;
    904:     uVar3 = uVar10;
    905:     uVar2 = uVar9;

## FUN_140531c70 */ — reconstrucao/src/decompiled_02.c:915
reconstrucao/src/../include/ghidra_function_prototypes.h:915:1: error: unknown type name ‘undefined’; did you mean ‘undefined8’?

    912:     uVar3 = uVar10;
    913:     uVar2 = uVar9;
    914:     uVar1 = uVar8;
    915:   }
    916:   *param_4 = uVar1;
    917:   param_4[1] = uVar2;
    918:   param_4[2] = uVar3;

## FUN_140531d60 */ — reconstrucao/src/decompiled_02.c:960
reconstrucao/src/../include/ghidra_function_prototypes.h:960:1: error: unknown type name ‘code’

    957:   undefined1 auVar28 [16];
    958:   undefined1 auVar29 [16];
    959:   undefined1 auVar30 [16];
    960:   undefined1 auVar31 [16];
    961:   undefined1 auVar32 [16];
    962:   undefined1 auVar33 [16];
    963:   undefined1 auVar34 [16];

## FUN_140531d60 */ — reconstrucao/src/decompiled_02.c:1077
reconstrucao/src/../include/ghidra_function_prototypes.h:1077:1: error: unknown type name ‘undefined’; did you mean ‘undefined8’?

    1074:   auVar17._8_8_ = 0;
    1075:   auVar17._0_8_ = uVar1;
    1076:   auVar71._8_8_ = 0;
    1077:   auVar71._0_8_ = param_3[1];
    1078:   uVar9 = SUB168(auVar17 * auVar71,0);
    1079:   uVar129 = SUB168(auVar17 * auVar71,8);
    1080:   auVar18._8_8_ = 0;

## FUN_140531d60 */ — reconstrucao/src/decompiled_02.c:1343
reconstrucao/src/../include/ghidra_function_prototypes.h:1343:1: error: unknown type name ‘undefined’; did you mean ‘undefined8’?

    1340:   Var15 = (unkuint9)(ulonglong)Var15 + (unkuint9)SUB168(auVar46 * auVar100,8) +
    1341:           (unkuint9)((char)((unkuint9)Var14 >> 0x40) != '\0');
    1342:   auVar47._8_8_ = 0;
    1343:   auVar47._0_8_ = uVar1;
    1344:   auVar101._8_8_ = 0;
    1345:   auVar101._0_8_ = param_3[4];
    1346:   Var14 = (unkuint9)(ulonglong)Var15 + (unkuint9)SUB168(auVar47 * auVar101,0) +

## FUN_140531d60 */ — reconstrucao/src/decompiled_02.c:1473
reconstrucao/src/../include/ghidra_function_prototypes.h:1473:37: error: unknown type name ‘code’

    1470:   auVar60._0_8_ = uVar127;
    1471:   auVar114._8_8_ = 0;
    1472:   auVar114._0_8_ = *(ulonglong *)(param_1 + 0x90);
    1473:   Var10 = (unkuint9)(ulonglong)Var12 + (unkuint9)SUB168(auVar60 * auVar114,0) +
    1474:           (unkuint9)((char)((unkuint9)Var8 >> 0x40) != '\0');
    1475:   Var13 = (unkuint9)(uVar4 - uVar129) + (unkuint9)SUB168(auVar60 * auVar114,8) +
    1476:           (unkuint9)((char)((unkuint9)Var12 >> 0x40) != '\0');

## FUN_140531d60 */ — reconstrucao/src/decompiled_02.c:1566
reconstrucao/src/../include/ghidra_function_prototypes.h:1566:1: error: unknown type name ‘undefined’; did you mean ‘undefined8’?

    1563:           (unkuint9)((char)((unkuint9)Var10 >> 0x40) != '\0');
    1564:   Var8 = (unkuint9)(ulonglong)Var10 + (unkuint9)uVar9 +
    1565:          (unkuint9)((char)((unkuint9)Var8 >> 0x40) != '\0');
    1566:   uVar127 = (ulonglong)Var8;
    1567:   uVar131 = (uVar9 * 2 - (ulonglong)(uVar126 < uVar125 || uVar3 < uVar2)) +
    1568:             (ulonglong)((char)((unkuint9)Var10 >> 0x40) != '\0') +
    1569:             (ulonglong)((char)((unkuint9)Var8 >> 0x40) != '\0');

## FUN_140531d60 */ — reconstrucao/src/decompiled_02.c:1602
reconstrucao/src/../include/ghidra_function_prototypes.h:1602:26: error: unknown type name ‘code’

    1599:   param_4[5] = uVar136;
    1600:   return;
    1601: }
    1602: 
    1603: /* Ghidra label: FUN_1405322e0 */
    1604: /* Ghidra address: 1405322e0 */
    1605: void FUN_1405322e0(longlong param_1,ulonglong *param_2,ulonglong *param_3)

## FUN_1405322e0 */ — reconstrucao/src/decompiled_02.c:1617
reconstrucao/src/../include/ghidra_function_prototypes.h:1617:20: error: unknown type name ‘undefined’; did you mean ‘undefined8’?

    1614:   ulonglong uVar7;
    1615:   code *pcVar8;
    1616:   unkint9 Var9;
    1617:   ulonglong uVar10;
    1618:   unkint9 Var11;
    1619:   unkint9 Var12;
    1620:   unkint9 Var13;

## FUN_1405322e0 */ — reconstrucao/src/decompiled_02.c:1624
reconstrucao/src/../include/ghidra_function_prototypes.h:1624:1: error: unknown type name ‘undefined’; did you mean ‘undefined8’?

    1621:   unkint9 Var14;
    1622:   unkint9 Var15;
    1623:   unkint9 Var16;
    1624:   undefined1 auVar17 [16];
    1625:   undefined1 auVar18 [16];
    1626:   undefined1 auVar19 [16];
    1627:   undefined1 auVar20 [16];

## FUN_1405322e0 */ — reconstrucao/src/decompiled_02.c:1840
reconstrucao/src/../include/ghidra_function_prototypes.h:1840:1: error: unknown type name ‘undefined’; did you mean ‘undefined8’?

    1837:   auVar81._0_8_ = param_2[1];
    1838:   Var11 = (unkuint9)(ulonglong)Var12 + (unkuint9)SUB168(auVar27 * auVar81,0) +
    1839:           (unkuint9)((char)((unkuint9)Var9 >> 0x40) != '\0');
    1840:   Var9 = (unkuint9)(ulonglong)Var13 + (unkuint9)SUB168(auVar27 * auVar81,8) +
    1841:          (unkuint9)((char)((unkuint9)Var12 >> 0x40) != '\0');
    1842:   auVar28._8_8_ = 0;
    1843:   auVar28._0_8_ = uVar1;

## FUN_1405322e0 */ — reconstrucao/src/decompiled_02.c:1867
reconstrucao/src/../include/ghidra_function_prototypes.h:1867:1: error: unknown type name ‘undefined’; did you mean ‘undefined8’?

    1864:           (unkuint9)((char)((unkuint9)Var9 >> 0x40) != '\0');
    1865:   Var9 = (unkuint9)(uVar127 + uVar135) + (unkuint9)SUB168(auVar30 * auVar84,8) +
    1866:          (unkuint9)((char)((unkuint9)Var16 >> 0x40) != '\0');
    1867:   auVar31._8_8_ = 0;
    1868:   auVar31._0_8_ = uVar1;
    1869:   auVar85._8_8_ = 0;
    1870:   auVar85._0_8_ = param_2[5];

## FUN_1405322e0 */ — reconstrucao/src/decompiled_02.c:1920
reconstrucao/src/../include/ghidra_function_prototypes.h:1920:73: error: unknown type name ‘va_list’

    1917:   auVar36._8_8_ = 0;
    1918:   auVar36._0_8_ = uVar1;
    1919:   auVar90._8_8_ = 0;
    1920:   auVar90._0_8_ = param_2[1];
    1921:   Var11 = (unkuint9)(ulonglong)Var12 + (unkuint9)SUB168(auVar36 * auVar90,0) +
    1922:           (unkuint9)((char)((unkuint9)Var9 >> 0x40) != '\0');
    1923:   Var9 = (unkuint9)(ulonglong)Var13 + (unkuint9)SUB168(auVar36 * auVar90,8) +

## FUN_1405322e0 */ — reconstrucao/src/decompiled_02.c:2038
reconstrucao/src/../include/ghidra_function_prototypes.h:2038:1: error: unknown type name ‘undefined’; did you mean ‘undefined8’?

    2035:   auVar49._8_8_ = 0;
    2036:   auVar49._0_8_ = uVar1;
    2037:   auVar103._8_8_ = 0;
    2038:   auVar103._0_8_ = param_2[5];
    2039:   uVar136 = SUB168(auVar49 * auVar103,8);
    2040:   Var16 = (unkuint9)(ulonglong)Var9 + (unkuint9)SUB168(auVar49 * auVar103,0) +
    2041:           (unkuint9)((char)((unkuint9)Var15 >> 0x40) != '\0');

## FUN_1405322e0 */ — reconstrucao/src/decompiled_02.c:2280
reconstrucao/src/../include/ghidra_function_prototypes.h:2280:1: error: unknown type name ‘undefined’; did you mean ‘undefined8’?

    2277:     uVar131 = uVar7 + uVar2;
    2278:     uVar135 = *(ulonglong *)(param_1 + 0x100) + uVar135;
    2279:   }
    2280:   *param_3 = uVar135;
    2281:   param_3[1] = uVar131;
    2282:   param_3[2] = uVar128;
    2283:   param_3[3] = uVar127;

## FUN_1405322e0 */ — reconstrucao/src/decompiled_02.c:2284
reconstrucao/src/../include/ghidra_function_prototypes.h:2284:36: error: unknown type name ‘code’

    2281:   param_3[1] = uVar131;
    2282:   param_3[2] = uVar128;
    2283:   param_3[3] = uVar127;
    2284:   param_3[4] = uVar133;
    2285:   param_3[5] = uVar137;
    2286:   return;
    2287: }

## FUN_140532320 */ — reconstrucao/src/decompiled_02.c:2977
reconstrucao/src/../include/ghidra_function_prototypes.h:2977:43: error: unknown type name ‘undefined’; did you mean ‘undefined8’?

    2974:   Var5 = (unkuint9)(ulonglong)Var5 + (unkuint9)SUB168(auVar29 * auVar285,8) +
    2975:          (unkuint9)((char)((unkuint9)Var4 >> 0x40) != '\0');
    2976:   auVar30._8_8_ = 0;
    2977:   auVar30._0_8_ = uVar1;
    2978:   auVar286._8_8_ = 0;
    2979:   auVar286._0_8_ = param_1[3];
    2980:   Var4 = (unkuint9)(ulonglong)Var5 + (unkuint9)SUB168(auVar30 * auVar286,0) +

## FUN_140532320 */ — reconstrucao/src/decompiled_02.c:3209
reconstrucao/src/../include/ghidra_function_prototypes.h:3209:19: error: unknown type name ‘undefined’; did you mean ‘undefined8’?

    3206:          (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
    3207:   Var10 = (unkuint9)
    3208:           ((ulonglong)((char)((unkuint9)Var10 >> 0x40) != '\0') + SUB168(auVar50 * auVar306,8) +
    3209:           (ulonglong)((char)((unkuint9)Var8 >> 0x40) != '\0')) +
    3210:           (unkuint9)SUB168(auVar57 * auVar313,8) +
    3211:           (unkuint9)((char)((unkuint9)Var9 >> 0x40) != '\0');
    3212:   auVar58._8_8_ = 0;

## FUN_140532320 */ — reconstrucao/src/decompiled_02.c:3674
reconstrucao/src/../include/ghidra_function_prototypes.h:3674:72: error: unknown type name ‘code’

    3671:   auVar113._0_8_ = uVar1;
    3672:   auVar369._8_8_ = 0;
    3673:   auVar369._0_8_ = param_1[6];
    3674:   Var7 = (unkuint9)(ulonglong)Var9 + (unkuint9)SUB168(auVar113 * auVar369,0) +
    3675:          (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
    3676:   Var10 = (unkuint9)
    3677:           ((ulonglong)((char)((unkuint9)Var10 >> 0x40) != '\0') + SUB168(auVar106 * auVar362,8) +

## FUN_140532320 */ — reconstrucao/src/decompiled_02.c:4161
reconstrucao/src/../include/ghidra_function_prototypes.h:4161:1: error: unknown type name ‘undefined’; did you mean ‘undefined8’?

    4158:   param_4[0xc] = (ulonglong)Var2;
    4159:   auVar172._8_8_ = 0;
    4160:   auVar172._0_8_ = uVar1;
    4161:   auVar428._8_8_ = 0;
    4162:   auVar428._0_8_ = param_1[9];
    4163:   Var2 = (unkuint9)(ulonglong)Var3 + (unkuint9)SUB168(auVar172 * auVar428,0) +
    4164:          (unkuint9)((char)((unkuint9)Var2 >> 0x40) != '\0');

## FUN_140532320 */ — reconstrucao/src/decompiled_02.c:4198
reconstrucao/src/../include/ghidra_function_prototypes.h:4198:1: error: unknown type name ‘undefined’; did you mean ‘undefined8’?

    4195:   Var6 = (unkuint9)(ulonglong)Var7 + (unkuint9)SUB168(auVar176 * auVar432,0) +
    4196:          (unkuint9)((char)((unkuint9)Var5 >> 0x40) != '\0');
    4197:   Var9 = (unkuint9)(ulonglong)Var8 + (unkuint9)SUB168(auVar176 * auVar432,8) +
    4198:          (unkuint9)((char)((unkuint9)Var7 >> 0x40) != '\0');
    4199:   auVar177._8_8_ = 0;
    4200:   auVar177._0_8_ = uVar1;
    4201:   auVar433._8_8_ = 0;

## FUN_140532320 */ — reconstrucao/src/decompiled_02.c:4296
reconstrucao/src/../include/ghidra_function_prototypes.h:4296:1: error: unknown type name ‘undefined’; did you mean ‘undefined8’?

    4293:   auVar188._8_8_ = 0;
    4294:   auVar188._0_8_ = uVar1;
    4295:   auVar444._8_8_ = 0;
    4296:   auVar444._0_8_ = param_1[9];
    4297:   Var2 = (unkuint9)(ulonglong)Var3 + (unkuint9)SUB168(auVar188 * auVar444,0) +
    4298:          (unkuint9)((char)((unkuint9)Var2 >> 0x40) != '\0');
    4299:   Var4 = (unkuint9)(ulonglong)Var4 + (unkuint9)SUB168(auVar188 * auVar444,8) +

## FUN_140532320 */ — reconstrucao/src/decompiled_02.c:4566
reconstrucao/src/../include/ghidra_function_prototypes.h:4566:1: error: unknown type name ‘undefined’; did you mean ‘undefined8’?

    4563:   auVar476._8_8_ = 0;
    4564:   auVar476._0_8_ = param_1[9];
    4565:   Var2 = (unkuint9)(ulonglong)Var3 + (unkuint9)SUB168(auVar220 * auVar476,0) +
    4566:          (unkuint9)((char)((unkuint9)Var2 >> 0x40) != '\0');
    4567:   Var4 = (unkuint9)(ulonglong)Var4 + (unkuint9)SUB168(auVar220 * auVar476,8) +
    4568:          (unkuint9)((char)((unkuint9)Var3 >> 0x40) != '\0');
    4569:   auVar221._8_8_ = 0;

## FUN_140532320 */ — reconstrucao/src/decompiled_02.c:4568
reconstrucao/src/../include/ghidra_function_prototypes.h:4568:38: error: unknown type name ‘code’

    4565:   Var2 = (unkuint9)(ulonglong)Var3 + (unkuint9)SUB168(auVar220 * auVar476,0) +
    4566:          (unkuint9)((char)((unkuint9)Var2 >> 0x40) != '\0');
    4567:   Var4 = (unkuint9)(ulonglong)Var4 + (unkuint9)SUB168(auVar220 * auVar476,8) +
    4568:          (unkuint9)((char)((unkuint9)Var3 >> 0x40) != '\0');
    4569:   auVar221._8_8_ = 0;
    4570:   auVar221._0_8_ = uVar1;
    4571:   auVar477._8_8_ = 0;

## FUN_140532320 */ — reconstrucao/src/decompiled_02.c:4709
reconstrucao/src/../include/ghidra_function_prototypes.h:4709:26: error: unknown type name ‘undefined’; did you mean ‘undefined8’?

    4706:   auVar493._0_8_ = param_1[10];
    4707:   Var3 = (unkuint9)(ulonglong)Var4 + (unkuint9)SUB168(auVar237 * auVar493,0) +
    4708:          (unkuint9)((char)((unkuint9)Var2 >> 0x40) != '\0');
    4709:   Var5 = (unkuint9)(ulonglong)Var5 + (unkuint9)SUB168(auVar237 * auVar493,8) +
    4710:          (unkuint9)((char)((unkuint9)Var4 >> 0x40) != '\0');
    4711:   auVar238._8_8_ = 0;
    4712:   auVar238._0_8_ = uVar1;

## FUN_140532320 */ — reconstrucao/src/decompiled_02.c:4711
reconstrucao/src/../include/ghidra_function_prototypes.h:4711:26: error: unknown type name ‘undefined’; did you mean ‘undefined8’?

    4708:          (unkuint9)((char)((unkuint9)Var2 >> 0x40) != '\0');
    4709:   Var5 = (unkuint9)(ulonglong)Var5 + (unkuint9)SUB168(auVar237 * auVar493,8) +
    4710:          (unkuint9)((char)((unkuint9)Var4 >> 0x40) != '\0');
    4711:   auVar238._8_8_ = 0;
    4712:   auVar238._0_8_ = uVar1;
    4713:   auVar494._8_8_ = 0;
    4714:   auVar494._0_8_ = param_1[0xb];

## FUN_1405339c0 */ — reconstrucao/src/decompiled_02.c:5020
reconstrucao/src/../include/ghidra_function_prototypes.h:5020:20: error: unknown type name ‘PSLIST_HEADER’

    5017:   undefined1 auVar47 [16];
    5018:   undefined1 auVar48 [16];
    5019:   undefined1 auVar49 [16];
    5020:   undefined1 auVar50 [16];
    5021:   undefined1 auVar51 [16];
    5022:   undefined1 auVar52 [16];
    5023:   undefined1 auVar53 [16];

## FUN_1405339c0 */ — reconstrucao/src/decompiled_02.c:5020
reconstrucao/src/../include/ghidra_function_prototypes.h:5020:42: error: unknown type name ‘code’

    5017:   undefined1 auVar47 [16];
    5018:   undefined1 auVar48 [16];
    5019:   undefined1 auVar49 [16];
    5020:   undefined1 auVar50 [16];
    5021:   undefined1 auVar51 [16];
    5022:   undefined1 auVar52 [16];
    5023:   undefined1 auVar53 [16];

## FUN_1405339c0 */ — reconstrucao/src/decompiled_02.c:5020
reconstrucao/src/../include/ghidra_function_prototypes.h:5020:56: error: unknown type name ‘code’

    5017:   undefined1 auVar47 [16];
    5018:   undefined1 auVar48 [16];
    5019:   undefined1 auVar49 [16];
    5020:   undefined1 auVar50 [16];
    5021:   undefined1 auVar51 [16];
    5022:   undefined1 auVar52 [16];
    5023:   undefined1 auVar53 [16];

## FUN_1405339c0 */ — reconstrucao/src/decompiled_02.c:5021
reconstrucao/src/../include/ghidra_function_prototypes.h:5021:20: error: unknown type name ‘PSLIST_HEADER’

    5018:   undefined1 auVar48 [16];
    5019:   undefined1 auVar49 [16];
    5020:   undefined1 auVar50 [16];
    5021:   undefined1 auVar51 [16];
    5022:   undefined1 auVar52 [16];
    5023:   undefined1 auVar53 [16];
    5024:   undefined1 auVar54 [16];

## FUN_1405339c0 */ — reconstrucao/src/decompiled_02.c:5021
reconstrucao/src/../include/ghidra_function_prototypes.h:5021:42: error: unknown type name ‘code’

    5018:   undefined1 auVar48 [16];
    5019:   undefined1 auVar49 [16];
    5020:   undefined1 auVar50 [16];
    5021:   undefined1 auVar51 [16];
    5022:   undefined1 auVar52 [16];
    5023:   undefined1 auVar53 [16];
    5024:   undefined1 auVar54 [16];

## FUN_1405339c0 */ — reconstrucao/src/decompiled_02.c:5021
reconstrucao/src/../include/ghidra_function_prototypes.h:5021:56: error: unknown type name ‘code’

    5018:   undefined1 auVar48 [16];
    5019:   undefined1 auVar49 [16];
    5020:   undefined1 auVar50 [16];
    5021:   undefined1 auVar51 [16];
    5022:   undefined1 auVar52 [16];
    5023:   undefined1 auVar53 [16];
    5024:   undefined1 auVar54 [16];

## FUN_1405339c0 */ — reconstrucao/src/decompiled_02.c:5063
reconstrucao/src/../include/ghidra_function_prototypes.h:5063:1: error: unknown type name ‘undefined’; did you mean ‘undefined8’?

    5060:   undefined1 auVar90 [16];
    5061:   undefined1 auVar91 [16];
    5062:   undefined1 auVar92 [16];
    5063:   undefined1 auVar93 [16];
    5064:   undefined1 auVar94 [16];
    5065:   undefined1 auVar95 [16];
    5066:   undefined1 auVar96 [16];

## FUN_1405339c0 */ — reconstrucao/src/decompiled_02.c:5063
reconstrucao/src/../include/ghidra_function_prototypes.h:5063:28: error: unknown type name ‘undefined’; did you mean ‘undefined8’?

    5060:   undefined1 auVar90 [16];
    5061:   undefined1 auVar91 [16];
    5062:   undefined1 auVar92 [16];
    5063:   undefined1 auVar93 [16];
    5064:   undefined1 auVar94 [16];
    5065:   undefined1 auVar95 [16];
    5066:   undefined1 auVar96 [16];

## FUN_1405339c0 */ — reconstrucao/src/decompiled_02.c:5182
reconstrucao/src/../include/ghidra_function_prototypes.h:5182:1: error: unknown type name ‘undefined’; did you mean ‘undefined8’?

    5179:   undefined1 auVar209 [16];
    5180:   undefined1 auVar210 [16];
    5181:   undefined1 auVar211 [16];
    5182:   undefined1 auVar212 [16];
    5183:   undefined1 auVar213 [16];
    5184:   undefined1 auVar214 [16];
    5185:   undefined1 auVar215 [16];

## FUN_1405339c0 */ — reconstrucao/src/decompiled_02.c:5221
reconstrucao/src/../include/ghidra_function_prototypes.h:5221:1: error: unknown type name ‘undefined’; did you mean ‘undefined8’?

    5218:   undefined1 auVar248 [16];
    5219:   undefined1 auVar249 [16];
    5220:   undefined1 auVar250 [16];
    5221:   undefined1 auVar251 [16];
    5222:   undefined1 auVar252 [16];
    5223:   undefined1 auVar253 [16];
    5224:   undefined1 auVar254 [16];

## FUN_1405339c0 */ — reconstrucao/src/decompiled_02.c:5242
reconstrucao/src/../include/ghidra_function_prototypes.h:5242:37: error: unknown type name ‘undefined’; did you mean ‘undefined8’?

    5239:   undefined1 auVar269 [16];
    5240:   undefined1 auVar270 [16];
    5241:   undefined1 auVar271 [16];
    5242:   undefined1 auVar272 [16];
    5243:   undefined1 auVar273 [16];
    5244:   undefined1 auVar274 [16];
    5245:   undefined1 auVar275 [16];

## FUN_1405339c0 */ — reconstrucao/src/decompiled_02.c:5311
reconstrucao/src/../include/ghidra_function_prototypes.h:5311:1: error: unknown type name ‘undefined’; did you mean ‘undefined8’?

    5308:   Var8 = (unkuint9)param_3[6] + (unkuint9)SUB168(auVar15 * auVar151,8) +
    5309:          (unkuint9)((char)((unkuint9)Var7 >> 0x40) != '\0');
    5310:   auVar16._8_8_ = 0;
    5311:   auVar16._0_8_ = uVar1;
    5312:   auVar152._8_8_ = 0;
    5313:   auVar152._0_8_ = param_1[6];
    5314:   Var7 = (unkuint9)(ulonglong)Var8 + (unkuint9)SUB168(auVar16 * auVar152,0) +

## FUN_1405339c0 */ — reconstrucao/src/decompiled_02.c:5395
reconstrucao/src/../include/ghidra_function_prototypes.h:5395:26: error: unknown type name ‘undefined’; did you mean ‘undefined8’?

    5392:   auVar26._8_8_ = 0;
    5393:   auVar26._0_8_ = uVar1;
    5394:   auVar162._8_8_ = 0;
    5395:   auVar162._0_8_ = param_1[4];
    5396:   Var3 = (unkuint9)(ulonglong)Var4 + (unkuint9)SUB168(auVar26 * auVar162,0) +
    5397:          (unkuint9)((char)((unkuint9)Var2 >> 0x40) != '\0');
    5398:   Var5 = (unkuint9)(ulonglong)Var6 + (unkuint9)SUB168(auVar26 * auVar162,8) +

## FUN_1405339c0 */ — reconstrucao/src/decompiled_02.c:5530
reconstrucao/src/../include/ghidra_function_prototypes.h:5530:40: error: unknown type name ‘code’

    5527:   auVar42._0_8_ = uVar1;
    5528:   auVar178._8_8_ = 0;
    5529:   auVar178._0_8_ = param_1[3];
    5530:   Var4 = (unkuint9)(ulonglong)Var5 + (unkuint9)SUB168(auVar42 * auVar178,0) +
    5531:          (unkuint9)((char)((unkuint9)Var3 >> 0x40) != '\0');
    5532:   Var6 = (unkuint9)(ulonglong)Var7 + (unkuint9)SUB168(auVar42 * auVar178,8) +
    5533:          (unkuint9)((char)((unkuint9)Var5 >> 0x40) != '\0');

## FUN_1405339c0 */ — reconstrucao/src/decompiled_02.c:5616
reconstrucao/src/../include/ghidra_function_prototypes.h:5616:59: error: unknown type name ‘DWORD64’

    5613:          (unkuint9)((char)((unkuint9)Var5 >> 0x40) != '\0');
    5614:   Var9 = (unkuint9)(ulonglong)Var8 + (unkuint9)SUB168(auVar52 * auVar188,8) +
    5615:          (unkuint9)((char)((unkuint9)Var7 >> 0x40) != '\0');
    5616:   auVar53._8_8_ = 0;
    5617:   auVar53._0_8_ = uVar1;
    5618:   auVar189._8_8_ = 0;
    5619:   auVar189._0_8_ = param_1[6];

## FUN_1405339c0 */ — reconstrucao/src/decompiled_02.c:5832
reconstrucao/src/../include/ghidra_function_prototypes.h:5832:65: error: unknown type name ‘va_list’

    5829:   auVar78._0_8_ = uVar1;
    5830:   auVar214._8_8_ = 0;
    5831:   auVar214._0_8_ = param_1[7];
    5832:   Var8 = (unkuint9)(ulonglong)Var10 + (unkuint9)SUB168(auVar78 * auVar214,0) +
    5833:          (unkuint9)((char)((unkuint9)Var7 >> 0x40) != '\0');
    5834:   uVar1 = param_1[0xd];
    5835:   Var9 = (unkuint9)(ulonglong)Var2 + (unkuint9)param_3[0xd];

## FUN_1405339c0 */ — reconstrucao/src/decompiled_02.c:6363
reconstrucao/src/../include/ghidra_function_prototypes.h:6363:26: error: unknown type name ‘undefined’; did you mean ‘undefined8’?

    6360:   Var3 = (unkuint9)(ulonglong)Var2 + (unkuint9)param_3[10] +
    6361:          (unkuint9)((char)((unkuint9)Var4 >> 0x40) != '\0');
    6362:   Var2 = (unkuint9)SUB168(auVar136 * auVar272,8) + (unkuint9)param_3[0xb] +
    6363:          (unkuint9)((char)((unkuint9)Var2 >> 0x40) != '\0');
    6364:   Var4 = (unkuint9)(ulonglong)Var2 + (unkuint9)param_3[0xb] +
    6365:          (unkuint9)((char)((unkuint9)Var3 >> 0x40) != '\0');
    6366:   param_3[10] = (ulonglong)Var3;

## FUN_140534860 */ — reconstrucao/src/decompiled_02.c:6638
reconstrucao/src/../include/ghidra_function_prototypes.h:6638:1: error: unknown type name ‘undefined’; did you mean ‘undefined8’?

    6635:   undefined1 auVar121 [16];
    6636:   undefined1 auVar122 [16];
    6637:   undefined1 auVar123 [16];
    6638:   undefined1 auVar124 [16];
    6639:   undefined1 auVar125 [16];
    6640:   undefined1 auVar126 [16];
    6641:   undefined1 auVar127 [16];

## FUN_140534860 */ — reconstrucao/src/decompiled_02.c:7015
reconstrucao/src/../include/ghidra_function_prototypes.h:7015:20: error: unknown type name ‘code’

    7012:     auVar47._0_8_ = uVar281;
    7013:     auVar175._8_8_ = 0;
    7014:     auVar175._0_8_ = *(ulonglong *)(param_1 + 0x88);
    7015:     Var13 = (unkuint9)(ulonglong)Var15 + (unkuint9)SUB168(auVar47 * auVar175,0) +
    7016:             (unkuint9)((char)((unkuint9)uVar2 + (unkuint9)0xffffffffffffffff >> 0x40) != '\0');
    7017:     uVar2 = (ulonglong)Var13;
    7018:     Var14 = (unkuint9)(ulonglong)Var14 + (unkuint9)SUB168(auVar47 * auVar175,8) +

## FUN_140534860 */ — reconstrucao/src/decompiled_02.c:7083
reconstrucao/src/../include/ghidra_function_prototypes.h:7083:43: error: unknown type name ‘ulong’; did you mean ‘long’?

    7080:     Var13 = (unkuint9)(ulonglong)Var15 + (unkuint9)SUB168(auVar55 * auVar183,0) +
    7081:             (unkuint9)((char)((unkuint9)uVar2 + (unkuint9)0xffffffffffffffff >> 0x40) != '\0');
    7082:     uVar2 = (ulonglong)Var13;
    7083:     Var14 = (unkuint9)(ulonglong)Var14 + (unkuint9)SUB168(auVar55 * auVar183,8) +
    7084:             (unkuint9)((char)((unkuint9)Var15 >> 0x40) != '\0');
    7085:     auVar56._8_8_ = 0;
    7086:     auVar56._0_8_ = uVar281;

## FUN_140534860 */ — reconstrucao/src/decompiled_02.c:7117
reconstrucao/src/../include/ghidra_function_prototypes.h:7117:1: error: unknown type name ‘undefined’; did you mean ‘undefined8’?

    7114:             (unkuint9)((char)((unkuint9)Var16 >> 0x40) != '\0');
    7115:     Var15 = (unkuint9)(ulonglong)Var19 + (unkuint9)SUB168(auVar59 * auVar187,8) +
    7116:             (unkuint9)((char)((unkuint9)Var18 >> 0x40) != '\0');
    7117:     auVar60._8_8_ = 0;
    7118:     auVar60._0_8_ = uVar281;
    7119:     auVar188._8_8_ = 0;
    7120:     auVar188._0_8_ = *(ulonglong *)(param_1 + 0xb0);

## FUN_140534860 */ — reconstrucao/src/decompiled_02.c:7456
reconstrucao/src/../include/ghidra_function_prototypes.h:7456:39: error: unknown type name ‘code’

    7453:             ((ulonglong)((char)((unkuint9)Var21 >> 0x40) != '\0') + SUB168(auVar93 * auVar221,8) +
    7454:             (ulonglong)((char)((unkuint9)Var19 >> 0x40) != '\0')) +
    7455:             (unkuint9)SUB168(auVar100 * auVar228,8) +
    7456:             (unkuint9)((char)((unkuint9)Var20 >> 0x40) != '\0');
    7457:     auVar101._8_8_ = 0;
    7458:     auVar101._0_8_ = uVar2;
    7459:     auVar229._8_8_ = 0;

## FUN_140534860 */ — reconstrucao/src/decompiled_02.c:7577
reconstrucao/src/../include/ghidra_function_prototypes.h:7577:1: error: unknown type name ‘undefined’; did you mean ‘undefined8’?

    7574:     auVar243._8_8_ = 0;
    7575:     auVar243._0_8_ = *(ulonglong *)(param_1 + 0xe8);
    7576:     Var18 = (unkuint9)(ulonglong)Var15 + (unkuint9)SUB168(auVar115 * auVar243,0) +
    7577:             (unkuint9)((char)((unkuint9)Var17 >> 0x40) != '\0');
    7578:     Var20 = (unkuint9)(ulonglong)Var19 + (unkuint9)SUB168(auVar115 * auVar243,8) +
    7579:             (unkuint9)((char)((unkuint9)Var15 >> 0x40) != '\0');
    7580:     auVar116._8_8_ = 0;

## FUN_140534860 */ — reconstrucao/src/decompiled_02.c:7605
reconstrucao/src/../include/ghidra_function_prototypes.h:7605:36: error: unknown type name ‘wint_t’; did you mean ‘uint8_t’?

    7602:     auVar246._0_8_ = *puVar280;
    7603:     Var13 = (unkuint9)(ulonglong)Var20 + (unkuint9)SUB168(auVar118 * auVar246,0);
    7604:     Var14 = (unkuint9)(ulonglong)Var14 + (unkuint9)SUB168(auVar118 * auVar246,8) +
    7605:             (unkuint9)((char)((unkuint9)Var20 >> 0x40) != '\0');
    7606:     puVar283[0xc] = (ulonglong)Var13;
    7607:     auVar119._8_8_ = 0;
    7608:     auVar119._0_8_ = uVar2;

## FUN_140534860 */ — reconstrucao/src/decompiled_02.c:7610
reconstrucao/src/../include/ghidra_function_prototypes.h:7610:20: error: unknown type name ‘code’

    7607:     auVar119._8_8_ = 0;
    7608:     auVar119._0_8_ = uVar2;
    7609:     auVar247._8_8_ = 0;
    7610:     auVar247._0_8_ = *(ulonglong *)(param_1 + 200);
    7611:     Var13 = (unkuint9)(ulonglong)Var14 + (unkuint9)SUB168(auVar119 * auVar247,0) +
    7612:             (unkuint9)((char)((unkuint9)Var13 >> 0x40) != '\0');
    7613:     Var16 = (unkuint9)(ulonglong)Var16 + (unkuint9)SUB168(auVar119 * auVar247,8) +

## FUN_140534860 */ — reconstrucao/src/decompiled_02.c:7620
reconstrucao/src/../include/ghidra_function_prototypes.h:7620:66: error: unknown type name ‘code’

    7617:     auVar248._8_8_ = 0;
    7618:     auVar248._0_8_ = *(ulonglong *)(param_1 + 0xd0);
    7619:     Var14 = (unkuint9)(ulonglong)Var16 + (unkuint9)SUB168(auVar120 * auVar248,0) +
    7620:             (unkuint9)((char)((unkuint9)Var13 >> 0x40) != '\0');
    7621:     Var17 = (unkuint9)(ulonglong)Var17 + (unkuint9)SUB168(auVar120 * auVar248,8) +
    7622:             (unkuint9)((char)((unkuint9)Var16 >> 0x40) != '\0');
    7623:     auVar121._8_8_ = 0;

## FUN_140534860 */ — reconstrucao/src/decompiled_02.c:7656
reconstrucao/src/../include/ghidra_function_prototypes.h:7656:33: error: unknown type name ‘uint3’; did you mean ‘uint32’?

    7653:     Var21 = (unkuint9)
    7654:             ((ulonglong)((char)((unkuint9)Var21 >> 0x40) != '\0') + SUB168(auVar117 * auVar245,8) +
    7655:             (ulonglong)((char)((unkuint9)Var19 >> 0x40) != '\0')) +
    7656:             (unkuint9)SUB168(auVar124 * auVar252,8) +
    7657:             (unkuint9)((char)((unkuint9)Var20 >> 0x40) != '\0');
    7658:     auVar125._8_8_ = 0;
    7659:     auVar125._0_8_ = uVar2;

## FUN_140535f20 */ — reconstrucao/src/decompiled_02.c:8523
reconstrucao/src/../include/ghidra_function_prototypes.h:8523:1: error: unknown type name ‘code’

    8520:     }
    8521:     else {
    8522:       FUN_140526f48(param_1,uStack_70,uStack_68);
    8523:     }
    8524:     lStack_98 = lVar12;
    8525:     FUN_140535ea4(param_1,uVar8,uVar6,lVar13);
    8526:     uVar7 = FUN_140526c68(param_1);

## FUN_140535f20 */ — reconstrucao/src/decompiled_02.c:8557
reconstrucao/src/../include/ghidra_function_prototypes.h:8557:1: error: unknown type name ‘undefined’; did you mean ‘undefined8’?

    8554:             if (uVar1 != 0) {
    8555:               for (; (uVar1 >> iStack_48 & 1) == 0; iStack_48 = iStack_48 + 1) {
    8556:               }
    8557:             }
    8558:           }
    8559:           FUN_140526c10(uVar6,iStack_48,uVar6);
    8560:           FUN_140535988(param_1,uVar5,iStack_48,uVar5);

## FUN_1405367a0 */ — reconstrucao/src/decompiled_02.c:8807
reconstrucao/src/../include/ghidra_function_prototypes.h:8807:1: error: unknown type name ‘code’

    8804:   return;
    8805: }
    8806: 
    8807: /* Ghidra label: FUN_1405367c0 */
    8808: /* Ghidra address: 1405367c0 */
    8809: void FUN_1405367c0(longlong param_1,undefined8 param_2)
    8810: 

## FUN_140537374 */ — reconstrucao/src/decompiled_02.c:9391
reconstrucao/src/../include/ghidra_function_prototypes.h:9391:1: error: unknown type name ‘undefined’; did you mean ‘undefined8’?

    9388: 
    9389: /* Ghidra label: FUN_140537374 */
    9390: /* Ghidra address: 140537374 */
    9391: void FUN_140537374(void)
    9392: 
    9393: {
    9394:   FUN_140537510();

## FUN_1405385c0 */ — reconstrucao/src/decompiled_02.c:10748
reconstrucao/src/../include/ghidra_function_prototypes.h:10748:26: error: unknown type name ‘undefined’; did you mean ‘undefined8’?

    10745:   uVar14 = uVar4 - uVar3;
    10746:   uVar3 = (ulonglong)(param_2[2] < param_3[2] || uVar4 < uVar3);
    10747:   uVar4 = param_2[3] - param_3[3];
    10748:   uVar10 = uVar4 - uVar3;
    10749:   uVar3 = (ulonglong)(param_2[3] < param_3[3] || uVar4 < uVar3);
    10750:   uVar4 = param_2[4] - param_3[4];
    10751:   uVar11 = uVar4 - uVar3;

## FUN_1405385c0 */ — reconstrucao/src/decompiled_02.c:10749
reconstrucao/src/../include/ghidra_function_prototypes.h:10749:26: error: unknown type name ‘undefined’; did you mean ‘undefined8’?

    10746:   uVar3 = (ulonglong)(param_2[2] < param_3[2] || uVar4 < uVar3);
    10747:   uVar4 = param_2[3] - param_3[3];
    10748:   uVar10 = uVar4 - uVar3;
    10749:   uVar3 = (ulonglong)(param_2[3] < param_3[3] || uVar4 < uVar3);
    10750:   uVar4 = param_2[4] - param_3[4];
    10751:   uVar11 = uVar4 - uVar3;
    10752:   uVar3 = (ulonglong)(param_2[4] < param_3[4] || uVar4 < uVar3);

## FUN_1405385c0 */ — reconstrucao/src/decompiled_02.c:10750
reconstrucao/src/../include/ghidra_function_prototypes.h:10750:26: error: unknown type name ‘undefined’; did you mean ‘undefined8’?

    10747:   uVar4 = param_2[3] - param_3[3];
    10748:   uVar10 = uVar4 - uVar3;
    10749:   uVar3 = (ulonglong)(param_2[3] < param_3[3] || uVar4 < uVar3);
    10750:   uVar4 = param_2[4] - param_3[4];
    10751:   uVar11 = uVar4 - uVar3;
    10752:   uVar3 = (ulonglong)(param_2[4] < param_3[4] || uVar4 < uVar3);
    10753:   bVar17 = param_2[5] < param_3[5];

## FUN_1405385c0 */ — reconstrucao/src/decompiled_02.c:10751
reconstrucao/src/../include/ghidra_function_prototypes.h:10751:26: error: unknown type name ‘undefined’; did you mean ‘undefined8’?

    10748:   uVar10 = uVar4 - uVar3;
    10749:   uVar3 = (ulonglong)(param_2[3] < param_3[3] || uVar4 < uVar3);
    10750:   uVar4 = param_2[4] - param_3[4];
    10751:   uVar11 = uVar4 - uVar3;
    10752:   uVar3 = (ulonglong)(param_2[4] < param_3[4] || uVar4 < uVar3);
    10753:   bVar17 = param_2[5] < param_3[5];
    10754:   uVar4 = param_2[5] - param_3[5];

## FUN_140538680 */ — reconstrucao/src/decompiled_02.c:10847
reconstrucao/src/../include/ghidra_function_prototypes.h:10847:1: error: unknown type name ‘undefined’; did you mean ‘undefined8’?

    10844:   undefined1 auVar42 [16];
    10845:   undefined1 auVar43 [16];
    10846:   undefined1 auVar44 [16];
    10847:   undefined1 auVar45 [16];
    10848:   undefined1 auVar46 [16];
    10849:   undefined1 auVar47 [16];
    10850:   undefined1 auVar48 [16];

## FUN_140538680 */ — reconstrucao/src/decompiled_02.c:10850
reconstrucao/src/../include/ghidra_function_prototypes.h:10850:26: error: unknown type name ‘undefined’; did you mean ‘undefined8’?

    10847:   undefined1 auVar45 [16];
    10848:   undefined1 auVar46 [16];
    10849:   undefined1 auVar47 [16];
    10850:   undefined1 auVar48 [16];
    10851:   undefined1 auVar49 [16];
    10852:   undefined1 auVar50 [16];
    10853:   undefined1 auVar51 [16];

## FUN_140538680 */ — reconstrucao/src/decompiled_02.c:10937
reconstrucao/src/../include/ghidra_function_prototypes.h:10937:26: error: unknown type name ‘PVOID’

    10934:   auVar2._0_8_ = *param_3;
    10935:   auVar34._8_8_ = 0;
    10936:   auVar34._0_8_ = uVar120;
    10937:   auVar66._8_8_ = 0;
    10938:   auVar66._0_8_ = SUB168(auVar2 * auVar34,8);
    10939:   lVar114 = SUB168(auVar2 * auVar34,0);
    10940:   auVar3._8_8_ = 0;

## FUN_140538680 */ — reconstrucao/src/decompiled_02.c:10976
reconstrucao/src/../include/ghidra_function_prototypes.h:10976:1: error: unknown type name ‘undefined’; did you mean ‘undefined8’?

    10973:   auVar90._8_8_ = 0;
    10974:   auVar90._0_8_ = auVar69._0_8_;
    10975:   auVar71._8_8_ = 0;
    10976:   auVar71._0_8_ = auVar69._8_8_;
    10977:   auVar7._8_8_ = 0;
    10978:   auVar7._0_8_ = param_3[1];
    10979:   auVar39._8_8_ = 0;

## FUN_140538680 */ — reconstrucao/src/decompiled_02.c:11021
reconstrucao/src/../include/ghidra_function_prototypes.h:11021:1: error: unknown type name ‘code’

    11018:   auVar78 = auVar11 * auVar43 + auVar77 + auVar78;
    11019:   auVar83._8_8_ = 0;
    11020:   auVar83._0_8_ = auVar78._0_8_;
    11021:   auVar80._8_8_ = 0;
    11022:   auVar80._0_8_ = auVar78._8_8_;
    11023:   auVar12._8_8_ = 0;
    11024:   auVar12._0_8_ = param_3[2];

## FUN_14053a5c0 */ — reconstrucao/src/decompiled_02.c:12411
reconstrucao/src/../include/ghidra_function_prototypes.h:12411:20: error: unknown type name ‘undefined’; did you mean ‘undefined8’?

    12408: 
    12409: {
    12410:   undefined4 uVar1;
    12411:   int iVar2;
    12412:   int iVar3;
    12413:   int iVar4;
    12414:   uint uVar5;

## FUN_14053b120 */ — reconstrucao/src/decompiled_02.c:12816
reconstrucao/src/../include/ghidra_function_prototypes.h:12816:19: error: unknown type name ‘DWORD64’

    12813: 
    12814: {
    12815:   FUN_14053ad30();
    12816:   return;
    12817: }
    12818: 
    12819: /* Ghidra label: FUN_14053b150 */

## FUN_14053c624 */ — reconstrucao/src/decompiled_02.c:13515
reconstrucao/src/../include/ghidra_function_prototypes.h:13515:38: error: unknown type name ‘PVOID’

    13512:   uint uVar14;
    13513:   uint uVar15;
    13514:   uint uVar16;
    13515:   uint uVar17;
    13516:   uint uVar18;
    13517:   uint uVar19;
    13518:   uint uVar20;

## FUN_14053c624 */ — reconstrucao/src/decompiled_02.c:13533
reconstrucao/src/../include/ghidra_function_prototypes.h:13533:38: error: unknown type name ‘code’

    13530:   uint uVar32;
    13531:   uint uVar33;
    13532:   uint uVar34;
    13533:   uint uVar35;
    13534:   uint uVar36;
    13535:   uint uVar37;
    13536:   uint uVar38;

## FUN_14053c624 */ — reconstrucao/src/decompiled_02.c:13537
reconstrucao/src/../include/ghidra_function_prototypes.h:13537:20: error: unknown type name ‘code’

    13534:   uint uVar36;
    13535:   uint uVar37;
    13536:   uint uVar38;
    13537:   int iVar39;
    13538:   int iVar40;
    13539:   int iVar41;
    13540:   int iVar42;

## FUN_14053cc30 */ — reconstrucao/src/decompiled_02.c:13916
reconstrucao/src/../include/ghidra_function_prototypes.h:13916:20: error: unknown type name ‘code’

    13913:   undefined1 auVar6 [16];
    13914:   undefined1 auVar7 [16];
    13915:   undefined1 auVar8 [16];
    13916:   undefined1 auVar9 [16];
    13917:   undefined1 auVar10 [16];
    13918:   undefined1 auVar11 [16];
    13919:   undefined1 auVar12 [16];

## FUN_14053cc30 */ — reconstrucao/src/decompiled_02.c:13916
reconstrucao/src/../include/ghidra_function_prototypes.h:13916:34: error: unknown type name ‘code’

    13913:   undefined1 auVar6 [16];
    13914:   undefined1 auVar7 [16];
    13915:   undefined1 auVar8 [16];
    13916:   undefined1 auVar9 [16];
    13917:   undefined1 auVar10 [16];
    13918:   undefined1 auVar11 [16];
    13919:   undefined1 auVar12 [16];

## FUN_14053d0a0 */ — reconstrucao/src/decompiled_02.c:14219
reconstrucao/src/../include/ghidra_function_prototypes.h:14219:1: error: unknown type name ‘code’

    14216:     }
    14217:   }
    14218:   DAT_140e0f4a0 = 1;
    14219:   DAT_140e65f18 = 0;
    14220:   FUN_14053cedc(1);
    14221:   return;
    14222: }

## FUN_14053d0a0 */ — reconstrucao/src/decompiled_02.c:14219
reconstrucao/src/../include/ghidra_function_prototypes.h:14219:22: error: unknown type name ‘code’

    14216:     }
    14217:   }
    14218:   DAT_140e0f4a0 = 1;
    14219:   DAT_140e65f18 = 0;
    14220:   FUN_14053cedc(1);
    14221:   return;
    14222: }

## FUN_14053d0a0 */ — reconstrucao/src/decompiled_02.c:14219
reconstrucao/src/../include/ghidra_function_prototypes.h:14219:36: error: unknown type name ‘code’

    14216:     }
    14217:   }
    14218:   DAT_140e0f4a0 = 1;
    14219:   DAT_140e65f18 = 0;
    14220:   FUN_14053cedc(1);
    14221:   return;
    14222: }

## FUN_14053d0a0 */ — reconstrucao/src/decompiled_02.c:14220
reconstrucao/src/../include/ghidra_function_prototypes.h:14220:1: error: unknown type name ‘code’

    14217:   }
    14218:   DAT_140e0f4a0 = 1;
    14219:   DAT_140e65f18 = 0;
    14220:   FUN_14053cedc(1);
    14221:   return;
    14222: }
    14223: 

## FUN_14053d0a0 */ — reconstrucao/src/decompiled_02.c:14220
reconstrucao/src/../include/ghidra_function_prototypes.h:14220:22: error: unknown type name ‘code’

    14217:   }
    14218:   DAT_140e0f4a0 = 1;
    14219:   DAT_140e65f18 = 0;
    14220:   FUN_14053cedc(1);
    14221:   return;
    14222: }
    14223: 

## FUN_14053d0a0 */ — reconstrucao/src/decompiled_02.c:14220
reconstrucao/src/../include/ghidra_function_prototypes.h:14220:36: error: unknown type name ‘code’

    14217:   }
    14218:   DAT_140e0f4a0 = 1;
    14219:   DAT_140e65f18 = 0;
    14220:   FUN_14053cedc(1);
    14221:   return;
    14222: }
    14223: 

## FUN_14053d1b8 */ — reconstrucao/src/decompiled_02.c:14285
reconstrucao/src/../include/ghidra_function_prototypes.h:14285:1: error: unknown type name ‘code’

    14282:       alStackX_18[0] = 0;
    14283:       uVar1 = FUN_1404473a0(lVar3,uVar2,alStackX_18,&LAB_140c81c60);
    14284:       lVar3 = lVar3 + alStackX_18[0];
    14285:       uVar2 = uVar2 - alStackX_18[0];
    14286:       if (((int)uVar1 < 0) && ((int)uVar1 != -0x7ffffffb)) {
    14287:         return uVar1;
    14288:       }

## FUN_14053d1b8 */ — reconstrucao/src/decompiled_02.c:14285
reconstrucao/src/../include/ghidra_function_prototypes.h:14285:22: error: unknown type name ‘code’

    14282:       alStackX_18[0] = 0;
    14283:       uVar1 = FUN_1404473a0(lVar3,uVar2,alStackX_18,&LAB_140c81c60);
    14284:       lVar3 = lVar3 + alStackX_18[0];
    14285:       uVar2 = uVar2 - alStackX_18[0];
    14286:       if (((int)uVar1 < 0) && ((int)uVar1 != -0x7ffffffb)) {
    14287:         return uVar1;
    14288:       }

## FUN_14053d1b8 */ — reconstrucao/src/decompiled_02.c:14285
reconstrucao/src/../include/ghidra_function_prototypes.h:14285:36: error: unknown type name ‘code’

    14282:       alStackX_18[0] = 0;
    14283:       uVar1 = FUN_1404473a0(lVar3,uVar2,alStackX_18,&LAB_140c81c60);
    14284:       lVar3 = lVar3 + alStackX_18[0];
    14285:       uVar2 = uVar2 - alStackX_18[0];
    14286:       if (((int)uVar1 < 0) && ((int)uVar1 != -0x7ffffffb)) {
    14287:         return uVar1;
    14288:       }

## FUN_14053d2b8 */ — reconstrucao/src/decompiled_02.c:14351
reconstrucao/src/../include/ghidra_function_prototypes.h:14351:20: error: unknown type name ‘code’

    14348:       uVar3 = param_2;
    14349:       if (*param_6 == '\0') goto LAB_14053d37e;
    14350:       iVar1 = (-(uint)(param_1 != (undefined1 *)0x0) & 0xbffffff8) + 0xc000000d;
    14351:       puStack_58 = param_1;
    14352:       auStack_50[0] = param_2;
    14353:     }
    14354:     else {

## FUN_14053d2b8 */ — reconstrucao/src/decompiled_02.c:14351
reconstrucao/src/../include/ghidra_function_prototypes.h:14351:34: error: unknown type name ‘code’

    14348:       uVar3 = param_2;
    14349:       if (*param_6 == '\0') goto LAB_14053d37e;
    14350:       iVar1 = (-(uint)(param_1 != (undefined1 *)0x0) & 0xbffffff8) + 0xc000000d;
    14351:       puStack_58 = param_1;
    14352:       auStack_50[0] = param_2;
    14353:     }
    14354:     else {

## FUN_14053d2b8 */ — reconstrucao/src/decompiled_02.c:14384
reconstrucao/src/../include/ghidra_function_prototypes.h:14384:20: error: unknown type name ‘code’

    14381:     FUN_14053d474(param_1,param_2,0,&puStack_58,auStack_50,param_5);
    14382:   }
    14383:   puVar2 = puStack_58;
    14384:   uVar3 = auStack_50[0];
    14385:   if (((iVar1 + 0x80000000U & 0x80000000) == 0) && (iVar1 != -0x7ffffffb)) {
    14386:     return iVar1;
    14387:   }

## FUN_14053d2b8 */ — reconstrucao/src/decompiled_02.c:14384
reconstrucao/src/../include/ghidra_function_prototypes.h:14384:34: error: unknown type name ‘code’

    14381:     FUN_14053d474(param_1,param_2,0,&puStack_58,auStack_50,param_5);
    14382:   }
    14383:   puVar2 = puStack_58;
    14384:   uVar3 = auStack_50[0];
    14385:   if (((iVar1 + 0x80000000U & 0x80000000) == 0) && (iVar1 != -0x7ffffffb)) {
    14386:     return iVar1;
    14387:   }

## FUN_14053d474 */ — reconstrucao/src/decompiled_02.c:14417
reconstrucao/src/../include/ghidra_function_prototypes.h:14417:20: error: unknown type name ‘code’

    14414: {
    14415:   if ((param_2 != 0) && ((param_6 & 0x1000) != 0)) {
    14416:     *param_4 = param_1 + param_3;
    14417:     *param_5 = param_2 - param_3;
    14418:     param_1[param_3] = 0;
    14419:   }
    14420:   if ((param_6 & 0x400) != 0) {

## FUN_14053d474 */ — reconstrucao/src/decompiled_02.c:14417
reconstrucao/src/../include/ghidra_function_prototypes.h:14417:34: error: unknown type name ‘code’

    14414: {
    14415:   if ((param_2 != 0) && ((param_6 & 0x1000) != 0)) {
    14416:     *param_4 = param_1 + param_3;
    14417:     *param_5 = param_2 - param_3;
    14418:     param_1[param_3] = 0;
    14419:   }
    14420:   if ((param_6 & 0x400) != 0) {

## FUN_14053d538 */ — reconstrucao/src/decompiled_02.c:14450
reconstrucao/src/../include/ghidra_function_prototypes.h:14450:20: error: unknown type name ‘code’

    14447: /* Ghidra address: 14053d538 */
    14448: undefined8 FUN_14053d538(longlong param_1,ulonglong param_2,undefined8 param_3,uint param_4)
    14449: 
    14450: {
    14451:   undefined8 uVar1;
    14452:   
    14453:   uVar1 = 0;

## FUN_14053d538 */ — reconstrucao/src/decompiled_02.c:14450
reconstrucao/src/../include/ghidra_function_prototypes.h:14450:34: error: unknown type name ‘code’

    14447: /* Ghidra address: 14053d538 */
    14448: undefined8 FUN_14053d538(longlong param_1,ulonglong param_2,undefined8 param_3,uint param_4)
    14449: 
    14450: {
    14451:   undefined8 uVar1;
    14452:   
    14453:   uVar1 = 0;

## FUN_14053d578 */ — reconstrucao/src/decompiled_02.c:14483
reconstrucao/src/../include/ghidra_function_prototypes.h:14483:20: error: unknown type name ‘code’

    14480:   uVar1 = ~-(uint)(lVar2 != 0) & 0xc000000d;
    14481:   if (param_3 != (longlong *)0x0) {
    14482:     if (lVar2 != 0) {
    14483:       *param_3 = 0x100 - lVar2;
    14484:       return uVar1;
    14485:     }
    14486:     *param_3 = 0;

## FUN_14053d578 */ — reconstrucao/src/decompiled_02.c:14483
reconstrucao/src/../include/ghidra_function_prototypes.h:14483:34: error: unknown type name ‘code’

    14480:   uVar1 = ~-(uint)(lVar2 != 0) & 0xc000000d;
    14481:   if (param_3 != (longlong *)0x0) {
    14482:     if (lVar2 != 0) {
    14483:       *param_3 = 0x100 - lVar2;
    14484:       return uVar1;
    14485:     }
    14486:     *param_3 = 0;

## FUN_14053d780 */ — reconstrucao/src/decompiled_02.c:14584
reconstrucao/src/../include/ghidra_function_prototypes.h:14584:1: error: unknown type name ‘code’

    14581:     do {
    14582:       puVar5 = puVar1;
    14583:       if ((undefined8 **)puVar5 == &DAT_140fc4460) goto LAB_14053d7f3;
    14584:       puVar1 = (undefined8 *)*puVar5;
    14585:       puVar4 = puVar5;
    14586:     } while (((*(uint *)(puVar5 + 0x17) & 4) == 0) || ((*(uint *)(puVar5 + 0x1c) & 1) == 0));
    14587:     uVar3 = FUN_1402ef1c0(puVar5);

## FUN_14053d780 */ — reconstrucao/src/decompiled_02.c:14584
reconstrucao/src/../include/ghidra_function_prototypes.h:14584:22: error: unknown type name ‘code’

    14581:     do {
    14582:       puVar5 = puVar1;
    14583:       if ((undefined8 **)puVar5 == &DAT_140fc4460) goto LAB_14053d7f3;
    14584:       puVar1 = (undefined8 *)*puVar5;
    14585:       puVar4 = puVar5;
    14586:     } while (((*(uint *)(puVar5 + 0x17) & 4) == 0) || ((*(uint *)(puVar5 + 0x1c) & 1) == 0));
    14587:     uVar3 = FUN_1402ef1c0(puVar5);

## FUN_14053d780 */ — reconstrucao/src/decompiled_02.c:14584
reconstrucao/src/../include/ghidra_function_prototypes.h:14584:36: error: unknown type name ‘code’

    14581:     do {
    14582:       puVar5 = puVar1;
    14583:       if ((undefined8 **)puVar5 == &DAT_140fc4460) goto LAB_14053d7f3;
    14584:       puVar1 = (undefined8 *)*puVar5;
    14585:       puVar4 = puVar5;
    14586:     } while (((*(uint *)(puVar5 + 0x17) & 4) == 0) || ((*(uint *)(puVar5 + 0x1c) & 1) == 0));
    14587:     uVar3 = FUN_1402ef1c0(puVar5);

## FUN_14053d840 */ — reconstrucao/src/decompiled_02.c:14649
reconstrucao/src/../include/ghidra_function_prototypes.h:14649:26: error: unknown type name ‘code’

    14646:         if (*(int *)(DAT_140fc4310 + 0xe4) == 5) {
    14647:           puVar4 = (undefined4 *)FUN_140545ff0(0x1000,1);
    14648:           if (puVar4 == (undefined4 *)0x0) {
    14649:             iVar1 = -0x3fffff66;
    14650:             DAT_140fc4420 = (undefined4 *)0x0;
    14651:             goto LAB_14053d8b3;
    14652:           }

## FUN_14053d840 */ — reconstrucao/src/decompiled_02.c:14649
reconstrucao/src/../include/ghidra_function_prototypes.h:14649:40: error: unknown type name ‘code’

    14646:         if (*(int *)(DAT_140fc4310 + 0xe4) == 5) {
    14647:           puVar4 = (undefined4 *)FUN_140545ff0(0x1000,1);
    14648:           if (puVar4 == (undefined4 *)0x0) {
    14649:             iVar1 = -0x3fffff66;
    14650:             DAT_140fc4420 = (undefined4 *)0x0;
    14651:             goto LAB_14053d8b3;
    14652:           }

## FUN_14053da88 */ — reconstrucao/src/decompiled_02.c:14715
reconstrucao/src/../include/ghidra_function_prototypes.h:14715:1: error: unknown type name ‘code’

    14712:     if (uVar5 == 0) {
    14713:       uVar5 = 1;
    14714:     }
    14715:     lVar1 = uVar5 * 2;
    14716:   }
    14717:   DAT_140fc42e8 = lVar1;
    14718:   return;

## FUN_14053da88 */ — reconstrucao/src/decompiled_02.c:14715
reconstrucao/src/../include/ghidra_function_prototypes.h:14715:22: error: unknown type name ‘code’

    14712:     if (uVar5 == 0) {
    14713:       uVar5 = 1;
    14714:     }
    14715:     lVar1 = uVar5 * 2;
    14716:   }
    14717:   DAT_140fc42e8 = lVar1;
    14718:   return;

## FUN_14053da88 */ — reconstrucao/src/decompiled_02.c:14715
reconstrucao/src/../include/ghidra_function_prototypes.h:14715:36: error: unknown type name ‘code’

    14712:     if (uVar5 == 0) {
    14713:       uVar5 = 1;
    14714:     }
    14715:     lVar1 = uVar5 * 2;
    14716:   }
    14717:   DAT_140fc42e8 = lVar1;
    14718:   return;

## FUN_14053e110 */ — reconstrucao/src/decompiled_02.c:14947
reconstrucao/src/../include/ghidra_function_prototypes.h:14947:20: error: unknown type name ‘code’

    14944:       if (lVar1 == 0) break;
    14945:       if (*(longlong *)(lVar1 + 0xc0) != 0) {
    14946:         FUN_140549a0c(lVar1,&uStackX_10);
    14947:         if ((299999999 < uStackX_10) &&
    14948:            ((2999999999 < uStackX_10 ||
    14949:             ((*(int *)(lVar1 + 0xe4) != 8 && ((*(uint *)(lVar1 + 0xe0) & 0x80000) != 0))))))
    14950:         goto LAB_14053e197;

## FUN_14053e110 */ — reconstrucao/src/decompiled_02.c:14947
reconstrucao/src/../include/ghidra_function_prototypes.h:14947:34: error: unknown type name ‘code’

    14944:       if (lVar1 == 0) break;
    14945:       if (*(longlong *)(lVar1 + 0xc0) != 0) {
    14946:         FUN_140549a0c(lVar1,&uStackX_10);
    14947:         if ((299999999 < uStackX_10) &&
    14948:            ((2999999999 < uStackX_10 ||
    14949:             ((*(int *)(lVar1 + 0xe4) != 8 && ((*(uint *)(lVar1 + 0xe0) & 0x80000) != 0))))))
    14950:         goto LAB_14053e197;

## FUN_14053e1d0 */ — reconstrucao/src/decompiled_02.c:14980
reconstrucao/src/../include/ghidra_function_prototypes.h:14980:20: error: unknown type name ‘code’

    14977:   undefined4 extraout_XMM0_Da;
    14978:   undefined1 auStack_68 [32];
    14979:   undefined8 uStack_48;
    14980:   longlong lStack_38;
    14981:   ulonglong auStack_30 [2];
    14982:   undefined4 uStack_20;
    14983:   ulonglong uStack_18;

## FUN_14053e1d0 */ — reconstrucao/src/decompiled_02.c:14980
reconstrucao/src/../include/ghidra_function_prototypes.h:14980:34: error: unknown type name ‘code’

    14977:   undefined4 extraout_XMM0_Da;
    14978:   undefined1 auStack_68 [32];
    14979:   undefined8 uStack_48;
    14980:   longlong lStack_38;
    14981:   ulonglong auStack_30 [2];
    14982:   undefined4 uStack_20;
    14983:   ulonglong uStack_18;

## FUN_14053e1d0 */ — reconstrucao/src/decompiled_02.c:15014
reconstrucao/src/../include/ghidra_function_prototypes.h:15014:20: error: unknown type name ‘code’

    15011:     PTR__guard_check_icall_140e00ad0 = FUN_140549960;
    15012:     PTR_FUN_140e00af8 = FUN_140549d60;
    15013:     PTR_ExGetFfaInterface_140e00a50 = FUN_14053e830;
    15014:     PTR_HalAdjustResourceList_140e00c60 = FUN_1404c3180;
    15015:     PTR_CcTestControl_140e00b88 = FUN_14048bbe0;
    15016:     PTR_CcTestControl_140e00b80 = FUN_14053db40;
    15017:     PTR_CcTestControl_140e00b90 = FUN_14053e800;

## FUN_14053e1d0 */ — reconstrucao/src/decompiled_02.c:15014
reconstrucao/src/../include/ghidra_function_prototypes.h:15014:34: error: unknown type name ‘code’

    15011:     PTR__guard_check_icall_140e00ad0 = FUN_140549960;
    15012:     PTR_FUN_140e00af8 = FUN_140549d60;
    15013:     PTR_ExGetFfaInterface_140e00a50 = FUN_14053e830;
    15014:     PTR_HalAdjustResourceList_140e00c60 = FUN_1404c3180;
    15015:     PTR_CcTestControl_140e00b88 = FUN_14048bbe0;
    15016:     PTR_CcTestControl_140e00b80 = FUN_14053db40;
    15017:     PTR_CcTestControl_140e00b90 = FUN_14053e800;

## FUN_14053e1d0 */ — reconstrucao/src/decompiled_02.c:15047
reconstrucao/src/../include/ghidra_function_prototypes.h:15047:20: error: unknown type name ‘code’

    15044:   }
    15045:   if (param_1 == 0x13) {
    15046:     uVar4 = 0;
    15047:     if (DAT_140fc1fc8 == 0) {
    15048:       param_2 = 0;
    15049:       uVar4 = 0x10;
    15050:       wrmsr(0x10,0);

## FUN_14053e1d0 */ — reconstrucao/src/decompiled_02.c:15047
reconstrucao/src/../include/ghidra_function_prototypes.h:15047:34: error: unknown type name ‘code’

    15044:   }
    15045:   if (param_1 == 0x13) {
    15046:     uVar4 = 0;
    15047:     if (DAT_140fc1fc8 == 0) {
    15048:       param_2 = 0;
    15049:       uVar4 = 0x10;
    15050:       wrmsr(0x10,0);

## FUN_14053e1d0 */ — reconstrucao/src/decompiled_02.c:15080
reconstrucao/src/../include/ghidra_function_prototypes.h:15080:1: error: unknown type name ‘code’

    15077:   }
    15078:   FUN_14053e9e8();
    15079:   FUN_14054d40c();
    15080:   PTR_IoDriverProxyCreateHotSwappableWorkerThread_140e00c40 = FUN_14053e890;
    15081:   iVar2 = FUN_1403833bc();
    15082:   if (iVar2 == 1) {
    15083:     if ((DAT_140fc4458 == '\0') && (*(int *)(DAT_140fc4310 + 0xe4) != 5)) {

## FUN_14053e1d0 */ — reconstrucao/src/decompiled_02.c:15080
reconstrucao/src/../include/ghidra_function_prototypes.h:15080:22: error: unknown type name ‘code’

    15077:   }
    15078:   FUN_14053e9e8();
    15079:   FUN_14054d40c();
    15080:   PTR_IoDriverProxyCreateHotSwappableWorkerThread_140e00c40 = FUN_14053e890;
    15081:   iVar2 = FUN_1403833bc();
    15082:   if (iVar2 == 1) {
    15083:     if ((DAT_140fc4458 == '\0') && (*(int *)(DAT_140fc4310 + 0xe4) != 5)) {

## FUN_14053e1d0 */ — reconstrucao/src/decompiled_02.c:15080
reconstrucao/src/../include/ghidra_function_prototypes.h:15080:36: error: unknown type name ‘code’

    15077:   }
    15078:   FUN_14053e9e8();
    15079:   FUN_14054d40c();
    15080:   PTR_IoDriverProxyCreateHotSwappableWorkerThread_140e00c40 = FUN_14053e890;
    15081:   iVar2 = FUN_1403833bc();
    15082:   if (iVar2 == 1) {
    15083:     if ((DAT_140fc4458 == '\0') && (*(int *)(DAT_140fc4310 + 0xe4) != 5)) {

## FUN_14053e598 */ — reconstrucao/src/decompiled_02.c:15145
reconstrucao/src/../include/ghidra_function_prototypes.h:15145:1: error: unknown type name ‘code’

    15142:       FUN_1404fc544(param_1,0xf,iVar1,"minkernel\\hals\\lib\\timers\\common\\timer.c",0xa1d);
    15143:     }
    15144:     else if ((*(uint *)(param_1 + 0xe0) & 2) != 0) {
    15145:       uVar2 = FUN_1402ef1c0(param_1);
    15146:       uVar2 = FUN_1406c4fb0(uVar2);
    15147:       LOCK();
    15148:       *(undefined8 *)(param_1 + 200) = uVar2;

## FUN_14053e598 */ — reconstrucao/src/decompiled_02.c:15145
reconstrucao/src/../include/ghidra_function_prototypes.h:15145:22: error: unknown type name ‘code’

    15142:       FUN_1404fc544(param_1,0xf,iVar1,"minkernel\\hals\\lib\\timers\\common\\timer.c",0xa1d);
    15143:     }
    15144:     else if ((*(uint *)(param_1 + 0xe0) & 2) != 0) {
    15145:       uVar2 = FUN_1402ef1c0(param_1);
    15146:       uVar2 = FUN_1406c4fb0(uVar2);
    15147:       LOCK();
    15148:       *(undefined8 *)(param_1 + 200) = uVar2;

## FUN_14053e598 */ — reconstrucao/src/decompiled_02.c:15145
reconstrucao/src/../include/ghidra_function_prototypes.h:15145:36: error: unknown type name ‘code’

    15142:       FUN_1404fc544(param_1,0xf,iVar1,"minkernel\\hals\\lib\\timers\\common\\timer.c",0xa1d);
    15143:     }
    15144:     else if ((*(uint *)(param_1 + 0xe0) & 2) != 0) {
    15145:       uVar2 = FUN_1402ef1c0(param_1);
    15146:       uVar2 = FUN_1406c4fb0(uVar2);
    15147:       LOCK();
    15148:       *(undefined8 *)(param_1 + 200) = uVar2;

## FUN_14053e63c */ — reconstrucao/src/decompiled_02.c:15210
reconstrucao/src/../include/ghidra_function_prototypes.h:15210:20: error: unknown type name ‘code’

    15207:     DAT_140e103b8 = 0x15;
    15208:   }
    15209: LAB_14053e757:
    15210:   return uVar4 & 0xffffffff;
    15211: }
    15212: 
    15213: /* Ghidra label: FUN_14053e76c */

## FUN_14077f730 */ — reconstrucao/src/decompiled_03.c:216
reconstrucao/src/../include/ghidra_function_prototypes.h:216:43: error: unknown type name ‘code’

    213: 
    214: {
    215:   int iVar1;
    216:   undefined *puVar2;
    217:   longlong lVar3;
    218:   undefined *puStackX_8;
    219:   longlong alStack_38 [4];

## FUN_14077fdf8 */ — reconstrucao/src/decompiled_03.c:541
reconstrucao/src/../include/ghidra_function_prototypes.h:541:1: error: unknown type name ‘undefined’; did you mean ‘undefined8’?

    538:       uVar2 = DAT_140fc4ac0 | 1;
    539:       FUN_14053fd44(&PTR_DAT_1400dd860,uVar2,3,1);
    540:       FUN_14053fdd4(uVar2,3,&PTR_DAT_1400dd860);
    541:     }
    542:     uVar1 = FUN_14077eff0(*(undefined8 *)(param_1 + 0x30));
    543:     *(undefined4 *)(param_1 + 0x30) = uVar1;
    544:     ZwAlpcSendWaitReceivePort(DAT_140f06bb0,0x10000,param_1,0,0,0,0,0);

## TtmNotifyDeviceInput */ — reconstrucao/src/decompiled_03.c:706
reconstrucao/src/../include/ghidra_function_prototypes.h:706:19: error: unknown type name ‘code’

    703:         }
    704:         uVar4 = 0x324;
    705:       }
    706:     }
    707:     else {
    708:       uVar4 = 0x300;
    709:       iVar3 = -0x3ffffbab;

## FUN_1407806d4 */ — reconstrucao/src/decompiled_03.c:785
reconstrucao/src/../include/ghidra_function_prototypes.h:785:75: error: unknown type name ‘undefined’; did you mean ‘undefined8’?

    782: }
    783: 
    784: /* Ghidra label: FUN_1407806d4 */
    785: /* Ghidra address: 1407806d4 */
    786: undefined1 FUN_1407806d4(longlong param_1,longlong param_2)
    787: 
    788: {

## FUN_1407807d0 */ — reconstrucao/src/decompiled_03.c:880
reconstrucao/src/../include/ghidra_function_prototypes.h:880:55: error: unknown type name ‘code’

    877:     if (((byte)*(uint *)(plVar6 + 0x4b) & 0x44) == 0x40) {
    878:       *(uint *)(plVar6 + 0x4b) = *(uint *)(plVar6 + 0x4b) & 0xffffffbf;
    879:       cVar4 = FUN_140781420(param_1,plVar6);
    880:       if (cVar4 != '\0') {
    881:         *(uint *)(plVar6 + 0x4b) = *(uint *)(plVar6 + 0x4b) | 0x40;
    882:         *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x1000;
    883:       }

## FUN_1407807d0 */ — reconstrucao/src/decompiled_03.c:902
reconstrucao/src/../include/ghidra_function_prototypes.h:902:20: error: unknown type name ‘undefined’; did you mean ‘undefined8’?

    899:         FUN_1406c4fb0(plVar6[3]);
    900:         FUN_140781754(&uStack_38,0);
    901:       }
    902:       lVar2 = *plVar6;
    903:       plVar5 = (longlong *)plVar6[1];
    904:       if ((*(longlong **)(lVar2 + 8) != plVar6) || ((longlong *)*plVar5 != plVar6)) {
    905:         pcVar3 = (code *)swi(0x29);

## FUN_1407807d0 */ — reconstrucao/src/decompiled_03.c:915
reconstrucao/src/../include/ghidra_function_prototypes.h:915:1: error: unknown type name ‘undefined’; did you mean ‘undefined8’?

    912:       *(longlong **)(lVar2 + 8) = plVar5;
    913:       *(int *)(param_1 + 0x74) = *(int *)(param_1 + 0x74) + -1;
    914:       ExFreePoolWithTag(plVar6);
    915:     }
    916:     plVar6 = (longlong *)*plVar5;
    917:   } while( true );
    918: }

## FUN_140780a78 */ — reconstrucao/src/decompiled_03.c:960
reconstrucao/src/../include/ghidra_function_prototypes.h:960:1: error: unknown type name ‘code’

    957: 
    958: {
    959:   uint *puVar1;
    960:   
    961:   puVar1 = (uint *)(param_2 + 600);
    962:   if ((*(uint *)(param_1 + 4) & 0x800) != 0) {
    963:     *(undefined4 *)(param_2 + 0x254) = 0;

## FUN_140780c6c */ — reconstrucao/src/decompiled_03.c:1077
reconstrucao/src/../include/ghidra_function_prototypes.h:1077:1: error: unknown type name ‘undefined’; did you mean ‘undefined8’?

    1074:     }
    1075:   }
    1076:   return;
    1077: }
    1078: 
    1079: /* Ghidra label: FUN_140780d0c */
    1080: /* Ghidra address: 140780d0c */

## FUN_140781128 */ — reconstrucao/src/decompiled_03.c:1343
reconstrucao/src/../include/ghidra_function_prototypes.h:1343:1: error: unknown type name ‘undefined’; did you mean ‘undefined8’?

    1340:   RtlInitUnicodeString(&uStack_78,L"\\Registry\\Machine\\SYSTEM\\CurrentControlSet\\Control\\Power")
    1341:   ;
    1342:   uStack_50 = 0;
    1343:   puStack_48 = &uStack_78;
    1344:   uStack_58 = 0x30;
    1345:   uStack_40 = 0x240;
    1346:   uStack_38 = 0;

## FUN_140781420 */ — reconstrucao/src/decompiled_03.c:1473
reconstrucao/src/../include/ghidra_function_prototypes.h:1473:37: error: unknown type name ‘code’

    1470:     }
    1471:     else {
    1472:       FUN_1407814f0(param_1,param_2);
    1473:       iVar2 = *(int *)(lVar1 + 0x30);
    1474:       if ((iVar2 == 2) && (iVar2 = 2, (*(byte *)(param_2 + 600) & 0x80) == 0)) {
    1475:         iVar2 = 1;
    1476:       }

## FUN_1407815d4 */ — reconstrucao/src/decompiled_03.c:1566
reconstrucao/src/../include/ghidra_function_prototypes.h:1566:1: error: unknown type name ‘undefined’; did you mean ‘undefined8’?

    1563:       puVar7 = puVar7 + 6;
    1564:       lVar5 = lVar5 + -1;
    1565:     } while (lVar5 != 0);
    1566:     FUN_140781128();
    1567:     DAT_140e67b51 = '\x01';
    1568:   }
    1569:   *param_1 = param_2;

## FUN_140781754 */ — reconstrucao/src/decompiled_03.c:1602
reconstrucao/src/../include/ghidra_function_prototypes.h:1602:26: error: unknown type name ‘code’

    1599: 
    1600: /* Ghidra label: FUN_140781754 */
    1601: /* Ghidra address: 140781754 */
    1602: void FUN_140781754(longlong param_1,undefined4 param_2)
    1603: 
    1604: {
    1605:   undefined4 uVar1;

## FUN_140781754 */ — reconstrucao/src/decompiled_03.c:1617
reconstrucao/src/../include/ghidra_function_prototypes.h:1617:20: error: unknown type name ‘undefined’; did you mean ‘undefined8’?

    1614:   if (lVar3 != 0) {
    1615:     FUN_1406d1200(auStack_68,0,0x60);
    1616:     *(undefined8 *)(param_1 + 0x18) = 0;
    1617:     auStack_68[0] = 0x15;
    1618:     uStack_10 = 1;
    1619:     lStack_60 = lVar3;
    1620:     FUN_1409e7d20(0x57,auStack_68,0x60,0,0);

## FUN_140781754 */ — reconstrucao/src/decompiled_03.c:1624
reconstrucao/src/../include/ghidra_function_prototypes.h:1624:1: error: unknown type name ‘undefined’; did you mean ‘undefined8’?

    1621:   }
    1622:   lVar3 = *(longlong *)(param_1 + 8);
    1623:   uVar1 = FUN_1407810d0(*(undefined4 *)(param_1 + 0x10));
    1624:   FUN_140783b44(*(undefined4 *)(lVar3 + 0x10),*(undefined4 *)(lVar3 + 0x48),
    1625:                 *(undefined8 *)(lVar3 + 0x18),uVar1,param_2,lVar2);
    1626:   FUN_14070a408();
    1627:   return;

## FUN_140781cb4 */ — reconstrucao/src/decompiled_03.c:1840
reconstrucao/src/../include/ghidra_function_prototypes.h:1840:1: error: unknown type name ‘undefined’; did you mean ‘undefined8’?

    1837: 
    1838: {
    1839:   *(uint *)(param_1 + 0xe0) = *(uint *)(param_1 + 0xe0) | param_2;
    1840:   if ((*(uint *)(param_1 + 4) & 3) == 0) {
    1841:     LOCK();
    1842:     *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
    1843:     UNLOCK();

## FUN_140781cec */ — reconstrucao/src/decompiled_03.c:1867
reconstrucao/src/../include/ghidra_function_prototypes.h:1867:1: error: unknown type name ‘undefined’; did you mean ‘undefined8’?

    1864:   undefined4 uStack_20;
    1865:   undefined4 uStack_1c;
    1866:   undefined4 uStack_18;
    1867:   undefined4 uStack_14;
    1868:   
    1869:   puStackX_8 = (undefined4 *)0x0;
    1870:   iVar2 = FUN_140781b40(&puStackX_8);

## FUN_140781dac */ — reconstrucao/src/decompiled_03.c:1920
reconstrucao/src/../include/ghidra_function_prototypes.h:1920:73: error: unknown type name ‘va_list’

    1917:   longlong *plVar16;
    1918:   undefined1 auStack_58 [8];
    1919:   undefined1 auStack_50 [24];
    1920:   undefined4 uStack_38;
    1921:   longlong lStack_28;
    1922:   longlong lStack_20;
    1923:   

## FUN_140781dac */ — reconstrucao/src/decompiled_03.c:2038
reconstrucao/src/../include/ghidra_function_prototypes.h:2038:1: error: unknown type name ‘undefined’; did you mean ‘undefined8’?

    2035:   FUN_1409a24bc("TtmiSetDisplayPowerRequest",uVar6,uVar11,uVar12);
    2036:   puVar10 = puVar9;
    2037: LAB_140781fbb:
    2038:   uVar11 = *(undefined4 *)(param_2 + 0x1c);
    2039:   *(undefined8 *)(puVar10 + -8) = 0x140781fcc;
    2040:   FUN_140784b88(uVar11,param_3,param_4,uVar7);
    2041:   return uVar7;

## FUN_1407823c8 */ — reconstrucao/src/decompiled_03.c:2280
reconstrucao/src/../include/ghidra_function_prototypes.h:2280:1: error: unknown type name ‘undefined’; did you mean ‘undefined8’?

    2277:   iVar2 = *piVar1;
    2278:   *piVar1 = *piVar1 + -1;
    2279:   UNLOCK();
    2280:   if (iVar2 + -1 == 0) {
    2281:     ExFreePoolWithTag(param_1,0x536d7454);
    2282:   }
    2283:   return iVar2 + -1;

## FUN_1407823c8 */ — reconstrucao/src/decompiled_03.c:2284
reconstrucao/src/../include/ghidra_function_prototypes.h:2284:36: error: unknown type name ‘code’

    2281:     ExFreePoolWithTag(param_1,0x536d7454);
    2282:   }
    2283:   return iVar2 + -1;
    2284: }
    2285: 
    2286: /* Ghidra label: FUN_1407823f4 */
    2287: /* Ghidra address: 1407823f4 */

## FUN_1407831a0 */ — reconstrucao/src/decompiled_03.c:2977
reconstrucao/src/../include/ghidra_function_prototypes.h:2977:43: error: unknown type name ‘undefined’; did you mean ‘undefined8’?

    2974:   lStackX_8 = 0;
    2975:   iVar1 = FUN_140783074(*(undefined8 *)(param_1 + 8),1,1,&lStackX_10,&lStackX_8);
    2976:   if (iVar1 < 0) {
    2977:     FUN_1409a24bc("TtmpDispatchAssignDevice",0x30b,iVar1,iVar1);
    2978:   }
    2979:   else {
    2980:     iVar1 = FUN_14078056c(lStackX_10,lStackX_8,*(undefined4 *)(param_1 + 0x10));

## FUN_140783684 */ — reconstrucao/src/decompiled_03.c:3209
reconstrucao/src/../include/ghidra_function_prototypes.h:3209:19: error: unknown type name ‘undefined’; did you mean ‘undefined8’?

    3206:          (uint)(*(char *)(param_1 + 0x10) != '\0') << 0xb | *(uint *)(lStackX_8 + 4) & 0xfffff7ff;
    3207:     FUN_140785acc();
    3208:     iVar2 = 0;
    3209:   }
    3210:   if (lVar1 != 0) {
    3211:     ExReleaseResourceLite(&DAT_140f06b20);
    3212:     KeLeaveCriticalRegion();

## FUN_140784038 */ — reconstrucao/src/decompiled_03.c:3674
reconstrucao/src/../include/ghidra_function_prototypes.h:3674:72: error: unknown type name ‘code’

    3671: /* Ghidra label: FUN_140784038 */
    3672: /* Ghidra address: 140784038 */
    3673: void FUN_140784038(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
    3674:                   undefined8 param_5)
    3675: 
    3676: {
    3677:   char cVar1;

## FUN_140784830 */ — reconstrucao/src/decompiled_03.c:4161
reconstrucao/src/../include/ghidra_function_prototypes.h:4161:1: error: unknown type name ‘undefined’; did you mean ‘undefined8’?

    4158:       uStack_30 = 8;
    4159:       uStack_20 = 4;
    4160:       FUN_1403a0f70(&DAT_140fd98c8,&DAT_1400522ab,0,0);
    4161:     }
    4162:   }
    4163:   return;
    4164: }

## FUN_140784988 */ — reconstrucao/src/decompiled_03.c:4198
reconstrucao/src/../include/ghidra_function_prototypes.h:4198:1: error: unknown type name ‘undefined’; did you mean ‘undefined8’?

    4195:   if (5 < DAT_140fd98c8) {
    4196:     cVar1 = FUN_14042b0b0(&DAT_140fd98c8,1);
    4197:     if (cVar1 != '\0') {
    4198:       uStack_88 = PsGetProcessSessionIdEx(*(undefined8 *)((longlong)SystemReserved1[0xf] + 0xb8));
    4199:       uStack_4c = 0;
    4200:       uStack_3c = 0;
    4201:       uStack_2c = 0;

## FUN_140784b88 */ — reconstrucao/src/decompiled_03.c:4296
reconstrucao/src/../include/ghidra_function_prototypes.h:4296:1: error: unknown type name ‘undefined’; did you mean ‘undefined8’?

    4293:   undefined4 uStack_3c;
    4294:   undefined4 *puStack_38;
    4295:   undefined4 uStack_30;
    4296:   undefined4 uStack_2c;
    4297:   undefined4 *puStack_28;
    4298:   undefined4 uStack_20;
    4299:   undefined4 uStack_1c;

## FUN_140785130 */ — reconstrucao/src/decompiled_03.c:4566
reconstrucao/src/../include/ghidra_function_prototypes.h:4566:1: error: unknown type name ‘undefined’; did you mean ‘undefined8’?

    4563:   char cVar1;
    4564:   undefined1 auStack_98 [32];
    4565:   undefined4 uStack_78;
    4566:   undefined1 *puStack_70;
    4567:   undefined4 uStack_68;
    4568:   undefined4 auStack_64 [3];
    4569:   undefined1 auStack_58 [32];

## FUN_140785130 */ — reconstrucao/src/decompiled_03.c:4568
reconstrucao/src/../include/ghidra_function_prototypes.h:4568:38: error: unknown type name ‘code’

    4565:   undefined4 uStack_78;
    4566:   undefined1 *puStack_70;
    4567:   undefined4 uStack_68;
    4568:   undefined4 auStack_64 [3];
    4569:   undefined1 auStack_58 [32];
    4570:   undefined4 *puStack_38;
    4571:   undefined4 uStack_30;

## FUN_140785320 */ — reconstrucao/src/decompiled_03.c:4709
reconstrucao/src/../include/ghidra_function_prototypes.h:4709:26: error: unknown type name ‘undefined’; did you mean ‘undefined8’?

    4706:       uStack_2c = 0;
    4707:       uStack_1c = 0;
    4708:       puStack_78 = &uStack_b4;
    4709:       puStack_68 = auStack_b8;
    4710:       puStack_58 = &uStack_a0;
    4711:       puStack_48 = &uStack_b0;
    4712:       puStack_38 = &uStack_ac;

## FUN_140785320 */ — reconstrucao/src/decompiled_03.c:4711
reconstrucao/src/../include/ghidra_function_prototypes.h:4711:26: error: unknown type name ‘undefined’; did you mean ‘undefined8’?

    4708:       puStack_78 = &uStack_b4;
    4709:       puStack_68 = auStack_b8;
    4710:       puStack_58 = &uStack_a0;
    4711:       puStack_48 = &uStack_b0;
    4712:       puStack_38 = &uStack_ac;
    4713:       auStack_a8[0] = param_5;
    4714:       puStack_28 = auStack_a8;

## FUN_140785990 */ — reconstrucao/src/decompiled_03.c:5020
reconstrucao/src/../include/ghidra_function_prototypes.h:5020:20: error: unknown type name ‘PSLIST_HEADER’

    5017:   undefined1 auStack_40 [32];
    5018:   undefined4 *puStack_20;
    5019:   undefined4 uStack_18;
    5020:   undefined4 uStack_14;
    5021:   ulonglong uStack_10;
    5022:   
    5023:   uStack_10 = DAT_140e0a740 ^ (ulonglong)auStack_78;

## FUN_140785990 */ — reconstrucao/src/decompiled_03.c:5020
reconstrucao/src/../include/ghidra_function_prototypes.h:5020:42: error: unknown type name ‘code’

    5017:   undefined1 auStack_40 [32];
    5018:   undefined4 *puStack_20;
    5019:   undefined4 uStack_18;
    5020:   undefined4 uStack_14;
    5021:   ulonglong uStack_10;
    5022:   
    5023:   uStack_10 = DAT_140e0a740 ^ (ulonglong)auStack_78;

## FUN_140785990 */ — reconstrucao/src/decompiled_03.c:5020
reconstrucao/src/../include/ghidra_function_prototypes.h:5020:56: error: unknown type name ‘code’

    5017:   undefined1 auStack_40 [32];
    5018:   undefined4 *puStack_20;
    5019:   undefined4 uStack_18;
    5020:   undefined4 uStack_14;
    5021:   ulonglong uStack_10;
    5022:   
    5023:   uStack_10 = DAT_140e0a740 ^ (ulonglong)auStack_78;

## FUN_140785990 */ — reconstrucao/src/decompiled_03.c:5021
reconstrucao/src/../include/ghidra_function_prototypes.h:5021:20: error: unknown type name ‘PSLIST_HEADER’

    5018:   undefined4 *puStack_20;
    5019:   undefined4 uStack_18;
    5020:   undefined4 uStack_14;
    5021:   ulonglong uStack_10;
    5022:   
    5023:   uStack_10 = DAT_140e0a740 ^ (ulonglong)auStack_78;
    5024:   if (5 < DAT_140fd98c8) {

## FUN_140785990 */ — reconstrucao/src/decompiled_03.c:5021
reconstrucao/src/../include/ghidra_function_prototypes.h:5021:42: error: unknown type name ‘code’

    5018:   undefined4 *puStack_20;
    5019:   undefined4 uStack_18;
    5020:   undefined4 uStack_14;
    5021:   ulonglong uStack_10;
    5022:   
    5023:   uStack_10 = DAT_140e0a740 ^ (ulonglong)auStack_78;
    5024:   if (5 < DAT_140fd98c8) {

## FUN_140785990 */ — reconstrucao/src/decompiled_03.c:5021
reconstrucao/src/../include/ghidra_function_prototypes.h:5021:56: error: unknown type name ‘code’

    5018:   undefined4 *puStack_20;
    5019:   undefined4 uStack_18;
    5020:   undefined4 uStack_14;
    5021:   ulonglong uStack_10;
    5022:   
    5023:   uStack_10 = DAT_140e0a740 ^ (ulonglong)auStack_78;
    5024:   if (5 < DAT_140fd98c8) {

## FUN_140785a24 */ — reconstrucao/src/decompiled_03.c:5063
reconstrucao/src/../include/ghidra_function_prototypes.h:5063:1: error: unknown type name ‘undefined’; did you mean ‘undefined8’?

    5060:            PsGetProcessSessionIdEx(*(undefined8 *)((longlong)SystemReserved1[0xf] + 0xb8));
    5061:       uStack_14 = 0;
    5062:       puStack_20 = auStack_48;
    5063:       uStack_18 = 4;
    5064:       puStack_50 = auStack_40;
    5065:       uStack_58 = 3;
    5066:       FUN_1403a0f70(&DAT_140fd98c8,&DAT_140052a9d,0,0);

## FUN_140785a24 */ — reconstrucao/src/decompiled_03.c:5063
reconstrucao/src/../include/ghidra_function_prototypes.h:5063:28: error: unknown type name ‘undefined’; did you mean ‘undefined8’?

    5060:            PsGetProcessSessionIdEx(*(undefined8 *)((longlong)SystemReserved1[0xf] + 0xb8));
    5061:       uStack_14 = 0;
    5062:       puStack_20 = auStack_48;
    5063:       uStack_18 = 4;
    5064:       puStack_50 = auStack_40;
    5065:       uStack_58 = 3;
    5066:       FUN_1403a0f70(&DAT_140fd98c8,&DAT_140052a9d,0,0);

## FUN_140785c60 */ — reconstrucao/src/decompiled_03.c:5182
reconstrucao/src/../include/ghidra_function_prototypes.h:5182:1: error: unknown type name ‘undefined’; did you mean ‘undefined8’?

    5179:   ulonglong uStack_18;
    5180:   
    5181:   uStack_18 = DAT_140e0a740 ^ (ulonglong)auStack_a8;
    5182:   if (5 < DAT_140fd98c8) {
    5183:     cVar1 = FUN_14042b0b0(&DAT_140fd98c8,1);
    5184:     if (cVar1 != '\0') {
    5185:       uStack_74 = PsGetProcessSessionIdEx(*(undefined8 *)((longlong)SystemReserved1[0xf] + 0xb8));

## FUN_140785d54 */ — reconstrucao/src/decompiled_03.c:5221
reconstrucao/src/../include/ghidra_function_prototypes.h:5221:1: error: unknown type name ‘undefined’; did you mean ‘undefined8’?

    5218:   undefined4 uStack_14;
    5219:   ulonglong uStack_10;
    5220:   
    5221:   uStack_10 = DAT_140e0a740 ^ (ulonglong)auStack_78;
    5222:   if (5 < DAT_140fd98c8) {
    5223:     cVar1 = FUN_14042b0b0(&DAT_140fd98c8,1);
    5224:     if (cVar1 != '\0') {

## FUN_140785dfc */ — reconstrucao/src/decompiled_03.c:5242
reconstrucao/src/../include/ghidra_function_prototypes.h:5242:37: error: unknown type name ‘undefined’; did you mean ‘undefined8’?

    5239: /* Ghidra address: 140785dfc */
    5240: void FUN_140785dfc(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
    5241:                   undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined1 param_8)
    5242: 
    5243: {
    5244:   char cVar1;
    5245:   undefined1 auStack_118 [32];

## FUN_140785dfc */ — reconstrucao/src/decompiled_03.c:5311
reconstrucao/src/../include/ghidra_function_prototypes.h:5311:1: error: unknown type name ‘undefined’; did you mean ‘undefined8’?

    5308:       puStack_f0 = auStack_b8;
    5309:       uStack_90 = 4;
    5310:       uStack_80 = 4;
    5311:       uStack_70 = 4;
    5312:       uStack_60 = 8;
    5313:       uStack_50 = 8;
    5314:       uStack_40 = 4;

## FUN_14078600c */ — reconstrucao/src/decompiled_03.c:5395
reconstrucao/src/../include/ghidra_function_prototypes.h:5395:26: error: unknown type name ‘undefined’; did you mean ‘undefined8’?

    5392:   
    5393:   uStack_18 = DAT_140e0a740 ^ (ulonglong)auStack_a8;
    5394:   if (5 < DAT_140fd98c8) {
    5395:     uVar2 = 1;
    5396:     auStack_78[0] = param_3;
    5397:     cVar1 = FUN_14042b0b0(&DAT_140fd98c8);
    5398:     if (cVar1 != '\0') {

## FUN_1407861a0 */ — reconstrucao/src/decompiled_03.c:5530
reconstrucao/src/../include/ghidra_function_prototypes.h:5530:40: error: unknown type name ‘code’

    5527:       uStack_80 = 4;
    5528:       uStack_70 = 4;
    5529:       uStack_60 = 4;
    5530:       uStack_50 = 4;
    5531:       uStack_40 = 4;
    5532:       uStack_30 = 4;
    5533:       uStack_20 = 4;

## FUN_140786480 */ — reconstrucao/src/decompiled_03.c:5616
reconstrucao/src/../include/ghidra_function_prototypes.h:5616:59: error: unknown type name ‘DWORD64’

    5613: 
    5614: /* Ghidra label: FUN_140786480 */
    5615: /* Ghidra address: 140786480 */
    5616: void FUN_140786480(undefined4 param_1,undefined4 param_2)
    5617: 
    5618: {
    5619:   char cVar1;

## FUN_140786784 */ — reconstrucao/src/decompiled_03.c:5832
reconstrucao/src/../include/ghidra_function_prototypes.h:5832:65: error: unknown type name ‘va_list’

    5829:   return;
    5830: }
    5831: 
    5832: /* Ghidra label: FUN_140786894 */
    5833: /* Ghidra address: 140786894 */
    5834: void FUN_140786894(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
    5835:                   undefined8 param_5,undefined8 param_6)

## FUN_140786fe4 */ — reconstrucao/src/decompiled_03.c:6363
reconstrucao/src/../include/ghidra_function_prototypes.h:6363:26: error: unknown type name ‘undefined’; did you mean ‘undefined8’?

    6360:       uStack_16c = param_3[2];
    6361:       puStack_48 = &uStack_16c;
    6362:       uStack_148 = *(undefined8 *)(param_3 + 4);
    6363:       puStack_38 = &uStack_148;
    6364:       uStack_140 = *(undefined8 *)(param_3 + 6);
    6365:       puStack_28 = &uStack_140;
    6366:       uStack_110 = 4;

## FUN_140787570 */ — reconstrucao/src/decompiled_03.c:6638
reconstrucao/src/../include/ghidra_function_prototypes.h:6638:1: error: unknown type name ‘undefined’; did you mean ‘undefined8’?

    6635:     uStack_b0 = 0;
    6636:     pcStack_b8 = FUN_1407884c0;
    6637:     ExSubscribeWnfStateChange(&uStack_a8,&DAT_140020800,1,0);
    6638:   }
    6639:   return;
    6640: }
    6641: 

## FUN_140787fc0 */ — reconstrucao/src/decompiled_03.c:7015
reconstrucao/src/../include/ghidra_function_prototypes.h:7015:20: error: unknown type name ‘code’

    7012:     uVar1 = PsGetProcessId(param_3,param_2,0);
    7013:   }
    7014:   FUN_140786a7c(**(undefined4 **)(param_4 + 0x10),*(undefined4 *)(param_4 + 0x1c),uVar1,param_1);
    7015:   return 0;
    7016: }
    7017: 
    7018: /* Ghidra label: FUN_140788014 */

## FUN_140788124 */ — reconstrucao/src/decompiled_03.c:7083
reconstrucao/src/../include/ghidra_function_prototypes.h:7083:43: error: unknown type name ‘ulong’; did you mean ‘long’?

    7080:   longlong lVar1;
    7081:   ulonglong uVar2;
    7082:   undefined1 uVar3;
    7083:   
    7084:   *(int *)(param_1 + 0x108) = *(int *)(param_1 + 0x108) + 1;
    7085:   lVar1 = _DAT_fffff78000000008;
    7086:   uVar3 = 0;

## FUN_1407881c0 */ — reconstrucao/src/decompiled_03.c:7117
reconstrucao/src/../include/ghidra_function_prototypes.h:7117:1: error: unknown type name ‘undefined’; did you mean ‘undefined8’?

    7114:   } while (iVar1 != 1);
    7115:   return;
    7116: }
    7117: 
    7118: /* Ghidra label: FUN_140788204 */
    7119: /* Ghidra address: 140788204 */
    7120: void FUN_140788204(int *param_1,int *param_2)

## FUN_140788698 */ — reconstrucao/src/decompiled_03.c:7456
reconstrucao/src/../include/ghidra_function_prototypes.h:7456:39: error: unknown type name ‘code’

    7453:     uStack_8c = _DAT_14002b608;
    7454:     uStack_84 = _UNK_14002b610;
    7455:     uStack_6c = 0xb0;
    7456:     lVar5 = 0x7fff;
    7457:     uStack_a8 = 0;
    7458:     puStack_a0 = (undefined2 *)0x0;
    7459:     do {

## FUN_1407887e8 */ — reconstrucao/src/decompiled_03.c:7577
reconstrucao/src/../include/ghidra_function_prototypes.h:7577:1: error: unknown type name ‘undefined’; did you mean ‘undefined8’?

    7574:     uVar10 = 0x1e1;
    7575:   }
    7576:   FUN_1409a24bc("TtmiRetrieveEventFromQueue",uVar10,0xffffffff,uVar12);
    7577: LAB_140788901:
    7578:   FUN_140788bf0(param_1);
    7579:   return (ulonglong)uVar12;
    7580: }

## FUN_140788934 */ — reconstrucao/src/decompiled_03.c:7605
reconstrucao/src/../include/ghidra_function_prototypes.h:7605:36: error: unknown type name ‘wint_t’; did you mean ‘uint8_t’?

    7602:   FUN_140788a78();
    7603:   uVar10 = 0;
    7604:   if (*(char *)(param_1 + 0xa8) == '\0') {
    7605:     uVar10 = 0xc0000700;
    7606:     uVar9 = 0x19c;
    7607:   }
    7608:   else {

## FUN_140788934 */ — reconstrucao/src/decompiled_03.c:7610
reconstrucao/src/../include/ghidra_function_prototypes.h:7610:20: error: unknown type name ‘code’

    7607:   }
    7608:   else {
    7609:     plVar5 = (longlong *)ExAllocatePool2(0x100,0x230,0x716d7454);
    7610:     if (plVar5 != (longlong *)0x0) {
    7611:       lVar7 = 4;
    7612:       plVar8 = plVar5 + 2;
    7613:       do {

## FUN_140788934 */ — reconstrucao/src/decompiled_03.c:7620
reconstrucao/src/../include/ghidra_function_prototypes.h:7620:66: error: unknown type name ‘code’

    7617:         *plVar6 = *plVar12;
    7618:         plVar6[1] = lVar4;
    7619:         lVar4 = plVar12[3];
    7620:         plVar6[2] = plVar12[2];
    7621:         plVar6[3] = lVar4;
    7622:         lVar4 = plVar12[5];
    7623:         plVar6[4] = plVar12[4];

## FUN_140788934 */ — reconstrucao/src/decompiled_03.c:7656
reconstrucao/src/../include/ghidra_function_prototypes.h:7656:33: error: unknown type name ‘uint3’; did you mean ‘uint32’?

    7653:       uVar3 = *(undefined4 *)((longlong)plVar12 + 0x9c);
    7654:       *(int *)(plVar6 + 0x12) = (int)plVar12[0x12];
    7655:       *(undefined4 *)((longlong)plVar6 + 0x94) = uVar2;
    7656:       *(int *)(plVar6 + 0x13) = (int)lVar7;
    7657:       *(undefined4 *)((longlong)plVar6 + 0x9c) = uVar3;
    7658:       FUN_14078569c(param_1);
    7659:       puVar11 = auStack_28;

## FUN_1407898c0 */ — reconstrucao/src/decompiled_03.c:8523
reconstrucao/src/../include/ghidra_function_prototypes.h:8523:1: error: unknown type name ‘code’

    8520:           }
    8521:         }
    8522:       }
    8523:       ppuVar5 = ppuVar5 + 1;
    8524:     }
    8525:   }
    8526:   return 0;

## FUN_1407899c8 */ — reconstrucao/src/decompiled_03.c:8557
reconstrucao/src/../include/ghidra_function_prototypes.h:8557:1: error: unknown type name ‘undefined’; did you mean ‘undefined8’?

    8554:   *(undefined4 *)(param_1 + 0x3d4) = *(undefined4 *)(param_1 + 0x4dc);
    8555:   puVar1 = *(undefined4 **)(param_1 + 0x4d8);
    8556:   sVar3 = (*(short *)(param_1 + 0x4d0) + 0x2a) * 2;
    8557:   *(short *)(param_1 + 0x3d8) = sVar3;
    8558:   sVar3 = sVar3 + 2;
    8559:   *(short *)(param_1 + 0x3da) = sVar3;
    8560:   puVar4 = (undefined8 *)

## PsGetCurrentServerSiloName */ — reconstrucao/src/decompiled_03.c:8807
reconstrucao/src/../include/ghidra_function_prototypes.h:8807:1: error: unknown type name ‘code’

    8804:   psVar2 = (short *)&DAT_140b55478;
    8805:   if (*(short *)(lVar1 + 0x4e0) != 0) {
    8806:     psVar2 = (short *)(lVar1 + 0x4e0);
    8807:   }
    8808:   return psVar2;
    8809: }
    8810: 

## FUN_14078aa10 */ — reconstrucao/src/decompiled_03.c:9391
reconstrucao/src/../include/ghidra_function_prototypes.h:9391:1: error: unknown type name ‘undefined’; did you mean ‘undefined8’?

    9388:         PsDetachSiloFromCurrentThread(uVar5);
    9389:         if (((-1 < iVar1) && (iVar1 = FUN_140757a4c(param_1), -1 < iVar1)) &&
    9390:            (iVar1 = FUN_1407d14e0(param_1), -1 < iVar1)) {
    9391:           uVar5 = PsAttachSiloToCurrentThread(param_1);
    9392:           iVar1 = FUN_140ae3c38();
    9393:           if (-1 < iVar1) {
    9394:             lVar6 = FUN_1402e1b60();

## FUN_14078c53c */ — reconstrucao/src/decompiled_03.c:10748
reconstrucao/src/../include/ghidra_function_prototypes.h:10748:26: error: unknown type name ‘undefined’; did you mean ‘undefined8’?

    10745:   int aiStackX_8 [8];
    10746:   undefined1 auStack_78 [8];
    10747:   undefined4 uStack_70;
    10748:   wchar_t *pwStack_68;
    10749:   int *piStack_60;
    10750:   undefined4 uStack_58;
    10751:   

## FUN_14078c53c */ — reconstrucao/src/decompiled_03.c:10749
reconstrucao/src/../include/ghidra_function_prototypes.h:10749:26: error: unknown type name ‘undefined’; did you mean ‘undefined8’?

    10746:   undefined1 auStack_78 [8];
    10747:   undefined4 uStack_70;
    10748:   wchar_t *pwStack_68;
    10749:   int *piStack_60;
    10750:   undefined4 uStack_58;
    10751:   
    10752:   aiStackX_8[0] = 0;

## FUN_14078c53c */ — reconstrucao/src/decompiled_03.c:10750
reconstrucao/src/../include/ghidra_function_prototypes.h:10750:26: error: unknown type name ‘undefined’; did you mean ‘undefined8’?

    10747:   undefined4 uStack_70;
    10748:   wchar_t *pwStack_68;
    10749:   int *piStack_60;
    10750:   undefined4 uStack_58;
    10751:   
    10752:   aiStackX_8[0] = 0;
    10753:   FUN_1406d1200(auStack_78,0,0x70);

## FUN_14078c53c */ — reconstrucao/src/decompiled_03.c:10751
reconstrucao/src/../include/ghidra_function_prototypes.h:10751:26: error: unknown type name ‘undefined’; did you mean ‘undefined8’?

    10748:   wchar_t *pwStack_68;
    10749:   int *piStack_60;
    10750:   undefined4 uStack_58;
    10751:   
    10752:   aiStackX_8[0] = 0;
    10753:   FUN_1406d1200(auStack_78,0,0x70);
    10754:   uStack_70 = 0x124;

## FUN_14078c6e8 */ — reconstrucao/src/decompiled_03.c:10847
reconstrucao/src/../include/ghidra_function_prototypes.h:10847:1: error: unknown type name ‘undefined’; did you mean ‘undefined8’?

    10844:     FUN_140246fe0(param_1 + 0x1e8);
    10845:   }
    10846:   return uVar1;
    10847: }
    10848: 
    10849: /* Ghidra label: FUN_14078c754 */
    10850: /* Ghidra address: 14078c754 */

## FUN_14078c754 */ — reconstrucao/src/decompiled_03.c:10850
reconstrucao/src/../include/ghidra_function_prototypes.h:10850:26: error: unknown type name ‘undefined’; did you mean ‘undefined8’?

    10847: }
    10848: 
    10849: /* Ghidra label: FUN_14078c754 */
    10850: /* Ghidra address: 14078c754 */
    10851: undefined4 FUN_14078c754(longlong param_1,undefined8 param_2)
    10852: 
    10853: {

## PsUnregisterAvailableCpusChangeNotification */ — reconstrucao/src/decompiled_03.c:10937
reconstrucao/src/../include/ghidra_function_prototypes.h:10937:26: error: unknown type name ‘PVOID’

    10934: 
    10935: {
    10936:                     /* 0x78c8c0  2146  PsUnregisterAvailableCpusChangeNotification */
    10937:   FUN_140750104();
    10938:   return;
    10939: }
    10940: 

## FUN_14078c8d8 */ — reconstrucao/src/decompiled_03.c:10976
reconstrucao/src/../include/ghidra_function_prototypes.h:10976:1: error: unknown type name ‘undefined’; did you mean ‘undefined8’?

    10973:   }
    10974:   if (lVar12 != 0) {
    10975:     *(undefined1 *)(lVar12 + 10) = 1;
    10976:   }
    10977:   iVar11 = KeIsSubsetAffinityEx(&DAT_140fc8120,&DAT_140e0c480);
    10978:   if (iVar11 == 0) {
    10979:     lVar12 = 2;

## FUN_14078c8d8 */ — reconstrucao/src/decompiled_03.c:11021
reconstrucao/src/../include/ghidra_function_prototypes.h:11021:1: error: unknown type name ‘code’

    11018:       puVar15[0xe] = uVar6;
    11019:       puVar15[0xf] = uVar7;
    11020:       lVar12 = lVar12 + -1;
    11021:       puVar15 = puVar16;
    11022:     } while (lVar12 != 0);
    11023:     *puVar16 = *puVar13;
    11024:     lVar12 = 0;

## PsCheckProcessFileSigningLevel */ — reconstrucao/src/decompiled_03.c:12411
reconstrucao/src/../include/ghidra_function_prototypes.h:12411:20: error: unknown type name ‘undefined’; did you mean ‘undefined8’?

    12408:   if (lStackX_20 - 1U < 0xfffffffffffffffe) {
    12409:     ObCloseHandle(lStackX_20,0);
    12410:   }
    12411:   if (alStack_80[0] != 0) {
    12412:     ObCloseHandle(alStack_80[0],0);
    12413:   }
    12414:   return uVar3;

## FUN_14078ec60 */ — reconstrucao/src/decompiled_03.c:12816
reconstrucao/src/../include/ghidra_function_prototypes.h:12816:19: error: unknown type name ‘DWORD64’

    12813:   uint *puStack_1c0;
    12814:   uint *puStack_1b8;
    12815:   uint auStack_1a8 [4];
    12816:   undefined1 auStack_198 [32];
    12817:   undefined1 auStack_178 [128];
    12818:   undefined1 auStack_f8 [224];
    12819:   ulonglong uStack_18;

## FUN_14078fb74 */ — reconstrucao/src/decompiled_03.c:13515
reconstrucao/src/../include/ghidra_function_prototypes.h:13515:38: error: unknown type name ‘PVOID’

    13512: }
    13513: 
    13514: /* Ghidra label: FUN_14078fb74 */
    13515: /* Ghidra address: 14078fb74 */
    13516: ulonglong FUN_14078fb74(longlong param_1)
    13517: 
    13518: {

## FUN_14078fbbc */ — reconstrucao/src/decompiled_03.c:13533
reconstrucao/src/../include/ghidra_function_prototypes.h:13533:38: error: unknown type name ‘code’

    13530: 
    13531: /* Ghidra label: FUN_14078fbbc */
    13532: /* Ghidra address: 14078fbbc */
    13533: void FUN_14078fbbc(longlong param_1,uint param_2,char param_3)
    13534: 
    13535: {
    13536:   longlong lVar1;

## FUN_14078fbbc */ — reconstrucao/src/decompiled_03.c:13537
reconstrucao/src/../include/ghidra_function_prototypes.h:13537:20: error: unknown type name ‘code’

    13534: 
    13535: {
    13536:   longlong lVar1;
    13537:   
    13538:   for (lVar1 = *(longlong *)(param_1 + 0x518); lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x518)) {
    13539:     if (param_3 == '\0') {
    13540:       LOCK();

## FUN_14079025c */ — reconstrucao/src/decompiled_03.c:13916
reconstrucao/src/../include/ghidra_function_prototypes.h:13916:20: error: unknown type name ‘code’

    13913:   }
    13914:   if (uVar1 == 0) {
    13915:     if (uVar5 != 0) {
    13916:       iVar2 = -0x3fffff45;
    13917:       goto LAB_140790357;
    13918:     }
    13919:     lVar3 = FUN_1408939a0(0);

## FUN_14079025c */ — reconstrucao/src/decompiled_03.c:13916
reconstrucao/src/../include/ghidra_function_prototypes.h:13916:34: error: unknown type name ‘code’

    13913:   }
    13914:   if (uVar1 == 0) {
    13915:     if (uVar5 != 0) {
    13916:       iVar2 = -0x3fffff45;
    13917:       goto LAB_140790357;
    13918:     }
    13919:     lVar3 = FUN_1408939a0(0);

## FUN_140790818 */ — reconstrucao/src/decompiled_03.c:14219
reconstrucao/src/../include/ghidra_function_prototypes.h:14219:1: error: unknown type name ‘code’

    14216:   if (param_1[3] < param_2[3]) {
    14217:     uVar1 = 0;
    14218:   }
    14219:   else {
    14220:     uVar1 = param_1[3] - param_2[3];
    14221:   }
    14222:   param_1[3] = uVar1;

## FUN_140790818 */ — reconstrucao/src/decompiled_03.c:14219
reconstrucao/src/../include/ghidra_function_prototypes.h:14219:22: error: unknown type name ‘code’

    14216:   if (param_1[3] < param_2[3]) {
    14217:     uVar1 = 0;
    14218:   }
    14219:   else {
    14220:     uVar1 = param_1[3] - param_2[3];
    14221:   }
    14222:   param_1[3] = uVar1;

## FUN_140790818 */ — reconstrucao/src/decompiled_03.c:14219
reconstrucao/src/../include/ghidra_function_prototypes.h:14219:36: error: unknown type name ‘code’

    14216:   if (param_1[3] < param_2[3]) {
    14217:     uVar1 = 0;
    14218:   }
    14219:   else {
    14220:     uVar1 = param_1[3] - param_2[3];
    14221:   }
    14222:   param_1[3] = uVar1;

## FUN_140790818 */ — reconstrucao/src/decompiled_03.c:14220
reconstrucao/src/../include/ghidra_function_prototypes.h:14220:1: error: unknown type name ‘code’

    14217:     uVar1 = 0;
    14218:   }
    14219:   else {
    14220:     uVar1 = param_1[3] - param_2[3];
    14221:   }
    14222:   param_1[3] = uVar1;
    14223:   if ((longlong)param_1[5] < (longlong)param_2[5]) {

## FUN_140790818 */ — reconstrucao/src/decompiled_03.c:14220
reconstrucao/src/../include/ghidra_function_prototypes.h:14220:22: error: unknown type name ‘code’

    14217:     uVar1 = 0;
    14218:   }
    14219:   else {
    14220:     uVar1 = param_1[3] - param_2[3];
    14221:   }
    14222:   param_1[3] = uVar1;
    14223:   if ((longlong)param_1[5] < (longlong)param_2[5]) {

## FUN_140790818 */ — reconstrucao/src/decompiled_03.c:14220
reconstrucao/src/../include/ghidra_function_prototypes.h:14220:36: error: unknown type name ‘code’

    14217:     uVar1 = 0;
    14218:   }
    14219:   else {
    14220:     uVar1 = param_1[3] - param_2[3];
    14221:   }
    14222:   param_1[3] = uVar1;
    14223:   if ((longlong)param_1[5] < (longlong)param_2[5]) {

## FUN_140790910 */ — reconstrucao/src/decompiled_03.c:14285
reconstrucao/src/../include/ghidra_function_prototypes.h:14285:1: error: unknown type name ‘code’

    14282:   while (lVar2 = FUN_1408bf060(param_1,pvVar1,&uStack_28,lVar2), lVar2 != 0) {
    14283:     if (((*(uint *)(lVar2 + 0x5fc) & 0x40) == 0) &&
    14284:        (lVar2 != *(longlong *)((longlong)SystemReserved1[0xf] + 0xb8))) {
    14285:       *(byte *)(param_2 + 4) = *(byte *)(param_2 + 4) | 2;
    14286:       FUN_14079114c(lVar2);
    14287:     }
    14288:   }

## FUN_140790910 */ — reconstrucao/src/decompiled_03.c:14285
reconstrucao/src/../include/ghidra_function_prototypes.h:14285:22: error: unknown type name ‘code’

    14282:   while (lVar2 = FUN_1408bf060(param_1,pvVar1,&uStack_28,lVar2), lVar2 != 0) {
    14283:     if (((*(uint *)(lVar2 + 0x5fc) & 0x40) == 0) &&
    14284:        (lVar2 != *(longlong *)((longlong)SystemReserved1[0xf] + 0xb8))) {
    14285:       *(byte *)(param_2 + 4) = *(byte *)(param_2 + 4) | 2;
    14286:       FUN_14079114c(lVar2);
    14287:     }
    14288:   }

## FUN_140790910 */ — reconstrucao/src/decompiled_03.c:14285
reconstrucao/src/../include/ghidra_function_prototypes.h:14285:36: error: unknown type name ‘code’

    14282:   while (lVar2 = FUN_1408bf060(param_1,pvVar1,&uStack_28,lVar2), lVar2 != 0) {
    14283:     if (((*(uint *)(lVar2 + 0x5fc) & 0x40) == 0) &&
    14284:        (lVar2 != *(longlong *)((longlong)SystemReserved1[0xf] + 0xb8))) {
    14285:       *(byte *)(param_2 + 4) = *(byte *)(param_2 + 4) | 2;
    14286:       FUN_14079114c(lVar2);
    14287:     }
    14288:   }

## FUN_1407909c4 */ — reconstrucao/src/decompiled_03.c:14351
reconstrucao/src/../include/ghidra_function_prototypes.h:14351:20: error: unknown type name ‘code’

    14348:       pcVar3 = (code *)swi(0x2c);
    14349:       (*pcVar3)();
    14350:       puVar12 = (undefined4 *)auStack_80;
    14351:     }
    14352:     lVar9 = 0;
    14353:     while( true ) {
    14354:       *(undefined8 *)(puVar12 + -2) = 0x140790a5f;

## FUN_1407909c4 */ — reconstrucao/src/decompiled_03.c:14351
reconstrucao/src/../include/ghidra_function_prototypes.h:14351:34: error: unknown type name ‘code’

    14348:       pcVar3 = (code *)swi(0x2c);
    14349:       (*pcVar3)();
    14350:       puVar12 = (undefined4 *)auStack_80;
    14351:     }
    14352:     lVar9 = 0;
    14353:     while( true ) {
    14354:       *(undefined8 *)(puVar12 + -2) = 0x140790a5f;

## FUN_1407909c4 */ — reconstrucao/src/decompiled_03.c:14384
reconstrucao/src/../include/ghidra_function_prototypes.h:14384:20: error: unknown type name ‘code’

    14381:             ObfReferenceObject(lVar9);
    14382:             *(longlong *)(puVar12 + uVar15 * 2 + 0x12) = lVar9;
    14383:             uVar15 = (ulonglong)((uint)uVar15 + 1);
    14384:           }
    14385:         }
    14386:         *(undefined8 *)(puVar12 + -2) = 0x140790aed;
    14387:         lVar9 = FUN_1408c3510(lVar9);

## FUN_1407909c4 */ — reconstrucao/src/decompiled_03.c:14384
reconstrucao/src/../include/ghidra_function_prototypes.h:14384:34: error: unknown type name ‘code’

    14381:             ObfReferenceObject(lVar9);
    14382:             *(longlong *)(puVar12 + uVar15 * 2 + 0x12) = lVar9;
    14383:             uVar15 = (ulonglong)((uint)uVar15 + 1);
    14384:           }
    14385:         }
    14386:         *(undefined8 *)(puVar12 + -2) = 0x140790aed;
    14387:         lVar9 = FUN_1408c3510(lVar9);

## FUN_1407909c4 */ — reconstrucao/src/decompiled_03.c:14417
reconstrucao/src/../include/ghidra_function_prototypes.h:14417:20: error: unknown type name ‘code’

    14414:     }
    14415:     ppuVar11 = &PTR_PTR_140fd9130;
    14416:     lVar7 = 6;
    14417:     do {
    14418:       if (*ppuVar11 != (undefined *)0x0) {
    14419:         lVar9 = *(longlong *)(*ppuVar11 + 0x20);
    14420:         if (lVar9 != 0) {

## FUN_1407909c4 */ — reconstrucao/src/decompiled_03.c:14417
reconstrucao/src/../include/ghidra_function_prototypes.h:14417:34: error: unknown type name ‘code’

    14414:     }
    14415:     ppuVar11 = &PTR_PTR_140fd9130;
    14416:     lVar7 = 6;
    14417:     do {
    14418:       if (*ppuVar11 != (undefined *)0x0) {
    14419:         lVar9 = *(longlong *)(*ppuVar11 + 0x20);
    14420:         if (lVar9 != 0) {

## FUN_1407909c4 */ — reconstrucao/src/decompiled_03.c:14450
reconstrucao/src/../include/ghidra_function_prototypes.h:14450:20: error: unknown type name ‘code’

    14447:     uVar2 = *(undefined8 *)(DAT_140fc7ea0 + 0x80);
    14448:     *(undefined8 *)(puVar12 + -2) = 0x140790c3d;
    14449:     ZwClose(uVar2);
    14450:     *(undefined8 *)(DAT_140fc7ea0 + 0x80) = 0;
    14451:     if (1 < *(ulonglong *)(PsInitialSystemProcess + 0x348)) {
    14452:       *(undefined8 *)(puVar12 + -2) = 0x140790c64;
    14453:       ObfDereferenceObject();

## FUN_1407909c4 */ — reconstrucao/src/decompiled_03.c:14450
reconstrucao/src/../include/ghidra_function_prototypes.h:14450:34: error: unknown type name ‘code’

    14447:     uVar2 = *(undefined8 *)(DAT_140fc7ea0 + 0x80);
    14448:     *(undefined8 *)(puVar12 + -2) = 0x140790c3d;
    14449:     ZwClose(uVar2);
    14450:     *(undefined8 *)(DAT_140fc7ea0 + 0x80) = 0;
    14451:     if (1 < *(ulonglong *)(PsInitialSystemProcess + 0x348)) {
    14452:       *(undefined8 *)(puVar12 + -2) = 0x140790c64;
    14453:       ObfDereferenceObject();

## FUN_140790cd8 */ — reconstrucao/src/decompiled_03.c:14483
reconstrucao/src/../include/ghidra_function_prototypes.h:14483:20: error: unknown type name ‘code’

    14480:   undefined1 auStack_88 [32];
    14481:   undefined4 uStack_68;
    14482:   undefined8 uStack_58;
    14483:   undefined8 uStack_50;
    14484:   undefined8 uStack_48;
    14485:   undefined8 uStack_40;
    14486:   undefined8 uStack_38;

## FUN_140790cd8 */ — reconstrucao/src/decompiled_03.c:14483
reconstrucao/src/../include/ghidra_function_prototypes.h:14483:34: error: unknown type name ‘code’

    14480:   undefined1 auStack_88 [32];
    14481:   undefined4 uStack_68;
    14482:   undefined8 uStack_58;
    14483:   undefined8 uStack_50;
    14484:   undefined8 uStack_48;
    14485:   undefined8 uStack_40;
    14486:   undefined8 uStack_38;

## FUN_140790e48 */ — reconstrucao/src/decompiled_03.c:14584
reconstrucao/src/../include/ghidra_function_prototypes.h:14584:1: error: unknown type name ‘code’

    14581:     } while (iVar1 != 0x102);
    14582:     lVar4 = lVar4 * 2;
    14583:     uVar5 = uVar5 + 1;
    14584:     lStackX_8 = lVar4;
    14585:   } while (uVar5 < 0xe);
    14586:   return uVar3 & 0xffffffffffffff00;
    14587: }

## FUN_140790e48 */ — reconstrucao/src/decompiled_03.c:14584
reconstrucao/src/../include/ghidra_function_prototypes.h:14584:22: error: unknown type name ‘code’

    14581:     } while (iVar1 != 0x102);
    14582:     lVar4 = lVar4 * 2;
    14583:     uVar5 = uVar5 + 1;
    14584:     lStackX_8 = lVar4;
    14585:   } while (uVar5 < 0xe);
    14586:   return uVar3 & 0xffffffffffffff00;
    14587: }

## FUN_140790e48 */ — reconstrucao/src/decompiled_03.c:14584
reconstrucao/src/../include/ghidra_function_prototypes.h:14584:36: error: unknown type name ‘code’

    14581:     } while (iVar1 != 0x102);
    14582:     lVar4 = lVar4 * 2;
    14583:     uVar5 = uVar5 + 1;
    14584:     lStackX_8 = lVar4;
    14585:   } while (uVar5 < 0xe);
    14586:   return uVar3 & 0xffffffffffffff00;
    14587: }

## FUN_140790f38 */ — reconstrucao/src/decompiled_03.c:14649
reconstrucao/src/../include/ghidra_function_prototypes.h:14649:26: error: unknown type name ‘code’

    14646:     if (bVar7) {
    14647:       *(int *)(lVar5 + 0x53c) = 1;
    14648:     }
    14649:     UNLOCK();
    14650:     if (bVar7) {
    14651:       strncpy_s((char *)(lVar5 + 0x544),0xf,param_3,0xffffffffffffffff);
    14652:       *(undefined4 *)(lVar5 + 0x540) = param_5;

## FUN_140790f38 */ — reconstrucao/src/decompiled_03.c:14649
reconstrucao/src/../include/ghidra_function_prototypes.h:14649:40: error: unknown type name ‘code’

    14646:     if (bVar7) {
    14647:       *(int *)(lVar5 + 0x53c) = 1;
    14648:     }
    14649:     UNLOCK();
    14650:     if (bVar7) {
    14651:       strncpy_s((char *)(lVar5 + 0x544),0xf,param_3,0xffffffffffffffff);
    14652:       *(undefined4 *)(lVar5 + 0x540) = param_5;

## PsRegisterSiloMonitor */ — reconstrucao/src/decompiled_03.c:14715
reconstrucao/src/../include/ghidra_function_prototypes.h:14715:1: error: unknown type name ‘code’

    14712:   longlong lVar5;
    14713:   
    14714:                     /* 0x7911d0  2092  PsRegisterSiloMonitor */
    14715:   if ((((*param_1 == '\0') || (*(short **)(param_1 + 8) == (short *)0x0)) ||
    14716:       (**(short **)(param_1 + 8) == 0)) ||
    14717:      ((*(longlong *)(param_1 + 0x10) == 0 && (*(longlong *)(param_1 + 0x18) == 0)))) {
    14718:     iVar3 = -0x3ffffff3;

## PsRegisterSiloMonitor */ — reconstrucao/src/decompiled_03.c:14715
reconstrucao/src/../include/ghidra_function_prototypes.h:14715:22: error: unknown type name ‘code’

    14712:   longlong lVar5;
    14713:   
    14714:                     /* 0x7911d0  2092  PsRegisterSiloMonitor */
    14715:   if ((((*param_1 == '\0') || (*(short **)(param_1 + 8) == (short *)0x0)) ||
    14716:       (**(short **)(param_1 + 8) == 0)) ||
    14717:      ((*(longlong *)(param_1 + 0x10) == 0 && (*(longlong *)(param_1 + 0x18) == 0)))) {
    14718:     iVar3 = -0x3ffffff3;

## PsRegisterSiloMonitor */ — reconstrucao/src/decompiled_03.c:14715
reconstrucao/src/../include/ghidra_function_prototypes.h:14715:36: error: unknown type name ‘code’

    14712:   longlong lVar5;
    14713:   
    14714:                     /* 0x7911d0  2092  PsRegisterSiloMonitor */
    14715:   if ((((*param_1 == '\0') || (*(short **)(param_1 + 8) == (short *)0x0)) ||
    14716:       (**(short **)(param_1 + 8) == 0)) ||
    14717:      ((*(longlong *)(param_1 + 0x10) == 0 && (*(longlong *)(param_1 + 0x18) == 0)))) {
    14718:     iVar3 = -0x3ffffff3;

## PsUnregisterSiloMonitor */ — reconstrucao/src/decompiled_03.c:14947
reconstrucao/src/../include/ghidra_function_prototypes.h:14947:20: error: unknown type name ‘code’

    14944:       return;
    14945:     }
    14946:     *plVar2 = lVar6;
    14947:     *(longlong **)(lVar6 + 8) = plVar2;
    14948:     *param_1 = 0;
    14949:     param_1[1] = 0;
    14950:   }

## PsUnregisterSiloMonitor */ — reconstrucao/src/decompiled_03.c:14947
reconstrucao/src/../include/ghidra_function_prototypes.h:14947:34: error: unknown type name ‘code’

    14944:       return;
    14945:     }
    14946:     *plVar2 = lVar6;
    14947:     *(longlong **)(lVar6 + 8) = plVar2;
    14948:     *param_1 = 0;
    14949:     param_1[1] = 0;
    14950:   }

## FUN_14079169c */ — reconstrucao/src/decompiled_03.c:14980
reconstrucao/src/../include/ghidra_function_prototypes.h:14980:20: error: unknown type name ‘code’

    14977: 
    14978: {
    14979:   undefined8 *puVar1;
    14980:   
    14981:   puVar1 = DAT_140fdb068;
    14982:   if (param_1 != (undefined8 *)0x0) {
    14983:     puVar1 = (undefined8 *)*param_1;

## FUN_14079169c */ — reconstrucao/src/decompiled_03.c:14980
reconstrucao/src/../include/ghidra_function_prototypes.h:14980:34: error: unknown type name ‘code’

    14977: 
    14978: {
    14979:   undefined8 *puVar1;
    14980:   
    14981:   puVar1 = DAT_140fdb068;
    14982:   if (param_1 != (undefined8 *)0x0) {
    14983:     puVar1 = (undefined8 *)*param_1;

## FUN_140791728 */ — reconstrucao/src/decompiled_03.c:15014
reconstrucao/src/../include/ghidra_function_prototypes.h:15014:20: error: unknown type name ‘code’

    15011:   FUN_140658bc8(3,param_1,param_2 + 0x28);
    15012:   return;
    15013: }
    15014: 
    15015: /* Ghidra label: FUN_140791788 */
    15016: /* Ghidra address: 140791788 */
    15017: undefined8 FUN_140791788(undefined8 param_1)

## FUN_140791728 */ — reconstrucao/src/decompiled_03.c:15014
reconstrucao/src/../include/ghidra_function_prototypes.h:15014:34: error: unknown type name ‘code’

    15011:   FUN_140658bc8(3,param_1,param_2 + 0x28);
    15012:   return;
    15013: }
    15014: 
    15015: /* Ghidra label: FUN_140791788 */
    15016: /* Ghidra address: 140791788 */
    15017: undefined8 FUN_140791788(undefined8 param_1)

## FUN_140791788 */ — reconstrucao/src/decompiled_03.c:15047
reconstrucao/src/../include/ghidra_function_prototypes.h:15047:20: error: unknown type name ‘code’

    15044:   if (lVar6 != 0) {
    15045:     do {
    15046:       if (*(longlong *)(lVar6 + 0x18) != 0) {
    15047:         *(undefined8 *)(puVar8 + -8) = 0x1407917e7;
    15048:         iVar4 = FUN_1407916c4(param_1,lVar6);
    15049:         bVar2 = bVar3;
    15050:         if (iVar4 < 0) {

## FUN_140791788 */ — reconstrucao/src/decompiled_03.c:15047
reconstrucao/src/../include/ghidra_function_prototypes.h:15047:34: error: unknown type name ‘code’

    15044:   if (lVar6 != 0) {
    15045:     do {
    15046:       if (*(longlong *)(lVar6 + 0x18) != 0) {
    15047:         *(undefined8 *)(puVar8 + -8) = 0x1407917e7;
    15048:         iVar4 = FUN_1407916c4(param_1,lVar6);
    15049:         bVar2 = bVar3;
    15050:         if (iVar4 < 0) {

## FUN_140791844 */ — reconstrucao/src/decompiled_03.c:15080
reconstrucao/src/../include/ghidra_function_prototypes.h:15080:1: error: unknown type name ‘code’

    15077: 
    15078: {
    15079:   uint *puVar1;
    15080:   uint uVar2;
    15081:   int iVar3;
    15082:   uint uVar4;
    15083:   uint uVar5;

## FUN_140791844 */ — reconstrucao/src/decompiled_03.c:15080
reconstrucao/src/../include/ghidra_function_prototypes.h:15080:22: error: unknown type name ‘code’

    15077: 
    15078: {
    15079:   uint *puVar1;
    15080:   uint uVar2;
    15081:   int iVar3;
    15082:   uint uVar4;
    15083:   uint uVar5;

## FUN_140791844 */ — reconstrucao/src/decompiled_03.c:15080
reconstrucao/src/../include/ghidra_function_prototypes.h:15080:36: error: unknown type name ‘code’

    15077: 
    15078: {
    15079:   uint *puVar1;
    15080:   uint uVar2;
    15081:   int iVar3;
    15082:   uint uVar4;
    15083:   uint uVar5;

## FUN_140791844 */ — reconstrucao/src/decompiled_03.c:15145
reconstrucao/src/../include/ghidra_function_prototypes.h:15145:1: error: unknown type name ‘code’

    15142:   uStack_4b0 = param_3;
    15143:   FUN_1406d1200(auStack_498,0,400);
    15144:   lStack_4d8 = 0;
    15145:   lStack_4e8 = 0;
    15146:   FUN_1406d1200(auStack_2b0,0,0x260);
    15147:   if (param_5 == (undefined1 *)0x0) {
    15148:     puStack_4c8 = (undefined1 *)FUN_1402f5c40(param_1,0x746c6644);

## FUN_140791844 */ — reconstrucao/src/decompiled_03.c:15145
reconstrucao/src/../include/ghidra_function_prototypes.h:15145:22: error: unknown type name ‘code’

    15142:   uStack_4b0 = param_3;
    15143:   FUN_1406d1200(auStack_498,0,400);
    15144:   lStack_4d8 = 0;
    15145:   lStack_4e8 = 0;
    15146:   FUN_1406d1200(auStack_2b0,0,0x260);
    15147:   if (param_5 == (undefined1 *)0x0) {
    15148:     puStack_4c8 = (undefined1 *)FUN_1402f5c40(param_1,0x746c6644);

## FUN_140791844 */ — reconstrucao/src/decompiled_03.c:15145
reconstrucao/src/../include/ghidra_function_prototypes.h:15145:36: error: unknown type name ‘code’

    15142:   uStack_4b0 = param_3;
    15143:   FUN_1406d1200(auStack_498,0,400);
    15144:   lStack_4d8 = 0;
    15145:   lStack_4e8 = 0;
    15146:   FUN_1406d1200(auStack_2b0,0,0x260);
    15147:   if (param_5 == (undefined1 *)0x0) {
    15148:     puStack_4c8 = (undefined1 *)FUN_1402f5c40(param_1,0x746c6644);

## FUN_140791844 */ — reconstrucao/src/decompiled_03.c:15210
reconstrucao/src/../include/ghidra_function_prototypes.h:15210:20: error: unknown type name ‘code’

    15207:             param_9 = lStack_4d0;
    15208:           }
    15209:         }
    15210:       }
    15211:       if (lStack_4b8 != 0) {
    15212:         FUN_1407921a4(lVar6,lStack_4b8);
    15213:         lVar6 = lStack_4e8;

## FUN_140ac2e00 */ — reconstrucao/src/decompiled_04.c:216
reconstrucao/src/../include/ghidra_function_prototypes.h:216:43: error: unknown type name ‘code’

    213:   uStack_1a8 = 0x130;
    214:   puStack_1d0 = &uStack_2b8;
    215:   uStack_190 = 0x7000000;
    216:   pwStack_1a0 = L"CompatibleIds";
    217:   puStack_198 = &uStack_2a8;
    218:   uStack_170 = 0x120;
    219:   uStack_158 = 0x1000000;

## FUN_140ac2e00 */ — reconstrucao/src/decompiled_04.c:541
reconstrucao/src/../include/ghidra_function_prototypes.h:541:1: error: unknown type name ‘undefined’; did you mean ‘undefined8’?

    538:       plVar10 = plStack_2e8;
    539:       lVar11 = lStack_2c0;
    540:       goto LAB_140ac3790;
    541:     }
    542:   }
    543:   plVar10 = plStack_2e8;
    544: LAB_140ac3800:

## FUN_140ac393c */ — reconstrucao/src/decompiled_04.c:706
reconstrucao/src/../include/ghidra_function_prototypes.h:706:19: error: unknown type name ‘code’

    703:   return;
    704: }
    705: 
    706: /* Ghidra label: FUN_140ac3ab0 */
    707: /* Ghidra address: 140ac3ab0 */
    708: int FUN_140ac3ab0(longlong param_1,undefined4 *param_2)
    709: 

## FUN_140ac3ab0 */ — reconstrucao/src/decompiled_04.c:785
reconstrucao/src/../include/ghidra_function_prototypes.h:785:75: error: unknown type name ‘undefined’; did you mean ‘undefined8’?

    782:         sVar5 = sVar5 + 2;
    783:       }
    784:       RtlTimeToTimeFields(param_1 + 0x70,&uStack_28);
    785:       iVar6 = FUN_140489994(&uStack_38,L",%02d/%02d/%04d,%u.%u.%u.%u",(int)uStack_28._2_2_,
    786:                             (int)uStack_28._4_2_,CONCAT44(uVar9,(int)(short)uStack_28),
    787:                             CONCAT44(uVar11,*(uint *)(param_1 + 0x7c) >> 0x10),
    788:                             *(undefined2 *)(param_1 + 0x7c),*(undefined2 *)(param_1 + 0x7a),

## FUN_140ac3ddc */ — reconstrucao/src/decompiled_04.c:880
reconstrucao/src/../include/ghidra_function_prototypes.h:880:55: error: unknown type name ‘code’

    877: }
    878: 
    879: /* Ghidra label: FUN_140ac3ddc */
    880: /* Ghidra address: 140ac3ddc */
    881: void FUN_140ac3ddc(void)
    882: 
    883: {

## FUN_140ac3ddc */ — reconstrucao/src/decompiled_04.c:902
reconstrucao/src/../include/ghidra_function_prototypes.h:902:20: error: unknown type name ‘undefined’; did you mean ‘undefined8’?

    899:       return;
    900:     }
    901:     if (((undefined8 **)DAT_140f0f430[1] != &DAT_140f0f430) ||
    902:        (puVar1 = (undefined8 *)*DAT_140f0f430, (undefined8 *)puVar1[1] != DAT_140f0f430)) {
    903:       pcVar2 = (code *)swi(0x29);
    904:       (*pcVar2)(3);
    905:       puVar4 = auStack_20;

## FUN_140ac3e48 */ — reconstrucao/src/decompiled_04.c:915
reconstrucao/src/../include/ghidra_function_prototypes.h:915:1: error: unknown type name ‘undefined’; did you mean ‘undefined8’?

    912: }
    913: 
    914: /* Ghidra label: FUN_140ac3e48 */
    915: /* Ghidra address: 140ac3e48 */
    916: void FUN_140ac3e48(longlong param_1,char param_2)
    917: 
    918: {

## FUN_140ac3e48 */ — reconstrucao/src/decompiled_04.c:960
reconstrucao/src/../include/ghidra_function_prototypes.h:960:1: error: unknown type name ‘code’

    957:       }
    958:       bVar3 = true;
    959:     }
    960:     uVar6 = (uint)*(undefined8 *)(param_1 + 0x3b0) & 1;
    961:     lVar7 = *(longlong *)(param_1 + 0x5b8 + (ulonglong)uVar6 * 8);
    962:     if (*(char *)(param_1 + 0x788) == '\0') {
    963:       *(undefined4 *)(lVar7 + 0x10) = 0;

## FUN_140ac3ff8 */ — reconstrucao/src/decompiled_04.c:1077
reconstrucao/src/../include/ghidra_function_prototypes.h:1077:1: error: unknown type name ‘undefined’; did you mean ‘undefined8’?

    1074:             uVar11 = uVar11 - 1;
    1075:           } while (uVar11 != 0);
    1076:           return iVar6;
    1077:         }
    1078:         puVar2 = *(undefined4 **)(lVar1 + 0x38 + uVar11 * 8);
    1079:         puVar7 = (undefined4 *)FUN_140a5d5e4(4);
    1080:         if (puVar7 == (undefined4 *)0x0) {

## FUN_140ac45f0 */ — reconstrucao/src/decompiled_04.c:1343
reconstrucao/src/../include/ghidra_function_prototypes.h:1343:1: error: unknown type name ‘undefined’; did you mean ‘undefined8’?

    1340:   longlong lVar1;
    1341:   int iVar2;
    1342:   bool bVar3;
    1343:   
    1344:   do {
    1345:     LOCK();
    1346:     DAT_140fdac6c = 1;

## FUN_140ac465c */ — reconstrucao/src/decompiled_04.c:1473
reconstrucao/src/../include/ghidra_function_prototypes.h:1473:37: error: unknown type name ‘code’

    1470:             goto LAB_140ac490f;
    1471:           }
    1472:         }
    1473:         uVar8 = FUN_140a6bc18(param_2,puVar15);
    1474:         uVar10 = (ulonglong)uVar8;
    1475:         if (-1 < (int)uVar8) {
    1476:           if ((*puVar1 & 0x2000000) == 0) {

## FUN_140ac465c */ — reconstrucao/src/decompiled_04.c:1566
reconstrucao/src/../include/ghidra_function_prototypes.h:1566:1: error: unknown type name ‘undefined’; did you mean ‘undefined8’?

    1563:               if (-1 < (int)uVar8) goto LAB_140ac498b;
    1564:             }
    1565:           }
    1566:         }
    1567:       }
    1568:       else {
    1569:         if ((((uVar8 & 8) != 0) || ((uVar6 & 8) != 0)) || ((uVar8 >> 10 & 1) != 0))

## FUN_140ac465c */ — reconstrucao/src/decompiled_04.c:1602
reconstrucao/src/../include/ghidra_function_prototypes.h:1602:26: error: unknown type name ‘code’

    1599:     }
    1600:   }
    1601:   else {
    1602: LAB_140ac4afb:
    1603:     uVar10 = 0xc000000d;
    1604:   }
    1605: LAB_140ac4b00:

## FUN_140ac4b3c */ — reconstrucao/src/decompiled_04.c:1617
reconstrucao/src/../include/ghidra_function_prototypes.h:1617:20: error: unknown type name ‘undefined’; did you mean ‘undefined8’?

    1614: /* Ghidra address: 140ac4b3c */
    1615: undefined8 FUN_140ac4b3c(uint *param_1)
    1616: 
    1617: {
    1618:   ushort *puVar1;
    1619:   ushort uVar2;
    1620:   uint uVar3;

## FUN_140ac4b3c */ — reconstrucao/src/decompiled_04.c:1624
reconstrucao/src/../include/ghidra_function_prototypes.h:1624:1: error: unknown type name ‘undefined’; did you mean ‘undefined8’?

    1621:   undefined8 uVar4;
    1622:   ushort *puVar5;
    1623:   ushort uVar6;
    1624:   ushort uVar7;
    1625:   
    1626:   uVar3 = param_1[0x12];
    1627:   if ((int)uVar3 < 0) {

## FUN_140ac4fc4 */ — reconstrucao/src/decompiled_04.c:1840
reconstrucao/src/../include/ghidra_function_prototypes.h:1840:1: error: unknown type name ‘undefined’; did you mean ‘undefined8’?

    1837:   short *psVar2;
    1838:   uint uVar3;
    1839:   short *psVar4;
    1840:   undefined *puVar5;
    1841:   short sVar6;
    1842:   short *psVar7;
    1843:   ulonglong uVar8;

## FUN_140ac4fc4 */ — reconstrucao/src/decompiled_04.c:1867
reconstrucao/src/../include/ghidra_function_prototypes.h:1867:1: error: unknown type name ‘undefined’; did you mean ‘undefined8’?

    1864:       uVar11 = 0xffff;
    1865:       puVar5 = (&PTR_u_Unknown_140b599d0)[(byte)param_1[2]];
    1866:       uVar8 = FUN_140456aec(puVar5,0xffff,&lStackX_8);
    1867:       if ((int)uVar8 < 0) {
    1868:         return uVar8;
    1869:       }
    1870:       puVar1 = (undefined1 *)((longlong)param_1 + 10);

## FUN_140ac4fc4 */ — reconstrucao/src/decompiled_04.c:1920
reconstrucao/src/../include/ghidra_function_prototypes.h:1920:73: error: unknown type name ‘va_list’

    1917:   *(undefined8 *)(param_2 + 0x308) = 0;
    1918:   if (psVar4 != (short *)0x0) {
    1919:     lVar10 = 0x7fff;
    1920:     psVar7 = psVar4;
    1921:     do {
    1922:       if (*psVar7 == 0) break;
    1923:       psVar7 = psVar7 + 1;

## FUN_140ac51e0 */ — reconstrucao/src/decompiled_04.c:2038
reconstrucao/src/../include/ghidra_function_prototypes.h:2038:1: error: unknown type name ‘undefined’; did you mean ‘undefined8’?

    2035:   undefined8 uStack_88;
    2036:   undefined8 uStack_80;
    2037:   longlong lStack_78;
    2038:   longlong lStack_70;
    2039:   ulonglong uStack_68;
    2040:   
    2041:   puVar23 = auStack_1f8;

## FUN_140ac51e0 */ — reconstrucao/src/decompiled_04.c:2280
reconstrucao/src/../include/ghidra_function_prototypes.h:2280:1: error: unknown type name ‘undefined’; did you mean ‘undefined8’?

    2277:             iVar6 = iStack_194;
    2278:             if (lStack_150 != 0) {
    2279:               ExFreePool();
    2280:               uStack_158 = 0;
    2281:               lStack_150 = 0;
    2282:             }
    2283:             param_1 = lStack_120;

## FUN_140ac51e0 */ — reconstrucao/src/decompiled_04.c:2284
reconstrucao/src/../include/ghidra_function_prototypes.h:2284:36: error: unknown type name ‘code’

    2281:               lStack_150 = 0;
    2282:             }
    2283:             param_1 = lStack_120;
    2284:             if (lStack_120 != 0) {
    2285:               RtlFreeAnsiString(asStack_140);
    2286:             }
    2287:             uVar27 = ExFreePoolWithTag(pppppppuStack_170,0);

## FUN_140ac6490 */ — reconstrucao/src/decompiled_04.c:2977
reconstrucao/src/../include/ghidra_function_prototypes.h:2977:43: error: unknown type name ‘undefined’; did you mean ‘undefined8’?

    2974:     *param_5 = iStack_228;
    2975:     *(undefined8 *)(param_5 + 2) = uStack_220;
    2976:   }
    2977:   else {
    2978:     if (-1 < iVar1) {
    2979:       ObCloseHandle(auStack_248[0],param_3);
    2980:       iVar1 = -0x3fffffdc;

## FUN_140ac6614 */ — reconstrucao/src/decompiled_04.c:3209
reconstrucao/src/../include/ghidra_function_prototypes.h:3209:19: error: unknown type name ‘undefined’; did you mean ‘undefined8’?

    3206:           goto LAB_140ac6b0f;
    3207:         }
    3208:         if ((*(uint *)(plVar2 + 7) & 0x20) != 0) goto LAB_140ac6b0f;
    3209:         uVar8 = 1;
    3210:       }
    3211:       FUN_1402c15fc(plVar11,uVar8);
    3212: LAB_140ac6b0f:

## FUN_140ac73d8 */ — reconstrucao/src/decompiled_04.c:3674
reconstrucao/src/../include/ghidra_function_prototypes.h:3674:72: error: unknown type name ‘code’

    3671:   undefined4 extraout_XMM0_Da;
    3672:   undefined4 extraout_XMM0_Da_00;
    3673:   undefined4 extraout_XMM0_Da_01;
    3674:   undefined4 uVar10;
    3675:   undefined1 auStack_198 [32];
    3676:   undefined **ppuStack_178;
    3677:   undefined8 *puStack_170;

## FUN_140ac7ca8 */ — reconstrucao/src/decompiled_04.c:4161
reconstrucao/src/../include/ghidra_function_prototypes.h:4161:1: error: unknown type name ‘undefined’; did you mean ‘undefined8’?

    4158:   uint auStackX_8 [2];
    4159:   undefined8 *puVar10;
    4160:   undefined8 in_stack_ffffffffffffffa8;
    4161:   undefined4 uVar11;
    4162:   longlong lStack_48;
    4163:   undefined4 *puStack_40;
    4164:   undefined8 auStack_38 [2];

## FUN_140ac7ca8 */ — reconstrucao/src/decompiled_04.c:4198
reconstrucao/src/../include/ghidra_function_prototypes.h:4198:1: error: unknown type name ‘undefined’; did you mean ‘undefined8’?

    4195:       *(ushort *)((longlong)puVar9 + 2) = *(ushort *)((longlong)puVar9 + 2) | 0x20;
    4196:     }
    4197:     if ((*(uint *)(param_1 + 0x1010) & 0x20) == 0) {
    4198:       puVar10 = (undefined8 *)(CmKeyObjectType + 0x4c);
    4199:       iVar6 = SeAssignSecurity(0,*(undefined8 *)(param_2 + 0x40),&lStack_48,1,param_2 + 0x20,puVar10
    4200:                                ,CONCAT44(uVar11,*(undefined4 *)(CmKeyObjectType + 100)));
    4201:       if (-1 < iVar6) goto LAB_140ac7e2a;

## FUN_140ac7fa8 */ — reconstrucao/src/decompiled_04.c:4296
reconstrucao/src/../include/ghidra_function_prototypes.h:4296:1: error: unknown type name ‘undefined’; did you mean ‘undefined8’?

    4293:   uint *puVar5;
    4294:   void *_Dst;
    4295:   longlong lVar6;
    4296:   undefined8 uVar7;
    4297:   longlong lVar8;
    4298:   undefined4 uVar9;
    4299:   char acStackX_18 [8];

## FUN_140ac8610 */ — reconstrucao/src/decompiled_04.c:4566
reconstrucao/src/../include/ghidra_function_prototypes.h:4566:1: error: unknown type name ‘undefined’; did you mean ‘undefined8’?

    4563:     (*pcVar1)(0x20);
    4564:   }
    4565:   return 0;
    4566: }
    4567: 
    4568: /* Ghidra label: FUN_140ac86cc */
    4569: /* Ghidra address: 140ac86cc */

## FUN_140ac8610 */ — reconstrucao/src/decompiled_04.c:4568
reconstrucao/src/../include/ghidra_function_prototypes.h:4568:38: error: unknown type name ‘code’

    4565:   return 0;
    4566: }
    4567: 
    4568: /* Ghidra label: FUN_140ac86cc */
    4569: /* Ghidra address: 140ac86cc */
    4570: void FUN_140ac86cc(undefined4 *param_1)
    4571: 

## FUN_140ac8918 */ — reconstrucao/src/decompiled_04.c:4709
reconstrucao/src/../include/ghidra_function_prototypes.h:4709:26: error: unknown type name ‘undefined’; did you mean ‘undefined8’?

    4706:   ulonglong uStack_38;
    4707:   undefined8 uStack_30;
    4708:   
    4709:   auStackX_10[0] = 0;
    4710:   uStack_38 = 0;
    4711:   uStack_30 = 0;
    4712:   psVar8 = (short *)0x0;

## FUN_140ac8918 */ — reconstrucao/src/decompiled_04.c:4711
reconstrucao/src/../include/ghidra_function_prototypes.h:4711:26: error: unknown type name ‘undefined’; did you mean ‘undefined8’?

    4708:   
    4709:   auStackX_10[0] = 0;
    4710:   uStack_38 = 0;
    4711:   uStack_30 = 0;
    4712:   psVar8 = (short *)0x0;
    4713:   psVar7 = (short *)0x0;
    4714:   *(short *)((longlong)SystemReserved1[0xf] + 0x1e4) =

## FUN_140ac922c */ — reconstrucao/src/decompiled_04.c:5020
reconstrucao/src/../include/ghidra_function_prototypes.h:5020:20: error: unknown type name ‘PSLIST_HEADER’

    5017:     *param_1 = uStack_30._4_4_ >> 4 & 3;
    5018:     *(byte *)(param_1 + 1) = (byte)((ulonglong)uStack_30 >> 0x28) & 0x3f;
    5019:     param_1[3] = uStack_28;
    5020:     param_1[2] = uStack_30._4_4_ >> 0xe & 3;
    5021:     param_1[5] = uStack_30._4_4_ >> 6 & 1;
    5022:   }
    5023:   else if (iVar1 != 0x117) goto LAB_140ac92d3;

## FUN_140ac922c */ — reconstrucao/src/decompiled_04.c:5020
reconstrucao/src/../include/ghidra_function_prototypes.h:5020:42: error: unknown type name ‘code’

    5017:     *param_1 = uStack_30._4_4_ >> 4 & 3;
    5018:     *(byte *)(param_1 + 1) = (byte)((ulonglong)uStack_30 >> 0x28) & 0x3f;
    5019:     param_1[3] = uStack_28;
    5020:     param_1[2] = uStack_30._4_4_ >> 0xe & 3;
    5021:     param_1[5] = uStack_30._4_4_ >> 6 & 1;
    5022:   }
    5023:   else if (iVar1 != 0x117) goto LAB_140ac92d3;

## FUN_140ac922c */ — reconstrucao/src/decompiled_04.c:5020
reconstrucao/src/../include/ghidra_function_prototypes.h:5020:56: error: unknown type name ‘code’

    5017:     *param_1 = uStack_30._4_4_ >> 4 & 3;
    5018:     *(byte *)(param_1 + 1) = (byte)((ulonglong)uStack_30 >> 0x28) & 0x3f;
    5019:     param_1[3] = uStack_28;
    5020:     param_1[2] = uStack_30._4_4_ >> 0xe & 3;
    5021:     param_1[5] = uStack_30._4_4_ >> 6 & 1;
    5022:   }
    5023:   else if (iVar1 != 0x117) goto LAB_140ac92d3;

## FUN_140ac922c */ — reconstrucao/src/decompiled_04.c:5021
reconstrucao/src/../include/ghidra_function_prototypes.h:5021:20: error: unknown type name ‘PSLIST_HEADER’

    5018:     *(byte *)(param_1 + 1) = (byte)((ulonglong)uStack_30 >> 0x28) & 0x3f;
    5019:     param_1[3] = uStack_28;
    5020:     param_1[2] = uStack_30._4_4_ >> 0xe & 3;
    5021:     param_1[5] = uStack_30._4_4_ >> 6 & 1;
    5022:   }
    5023:   else if (iVar1 != 0x117) goto LAB_140ac92d3;
    5024:   uVar2 = 1;

## FUN_140ac922c */ — reconstrucao/src/decompiled_04.c:5021
reconstrucao/src/../include/ghidra_function_prototypes.h:5021:42: error: unknown type name ‘code’

    5018:     *(byte *)(param_1 + 1) = (byte)((ulonglong)uStack_30 >> 0x28) & 0x3f;
    5019:     param_1[3] = uStack_28;
    5020:     param_1[2] = uStack_30._4_4_ >> 0xe & 3;
    5021:     param_1[5] = uStack_30._4_4_ >> 6 & 1;
    5022:   }
    5023:   else if (iVar1 != 0x117) goto LAB_140ac92d3;
    5024:   uVar2 = 1;

## FUN_140ac922c */ — reconstrucao/src/decompiled_04.c:5021
reconstrucao/src/../include/ghidra_function_prototypes.h:5021:56: error: unknown type name ‘code’

    5018:     *(byte *)(param_1 + 1) = (byte)((ulonglong)uStack_30 >> 0x28) & 0x3f;
    5019:     param_1[3] = uStack_28;
    5020:     param_1[2] = uStack_30._4_4_ >> 0xe & 3;
    5021:     param_1[5] = uStack_30._4_4_ >> 6 & 1;
    5022:   }
    5023:   else if (iVar1 != 0x117) goto LAB_140ac92d3;
    5024:   uVar2 = 1;

## FUN_140ac9310 */ — reconstrucao/src/decompiled_04.c:5063
reconstrucao/src/../include/ghidra_function_prototypes.h:5063:1: error: unknown type name ‘undefined’; did you mean ‘undefined8’?

    5060:       *param_2 = uStack_10;
    5061:       uStack_10 = 0;
    5062:     }
    5063:     FUN_140aa2418(uStack_10);
    5064:   }
    5065:   return iVar1;
    5066: }

## FUN_140ac9310 */ — reconstrucao/src/decompiled_04.c:5063
reconstrucao/src/../include/ghidra_function_prototypes.h:5063:28: error: unknown type name ‘undefined’; did you mean ‘undefined8’?

    5060:       *param_2 = uStack_10;
    5061:       uStack_10 = 0;
    5062:     }
    5063:     FUN_140aa2418(uStack_10);
    5064:   }
    5065:   return iVar1;
    5066: }

## FUN_140ac95d0 */ — reconstrucao/src/decompiled_04.c:5182
reconstrucao/src/../include/ghidra_function_prototypes.h:5182:1: error: unknown type name ‘undefined’; did you mean ‘undefined8’?

    5179: 
    5180: {
    5181:   bool bVar1;
    5182:   void *pvVar2;
    5183:   longlong lVar3;
    5184:   char cVar4;
    5185:   int iVar5;

