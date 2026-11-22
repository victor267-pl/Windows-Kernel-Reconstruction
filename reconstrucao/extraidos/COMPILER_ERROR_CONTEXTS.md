# Contextos dos primeiros erros de compilação

Cada erro está associado ao marcador de função Ghidra mais próximo. O contexto serve para reconstrução orientada por evidência.

## FUN_140200008 */ — reconstrucao/src/decompiled_01.c:203
reconstrucao/src/decompiled_01.c:203:18: error: ‘DAT_140e0a590’ undeclared (first use in this function); did you mean ‘DAT_140e0a740’?

    200:   uStack_280 = 4;
    201:   uStack_290 = 4;
    202:   uStack_2a0 = 8;
    203:   FUN_1403a0f70(&DAT_140e0a590,param_2,0,0);
    204:   return;
    205: }
    206: 

## FUN_140200740 */ — reconstrucao/src/decompiled_01.c:338
reconstrucao/src/decompiled_01.c:338:7: error: ‘DAT_140fc7d20’ undeclared (first use in this function); did you mean ‘DAT_140fc7ad0’?

    335:   undefined8 auStackX_10 [3];
    336:   
    337:   auStackX_10[0] = 0;
    338:   if (DAT_140fc7d20 != 0) {
    339:     FUN_1404f6e6c(in_CR8,2);
    340:   }
    341:   FUN_1402007a8(param_1,auStackX_10);

## FUN_140200740 */ — reconstrucao/src/decompiled_01.c:341
reconstrucao/src/decompiled_01.c:341:25: error: passing argument 2 of ‘FUN_1402007a8’ makes integer from pointer without a cast [-Wint-conversion]

    338:   if (DAT_140fc7d20 != 0) {
    339:     FUN_1404f6e6c(in_CR8,2);
    340:   }
    341:   FUN_1402007a8(param_1,auStackX_10);
    342:   FUN_140271070(FiberData,auStackX_10);
    343:   return;
    344: }

## FUN_140200740 */ — reconstrucao/src/decompiled_01.c:342
reconstrucao/src/decompiled_01.c:342:17: error: ‘FiberData’ undeclared (first use in this function)

    339:     FUN_1404f6e6c(in_CR8,2);
    340:   }
    341:   FUN_1402007a8(param_1,auStackX_10);
    342:   FUN_140271070(FiberData,auStackX_10);
    343:   return;
    344: }
    345: 

## FUN_1402007a8 */ — reconstrucao/src/decompiled_01.c:358
reconstrucao/src/decompiled_01.c:358:5: error: implicit declaration of function ‘LOCK’ [-Wimplicit-function-declaration]

    355:   
    356:   uVar4 = 0;
    357:   while( true ) {
    358:     LOCK();
    359:     puVar1 = (ulonglong *)(param_1 + 0x40);
    360:     uVar2 = *puVar1;
    361:     *puVar1 = *puVar1 | 1;

## FUN_1402007a8 */ — reconstrucao/src/decompiled_01.c:362
reconstrucao/src/decompiled_01.c:362:5: error: implicit declaration of function ‘UNLOCK’ [-Wimplicit-function-declaration]

    359:     puVar1 = (ulonglong *)(param_1 + 0x40);
    360:     uVar2 = *puVar1;
    361:     *puVar1 = *puVar1 | 1;
    362:     UNLOCK();
    363:     if ((uVar2 & 1) == 0) break;
    364:     do {
    365:       uVar4 = uVar4 + 1;

## FUN_1402007a8 */ — reconstrucao/src/decompiled_01.c:366
reconstrucao/src/decompiled_01.c:366:14: error: ‘DAT_140fc62ac’ undeclared (first use in this function); did you mean ‘DAT_140f0cf28’?

    363:     if ((uVar2 & 1) == 0) break;
    364:     do {
    365:       uVar4 = uVar4 + 1;
    366:       if ((((DAT_140fc62ac & uVar4) == 0) && ((DAT_140fc7ab8 & 0x40) != 0)) &&
    367:          (cVar3 = FUN_14020cb70(), cVar3 != '\0')) {
    368:         FUN_14020cb40(uVar4);
    369:       }

## FUN_1402007a8 */ — reconstrucao/src/decompiled_01.c:366
reconstrucao/src/decompiled_01.c:366:48: error: ‘DAT_140fc7ab8’ undeclared (first use in this function); did you mean ‘DAT_140fc7ad0’?

    363:     if ((uVar2 & 1) == 0) break;
    364:     do {
    365:       uVar4 = uVar4 + 1;
    366:       if ((((DAT_140fc62ac & uVar4) == 0) && ((DAT_140fc7ab8 & 0x40) != 0)) &&
    367:          (cVar3 = FUN_14020cb70(), cVar3 != '\0')) {
    368:         FUN_14020cb40(uVar4);
    369:       }

## FUN_140200820 */ — reconstrucao/src/decompiled_01.c:407
reconstrucao/src/decompiled_01.c:407:15: error: ‘DAT_140fc7b04’ undeclared (first use in this function); did you mean ‘DAT_140fc7ad0’?

    404:     *(undefined8 *)(param_1 + 0x40) = 0;
    405:     iVar3 = iVar1;
    406:   }
    407:   if ((((uint)DAT_140fc7b04 & 0x1000) != 0) && (cVar2 != '\0')) {
    408:     FUN_1403c0604(param_1,*(undefined2 *)(param_1 + 0x248),
    409:                   CONCAT31((uint3)(*(uint *)(param_1 + 0x74) >> 0xb),
    410:                            (char)(*(uint *)(param_1 + 0x74) >> 3)) & 0xffffff01,0,

## FUN_140200820 */ — reconstrucao/src/decompiled_01.c:413
reconstrucao/src/decompiled_01.c:413:29: error: ‘DAT_140fc7b10’ undeclared (first use in this function); did you mean ‘DAT_140fc7ad0’?

    410:                            (char)(*(uint *)(param_1 + 0x74) >> 3)) & 0xffffff01,0,
    411:                   *(undefined8 *)(param_1 + 0x240),0x536);
    412:   }
    413:   if ((iVar1 != iVar3) && ((DAT_140fc7b10 & 0x8000000) != 0)) {
    414:     FUN_1403be528(param_1,0x546,iVar1,iVar3);
    415:   }
    416:   return;

## FUN_140200950 */ — reconstrucao/src/decompiled_01.c:447
reconstrucao/src/decompiled_01.c:447:45: error: passing argument 1 of ‘FUN_140201790’ makes integer from pointer without a cast [-Wint-conversion]

    444:             uVar5 = uVar4;
    445:           } while (uVar3 < puVar1[uVar6 * 0x70 + 0x1b]);
    446:         }
    447:         FUN_140201790(puVar1 + uVar6 * 0x70 + 0x14,CONCAT71((int7)(uVar4 >> 8),4),1);
    448:         uVar3 = (int)uVar6 + 1;
    449:         uVar6 = (ulonglong)uVar3;
    450:       } while (uVar3 < *DAT_140fc7ad0);

## FUN_1402009ec */ — reconstrucao/src/decompiled_01.c:459
reconstrucao/src/decompiled_01.c:459:1: error: return type defaults to ‘int’ [-Wimplicit-int]

    456: 
    457: /* Ghidra label: FUN_1402009ec */
    458: /* Ghidra address: 1402009ec */
    459: FUN_1402009ec(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
    460:              undefined1 param_5)
    461: 
    462: {

## FUN_1402009ec */ — reconstrucao/src/decompiled_01.c:466
reconstrucao/src/decompiled_01.c:466:17: error: ‘DAT_140fc7c20’ undeclared (first use in this function); did you mean ‘DAT_140fc7ad0’?

    463:   undefined4 uVar1;
    464:   
    465:   param_5 = 0;
    466:   FUN_140200a58(DAT_140fc7c20,&param_5);
    467:   uVar1 = FUN_140201958(param_1,param_2,0,param_4,0);
    468:   FUN_1404f6c6c(DAT_140fc7c20,param_5);
    469:   return uVar1;

## FUN_1402009ec */ — reconstrucao/src/decompiled_01.c:467
reconstrucao/src/decompiled_01.c:467:33: error: passing argument 2 of ‘FUN_140201958’ makes pointer from integer without a cast [-Wint-conversion]

    464:   
    465:   param_5 = 0;
    466:   FUN_140200a58(DAT_140fc7c20,&param_5);
    467:   uVar1 = FUN_140201958(param_1,param_2,0,param_4,0);
    468:   FUN_1404f6c6c(DAT_140fc7c20,param_5);
    469:   return uVar1;
    470: }

## FUN_140200a58 */ — reconstrucao/src/decompiled_01.c:479
reconstrucao/src/decompiled_01.c:479:7: error: ‘DAT_140fc7d20’ undeclared (first use in this function); did you mean ‘DAT_140fc7ad0’?

    476: {
    477:   undefined1 in_CR8;
    478:   
    479:   if (DAT_140fc7d20 != 0) {
    480:     FUN_1404f6e6c(in_CR8,2);
    481:   }
    482:   *param_2 = in_CR8;

## KeSetSelectedCpuSetsThread */ — reconstrucao/src/decompiled_01.c:515
reconstrucao/src/decompiled_01.c:515:15: error: ‘DAT_140fc6014’ undeclared (first use in this function); did you mean ‘DAT_140fc7ad0’?

    512:     }
    513:     else {
    514:       plVar7 = (longlong *)*plVar7;
    515:       uVar6 = DAT_140fc6014;
    516:     }
    517:     FUN_14037eee0(lVar3,auStackX_20);
    518:     uVar8 = 0;

## KeSetSelectedCpuSetsThread */ — reconstrucao/src/decompiled_01.c:528
reconstrucao/src/decompiled_01.c:528:16: error: ‘DAT_140fc62ac’ undeclared (first use in this function); did you mean ‘DAT_140f0cf28’?

    525:       if ((uVar2 & 1) == 0) break;
    526:       do {
    527:         uVar8 = uVar8 + 1;
    528:         if ((((DAT_140fc62ac & uVar8) == 0) && ((DAT_140fc7ab8 & 0x40) != 0)) &&
    529:            (cVar4 = FUN_14020cb70(), cVar4 != '\0')) {
    530:           FUN_14020cb40(uVar8);
    531:         }

## KeSetSelectedCpuSetsThread */ — reconstrucao/src/decompiled_01.c:528
reconstrucao/src/decompiled_01.c:528:50: error: ‘DAT_140fc7ab8’ undeclared (first use in this function); did you mean ‘DAT_140fc7ad0’?

    525:       if ((uVar2 & 1) == 0) break;
    526:       do {
    527:         uVar8 = uVar8 + 1;
    528:         if ((((DAT_140fc62ac & uVar8) == 0) && ((DAT_140fc7ab8 & 0x40) != 0)) &&
    529:            (cVar4 = FUN_14020cb70(), cVar4 != '\0')) {
    530:           FUN_14020cb40(uVar8);
    531:         }

## KeSetSelectedCpuSetsThread */ — reconstrucao/src/decompiled_01.c:535
reconstrucao/src/decompiled_01.c:535:5: error: too many arguments to function ‘FUN_140200820’; expected 1, have 2

    532:       } while (*(longlong *)(param_1 + 0x40) != 0);
    533:     }
    534:     FUN_1404fbce4(plVar7,uVar6,param_3,param_2);
    535:     FUN_140200820(param_1,auStack_38);
    536:     ExReleaseSpinLockSharedFromDpcLevel(lVar3 + 0x40);
    537:     FUN_140271070(FiberData,auStack_38,auStackX_20[0]);
    538:     uVar5 = 0;

## KeSetSelectedCpuSetsThread */ — reconstrucao/src/decompiled_01.c:537
reconstrucao/src/decompiled_01.c:537:19: error: ‘FiberData’ undeclared (first use in this function)

    534:     FUN_1404fbce4(plVar7,uVar6,param_3,param_2);
    535:     FUN_140200820(param_1,auStack_38);
    536:     ExReleaseSpinLockSharedFromDpcLevel(lVar3 + 0x40);
    537:     FUN_140271070(FiberData,auStack_38,auStackX_20[0]);
    538:     uVar5 = 0;
    539:   }
    540:   return uVar5;

## FUN_140200bc0 */ — reconstrucao/src/decompiled_01.c:566
reconstrucao/src/decompiled_01.c:566:12: error: ‘FiberData’ undeclared (first use in this function)

    563:   undefined1 auStack_89 [89];
    564:   ulonglong uStack_30;
    565:   
    566:   pvVar1 = FiberData;
    567:   uStack_30 = DAT_140e0a740 ^ (ulonglong)auStack_128;
    568:   puStack_f8 = (undefined4 *)0x0;
    569:   uStack_f0 = uStack_f0 & 0xffffffff00000000;

## FUN_140200bc0 */ — reconstrucao/src/decompiled_01.c:572
reconstrucao/src/decompiled_01.c:572:14: error: assignment to ‘undefined8’ {aka ‘long unsigned int’} from ‘void *’ makes integer from pointer without a cast [-Wint-conversion]

    569:   uStack_f0 = uStack_f0 & 0xffffffff00000000;
    570:   uVar6 = 0;
    571:   uStack_108 = 0;
    572:   uStack_100 = (void *)0x0;
    573:   if ((DAT_140fc7a90 & 8) == 0) {
    574:     uStack_108 = 4;
    575:     uVar2 = FUN_1402fd8a0();

## FUN_140200bc0 */ — reconstrucao/src/decompiled_01.c:573
reconstrucao/src/decompiled_01.c:573:8: error: ‘DAT_140fc7a90’ undeclared (first use in this function); did you mean ‘DAT_140fc7ad0’?

    570:   uVar6 = 0;
    571:   uStack_108 = 0;
    572:   uStack_100 = (void *)0x0;
    573:   if ((DAT_140fc7a90 & 8) == 0) {
    574:     uStack_108 = 4;
    575:     uVar2 = FUN_1402fd8a0();
    576:     uStack_100 = (void *)CONCAT71(uStack_100._1_7_,uVar2);

## FUN_140200bc0 */ — reconstrucao/src/decompiled_01.c:576
reconstrucao/src/decompiled_01.c:576:45: error: request for member ‘_1_7_’ in something not a structure or union

    573:   if ((DAT_140fc7a90 & 8) == 0) {
    574:     uStack_108 = 4;
    575:     uVar2 = FUN_1402fd8a0();
    576:     uStack_100 = (void *)CONCAT71(uStack_100._1_7_,uVar2);
    577:     uStack_100 = (void *)CONCAT44(1,(undefined4)uStack_100);
    578:     puVar5 = *(undefined4 **)((longlong)FiberData + 0x8c00);
    579:     uStack_f0 = *(ulonglong *)(puVar5 + 4);

## FUN_140200bc0 */ — reconstrucao/src/decompiled_01.c:577
reconstrucao/src/decompiled_01.c:577:16: error: assignment to ‘undefined8’ {aka ‘long unsigned int’} from ‘void *’ makes integer from pointer without a cast [-Wint-conversion]

    574:     uStack_108 = 4;
    575:     uVar2 = FUN_1402fd8a0();
    576:     uStack_100 = (void *)CONCAT71(uStack_100._1_7_,uVar2);
    577:     uStack_100 = (void *)CONCAT44(1,(undefined4)uStack_100);
    578:     puVar5 = *(undefined4 **)((longlong)FiberData + 0x8c00);
    579:     uStack_f0 = *(ulonglong *)(puVar5 + 4);
    580:     uVar6 = (uint)uStack_108;

## FUN_140200bc0 */ — reconstrucao/src/decompiled_01.c:585
reconstrucao/src/decompiled_01.c:585:39: error: request for member ‘_4_4_’ in something not a structure or union

    582:   else {
    583:     puVar5 = (undefined4 *)ExpInterlockedPopEntrySList((longlong)FiberData + 0x8bc0);
    584:     if (puVar5 == (undefined4 *)0x0) {
    585:       uStack_108 = CONCAT44(uStack_108._4_4_,2);
    586:       uVar6 = 2;
    587:       puVar5 = (undefined4 *)((ulonglong)auStack_89 & 0xfffffffffffff000);
    588:       if ((((ulonglong)auStack_89 ^ (ulonglong)auStack_e0) & 0xfffffffffffff000) == 0) {

## FUN_140200bc0 */ — reconstrucao/src/decompiled_01.c:591
reconstrucao/src/decompiled_01.c:591:47: error: request for member ‘_1_7_’ in something not a structure or union

    588:       if ((((ulonglong)auStack_89 ^ (ulonglong)auStack_e0) & 0xfffffffffffff000) == 0) {
    589:         puVar5 = auStack_e0;
    590:       }
    591:       uStack_100 = (void *)CONCAT71(uStack_100._1_7_,(byte)in_CR8);
    592:       if (((byte)in_CR8 < 2) && (DAT_140fc7d20 != 0)) {
    593:         FUN_1404f6e6c(in_CR8,0xfffffffffffff002);
    594:       }

## FUN_140200bc0 */ — reconstrucao/src/decompiled_01.c:592
reconstrucao/src/decompiled_01.c:592:34: error: ‘DAT_140fc7d20’ undeclared (first use in this function); did you mean ‘DAT_140fc7ad0’?

    589:         puVar5 = auStack_e0;
    590:       }
    591:       uStack_100 = (void *)CONCAT71(uStack_100._1_7_,(byte)in_CR8);
    592:       if (((byte)in_CR8 < 2) && (DAT_140fc7d20 != 0)) {
    593:         FUN_1404f6e6c(in_CR8,0xfffffffffffff002);
    594:       }
    595:       uStack_f0 = MmGetPhysicalAddress(puVar5);

## FUN_140200bc0 */ — reconstrucao/src/decompiled_01.c:598
reconstrucao/src/decompiled_01.c:598:18: error: assignment to ‘undefined8’ {aka ‘long unsigned int’} from ‘void *’ makes integer from pointer without a cast [-Wint-conversion]

    595:       uStack_f0 = MmGetPhysicalAddress(puVar5);
    596:     }
    597:     else {
    598:       uStack_100 = pvVar1;
    599:       uStack_f0 = *(ulonglong *)(puVar5 + 4);
    600:       uStack_108 = CONCAT44(uStack_108._4_4_,1);
    601:       puStack_f8 = puVar5;

## FUN_140200bc0 */ — reconstrucao/src/decompiled_01.c:600
reconstrucao/src/decompiled_01.c:600:39: error: request for member ‘_4_4_’ in something not a structure or union

    597:     else {
    598:       uStack_100 = pvVar1;
    599:       uStack_f0 = *(ulonglong *)(puVar5 + 4);
    600:       uStack_108 = CONCAT44(uStack_108._4_4_,1);
    601:       puStack_f8 = puVar5;
    602:     }
    603:   }

## FUN_140200bc0 */ — reconstrucao/src/decompiled_01.c:605
reconstrucao/src/decompiled_01.c:605:25: error: passing argument 1 of ‘FUN_140203fd4’ makes pointer from integer without a cast [-Wint-conversion]

    602:     }
    603:   }
    604:   uVar7 = uStack_f0;
    605:   iVar4 = FUN_140203fd4(param_1,puVar5 + 2,(-(uint)((uVar6 & 2) != 0) & 0xfffff058) + 0xfe8);
    606:   if (iVar4 == -1) {
    607:     FUN_140210b60(&uStack_108);
    608:     puVar5 = (undefined4 *)FUN_14046f5e0(&uStack_108,1,0);

## FUN_140200bc0 */ — reconstrucao/src/decompiled_01.c:605
reconstrucao/src/decompiled_01.c:605:40: error: passing argument 2 of ‘FUN_140203fd4’ from incompatible pointer type [-Wincompatible-pointer-types]

    602:     }
    603:   }
    604:   uVar7 = uStack_f0;
    605:   iVar4 = FUN_140203fd4(param_1,puVar5 + 2,(-(uint)((uVar6 & 2) != 0) & 0xfffff058) + 0xfe8);
    606:   if (iVar4 == -1) {
    607:     FUN_140210b60(&uStack_108);
    608:     puVar5 = (undefined4 *)FUN_14046f5e0(&uStack_108,1,0);

## FUN_140200bc0 */ — reconstrucao/src/decompiled_01.c:607
reconstrucao/src/decompiled_01.c:607:19: error: passing argument 1 of ‘FUN_140210b60’ from incompatible pointer type [-Wincompatible-pointer-types]

    604:   uVar7 = uStack_f0;
    605:   iVar4 = FUN_140203fd4(param_1,puVar5 + 2,(-(uint)((uVar6 & 2) != 0) & 0xfffff058) + 0xfe8);
    606:   if (iVar4 == -1) {
    607:     FUN_140210b60(&uStack_108);
    608:     puVar5 = (undefined4 *)FUN_14046f5e0(&uStack_108,1,0);
    609:     iVar4 = FUN_140203fd4(param_1,puVar5 + 2,0xfe8);
    610:     uVar7 = uStack_f0;

## FUN_140200bc0 */ — reconstrucao/src/decompiled_01.c:609
reconstrucao/src/decompiled_01.c:609:27: error: passing argument 1 of ‘FUN_140203fd4’ makes pointer from integer without a cast [-Wint-conversion]

    606:   if (iVar4 == -1) {
    607:     FUN_140210b60(&uStack_108);
    608:     puVar5 = (undefined4 *)FUN_14046f5e0(&uStack_108,1,0);
    609:     iVar4 = FUN_140203fd4(param_1,puVar5 + 2,0xfe8);
    610:     uVar7 = uStack_f0;
    611:   }
    612:   puVar5[1] = 0;

## FUN_140200bc0 */ — reconstrucao/src/decompiled_01.c:609
reconstrucao/src/decompiled_01.c:609:42: error: passing argument 2 of ‘FUN_140203fd4’ from incompatible pointer type [-Wincompatible-pointer-types]

    606:   if (iVar4 == -1) {
    607:     FUN_140210b60(&uStack_108);
    608:     puVar5 = (undefined4 *)FUN_14046f5e0(&uStack_108,1,0);
    609:     iVar4 = FUN_140203fd4(param_1,puVar5 + 2,0xfe8);
    610:     uVar7 = uStack_f0;
    611:   }
    612:   puVar5[1] = 0;

## FUN_140200bc0 */ — reconstrucao/src/decompiled_01.c:616
reconstrucao/src/decompiled_01.c:616:17: error: passing argument 1 of ‘FUN_140210b60’ from incompatible pointer type [-Wincompatible-pointer-types]

    613:   *puVar5 = param_2;
    614:   uStack_e8 = (ulonglong)(uint)((iVar4 + 7) * 0x4000) & 0xffffffff03fe0000 | 0x15;
    615:   sVar3 = HvlInvokeHypercall(uStack_e8,uVar7,0);
    616:   FUN_140210b60(&uStack_108);
    617:   return -(uint)(sVar3 != 0) & 0xc0000001;
    618: }
    619: 

## FUN_140200dcc */ — reconstrucao/src/decompiled_01.c:638
reconstrucao/src/decompiled_01.c:638:7: error: ‘DAT_140e67941’ undeclared (first use in this function); did you mean ‘DAT_140e0a740’?

    635:   ulonglong uStack_18;
    636:   
    637:   uStack_18 = DAT_140e0a740 ^ (ulonglong)auStack_68;
    638:   if (DAT_140e67941 != '\0') {
    639:     auStackX_8[0] = param_1;
    640:     cVar1 = EtwEventEnabled(DAT_140f0bb00,&DAT_140010400);
    641:     if (cVar1 != '\0') {

## FUN_140200dcc */ — reconstrucao/src/decompiled_01.c:640
reconstrucao/src/decompiled_01.c:640:29: error: ‘DAT_140f0bb00’ undeclared (first use in this function); did you mean ‘DAT_140f0cf28’?

    637:   uStack_18 = DAT_140e0a740 ^ (ulonglong)auStack_68;
    638:   if (DAT_140e67941 != '\0') {
    639:     auStackX_8[0] = param_1;
    640:     cVar1 = EtwEventEnabled(DAT_140f0bb00,&DAT_140010400);
    641:     if (cVar1 != '\0') {
    642:       uStack_1c = 0;
    643:       puStack_28 = auStackX_8;

## FUN_140200dcc */ — reconstrucao/src/decompiled_01.c:640
reconstrucao/src/decompiled_01.c:640:44: error: ‘DAT_140010400’ undeclared (first use in this function); did you mean ‘DAT_140e0a740’?

    637:   uStack_18 = DAT_140e0a740 ^ (ulonglong)auStack_68;
    638:   if (DAT_140e67941 != '\0') {
    639:     auStackX_8[0] = param_1;
    640:     cVar1 = EtwEventEnabled(DAT_140f0bb00,&DAT_140010400);
    641:     if (cVar1 != '\0') {
    642:       uStack_1c = 0;
    643:       puStack_28 = auStackX_8;

## FUN_140200e70 */ — reconstrucao/src/decompiled_01.c:676
reconstrucao/src/decompiled_01.c:676:32: error: ‘DAT_140f230b0’ undeclared (first use in this function); did you mean ‘DAT_140fc7ad0’?

    673:   undefined4 auStack_38 [8];
    674:   undefined8 auStack_18 [2];
    675:   
    676:   KeAcquireSpinLockAtDpcLevel(&DAT_140f230b0);
    677:   puVar9 = auStack_38;
    678:   puVar12 = &DAT_140f230a0;
    679:   puVar6 = DAT_140f230a0;

## FUN_140200e70 */ — reconstrucao/src/decompiled_01.c:678
reconstrucao/src/decompiled_01.c:678:14: error: ‘DAT_140f230a0’ undeclared (first use in this function); did you mean ‘FUN_1408230a0’?

    675:   
    676:   KeAcquireSpinLockAtDpcLevel(&DAT_140f230b0);
    677:   puVar9 = auStack_38;
    678:   puVar12 = &DAT_140f230a0;
    679:   puVar6 = DAT_140f230a0;
    680:   puVar8 = (undefined8 *)0x0;
    681:   while (puVar5 = puVar6, puVar5 != puVar12) {

## FUN_140200e70 */ — reconstrucao/src/decompiled_01.c:687
reconstrucao/src/decompiled_01.c:687:24: error: implicit declaration of function ‘swi’ [-Wimplicit-function-declaration]

    684:     if (((undefined8 *)puVar11[1] != puVar5) || (puVar6 = puVar11, (undefined8 *)*puVar7 != puVar5))
    685:     {
    686:       puVar6 = (undefined8 *)0x3;
    687:       pcVar3 = (code *)swi(0x29);
    688:       puVar5 = (undefined8 *)(*pcVar3)();
    689:       puVar9 = puVar9 + 2;
    690:     }

## FUN_140200e70 */ — reconstrucao/src/decompiled_01.c:691
reconstrucao/src/decompiled_01.c:691:13: error: assignment to ‘undefined8’ {aka ‘long unsigned int’} from ‘undefined8 *’ {aka ‘long unsigned int *’} makes integer from pointer without a cast [-Wint-conversion]

    688:       puVar5 = (undefined8 *)(*pcVar3)();
    689:       puVar9 = puVar9 + 2;
    690:     }
    691:     *puVar7 = puVar11;
    692:     puVar11[1] = puVar7;
    693:     *puVar5 = puVar8;
    694:     puVar5[1] = 0;

## FUN_140200e70 */ — reconstrucao/src/decompiled_01.c:692
reconstrucao/src/decompiled_01.c:692:16: error: assignment to ‘undefined8’ {aka ‘long unsigned int’} from ‘undefined8 *’ {aka ‘long unsigned int *’} makes integer from pointer without a cast [-Wint-conversion]

    689:       puVar9 = puVar9 + 2;
    690:     }
    691:     *puVar7 = puVar11;
    692:     puVar11[1] = puVar7;
    693:     *puVar5 = puVar8;
    694:     puVar5[1] = 0;
    695:     LOCK();

## FUN_140200e70 */ — reconstrucao/src/decompiled_01.c:693
reconstrucao/src/decompiled_01.c:693:13: error: assignment to ‘undefined8’ {aka ‘long unsigned int’} from ‘undefined8 *’ {aka ‘long unsigned int *’} makes integer from pointer without a cast [-Wint-conversion]

    690:     }
    691:     *puVar7 = puVar11;
    692:     puVar11[1] = puVar7;
    693:     *puVar5 = puVar8;
    694:     puVar5[1] = 0;
    695:     LOCK();
    696:     *(short *)((longlong)puVar5 + -0x8c) = *(short *)((longlong)puVar5 + -0x8c) + 1;

## FUN_140200e70 */ — reconstrucao/src/decompiled_01.c:719
reconstrucao/src/decompiled_01.c:719:15: error: ‘DAT_140fc62ac’ undeclared (first use in this function); did you mean ‘DAT_140f0cf28’?

    716:       if ((uVar2 & 1) == 0) break;
    717:       do {
    718:         uVar10 = uVar10 + 1;
    719:         if (((DAT_140fc62ac & uVar10) == 0) && ((DAT_140fc7ab8 & 0x40) != 0)) {
    720:           *(undefined8 *)(puVar9 + -2) = 0x140200fa6;
    721:           cVar4 = FUN_14020cb70();
    722:           if (cVar4 != '\0') {

## FUN_140200e70 */ — reconstrucao/src/decompiled_01.c:719
reconstrucao/src/decompiled_01.c:719:50: error: ‘DAT_140fc7ab8’ undeclared (first use in this function); did you mean ‘DAT_140fc7ad0’?

    716:       if ((uVar2 & 1) == 0) break;
    717:       do {
    718:         uVar10 = uVar10 + 1;
    719:         if (((DAT_140fc62ac & uVar10) == 0) && ((DAT_140fc7ab8 & 0x40) != 0)) {
    720:           *(undefined8 *)(puVar9 + -2) = 0x140200fa6;
    721:           cVar4 = FUN_14020cb70();
    722:           if (cVar4 != '\0') {

## FUN_140200e70 */ — reconstrucao/src/decompiled_01.c:731
reconstrucao/src/decompiled_01.c:731:28: error: passing argument 1 of ‘FUN_140201280’ makes integer from pointer without a cast [-Wint-conversion]

    728:     }
    729:     if ((*(uint *)(puVar8 + -0x6f) & 0x400000) != 0) {
    730:       *(undefined8 *)(puVar9 + -2) = 0x140200edb;
    731:       FUN_140201280(puVar8 + -0x7e,puVar9 + 8,1);
    732:     }
    733:     puVar8[-0x76] = 0;
    734:     LOCK();

## FUN_140200e70 */ — reconstrucao/src/decompiled_01.c:731
reconstrucao/src/decompiled_01.c:731:43: error: passing argument 2 of ‘FUN_140201280’ makes integer from pointer without a cast [-Wint-conversion]

    728:     }
    729:     if ((*(uint *)(puVar8 + -0x6f) & 0x400000) != 0) {
    730:       *(undefined8 *)(puVar9 + -2) = 0x140200edb;
    731:       FUN_140201280(puVar8 + -0x7e,puVar9 + 8,1);
    732:     }
    733:     puVar8[-0x76] = 0;
    734:     LOCK();

## FUN_140200e70 */ — reconstrucao/src/decompiled_01.c:740
reconstrucao/src/decompiled_01.c:740:17: error: ‘FiberData’ undeclared (first use in this function)

    737:     puVar8 = puVar6;
    738:   }
    739:   *(undefined8 *)(puVar9 + -2) = 0x140200f06;
    740:   FUN_140271070(FiberData,puVar9 + 8,2);
    741:   return;
    742: }
    743: 

## FUN_140200fd8 */ — reconstrucao/src/decompiled_01.c:799
reconstrucao/src/decompiled_01.c:799:19: error: passing argument 1 of ‘FUN_14034b620’ makes integer from pointer without a cast [-Wint-conversion]

    796:     if ((param_1[0x1e] & 0x400000) == 0) {
    797:       return;
    798:     }
    799:     FUN_14034b620(param_1,auStackX_18);
    800:     if (param_1[0x100] != 0x20) {
    801:       FUN_14034b6b4(param_1,&uStackX_20,(int)(char)param_1[0x100],1);
    802:       param_1[0x100] = 0x20;

## FUN_140200fd8 */ — reconstrucao/src/decompiled_01.c:801
reconstrucao/src/decompiled_01.c:801:21: error: passing argument 1 of ‘FUN_14034b6b4’ makes integer from pointer without a cast [-Wint-conversion]

    798:     }
    799:     FUN_14034b620(param_1,auStackX_18);
    800:     if (param_1[0x100] != 0x20) {
    801:       FUN_14034b6b4(param_1,&uStackX_20,(int)(char)param_1[0x100],1);
    802:       param_1[0x100] = 0x20;
    803:     }
    804:     uStack_48 = 0;

## FUN_140200fd8 */ — reconstrucao/src/decompiled_01.c:801
reconstrucao/src/decompiled_01.c:801:29: error: passing argument 2 of ‘FUN_14034b6b4’ makes integer from pointer without a cast [-Wint-conversion]

    798:     }
    799:     FUN_14034b620(param_1,auStackX_18);
    800:     if (param_1[0x100] != 0x20) {
    801:       FUN_14034b6b4(param_1,&uStackX_20,(int)(char)param_1[0x100],1);
    802:       param_1[0x100] = 0x20;
    803:     }
    804:     uStack_48 = 0;

## FUN_140200fd8 */ — reconstrucao/src/decompiled_01.c:818
reconstrucao/src/decompiled_01.c:818:19: error: ‘FiberData’ undeclared (first use in this function)

    815:     FUN_1402fd5d0(uVar8,pvStack_60,&uStack_68,uStack_58,&uStack_48);
    816:     param_1[0x10] = 0;
    817:     param_1[0x11] = 0;
    818:     FUN_140271070(FiberData,&uStackX_20,auStackX_18[0]);
    819:     KeSetPriorityThread(param_1,(int)*(char *)((longlong)param_1 + 0x233));
    820:     return;
    821:   }

## FUN_140200fd8 */ — reconstrucao/src/decompiled_01.c:819
reconstrucao/src/decompiled_01.c:819:25: error: passing argument 1 of ‘KeSetPriorityThread’ makes integer from pointer without a cast [-Wint-conversion]

    816:     param_1[0x10] = 0;
    817:     param_1[0x11] = 0;
    818:     FUN_140271070(FiberData,&uStackX_20,auStackX_18[0]);
    819:     KeSetPriorityThread(param_1,(int)*(char *)((longlong)param_1 + 0x233));
    820:     return;
    821:   }
    822:   if (param_3 != 1) {

## FUN_140200fd8 */ — reconstrucao/src/decompiled_01.c:824
reconstrucao/src/decompiled_01.c:824:12: error: ‘DAT_140fc7b14’ undeclared (first use in this function); did you mean ‘DAT_140fc7ad0’?

    821:   }
    822:   if (param_3 != 1) {
    823:     if ((param_3 == 2) || (param_3 == 3)) {
    824:       if ((DAT_140fc7b14 & 0x20) != 0) {
    825:         FUN_1406597f4(param_1,param_3);
    826:       }
    827:       FUN_14034b620(param_1,auStackX_18);

## FUN_140200fd8 */ — reconstrucao/src/decompiled_01.c:825
reconstrucao/src/decompiled_01.c:825:23: error: passing argument 1 of ‘FUN_1406597f4’ makes integer from pointer without a cast [-Wint-conversion]

    822:   if (param_3 != 1) {
    823:     if ((param_3 == 2) || (param_3 == 3)) {
    824:       if ((DAT_140fc7b14 & 0x20) != 0) {
    825:         FUN_1406597f4(param_1,param_3);
    826:       }
    827:       FUN_14034b620(param_1,auStackX_18);
    828:     }

## FUN_140200fd8 */ — reconstrucao/src/decompiled_01.c:827
reconstrucao/src/decompiled_01.c:827:21: error: passing argument 1 of ‘FUN_14034b620’ makes integer from pointer without a cast [-Wint-conversion]

    824:       if ((DAT_140fc7b14 & 0x20) != 0) {
    825:         FUN_1406597f4(param_1,param_3);
    826:       }
    827:       FUN_14034b620(param_1,auStackX_18);
    828:     }
    829:     else {
    830:       if (param_3 != 4) {

## FUN_140200fd8 */ — reconstrucao/src/decompiled_01.c:833
reconstrucao/src/decompiled_01.c:833:21: error: passing argument 1 of ‘FUN_14034b620’ makes integer from pointer without a cast [-Wint-conversion]

    830:       if (param_3 != 4) {
    831:         return;
    832:       }
    833:       FUN_14034b620(param_1,auStackX_18);
    834:       lVar2 = *(longlong *)(param_1 + 0xf2);
    835:       if (lVar2 == 0) goto LAB_14020104d;
    836:       LOCK();

## FUN_140200fd8 */ — reconstrucao/src/decompiled_01.c:842
reconstrucao/src/decompiled_01.c:842:19: error: passing argument 1 of ‘FUN_140201280’ makes integer from pointer without a cast [-Wint-conversion]

    839:       if ((*(longlong *)(lVar2 + 0x28) == *(longlong *)(lVar2 + 0x30)) ||
    840:          ((char)param_1[0x61] != '\x01')) goto LAB_14020104d;
    841:     }
    842:     FUN_140201280(param_1,&uStackX_20,0);
    843: LAB_14020104d:
    844:     param_1[0x10] = 0;
    845:     param_1[0x11] = 0;

## FUN_140200fd8 */ — reconstrucao/src/decompiled_01.c:842
reconstrucao/src/decompiled_01.c:842:27: error: passing argument 2 of ‘FUN_140201280’ makes integer from pointer without a cast [-Wint-conversion]

    839:       if ((*(longlong *)(lVar2 + 0x28) == *(longlong *)(lVar2 + 0x30)) ||
    840:          ((char)param_1[0x61] != '\x01')) goto LAB_14020104d;
    841:     }
    842:     FUN_140201280(param_1,&uStackX_20,0);
    843: LAB_14020104d:
    844:     param_1[0x10] = 0;
    845:     param_1[0x11] = 0;

## FUN_140200fd8 */ — reconstrucao/src/decompiled_01.c:853
reconstrucao/src/decompiled_01.c:853:17: error: passing argument 1 of ‘FUN_14034b620’ makes integer from pointer without a cast [-Wint-conversion]

    850:   if (lVar2 == 0) {
    851:     return;
    852:   }
    853:   FUN_14034b620(param_1,auStackX_18);
    854:   pvVar4 = FiberData;
    855:   uVar5 = *(uint *)(lVar2 + 4);
    856:   if (6 < (int)uVar5) goto LAB_14020115f;

## FUN_140200fd8 */ — reconstrucao/src/decompiled_01.c:868
reconstrucao/src/decompiled_01.c:868:9: error: invalid use of void expression

    865:   uStack_38 = 0;
    866:   uStack_30 = 0;
    867:   pvStack_60 = pvVar4;
    868:   uVar8 = FUN_14020c440(pvVar4,1,&uStack_68);
    869:   *(char *)(param_1 + 0x81) = (char)uVar5;
    870:   if (*(longlong *)((longlong)pvVar4 + 0x10) == 0) {
    871:     pvStack_50 = pvVar4;

## FUN_140200fd8 */ — reconstrucao/src/decompiled_01.c:882
reconstrucao/src/decompiled_01.c:882:15: error: invalid use of void expression

    879:         bVar1 = *(byte *)(*(longlong *)((longlong)*ppvVar6 + 0x38) + 0x40);
    880:         *(byte *)(*(longlong *)((longlong)*ppvVar6 + 0x38) + 0x40) =
    881:              (bVar1 ^ (byte)param_1[0x81]) & 7 ^ bVar1;
    882:         uVar8 = FUN_14027835c();
    883:         ppvVar6 = ppvVar6 + 1;
    884:         uVar7 = uVar7 - 1;
    885:       } while (uVar7 != 0);

## FUN_140200fd8 */ — reconstrucao/src/decompiled_01.c:899
reconstrucao/src/decompiled_01.c:899:7: error: ‘DAT_140fc7d20’ undeclared (first use in this function); did you mean ‘DAT_140fc7ad0’?

    896:   param_1[0x10] = 0;
    897:   param_1[0x11] = 0;
    898:   FUN_140295160(pvVar4,param_1);
    899:   if (DAT_140fc7d20 != 0) {
    900:     FUN_1404f6e08(in_CR8,auStackX_18[0]);
    901:   }
    902:   return;

## FUN_140201280 */ — reconstrucao/src/decompiled_01.c:972
reconstrucao/src/decompiled_01.c:972:9: error: invalid use of void expression

    969:     *(undefined1 *)(param_1 + 0x366) = 0;
    970:     *(ushort *)(param_1 + 0x206) = *(ushort *)(param_1 + 0x206) & 0xf00f;
    971:   }
    972:   iVar6 = FUN_1403c1fa4(param_1,0,0);
    973:   if (iVar6 != iVar9) {
    974:     FUN_140306b38(param_1,param_2,iVar6);
    975:   }

## FUN_140201280 */ — reconstrucao/src/decompiled_01.c:996
reconstrucao/src/decompiled_01.c:996:78: error: passing argument 3 of ‘FUN_1403fce40’ from incompatible pointer type [-Wincompatible-pointer-types]

    993:         alStack_50[0] = lStack_88;
    994:         plStack_78 = (longlong *)0x0;
    995:         auStackX_20[0] = 0;
    996:         uVar11 = FUN_1403fce40(alStack_50,*(uint *)(param_1 + 0x78) >> 1 & 1,&plStack_78,auStackX_20
    997:                               );
    998:         if (auStackX_20[0] != 0) {
    999:           uVar8 = (ulonglong)auStackX_20[0];

## FUN_140201280 */ — reconstrucao/src/decompiled_01.c:996
reconstrucao/src/decompiled_01.c:996:16: error: invalid use of void expression

    993:         alStack_50[0] = lStack_88;
    994:         plStack_78 = (longlong *)0x0;
    995:         auStackX_20[0] = 0;
    996:         uVar11 = FUN_1403fce40(alStack_50,*(uint *)(param_1 + 0x78) >> 1 & 1,&plStack_78,auStackX_20
    997:                               );
    998:         if (auStackX_20[0] != 0) {
    999:           uVar8 = (ulonglong)auStackX_20[0];

## FUN_140201280 */ — reconstrucao/src/decompiled_01.c:1005
reconstrucao/src/decompiled_01.c:1005:20: error: invalid use of void expression

    1002:             bVar1 = *(byte *)(*(longlong *)(*plVar10 + 0x38) + 0x40);
    1003:             *(byte *)(*(longlong *)(*plVar10 + 0x38) + 0x40) =
    1004:                  bVar1 ^ (bVar1 ^ *(byte *)(param_1 + 0x204)) & 7;
    1005:             uVar11 = FUN_14027835c();
    1006:             plVar10 = plVar10 + 1;
    1007:             uVar8 = uVar8 - 1;
    1008:           } while (uVar8 != 0);

## FUN_140201280 */ — reconstrucao/src/decompiled_01.c:1016
reconstrucao/src/decompiled_01.c:1016:76: error: passing argument 3 of ‘FUN_1403fce40’ from incompatible pointer type [-Wincompatible-pointer-types]

    1013:       lStack_58 = lStack_88;
    1014:       plStack_80 = (longlong *)0x0;
    1015:       auStackX_8[0] = 0;
    1016:       uVar11 = FUN_1403fce40(&lStack_58,*(uint *)(param_1 + 0x78) >> 1 & 1,&plStack_80,auStackX_8);
    1017:       if (auStackX_8[0] != 0) {
    1018:         uVar8 = (ulonglong)auStackX_8[0];
    1019:         plVar10 = plStack_80;

## FUN_140201280 */ — reconstrucao/src/decompiled_01.c:1016
reconstrucao/src/decompiled_01.c:1016:14: error: invalid use of void expression

    1013:       lStack_58 = lStack_88;
    1014:       plStack_80 = (longlong *)0x0;
    1015:       auStackX_8[0] = 0;
    1016:       uVar11 = FUN_1403fce40(&lStack_58,*(uint *)(param_1 + 0x78) >> 1 & 1,&plStack_80,auStackX_8);
    1017:       if (auStackX_8[0] != 0) {
    1018:         uVar8 = (ulonglong)auStackX_8[0];
    1019:         plVar10 = plStack_80;

## FUN_140201280 */ — reconstrucao/src/decompiled_01.c:1024
reconstrucao/src/decompiled_01.c:1024:18: error: invalid use of void expression

    1021:           bVar1 = *(byte *)(*(longlong *)(*plVar10 + 0x38) + 0x40);
    1022:           *(byte *)(*(longlong *)(*plVar10 + 0x38) + 0x40) =
    1023:                bVar1 ^ (bVar1 ^ *(byte *)(param_1 + 0x204)) & 7;
    1024:           uVar11 = FUN_14027835c();
    1025:           plVar10 = plVar10 + 1;
    1026:           uVar8 = uVar8 - 1;
    1027:         } while (uVar8 != 0);

## FUN_140201280 */ — reconstrucao/src/decompiled_01.c:1037
reconstrucao/src/decompiled_01.c:1037:29: error: ‘DAT_140fc7b14’ undeclared (first use in this function); did you mean ‘DAT_140fc7ad0’?

    1034:     **(uint **)(param_1 + 0x3c8) = **(uint **)(param_1 + 0x3c8) & 0xffefffff;
    1035:     UNLOCK();
    1036:   }
    1037:   if ((iVar9 != iVar6) && ((DAT_140fc7b14 & 0x20) != 0)) {
    1038:     FUN_1404d0da8(param_1,iVar9,iVar5,iVar6,&uStack_60);
    1039:   }
    1040:   return;

## FUN_1402015a0 */ — reconstrucao/src/decompiled_01.c:1054
reconstrucao/src/decompiled_01.c:1054:40: error: ‘DAT_140f08470’ undeclared (first use in this function); did you mean ‘DAT_140e0a740’?

    1051:   longlong lStackX_10;
    1052:   
    1053:   lStackX_10 = 0;
    1054:   uVar2 = KeAcquireSpinLockRaiseToDpc(&DAT_140f08470);
    1055:   puVar1 = DAT_140f08468;
    1056:   if (DAT_140f08468 != (uint *)0x0) {
    1057:     uVar3 = *DAT_140f08468;

## FUN_1402015a0 */ — reconstrucao/src/decompiled_01.c:1055
reconstrucao/src/decompiled_01.c:1055:12: error: ‘DAT_140f08468’ undeclared (first use in this function); did you mean ‘DAT_140f0cf28’?

    1052:   
    1053:   lStackX_10 = 0;
    1054:   uVar2 = KeAcquireSpinLockRaiseToDpc(&DAT_140f08470);
    1055:   puVar1 = DAT_140f08468;
    1056:   if (DAT_140f08468 != (uint *)0x0) {
    1057:     uVar3 = *DAT_140f08468;
    1058:     if (((uVar3 & 0x10) != 0) && ((uVar3 & 1) != (uint)param_1)) {

## FUN_14020164c */ — reconstrucao/src/decompiled_01.c:1087
reconstrucao/src/decompiled_01.c:1087:59: error: passing argument 1 of ‘FUN_140201790’ makes integer from pointer without a cast [-Wint-conversion]

    1084:   undefined1 uVar1;
    1085:   
    1086:   uVar1 = KeAcquireSpinLockRaiseToDpc(&DAT_140f0cf28);
    1087:   FUN_140201790(DAT_140fc7ad0 + (ulonglong)param_1 * 0x70 + 0x14,1,param_2);
    1088:   KeReleaseSpinLock(&DAT_140f0cf28,uVar1);
    1089:   if (param_1 == *DAT_140fc7ad0 - 1U) {
    1090:     if (param_2 == '\0') {

## FUN_140201708 */ — reconstrucao/src/decompiled_01.c:1120
reconstrucao/src/decompiled_01.c:1120:52: error: passing argument 1 of ‘FUN_140201790’ makes integer from pointer without a cast [-Wint-conversion]

    1117:     uVar1 = KeAcquireSpinLockRaiseToDpc(&DAT_140f0cf28);
    1118:     if (*DAT_140fc7ad0 != 0) {
    1119:       do {
    1120:         FUN_140201790(DAT_140fc7ad0 + uVar3 * 0x70 + 0x14,CONCAT71((int7)(uVar3 >> 8),2),
    1121:                       CONCAT71((int7)(uVar3 * 0x1c0 >> 8),param_1));
    1122:         uVar2 = (int)uVar3 + 1;
    1123:         uVar3 = (ulonglong)uVar2;

## FUN_140201834 */ — reconstrucao/src/decompiled_01.c:1191
reconstrucao/src/decompiled_01.c:1191:40: error: ‘DAT_140f0e990’ undeclared (first use in this function); did you mean ‘DAT_140f0cf28’?

    1188: {
    1189:   undefined1 uVar1;
    1190:   
    1191:   uVar1 = KeAcquireSpinLockRaiseToDpc(&DAT_140f0e990);
    1192:   if (DAT_140f0e9a1 != '\0') {
    1193:     if (DAT_140f0e9a0 == param_1) goto LAB_14020188d;
    1194:     if (param_1 == '\0') {

## FUN_140201834 */ — reconstrucao/src/decompiled_01.c:1192
reconstrucao/src/decompiled_01.c:1192:7: error: ‘DAT_140f0e9a1’ undeclared (first use in this function); did you mean ‘DAT_140f0cf28’?

    1189:   undefined1 uVar1;
    1190:   
    1191:   uVar1 = KeAcquireSpinLockRaiseToDpc(&DAT_140f0e990);
    1192:   if (DAT_140f0e9a1 != '\0') {
    1193:     if (DAT_140f0e9a0 == param_1) goto LAB_14020188d;
    1194:     if (param_1 == '\0') {
    1195:       FUN_1404b8ffc(_DAT_fffff78000000008,0);

## FUN_140201834 */ — reconstrucao/src/decompiled_01.c:1193
reconstrucao/src/decompiled_01.c:1193:9: error: ‘DAT_140f0e9a0’ undeclared (first use in this function); did you mean ‘DAT_140f0cf28’?

    1190:   
    1191:   uVar1 = KeAcquireSpinLockRaiseToDpc(&DAT_140f0e990);
    1192:   if (DAT_140f0e9a1 != '\0') {
    1193:     if (DAT_140f0e9a0 == param_1) goto LAB_14020188d;
    1194:     if (param_1 == '\0') {
    1195:       FUN_1404b8ffc(_DAT_fffff78000000008,0);
    1196:     }

## FUN_140201834 */ — reconstrucao/src/decompiled_01.c:1195
reconstrucao/src/decompiled_01.c:1195:21: error: ‘_DAT_fffff78000000008’ undeclared (first use in this function)

    1192:   if (DAT_140f0e9a1 != '\0') {
    1193:     if (DAT_140f0e9a0 == param_1) goto LAB_14020188d;
    1194:     if (param_1 == '\0') {
    1195:       FUN_1404b8ffc(_DAT_fffff78000000008,0);
    1196:     }
    1197:     else {
    1198:       DAT_140f0e9a8 = _DAT_fffff78000000008;

## FUN_140201834 */ — reconstrucao/src/decompiled_01.c:1198
reconstrucao/src/decompiled_01.c:1198:7: error: ‘DAT_140f0e9a8’ undeclared (first use in this function); did you mean ‘DAT_140f0cf28’?

    1195:       FUN_1404b8ffc(_DAT_fffff78000000008,0);
    1196:     }
    1197:     else {
    1198:       DAT_140f0e9a8 = _DAT_fffff78000000008;
    1199:     }
    1200:   }
    1201:   if (DAT_140f0e9a0 != param_1) {

## FUN_1402018b8 */ — reconstrucao/src/decompiled_01.c:1218
reconstrucao/src/decompiled_01.c:1218:40: error: ‘DAT_140f0ce60’ undeclared (first use in this function); did you mean ‘DAT_140f0cf28’?

    1215:   undefined1 uVar1;
    1216:   undefined8 uVar2;
    1217:   
    1218:   uVar1 = KeAcquireSpinLockRaiseToDpc(&DAT_140f0ce60);
    1219:   if (DAT_140f0c0d8 != '\0') {
    1220:     uVar2 = KeQueryPerformanceCounter(0);
    1221:     if (param_1 == '\0') {

## FUN_1402018b8 */ — reconstrucao/src/decompiled_01.c:1219
reconstrucao/src/decompiled_01.c:1219:7: error: ‘DAT_140f0c0d8’ undeclared (first use in this function); did you mean ‘DAT_140f0cf28’?

    1216:   undefined8 uVar2;
    1217:   
    1218:   uVar1 = KeAcquireSpinLockRaiseToDpc(&DAT_140f0ce60);
    1219:   if (DAT_140f0c0d8 != '\0') {
    1220:     uVar2 = KeQueryPerformanceCounter(0);
    1221:     if (param_1 == '\0') {
    1222:       FUN_1404bc4ec(uVar2);

## FUN_1402018b8 */ — reconstrucao/src/decompiled_01.c:1220
reconstrucao/src/decompiled_01.c:1220:11: error: invalid use of void expression

    1217:   
    1218:   uVar1 = KeAcquireSpinLockRaiseToDpc(&DAT_140f0ce60);
    1219:   if (DAT_140f0c0d8 != '\0') {
    1220:     uVar2 = KeQueryPerformanceCounter(0);
    1221:     if (param_1 == '\0') {
    1222:       FUN_1404bc4ec(uVar2);
    1223:     }

## FUN_1402018b8 */ — reconstrucao/src/decompiled_01.c:1225
reconstrucao/src/decompiled_01.c:1225:7: error: ‘DAT_140f0c0d0’ undeclared (first use in this function); did you mean ‘DAT_140f0cf28’?

    1222:       FUN_1404bc4ec(uVar2);
    1223:     }
    1224:     else {
    1225:       DAT_140f0c0d0 = uVar2;
    1226:     }
    1227:   }
    1228:   KeReleaseSpinLock(&DAT_140f0ce60,uVar1);

## FUN_140201918 */ — reconstrucao/src/decompiled_01.c:1239
reconstrucao/src/decompiled_01.c:1239:18: error: ‘DAT_140fc6014’ undeclared (first use in this function); did you mean ‘DAT_140fc7ad0’?

    1236: {
    1237:   ulonglong uVar1;
    1238:   
    1239:   if (param_2 <= DAT_140fc6014) {
    1240:     uVar1 = 0;
    1241:     while( true ) {
    1242:       if (param_2 <= (uint)uVar1) {

## FUN_140201918 */ — reconstrucao/src/decompiled_01.c:1245
reconstrucao/src/decompiled_01.c:1245:53: error: ‘DAT_140fc8128’ undeclared (first use in this function); did you mean ‘DAT_140f0cf28’?

    1242:       if (param_2 <= (uint)uVar1) {
    1243:         return 0;
    1244:       }
    1245:       if ((*(ulonglong *)(param_1 + uVar1 * 8) & ~(&DAT_140fc8128)[uVar1]) != 0) break;
    1246:       uVar1 = (ulonglong)((uint)uVar1 + 1);
    1247:     }
    1248:   }

## FUN_140201958 */ — reconstrucao/src/decompiled_01.c:1273
reconstrucao/src/decompiled_01.c:1273:25: error: passing argument 1 of ‘FUN_140201918’ makes integer from pointer without a cast [-Wint-conversion]

    1270:   ulonglong *puStack_38;
    1271:   
    1272:   uVar6 = 0;
    1273:   uVar3 = FUN_140201918(param_2,param_1);
    1274:   if (-1 < (int)uVar3) {
    1275:     if ((param_3 == (ushort *)0x0) ||
    1276:        (iVar2 = KeIsSubsetAffinityEx(param_3,&DAT_140fc8120), iVar2 != 0)) {

## FUN_140201958 */ — reconstrucao/src/decompiled_01.c:1276
reconstrucao/src/decompiled_01.c:1276:47: error: ‘DAT_140fc8120’ undeclared (first use in this function); did you mean ‘DAT_140fc7ad0’?

    1273:   uVar3 = FUN_140201918(param_2,param_1);
    1274:   if (-1 < (int)uVar3) {
    1275:     if ((param_3 == (ushort *)0x0) ||
    1276:        (iVar2 = KeIsSubsetAffinityEx(param_3,&DAT_140fc8120), iVar2 != 0)) {
    1277:       uVar12 = 0x20;
    1278:       if (param_1 < 0x20) {
    1279:         uVar12 = param_1;

## FUN_140201958 */ — reconstrucao/src/decompiled_01.c:1282
reconstrucao/src/decompiled_01.c:1282:36: error: ‘DAT_140f23730’ undeclared (first use in this function); did you mean ‘DAT_140fc7ad0’?

    1279:         uVar12 = param_1;
    1280:       }
    1281:       uVar7 = 0;
    1282:       KeAcquireSpinLockAtDpcLevel(&DAT_140f23730);
    1283:       uVar4 = DAT_140fc7bf8;
    1284:       do {
    1285:         while ((uVar4 & 1) != 0) {

## FUN_140201958 */ — reconstrucao/src/decompiled_01.c:1283
reconstrucao/src/decompiled_01.c:1283:15: error: ‘DAT_140fc7bf8’ undeclared (first use in this function); did you mean ‘DAT_140fc7ad0’?

    1280:       }
    1281:       uVar7 = 0;
    1282:       KeAcquireSpinLockAtDpcLevel(&DAT_140f23730);
    1283:       uVar4 = DAT_140fc7bf8;
    1284:       do {
    1285:         while ((uVar4 & 1) != 0) {
    1286:           uVar4 = DAT_140fc7bf8;

## FUN_140201958 */ — reconstrucao/src/decompiled_01.c:1300
reconstrucao/src/decompiled_01.c:1300:21: error: ‘DAT_140fc9320’ undeclared (first use in this function); did you mean ‘DAT_140fc7ad0’?

    1297:       } while (!bVar13);
    1298:       uVar4 = 0;
    1299:       lVar10 = 0;
    1300:       puStack_38 = &DAT_140fc9320 + param_4;
    1301:       lVar9 = (longlong)&DAT_140fc8128 - (longlong)param_2;
    1302:       lVar11 = (longlong)&DAT_140fc9720 - (longlong)param_2;
    1303:       do {

## FUN_140201958 */ — reconstrucao/src/decompiled_01.c:1301
reconstrucao/src/decompiled_01.c:1301:26: error: ‘DAT_140fc8128’ undeclared (first use in this function); did you mean ‘DAT_140f0cf28’?

    1298:       uVar4 = 0;
    1299:       lVar10 = 0;
    1300:       puStack_38 = &DAT_140fc9320 + param_4;
    1301:       lVar9 = (longlong)&DAT_140fc8128 - (longlong)param_2;
    1302:       lVar11 = (longlong)&DAT_140fc9720 - (longlong)param_2;
    1303:       do {
    1304:         uVar1 = *(ulonglong *)(lVar9 + (longlong)param_2);

## FUN_140201958 */ — reconstrucao/src/decompiled_01.c:1302
reconstrucao/src/decompiled_01.c:1302:27: error: ‘DAT_140fc9720’ undeclared (first use in this function); did you mean ‘DAT_140fc7ad0’?

    1299:       lVar10 = 0;
    1300:       puStack_38 = &DAT_140fc9320 + param_4;
    1301:       lVar9 = (longlong)&DAT_140fc8128 - (longlong)param_2;
    1302:       lVar11 = (longlong)&DAT_140fc9720 - (longlong)param_2;
    1303:       do {
    1304:         uVar1 = *(ulonglong *)(lVar9 + (longlong)param_2);
    1305:         if (param_3 == (ushort *)0x0) {

## FUN_140201958 */ — reconstrucao/src/decompiled_01.c:1331
reconstrucao/src/decompiled_01.c:1331:41: error: ‘DAT_140fc7c20’ undeclared (first use in this function); did you mean ‘DAT_140fc7ad0’?

    1328:         else if (param_5 == 2) {
    1329:           uVar6 = ~uVar5 & *puStack_38;
    1330:         }
    1331:         if ((ushort)uVar4 < *(ushort *)*DAT_140fc7c20) {
    1332:           uVar5 = *(ulonglong *)((ushort *)*DAT_140fc7c20 + (uVar4 & 0xffff) * 4 + 4);
    1333:         }
    1334:         else {

## FUN_140201958 */ — reconstrucao/src/decompiled_01.c:1349
reconstrucao/src/decompiled_01.c:1349:9: error: ‘DAT_140fc7e74’ undeclared (first use in this function); did you mean ‘DAT_140fc7ad0’?

    1346:         lVar10 = lVar10 + 2;
    1347:       } while (uVar8 < 0x20);
    1348:       if (param_4 == 0) {
    1349:         DAT_140fc7e74 = uVar7;
    1350:       }
    1351:       DAT_140fc7bf8 = DAT_140fc7bf8 + 1;
    1352:       FUN_140202990(0);

## FUN_140201b84 */ — reconstrucao/src/decompiled_01.c:1372
reconstrucao/src/decompiled_01.c:1372:38: error: ‘DAT_140e2edc0’ undeclared (first use in this function); did you mean ‘DAT_140e0a740’?

    1369:   
    1370:   uVar1 = param_1[1];
    1371:   bVar2 = false;
    1372:   ExAcquireSpinLockSharedAtDpcLevel(&DAT_140e2edc0);
    1373:   if ((ushort)uVar1 < DAT_140e2edc8) {
    1374:     bVar2 = (*(ulonglong *)(&DAT_140e2edd0 + (ulonglong)(ushort)uVar1 * 8) & *param_1) != 0;
    1375:   }

## FUN_140201b84 */ — reconstrucao/src/decompiled_01.c:1373
reconstrucao/src/decompiled_01.c:1373:23: error: ‘DAT_140e2edc8’ undeclared (first use in this function)

    1370:   uVar1 = param_1[1];
    1371:   bVar2 = false;
    1372:   ExAcquireSpinLockSharedAtDpcLevel(&DAT_140e2edc0);
    1373:   if ((ushort)uVar1 < DAT_140e2edc8) {
    1374:     bVar2 = (*(ulonglong *)(&DAT_140e2edd0 + (ulonglong)(ushort)uVar1 * 8) & *param_1) != 0;
    1375:   }
    1376:   ExReleaseSpinLockSharedFromDpcLevel(&DAT_140e2edc0);

## FUN_140201b84 */ — reconstrucao/src/decompiled_01.c:1374
reconstrucao/src/decompiled_01.c:1374:30: error: ‘DAT_140e2edd0’ undeclared (first use in this function); did you mean ‘DAT_140fc7ad0’?

    1371:   bVar2 = false;
    1372:   ExAcquireSpinLockSharedAtDpcLevel(&DAT_140e2edc0);
    1373:   if ((ushort)uVar1 < DAT_140e2edc8) {
    1374:     bVar2 = (*(ulonglong *)(&DAT_140e2edd0 + (ulonglong)(ushort)uVar1 * 8) & *param_1) != 0;
    1375:   }
    1376:   ExReleaseSpinLockSharedFromDpcLevel(&DAT_140e2edc0);
    1377:   return bVar2;

## FUN_140201bf0 */ — reconstrucao/src/decompiled_01.c:1409
reconstrucao/src/decompiled_01.c:1409:23: error: ‘DAT_140fc601a’ undeclared (first use in this function); did you mean ‘DAT_140fc7ad0’?

    1406:   
    1407:   puVar16 = auStack_48;
    1408:   lVar5 = *param_1;
    1409:   uVar13 = (ulonglong)DAT_140fc601a;
    1410:   puVar15 = auStack_48;
    1411:   if (DAT_140fc7d20 != 0) goto LAB_140201cd7;
    1412:   do {

## FUN_140201bf0 */ — reconstrucao/src/decompiled_01.c:1411
reconstrucao/src/decompiled_01.c:1411:7: error: ‘DAT_140fc7d20’ undeclared (first use in this function); did you mean ‘DAT_140fc7ad0’?

    1408:   lVar5 = *param_1;
    1409:   uVar13 = (ulonglong)DAT_140fc601a;
    1410:   puVar15 = auStack_48;
    1411:   if (DAT_140fc7d20 != 0) goto LAB_140201cd7;
    1412:   do {
    1413:     LOCK();
    1414:     plVar1 = param_1 + 1;

## FUN_140201bf0 */ — reconstrucao/src/decompiled_01.c:1425
reconstrucao/src/decompiled_01.c:1425:41: error: ‘FiberData’ undeclared (first use in this function)

    1422:       UNLOCK();
    1423:       do {
    1424:       } while (0 < *(int *)((longlong)param_1 + 0xc));
    1425:       uVar4 = *(undefined4 *)((longlong)FiberData + 0x24);
    1426:       *(undefined8 *)(puVar15 + -2) = 0x140201c62;
    1427:       iVar10 = KeCheckProcessorAffinityEx(param_1 + 2,uVar4);
    1428:       if (iVar10 != 0) {

## FUN_140201bf0 */ — reconstrucao/src/decompiled_01.c:1444
reconstrucao/src/decompiled_01.c:1444:16: error: ‘DAT_140f23250’ undeclared (first use in this function); did you mean ‘DAT_140fc7ad0’?

    1441:     plVar11 = (longlong *)*plVar1;
    1442:     if (plVar11 == plVar1) {
    1443: LAB_140201ceb:
    1444:       plVar1 = DAT_140f23250;
    1445:       do {
    1446:         plVar11 = plVar1;
    1447:         plVar1 = (longlong *)*plVar11;

## FUN_140201bf0 */ — reconstrucao/src/decompiled_01.c:1492
reconstrucao/src/decompiled_01.c:1492:35: error: ‘DAT_140f23818’ undeclared (first use in this function); did you mean ‘DAT_140f0cf28’?

    1489:         uVar17 = uVar17 & ~(1L << (uVar7 & 0x3f));
    1490:         piVar2 = (int *)((longlong)plVar11 +
    1491:                         (ulonglong)
    1492:                         *(uint *)(DAT_140f23818 +
    1493:                                  (ulonglong)((uint)uVar14 * 0x40 + ((uint)uVar7 & 0xff)) * 4) * 4 +
    1494:                         0x120);
    1495:         *piVar2 = *piVar2 + -1;

## FUN_140201e00 */ — reconstrucao/src/decompiled_01.c:1527
reconstrucao/src/decompiled_01.c:1527:40: error: ‘DAT_140e27f48’ undeclared (first use in this function); did you mean ‘DAT_140f0cf28’?

    1524:   undefined1 uVar1;
    1525:   undefined8 uVar2;
    1526:   
    1527:   uVar1 = KeAcquireSpinLockRaiseToDpc(&DAT_140e27f48);
    1528:   if (param_1 == '\0') {
    1529:     DAT_140e27f44 = DAT_140e27f44 + -1;
    1530:     if (DAT_140e27f44 != 0) goto LAB_140201e85;

## FUN_140201e00 */ — reconstrucao/src/decompiled_01.c:1529
reconstrucao/src/decompiled_01.c:1529:5: error: ‘DAT_140e27f44’ undeclared (first use in this function); did you mean ‘DAT_140e0a740’?

    1526:   
    1527:   uVar1 = KeAcquireSpinLockRaiseToDpc(&DAT_140e27f48);
    1528:   if (param_1 == '\0') {
    1529:     DAT_140e27f44 = DAT_140e27f44 + -1;
    1530:     if (DAT_140e27f44 != 0) goto LAB_140201e85;
    1531:     FUN_14049fa04(1,&DAT_140e27df0,&DAT_140e27df8);
    1532:     uVar2 = 1;

## FUN_140201e00 */ — reconstrucao/src/decompiled_01.c:1531
reconstrucao/src/decompiled_01.c:1531:22: error: ‘DAT_140e27df0’ undeclared (first use in this function); did you mean ‘DAT_140fc7ad0’?

    1528:   if (param_1 == '\0') {
    1529:     DAT_140e27f44 = DAT_140e27f44 + -1;
    1530:     if (DAT_140e27f44 != 0) goto LAB_140201e85;
    1531:     FUN_14049fa04(1,&DAT_140e27df0,&DAT_140e27df8);
    1532:     uVar2 = 1;
    1533:   }
    1534:   else {

## FUN_140201e00 */ — reconstrucao/src/decompiled_01.c:1531
reconstrucao/src/decompiled_01.c:1531:37: error: ‘DAT_140e27df8’ undeclared (first use in this function)

    1528:   if (param_1 == '\0') {
    1529:     DAT_140e27f44 = DAT_140e27f44 + -1;
    1530:     if (DAT_140e27f44 != 0) goto LAB_140201e85;
    1531:     FUN_14049fa04(1,&DAT_140e27df0,&DAT_140e27df8);
    1532:     uVar2 = 1;
    1533:   }
    1534:   else {

## FUN_140201e00 */ — reconstrucao/src/decompiled_01.c:1540
reconstrucao/src/decompiled_01.c:1540:24: error: ‘DAT_140e27e00’ undeclared (first use in this function); did you mean ‘DAT_140fc7ad0’?

    1537:     FUN_14049fa04(0,&DAT_140e27df0,&DAT_140e27df8);
    1538:     uVar2 = 0;
    1539:   }
    1540:   FUN_14049f910(uVar2,&DAT_140e27e00,&DAT_140e27e08,&DAT_140e27e10);
    1541: LAB_140201e85:
    1542:   FUN_140200dcc(DAT_140e27f44);
    1543:   KeReleaseSpinLock(&DAT_140e27f48,uVar1);

## FUN_140201e00 */ — reconstrucao/src/decompiled_01.c:1540
reconstrucao/src/decompiled_01.c:1540:39: error: ‘DAT_140e27e08’ undeclared (first use in this function); did you mean ‘FUN_140827e08’?

    1537:     FUN_14049fa04(0,&DAT_140e27df0,&DAT_140e27df8);
    1538:     uVar2 = 0;
    1539:   }
    1540:   FUN_14049f910(uVar2,&DAT_140e27e00,&DAT_140e27e08,&DAT_140e27e10);
    1541: LAB_140201e85:
    1542:   FUN_140200dcc(DAT_140e27f44);
    1543:   KeReleaseSpinLock(&DAT_140e27f48,uVar1);

## FUN_140201e00 */ — reconstrucao/src/decompiled_01.c:1540
reconstrucao/src/decompiled_01.c:1540:54: error: ‘DAT_140e27e10’ undeclared (first use in this function); did you mean ‘DAT_140fc7ad0’?

    1537:     FUN_14049fa04(0,&DAT_140e27df0,&DAT_140e27df8);
    1538:     uVar2 = 0;
    1539:   }
    1540:   FUN_14049f910(uVar2,&DAT_140e27e00,&DAT_140e27e08,&DAT_140e27e10);
    1541: LAB_140201e85:
    1542:   FUN_140200dcc(DAT_140e27f44);
    1543:   KeReleaseSpinLock(&DAT_140e27f48,uVar1);

## FUN_140201ec0 */ — reconstrucao/src/decompiled_01.c:1593
reconstrucao/src/decompiled_01.c:1593:75: error: ‘FiberData’ undeclared (first use in this function)

    1590:     }
    1591:     if (acStack_138[0] != '\0') {
    1592:       puVar1 = puVar1 + (ulonglong)uVar2 * 0x70 + 0x20;
    1593:       iVar5 = KeCheckProcessorAffinityEx(puVar1,*(undefined4 *)((longlong)FiberData + 0x24));
    1594:       if (iVar5 == 0) {
    1595:         KeReleaseSpinLock(&DAT_140f0cf28,uVar3);
    1596:         uStack_124 = 0;

## FUN_140201ec0 */ — reconstrucao/src/decompiled_01.c:1599
reconstrucao/src/decompiled_01.c:1599:46: error: passing argument 1 of ‘KeFindFirstSetLeftAffinityEx’ from incompatible pointer type [-Wincompatible-pointer-types]

    1596:         uStack_124 = 0;
    1597:         uStack_128 = 0x200001;
    1598:         FUN_1406d1200(auStack_120,0,0x100);
    1599:         uVar6 = KeFindFirstSetLeftAffinityEx(puVar1);
    1600:         KeAddProcessorAffinityEx(&uStack_128,uVar6);
    1601:         FUN_14038b9f4(&uStack_128,HalAdjustResourceList,0,0);
    1602:         return iVar4;

## FUN_140201ec0 */ — reconstrucao/src/decompiled_01.c:1601
reconstrucao/src/decompiled_01.c:1601:23: error: passing argument 1 of ‘FUN_14038b9f4’ makes integer from pointer without a cast [-Wint-conversion]

    1598:         FUN_1406d1200(auStack_120,0,0x100);
    1599:         uVar6 = KeFindFirstSetLeftAffinityEx(puVar1);
    1600:         KeAddProcessorAffinityEx(&uStack_128,uVar6);
    1601:         FUN_14038b9f4(&uStack_128,HalAdjustResourceList,0,0);
    1602:         return iVar4;
    1603:       }
    1604:     }

## FUN_140201ec0 */ — reconstrucao/src/decompiled_01.c:1601
reconstrucao/src/decompiled_01.c:1601:35: error: passing argument 2 of ‘FUN_14038b9f4’ makes integer from pointer without a cast [-Wint-conversion]

    1598:         FUN_1406d1200(auStack_120,0,0x100);
    1599:         uVar6 = KeFindFirstSetLeftAffinityEx(puVar1);
    1600:         KeAddProcessorAffinityEx(&uStack_128,uVar6);
    1601:         FUN_14038b9f4(&uStack_128,HalAdjustResourceList,0,0);
    1602:         return iVar4;
    1603:       }
    1604:     }

## FUN_140202010 */ — reconstrucao/src/decompiled_01.c:1690
reconstrucao/src/decompiled_01.c:1690:19: error: assignment to ‘undefined8’ {aka ‘long unsigned int’} from ‘uint *’ {aka ‘unsigned int *’} makes integer from pointer without a cast [-Wint-conversion]

    1687:           } while ((uint *)*puVar5 != puVar1);
    1688:           *(uint **)puVar8 = puVar1;
    1689:           *(undefined8 **)(puVar8 + 2) = puVar5;
    1690:           *puVar5 = puVar8;
    1691:           *(uint **)(param_3 + 4) = puVar8;
    1692:           return 0;
    1693:         }

## FUN_1402021f4 */ — reconstrucao/src/decompiled_01.c:1756
reconstrucao/src/decompiled_01.c:1756:13: error: ‘DAT_140010410’ undeclared (first use in this function); did you mean ‘DAT_140e0a740’?

    1753:   ulonglong uStack_18;
    1754:   
    1755:   uStack_18 = DAT_140e0a740 ^ (ulonglong)auStack_78;
    1756:   puVar2 = &DAT_140010410;
    1757:   if (param_3 != '\0') {
    1758:     puVar2 = &DAT_140010420;
    1759:   }

## FUN_1402021f4 */ — reconstrucao/src/decompiled_01.c:1758
reconstrucao/src/decompiled_01.c:1758:15: error: ‘DAT_140010420’ undeclared (first use in this function); did you mean ‘DAT_140e0a740’?

    1755:   uStack_18 = DAT_140e0a740 ^ (ulonglong)auStack_78;
    1756:   puVar2 = &DAT_140010410;
    1757:   if (param_3 != '\0') {
    1758:     puVar2 = &DAT_140010420;
    1759:   }
    1760:   if (DAT_140e67b01 != '\0') {
    1761:     auStackX_8[0] = param_1;

## FUN_1402021f4 */ — reconstrucao/src/decompiled_01.c:1760
reconstrucao/src/decompiled_01.c:1760:7: error: ‘DAT_140e67b01’ undeclared (first use in this function); did you mean ‘DAT_140e0a740’?

    1757:   if (param_3 != '\0') {
    1758:     puVar2 = &DAT_140010420;
    1759:   }
    1760:   if (DAT_140e67b01 != '\0') {
    1761:     auStackX_8[0] = param_1;
    1762:     auStackX_10[0] = param_2;
    1763:     cVar1 = EtwEventEnabled(DAT_140f085e0,puVar2);

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:157
reconstrucao/src/decompiled_02.c:157:10: error: request for member ‘_8_8_’ in something not a structure or union

    154:   ulonglong uVar86;
    155:   
    156:   uVar1 = *param_2;
    157:   auVar16._8_8_ = 0;
    158:   auVar16._0_8_ = uVar1;
    159:   auVar48._8_8_ = 0;
    160:   auVar48._0_8_ = *param_3;

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:158
reconstrucao/src/decompiled_02.c:158:10: error: request for member ‘_0_8_’ in something not a structure or union

    155:   
    156:   uVar1 = *param_2;
    157:   auVar16._8_8_ = 0;
    158:   auVar16._0_8_ = uVar1;
    159:   auVar48._8_8_ = 0;
    160:   auVar48._0_8_ = *param_3;
    161:   uVar4 = SUB168(auVar16 * auVar48,0);

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:159
reconstrucao/src/decompiled_02.c:159:10: error: request for member ‘_8_8_’ in something not a structure or union

    156:   uVar1 = *param_2;
    157:   auVar16._8_8_ = 0;
    158:   auVar16._0_8_ = uVar1;
    159:   auVar48._8_8_ = 0;
    160:   auVar48._0_8_ = *param_3;
    161:   uVar4 = SUB168(auVar16 * auVar48,0);
    162:   uVar83 = SUB168(auVar16 * auVar48,8);

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:160
reconstrucao/src/decompiled_02.c:160:10: error: request for member ‘_0_8_’ in something not a structure or union

    157:   auVar16._8_8_ = 0;
    158:   auVar16._0_8_ = uVar1;
    159:   auVar48._8_8_ = 0;
    160:   auVar48._0_8_ = *param_3;
    161:   uVar4 = SUB168(auVar16 * auVar48,0);
    162:   uVar83 = SUB168(auVar16 * auVar48,8);
    163:   auVar17._8_8_ = 0;

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:161
reconstrucao/src/decompiled_02.c:161:11: error: implicit declaration of function ‘SUB168’ [-Wimplicit-function-declaration]

    158:   auVar16._0_8_ = uVar1;
    159:   auVar48._8_8_ = 0;
    160:   auVar48._0_8_ = *param_3;
    161:   uVar4 = SUB168(auVar16 * auVar48,0);
    162:   uVar83 = SUB168(auVar16 * auVar48,8);
    163:   auVar17._8_8_ = 0;
    164:   auVar17._0_8_ = uVar1;

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:161
reconstrucao/src/decompiled_02.c:161:26: error: invalid operands to binary * (have ‘undefined1 *’ {aka ‘unsigned char *’} and ‘undefined1 *’ {aka ‘unsigned char *’})

    158:   auVar16._0_8_ = uVar1;
    159:   auVar48._8_8_ = 0;
    160:   auVar48._0_8_ = *param_3;
    161:   uVar4 = SUB168(auVar16 * auVar48,0);
    162:   uVar83 = SUB168(auVar16 * auVar48,8);
    163:   auVar17._8_8_ = 0;
    164:   auVar17._0_8_ = uVar1;

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:162
reconstrucao/src/decompiled_02.c:162:27: error: invalid operands to binary * (have ‘undefined1 *’ {aka ‘unsigned char *’} and ‘undefined1 *’ {aka ‘unsigned char *’})

    159:   auVar48._8_8_ = 0;
    160:   auVar48._0_8_ = *param_3;
    161:   uVar4 = SUB168(auVar16 * auVar48,0);
    162:   uVar83 = SUB168(auVar16 * auVar48,8);
    163:   auVar17._8_8_ = 0;
    164:   auVar17._0_8_ = uVar1;
    165:   auVar49._8_8_ = 0;

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:163
reconstrucao/src/decompiled_02.c:163:10: error: request for member ‘_8_8_’ in something not a structure or union

    160:   auVar48._0_8_ = *param_3;
    161:   uVar4 = SUB168(auVar16 * auVar48,0);
    162:   uVar83 = SUB168(auVar16 * auVar48,8);
    163:   auVar17._8_8_ = 0;
    164:   auVar17._0_8_ = uVar1;
    165:   auVar49._8_8_ = 0;
    166:   auVar49._0_8_ = param_3[1];

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:164
reconstrucao/src/decompiled_02.c:164:10: error: request for member ‘_0_8_’ in something not a structure or union

    161:   uVar4 = SUB168(auVar16 * auVar48,0);
    162:   uVar83 = SUB168(auVar16 * auVar48,8);
    163:   auVar17._8_8_ = 0;
    164:   auVar17._0_8_ = uVar1;
    165:   auVar49._8_8_ = 0;
    166:   auVar49._0_8_ = param_3[1];
    167:   uVar7 = SUB168(auVar17 * auVar49,0);

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:165
reconstrucao/src/decompiled_02.c:165:10: error: request for member ‘_8_8_’ in something not a structure or union

    162:   uVar83 = SUB168(auVar16 * auVar48,8);
    163:   auVar17._8_8_ = 0;
    164:   auVar17._0_8_ = uVar1;
    165:   auVar49._8_8_ = 0;
    166:   auVar49._0_8_ = param_3[1];
    167:   uVar7 = SUB168(auVar17 * auVar49,0);
    168:   uVar82 = SUB168(auVar17 * auVar49,8);

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:166
reconstrucao/src/decompiled_02.c:166:10: error: request for member ‘_0_8_’ in something not a structure or union

    163:   auVar17._8_8_ = 0;
    164:   auVar17._0_8_ = uVar1;
    165:   auVar49._8_8_ = 0;
    166:   auVar49._0_8_ = param_3[1];
    167:   uVar7 = SUB168(auVar17 * auVar49,0);
    168:   uVar82 = SUB168(auVar17 * auVar49,8);
    169:   auVar18._8_8_ = 0;

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:167
reconstrucao/src/decompiled_02.c:167:26: error: invalid operands to binary * (have ‘undefined1 *’ {aka ‘unsigned char *’} and ‘undefined1 *’ {aka ‘unsigned char *’})

    164:   auVar17._0_8_ = uVar1;
    165:   auVar49._8_8_ = 0;
    166:   auVar49._0_8_ = param_3[1];
    167:   uVar7 = SUB168(auVar17 * auVar49,0);
    168:   uVar82 = SUB168(auVar17 * auVar49,8);
    169:   auVar18._8_8_ = 0;
    170:   auVar18._0_8_ = uVar1;

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:168
reconstrucao/src/decompiled_02.c:168:27: error: invalid operands to binary * (have ‘undefined1 *’ {aka ‘unsigned char *’} and ‘undefined1 *’ {aka ‘unsigned char *’})

    165:   auVar49._8_8_ = 0;
    166:   auVar49._0_8_ = param_3[1];
    167:   uVar7 = SUB168(auVar17 * auVar49,0);
    168:   uVar82 = SUB168(auVar17 * auVar49,8);
    169:   auVar18._8_8_ = 0;
    170:   auVar18._0_8_ = uVar1;
    171:   auVar50._8_8_ = 0;

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:169
reconstrucao/src/decompiled_02.c:169:10: error: request for member ‘_8_8_’ in something not a structure or union

    166:   auVar49._0_8_ = param_3[1];
    167:   uVar7 = SUB168(auVar17 * auVar49,0);
    168:   uVar82 = SUB168(auVar17 * auVar49,8);
    169:   auVar18._8_8_ = 0;
    170:   auVar18._0_8_ = uVar1;
    171:   auVar50._8_8_ = 0;
    172:   auVar50._0_8_ = param_3[2];

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:170
reconstrucao/src/decompiled_02.c:170:10: error: request for member ‘_0_8_’ in something not a structure or union

    167:   uVar7 = SUB168(auVar17 * auVar49,0);
    168:   uVar82 = SUB168(auVar17 * auVar49,8);
    169:   auVar18._8_8_ = 0;
    170:   auVar18._0_8_ = uVar1;
    171:   auVar50._8_8_ = 0;
    172:   auVar50._0_8_ = param_3[2];
    173:   uVar2 = SUB168(auVar18 * auVar50,0);

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:171
reconstrucao/src/decompiled_02.c:171:10: error: request for member ‘_8_8_’ in something not a structure or union

    168:   uVar82 = SUB168(auVar17 * auVar49,8);
    169:   auVar18._8_8_ = 0;
    170:   auVar18._0_8_ = uVar1;
    171:   auVar50._8_8_ = 0;
    172:   auVar50._0_8_ = param_3[2];
    173:   uVar2 = SUB168(auVar18 * auVar50,0);
    174:   uVar81 = SUB168(auVar18 * auVar50,8);

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:172
reconstrucao/src/decompiled_02.c:172:10: error: request for member ‘_0_8_’ in something not a structure or union

    169:   auVar18._8_8_ = 0;
    170:   auVar18._0_8_ = uVar1;
    171:   auVar50._8_8_ = 0;
    172:   auVar50._0_8_ = param_3[2];
    173:   uVar2 = SUB168(auVar18 * auVar50,0);
    174:   uVar81 = SUB168(auVar18 * auVar50,8);
    175:   uVar86 = (ulonglong)CARRY8(uVar83,uVar7);

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:173
reconstrucao/src/decompiled_02.c:173:26: error: invalid operands to binary * (have ‘undefined1 *’ {aka ‘unsigned char *’} and ‘undefined1 *’ {aka ‘unsigned char *’})

    170:   auVar18._0_8_ = uVar1;
    171:   auVar50._8_8_ = 0;
    172:   auVar50._0_8_ = param_3[2];
    173:   uVar2 = SUB168(auVar18 * auVar50,0);
    174:   uVar81 = SUB168(auVar18 * auVar50,8);
    175:   uVar86 = (ulonglong)CARRY8(uVar83,uVar7);
    176:   uVar3 = uVar82 + uVar2;

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:174
reconstrucao/src/decompiled_02.c:174:27: error: invalid operands to binary * (have ‘undefined1 *’ {aka ‘unsigned char *’} and ‘undefined1 *’ {aka ‘unsigned char *’})

    171:   auVar50._8_8_ = 0;
    172:   auVar50._0_8_ = param_3[2];
    173:   uVar2 = SUB168(auVar18 * auVar50,0);
    174:   uVar81 = SUB168(auVar18 * auVar50,8);
    175:   uVar86 = (ulonglong)CARRY8(uVar83,uVar7);
    176:   uVar3 = uVar82 + uVar2;
    177:   auVar19._8_8_ = 0;

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:175
reconstrucao/src/decompiled_02.c:175:23: error: implicit declaration of function ‘CARRY8’ [-Wimplicit-function-declaration]

    172:   auVar50._0_8_ = param_3[2];
    173:   uVar2 = SUB168(auVar18 * auVar50,0);
    174:   uVar81 = SUB168(auVar18 * auVar50,8);
    175:   uVar86 = (ulonglong)CARRY8(uVar83,uVar7);
    176:   uVar3 = uVar82 + uVar2;
    177:   auVar19._8_8_ = 0;
    178:   auVar19._0_8_ = uVar1;

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:177
reconstrucao/src/decompiled_02.c:177:10: error: request for member ‘_8_8_’ in something not a structure or union

    174:   uVar81 = SUB168(auVar18 * auVar50,8);
    175:   uVar86 = (ulonglong)CARRY8(uVar83,uVar7);
    176:   uVar3 = uVar82 + uVar2;
    177:   auVar19._8_8_ = 0;
    178:   auVar19._0_8_ = uVar1;
    179:   auVar51._8_8_ = 0;
    180:   auVar51._0_8_ = param_3[3];

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:178
reconstrucao/src/decompiled_02.c:178:10: error: request for member ‘_0_8_’ in something not a structure or union

    175:   uVar86 = (ulonglong)CARRY8(uVar83,uVar7);
    176:   uVar3 = uVar82 + uVar2;
    177:   auVar19._8_8_ = 0;
    178:   auVar19._0_8_ = uVar1;
    179:   auVar51._8_8_ = 0;
    180:   auVar51._0_8_ = param_3[3];
    181:   uVar5 = SUB168(auVar19 * auVar51,0);

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:179
reconstrucao/src/decompiled_02.c:179:10: error: request for member ‘_8_8_’ in something not a structure or union

    176:   uVar3 = uVar82 + uVar2;
    177:   auVar19._8_8_ = 0;
    178:   auVar19._0_8_ = uVar1;
    179:   auVar51._8_8_ = 0;
    180:   auVar51._0_8_ = param_3[3];
    181:   uVar5 = SUB168(auVar19 * auVar51,0);
    182:   uVar2 = (ulonglong)(CARRY8(uVar82,uVar2) || CARRY8(uVar3,uVar86));

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:180
reconstrucao/src/decompiled_02.c:180:10: error: request for member ‘_0_8_’ in something not a structure or union

    177:   auVar19._8_8_ = 0;
    178:   auVar19._0_8_ = uVar1;
    179:   auVar51._8_8_ = 0;
    180:   auVar51._0_8_ = param_3[3];
    181:   uVar5 = SUB168(auVar19 * auVar51,0);
    182:   uVar2 = (ulonglong)(CARRY8(uVar82,uVar2) || CARRY8(uVar3,uVar86));
    183:   uVar82 = uVar81 + uVar5;

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:181
reconstrucao/src/decompiled_02.c:181:26: error: invalid operands to binary * (have ‘undefined1 *’ {aka ‘unsigned char *’} and ‘undefined1 *’ {aka ‘unsigned char *’})

    178:   auVar19._0_8_ = uVar1;
    179:   auVar51._8_8_ = 0;
    180:   auVar51._0_8_ = param_3[3];
    181:   uVar5 = SUB168(auVar19 * auVar51,0);
    182:   uVar2 = (ulonglong)(CARRY8(uVar82,uVar2) || CARRY8(uVar3,uVar86));
    183:   uVar82 = uVar81 + uVar5;
    184:   uVar85 = uVar4 * *(longlong *)(param_1 + 0x18);

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:187
reconstrucao/src/decompiled_02.c:187:10: error: request for member ‘_8_8_’ in something not a structure or union

    184:   uVar85 = uVar4 * *(longlong *)(param_1 + 0x18);
    185:   puVar80 = (ulonglong *)(param_1 + 0x80);
    186:   uVar1 = param_2[1];
    187:   auVar20._8_8_ = 0;
    188:   auVar20._0_8_ = uVar1;
    189:   auVar52._8_8_ = 0;
    190:   auVar52._0_8_ = *param_3;

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:188
reconstrucao/src/decompiled_02.c:188:10: error: request for member ‘_0_8_’ in something not a structure or union

    185:   puVar80 = (ulonglong *)(param_1 + 0x80);
    186:   uVar1 = param_2[1];
    187:   auVar20._8_8_ = 0;
    188:   auVar20._0_8_ = uVar1;
    189:   auVar52._8_8_ = 0;
    190:   auVar52._0_8_ = *param_3;
    191:   Var10 = (unkuint9)(uVar83 + uVar7) + (unkuint9)SUB168(auVar20 * auVar52,0);

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:189
reconstrucao/src/decompiled_02.c:189:10: error: request for member ‘_8_8_’ in something not a structure or union

    186:   uVar1 = param_2[1];
    187:   auVar20._8_8_ = 0;
    188:   auVar20._0_8_ = uVar1;
    189:   auVar52._8_8_ = 0;
    190:   auVar52._0_8_ = *param_3;
    191:   Var10 = (unkuint9)(uVar83 + uVar7) + (unkuint9)SUB168(auVar20 * auVar52,0);
    192:   Var6 = (unkuint9)(uVar3 + uVar86) + (unkuint9)SUB168(auVar20 * auVar52,8);

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:190
reconstrucao/src/decompiled_02.c:190:10: error: request for member ‘_0_8_’ in something not a structure or union

    187:   auVar20._8_8_ = 0;
    188:   auVar20._0_8_ = uVar1;
    189:   auVar52._8_8_ = 0;
    190:   auVar52._0_8_ = *param_3;
    191:   Var10 = (unkuint9)(uVar83 + uVar7) + (unkuint9)SUB168(auVar20 * auVar52,0);
    192:   Var6 = (unkuint9)(uVar3 + uVar86) + (unkuint9)SUB168(auVar20 * auVar52,8);
    193:   auVar21._8_8_ = 0;

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:191
reconstrucao/src/decompiled_02.c:191:65: error: invalid operands to binary * (have ‘undefined1 *’ {aka ‘unsigned char *’} and ‘undefined1 *’ {aka ‘unsigned char *’})

    188:   auVar20._0_8_ = uVar1;
    189:   auVar52._8_8_ = 0;
    190:   auVar52._0_8_ = *param_3;
    191:   Var10 = (unkuint9)(uVar83 + uVar7) + (unkuint9)SUB168(auVar20 * auVar52,0);
    192:   Var6 = (unkuint9)(uVar3 + uVar86) + (unkuint9)SUB168(auVar20 * auVar52,8);
    193:   auVar21._8_8_ = 0;
    194:   auVar21._0_8_ = uVar1;

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:192
reconstrucao/src/decompiled_02.c:192:64: error: invalid operands to binary * (have ‘undefined1 *’ {aka ‘unsigned char *’} and ‘undefined1 *’ {aka ‘unsigned char *’})

    189:   auVar52._8_8_ = 0;
    190:   auVar52._0_8_ = *param_3;
    191:   Var10 = (unkuint9)(uVar83 + uVar7) + (unkuint9)SUB168(auVar20 * auVar52,0);
    192:   Var6 = (unkuint9)(uVar3 + uVar86) + (unkuint9)SUB168(auVar20 * auVar52,8);
    193:   auVar21._8_8_ = 0;
    194:   auVar21._0_8_ = uVar1;
    195:   auVar53._8_8_ = 0;

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:193
reconstrucao/src/decompiled_02.c:193:10: error: request for member ‘_8_8_’ in something not a structure or union

    190:   auVar52._0_8_ = *param_3;
    191:   Var10 = (unkuint9)(uVar83 + uVar7) + (unkuint9)SUB168(auVar20 * auVar52,0);
    192:   Var6 = (unkuint9)(uVar3 + uVar86) + (unkuint9)SUB168(auVar20 * auVar52,8);
    193:   auVar21._8_8_ = 0;
    194:   auVar21._0_8_ = uVar1;
    195:   auVar53._8_8_ = 0;
    196:   auVar53._0_8_ = param_3[1];

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:194
reconstrucao/src/decompiled_02.c:194:10: error: request for member ‘_0_8_’ in something not a structure or union

    191:   Var10 = (unkuint9)(uVar83 + uVar7) + (unkuint9)SUB168(auVar20 * auVar52,0);
    192:   Var6 = (unkuint9)(uVar3 + uVar86) + (unkuint9)SUB168(auVar20 * auVar52,8);
    193:   auVar21._8_8_ = 0;
    194:   auVar21._0_8_ = uVar1;
    195:   auVar53._8_8_ = 0;
    196:   auVar53._0_8_ = param_3[1];
    197:   Var12 = (unkuint9)(ulonglong)Var6 + (unkuint9)SUB168(auVar21 * auVar53,0) +

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:195
reconstrucao/src/decompiled_02.c:195:10: error: request for member ‘_8_8_’ in something not a structure or union

    192:   Var6 = (unkuint9)(uVar3 + uVar86) + (unkuint9)SUB168(auVar20 * auVar52,8);
    193:   auVar21._8_8_ = 0;
    194:   auVar21._0_8_ = uVar1;
    195:   auVar53._8_8_ = 0;
    196:   auVar53._0_8_ = param_3[1];
    197:   Var12 = (unkuint9)(ulonglong)Var6 + (unkuint9)SUB168(auVar21 * auVar53,0) +
    198:           (unkuint9)((char)((unkuint9)Var10 >> 0x40) != '\0');

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:196
reconstrucao/src/decompiled_02.c:196:10: error: request for member ‘_0_8_’ in something not a structure or union

    193:   auVar21._8_8_ = 0;
    194:   auVar21._0_8_ = uVar1;
    195:   auVar53._8_8_ = 0;
    196:   auVar53._0_8_ = param_3[1];
    197:   Var12 = (unkuint9)(ulonglong)Var6 + (unkuint9)SUB168(auVar21 * auVar53,0) +
    198:           (unkuint9)((char)((unkuint9)Var10 >> 0x40) != '\0');
    199:   Var6 = (unkuint9)(uVar82 + uVar2) + (unkuint9)SUB168(auVar21 * auVar53,8) +

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:197
reconstrucao/src/decompiled_02.c:197:64: error: invalid operands to binary * (have ‘undefined1 *’ {aka ‘unsigned char *’} and ‘undefined1 *’ {aka ‘unsigned char *’})

    194:   auVar21._0_8_ = uVar1;
    195:   auVar53._8_8_ = 0;
    196:   auVar53._0_8_ = param_3[1];
    197:   Var12 = (unkuint9)(ulonglong)Var6 + (unkuint9)SUB168(auVar21 * auVar53,0) +
    198:           (unkuint9)((char)((unkuint9)Var10 >> 0x40) != '\0');
    199:   Var6 = (unkuint9)(uVar82 + uVar2) + (unkuint9)SUB168(auVar21 * auVar53,8) +
    200:          (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:199
reconstrucao/src/decompiled_02.c:199:64: error: invalid operands to binary * (have ‘undefined1 *’ {aka ‘unsigned char *’} and ‘undefined1 *’ {aka ‘unsigned char *’})

    196:   auVar53._0_8_ = param_3[1];
    197:   Var12 = (unkuint9)(ulonglong)Var6 + (unkuint9)SUB168(auVar21 * auVar53,0) +
    198:           (unkuint9)((char)((unkuint9)Var10 >> 0x40) != '\0');
    199:   Var6 = (unkuint9)(uVar82 + uVar2) + (unkuint9)SUB168(auVar21 * auVar53,8) +
    200:          (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
    201:   auVar22._8_8_ = 0;
    202:   auVar22._0_8_ = uVar1;

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:201
reconstrucao/src/decompiled_02.c:201:10: error: request for member ‘_8_8_’ in something not a structure or union

    198:           (unkuint9)((char)((unkuint9)Var10 >> 0x40) != '\0');
    199:   Var6 = (unkuint9)(uVar82 + uVar2) + (unkuint9)SUB168(auVar21 * auVar53,8) +
    200:          (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
    201:   auVar22._8_8_ = 0;
    202:   auVar22._0_8_ = uVar1;
    203:   auVar54._8_8_ = 0;
    204:   auVar54._0_8_ = param_3[2];

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:202
reconstrucao/src/decompiled_02.c:202:10: error: request for member ‘_0_8_’ in something not a structure or union

    199:   Var6 = (unkuint9)(uVar82 + uVar2) + (unkuint9)SUB168(auVar21 * auVar53,8) +
    200:          (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
    201:   auVar22._8_8_ = 0;
    202:   auVar22._0_8_ = uVar1;
    203:   auVar54._8_8_ = 0;
    204:   auVar54._0_8_ = param_3[2];
    205:   Var13 = (unkuint9)(ulonglong)Var6 + (unkuint9)SUB168(auVar22 * auVar54,0) +

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:203
reconstrucao/src/decompiled_02.c:203:10: error: request for member ‘_8_8_’ in something not a structure or union

    200:          (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
    201:   auVar22._8_8_ = 0;
    202:   auVar22._0_8_ = uVar1;
    203:   auVar54._8_8_ = 0;
    204:   auVar54._0_8_ = param_3[2];
    205:   Var13 = (unkuint9)(ulonglong)Var6 + (unkuint9)SUB168(auVar22 * auVar54,0) +
    206:           (unkuint9)((char)((unkuint9)Var12 >> 0x40) != '\0');

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:204
reconstrucao/src/decompiled_02.c:204:10: error: request for member ‘_0_8_’ in something not a structure or union

    201:   auVar22._8_8_ = 0;
    202:   auVar22._0_8_ = uVar1;
    203:   auVar54._8_8_ = 0;
    204:   auVar54._0_8_ = param_3[2];
    205:   Var13 = (unkuint9)(ulonglong)Var6 + (unkuint9)SUB168(auVar22 * auVar54,0) +
    206:           (unkuint9)((char)((unkuint9)Var12 >> 0x40) != '\0');
    207:   Var6 = (unkuint9)

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:205
reconstrucao/src/decompiled_02.c:205:64: error: invalid operands to binary * (have ‘undefined1 *’ {aka ‘unsigned char *’} and ‘undefined1 *’ {aka ‘unsigned char *’})

    202:   auVar22._0_8_ = uVar1;
    203:   auVar54._8_8_ = 0;
    204:   auVar54._0_8_ = param_3[2];
    205:   Var13 = (unkuint9)(ulonglong)Var6 + (unkuint9)SUB168(auVar22 * auVar54,0) +
    206:           (unkuint9)((char)((unkuint9)Var12 >> 0x40) != '\0');
    207:   Var6 = (unkuint9)
    208:          (SUB168(auVar19 * auVar51,8) + (ulonglong)(CARRY8(uVar81,uVar5) || CARRY8(uVar82,uVar2))) +

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:208
reconstrucao/src/decompiled_02.c:208:26: error: invalid operands to binary * (have ‘undefined1 *’ {aka ‘unsigned char *’} and ‘undefined1 *’ {aka ‘unsigned char *’})

    205:   Var13 = (unkuint9)(ulonglong)Var6 + (unkuint9)SUB168(auVar22 * auVar54,0) +
    206:           (unkuint9)((char)((unkuint9)Var12 >> 0x40) != '\0');
    207:   Var6 = (unkuint9)
    208:          (SUB168(auVar19 * auVar51,8) + (ulonglong)(CARRY8(uVar81,uVar5) || CARRY8(uVar82,uVar2))) +
    209:          (unkuint9)SUB168(auVar22 * auVar54,8) + (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
    210:   auVar23._8_8_ = 0;
    211:   auVar23._0_8_ = uVar1;

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:209
reconstrucao/src/decompiled_02.c:209:35: error: invalid operands to binary * (have ‘undefined1 *’ {aka ‘unsigned char *’} and ‘undefined1 *’ {aka ‘unsigned char *’})

    206:           (unkuint9)((char)((unkuint9)Var12 >> 0x40) != '\0');
    207:   Var6 = (unkuint9)
    208:          (SUB168(auVar19 * auVar51,8) + (ulonglong)(CARRY8(uVar81,uVar5) || CARRY8(uVar82,uVar2))) +
    209:          (unkuint9)SUB168(auVar22 * auVar54,8) + (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
    210:   auVar23._8_8_ = 0;
    211:   auVar23._0_8_ = uVar1;
    212:   auVar55._8_8_ = 0;

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:210
reconstrucao/src/decompiled_02.c:210:10: error: request for member ‘_8_8_’ in something not a structure or union

    207:   Var6 = (unkuint9)
    208:          (SUB168(auVar19 * auVar51,8) + (ulonglong)(CARRY8(uVar81,uVar5) || CARRY8(uVar82,uVar2))) +
    209:          (unkuint9)SUB168(auVar22 * auVar54,8) + (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
    210:   auVar23._8_8_ = 0;
    211:   auVar23._0_8_ = uVar1;
    212:   auVar55._8_8_ = 0;
    213:   auVar55._0_8_ = param_3[3];

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:211
reconstrucao/src/decompiled_02.c:211:10: error: request for member ‘_0_8_’ in something not a structure or union

    208:          (SUB168(auVar19 * auVar51,8) + (ulonglong)(CARRY8(uVar81,uVar5) || CARRY8(uVar82,uVar2))) +
    209:          (unkuint9)SUB168(auVar22 * auVar54,8) + (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
    210:   auVar23._8_8_ = 0;
    211:   auVar23._0_8_ = uVar1;
    212:   auVar55._8_8_ = 0;
    213:   auVar55._0_8_ = param_3[3];
    214:   Var14 = (unkuint9)(ulonglong)Var6 + (unkuint9)SUB168(auVar23 * auVar55,0) +

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:212
reconstrucao/src/decompiled_02.c:212:10: error: request for member ‘_8_8_’ in something not a structure or union

    209:          (unkuint9)SUB168(auVar22 * auVar54,8) + (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
    210:   auVar23._8_8_ = 0;
    211:   auVar23._0_8_ = uVar1;
    212:   auVar55._8_8_ = 0;
    213:   auVar55._0_8_ = param_3[3];
    214:   Var14 = (unkuint9)(ulonglong)Var6 + (unkuint9)SUB168(auVar23 * auVar55,0) +
    215:           (unkuint9)((char)((unkuint9)Var13 >> 0x40) != '\0');

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:213
reconstrucao/src/decompiled_02.c:213:10: error: request for member ‘_0_8_’ in something not a structure or union

    210:   auVar23._8_8_ = 0;
    211:   auVar23._0_8_ = uVar1;
    212:   auVar55._8_8_ = 0;
    213:   auVar55._0_8_ = param_3[3];
    214:   Var14 = (unkuint9)(ulonglong)Var6 + (unkuint9)SUB168(auVar23 * auVar55,0) +
    215:           (unkuint9)((char)((unkuint9)Var13 >> 0x40) != '\0');
    216:   uVar3 = SUB168(auVar23 * auVar55,8) + (ulonglong)((char)((unkuint9)Var6 >> 0x40) != '\0');

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:214
reconstrucao/src/decompiled_02.c:214:64: error: invalid operands to binary * (have ‘undefined1 *’ {aka ‘unsigned char *’} and ‘undefined1 *’ {aka ‘unsigned char *’})

    211:   auVar23._0_8_ = uVar1;
    212:   auVar55._8_8_ = 0;
    213:   auVar55._0_8_ = param_3[3];
    214:   Var14 = (unkuint9)(ulonglong)Var6 + (unkuint9)SUB168(auVar23 * auVar55,0) +
    215:           (unkuint9)((char)((unkuint9)Var13 >> 0x40) != '\0');
    216:   uVar3 = SUB168(auVar23 * auVar55,8) + (ulonglong)((char)((unkuint9)Var6 >> 0x40) != '\0');
    217:   auVar24._8_8_ = 0;

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:216
reconstrucao/src/decompiled_02.c:216:26: error: invalid operands to binary * (have ‘undefined1 *’ {aka ‘unsigned char *’} and ‘undefined1 *’ {aka ‘unsigned char *’})

    213:   auVar55._0_8_ = param_3[3];
    214:   Var14 = (unkuint9)(ulonglong)Var6 + (unkuint9)SUB168(auVar23 * auVar55,0) +
    215:           (unkuint9)((char)((unkuint9)Var13 >> 0x40) != '\0');
    216:   uVar3 = SUB168(auVar23 * auVar55,8) + (ulonglong)((char)((unkuint9)Var6 >> 0x40) != '\0');
    217:   auVar24._8_8_ = 0;
    218:   auVar24._0_8_ = uVar85;
    219:   auVar56._8_8_ = 0;

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:217
reconstrucao/src/decompiled_02.c:217:10: error: request for member ‘_8_8_’ in something not a structure or union

    214:   Var14 = (unkuint9)(ulonglong)Var6 + (unkuint9)SUB168(auVar23 * auVar55,0) +
    215:           (unkuint9)((char)((unkuint9)Var13 >> 0x40) != '\0');
    216:   uVar3 = SUB168(auVar23 * auVar55,8) + (ulonglong)((char)((unkuint9)Var6 >> 0x40) != '\0');
    217:   auVar24._8_8_ = 0;
    218:   auVar24._0_8_ = uVar85;
    219:   auVar56._8_8_ = 0;
    220:   auVar56._0_8_ = *puVar80;

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:218
reconstrucao/src/decompiled_02.c:218:10: error: request for member ‘_0_8_’ in something not a structure or union

    215:           (unkuint9)((char)((unkuint9)Var13 >> 0x40) != '\0');
    216:   uVar3 = SUB168(auVar23 * auVar55,8) + (ulonglong)((char)((unkuint9)Var6 >> 0x40) != '\0');
    217:   auVar24._8_8_ = 0;
    218:   auVar24._0_8_ = uVar85;
    219:   auVar56._8_8_ = 0;
    220:   auVar56._0_8_ = *puVar80;
    221:   Var6 = (unkuint9)uVar4 + (unkuint9)SUB168(auVar24 * auVar56,0);

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:219
reconstrucao/src/decompiled_02.c:219:10: error: request for member ‘_8_8_’ in something not a structure or union

    216:   uVar3 = SUB168(auVar23 * auVar55,8) + (ulonglong)((char)((unkuint9)Var6 >> 0x40) != '\0');
    217:   auVar24._8_8_ = 0;
    218:   auVar24._0_8_ = uVar85;
    219:   auVar56._8_8_ = 0;
    220:   auVar56._0_8_ = *puVar80;
    221:   Var6 = (unkuint9)uVar4 + (unkuint9)SUB168(auVar24 * auVar56,0);
    222:   uVar82 = (ulonglong)Var6;

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:220
reconstrucao/src/decompiled_02.c:220:10: error: request for member ‘_0_8_’ in something not a structure or union

    217:   auVar24._8_8_ = 0;
    218:   auVar24._0_8_ = uVar85;
    219:   auVar56._8_8_ = 0;
    220:   auVar56._0_8_ = *puVar80;
    221:   Var6 = (unkuint9)uVar4 + (unkuint9)SUB168(auVar24 * auVar56,0);
    222:   uVar82 = (ulonglong)Var6;
    223:   Var10 = (unkuint9)(ulonglong)Var10 + (unkuint9)SUB168(auVar24 * auVar56,8);

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:221
reconstrucao/src/decompiled_02.c:221:53: error: invalid operands to binary * (have ‘undefined1 *’ {aka ‘unsigned char *’} and ‘undefined1 *’ {aka ‘unsigned char *’})

    218:   auVar24._0_8_ = uVar85;
    219:   auVar56._8_8_ = 0;
    220:   auVar56._0_8_ = *puVar80;
    221:   Var6 = (unkuint9)uVar4 + (unkuint9)SUB168(auVar24 * auVar56,0);
    222:   uVar82 = (ulonglong)Var6;
    223:   Var10 = (unkuint9)(ulonglong)Var10 + (unkuint9)SUB168(auVar24 * auVar56,8);
    224:   auVar25._8_8_ = 0;

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:223
reconstrucao/src/decompiled_02.c:223:65: error: invalid operands to binary * (have ‘undefined1 *’ {aka ‘unsigned char *’} and ‘undefined1 *’ {aka ‘unsigned char *’})

    220:   auVar56._0_8_ = *puVar80;
    221:   Var6 = (unkuint9)uVar4 + (unkuint9)SUB168(auVar24 * auVar56,0);
    222:   uVar82 = (ulonglong)Var6;
    223:   Var10 = (unkuint9)(ulonglong)Var10 + (unkuint9)SUB168(auVar24 * auVar56,8);
    224:   auVar25._8_8_ = 0;
    225:   auVar25._0_8_ = uVar85;
    226:   auVar57._8_8_ = 0;

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:224
reconstrucao/src/decompiled_02.c:224:10: error: request for member ‘_8_8_’ in something not a structure or union

    221:   Var6 = (unkuint9)uVar4 + (unkuint9)SUB168(auVar24 * auVar56,0);
    222:   uVar82 = (ulonglong)Var6;
    223:   Var10 = (unkuint9)(ulonglong)Var10 + (unkuint9)SUB168(auVar24 * auVar56,8);
    224:   auVar25._8_8_ = 0;
    225:   auVar25._0_8_ = uVar85;
    226:   auVar57._8_8_ = 0;
    227:   auVar57._0_8_ = *(ulonglong *)(param_1 + 0x88);

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:225
reconstrucao/src/decompiled_02.c:225:10: error: request for member ‘_0_8_’ in something not a structure or union

    222:   uVar82 = (ulonglong)Var6;
    223:   Var10 = (unkuint9)(ulonglong)Var10 + (unkuint9)SUB168(auVar24 * auVar56,8);
    224:   auVar25._8_8_ = 0;
    225:   auVar25._0_8_ = uVar85;
    226:   auVar57._8_8_ = 0;
    227:   auVar57._0_8_ = *(ulonglong *)(param_1 + 0x88);
    228:   Var6 = (unkuint9)(ulonglong)Var10 + (unkuint9)SUB168(auVar25 * auVar57,0) +

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:226
reconstrucao/src/decompiled_02.c:226:10: error: request for member ‘_8_8_’ in something not a structure or union

    223:   Var10 = (unkuint9)(ulonglong)Var10 + (unkuint9)SUB168(auVar24 * auVar56,8);
    224:   auVar25._8_8_ = 0;
    225:   auVar25._0_8_ = uVar85;
    226:   auVar57._8_8_ = 0;
    227:   auVar57._0_8_ = *(ulonglong *)(param_1 + 0x88);
    228:   Var6 = (unkuint9)(ulonglong)Var10 + (unkuint9)SUB168(auVar25 * auVar57,0) +
    229:          (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:227
reconstrucao/src/decompiled_02.c:227:10: error: request for member ‘_0_8_’ in something not a structure or union

    224:   auVar25._8_8_ = 0;
    225:   auVar25._0_8_ = uVar85;
    226:   auVar57._8_8_ = 0;
    227:   auVar57._0_8_ = *(ulonglong *)(param_1 + 0x88);
    228:   Var6 = (unkuint9)(ulonglong)Var10 + (unkuint9)SUB168(auVar25 * auVar57,0) +
    229:          (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
    230:   uVar4 = (ulonglong)Var6;

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:228
reconstrucao/src/decompiled_02.c:228:64: error: invalid operands to binary * (have ‘undefined1 *’ {aka ‘unsigned char *’} and ‘undefined1 *’ {aka ‘unsigned char *’})

    225:   auVar25._0_8_ = uVar85;
    226:   auVar57._8_8_ = 0;
    227:   auVar57._0_8_ = *(ulonglong *)(param_1 + 0x88);
    228:   Var6 = (unkuint9)(ulonglong)Var10 + (unkuint9)SUB168(auVar25 * auVar57,0) +
    229:          (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
    230:   uVar4 = (ulonglong)Var6;
    231:   Var10 = (unkuint9)(ulonglong)Var12 + (unkuint9)SUB168(auVar25 * auVar57,8) +

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:231
reconstrucao/src/decompiled_02.c:231:65: error: invalid operands to binary * (have ‘undefined1 *’ {aka ‘unsigned char *’} and ‘undefined1 *’ {aka ‘unsigned char *’})

    228:   Var6 = (unkuint9)(ulonglong)Var10 + (unkuint9)SUB168(auVar25 * auVar57,0) +
    229:          (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
    230:   uVar4 = (ulonglong)Var6;
    231:   Var10 = (unkuint9)(ulonglong)Var12 + (unkuint9)SUB168(auVar25 * auVar57,8) +
    232:           (unkuint9)((char)((unkuint9)Var10 >> 0x40) != '\0');
    233:   auVar26._8_8_ = 0;
    234:   auVar26._0_8_ = uVar85;

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:233
reconstrucao/src/decompiled_02.c:233:10: error: request for member ‘_8_8_’ in something not a structure or union

    230:   uVar4 = (ulonglong)Var6;
    231:   Var10 = (unkuint9)(ulonglong)Var12 + (unkuint9)SUB168(auVar25 * auVar57,8) +
    232:           (unkuint9)((char)((unkuint9)Var10 >> 0x40) != '\0');
    233:   auVar26._8_8_ = 0;
    234:   auVar26._0_8_ = uVar85;
    235:   auVar58._8_8_ = 0;
    236:   auVar58._0_8_ = *(ulonglong *)(param_1 + 0x90);

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:234
reconstrucao/src/decompiled_02.c:234:10: error: request for member ‘_0_8_’ in something not a structure or union

    231:   Var10 = (unkuint9)(ulonglong)Var12 + (unkuint9)SUB168(auVar25 * auVar57,8) +
    232:           (unkuint9)((char)((unkuint9)Var10 >> 0x40) != '\0');
    233:   auVar26._8_8_ = 0;
    234:   auVar26._0_8_ = uVar85;
    235:   auVar58._8_8_ = 0;
    236:   auVar58._0_8_ = *(ulonglong *)(param_1 + 0x90);
    237:   Var6 = (unkuint9)(ulonglong)Var10 + (unkuint9)SUB168(auVar26 * auVar58,0) +

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:235
reconstrucao/src/decompiled_02.c:235:10: error: request for member ‘_8_8_’ in something not a structure or union

    232:           (unkuint9)((char)((unkuint9)Var10 >> 0x40) != '\0');
    233:   auVar26._8_8_ = 0;
    234:   auVar26._0_8_ = uVar85;
    235:   auVar58._8_8_ = 0;
    236:   auVar58._0_8_ = *(ulonglong *)(param_1 + 0x90);
    237:   Var6 = (unkuint9)(ulonglong)Var10 + (unkuint9)SUB168(auVar26 * auVar58,0) +
    238:          (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:236
reconstrucao/src/decompiled_02.c:236:10: error: request for member ‘_0_8_’ in something not a structure or union

    233:   auVar26._8_8_ = 0;
    234:   auVar26._0_8_ = uVar85;
    235:   auVar58._8_8_ = 0;
    236:   auVar58._0_8_ = *(ulonglong *)(param_1 + 0x90);
    237:   Var6 = (unkuint9)(ulonglong)Var10 + (unkuint9)SUB168(auVar26 * auVar58,0) +
    238:          (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
    239:   Var12 = (unkuint9)(ulonglong)Var13 + (unkuint9)SUB168(auVar26 * auVar58,8) +

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:237
reconstrucao/src/decompiled_02.c:237:64: error: invalid operands to binary * (have ‘undefined1 *’ {aka ‘unsigned char *’} and ‘undefined1 *’ {aka ‘unsigned char *’})

    234:   auVar26._0_8_ = uVar85;
    235:   auVar58._8_8_ = 0;
    236:   auVar58._0_8_ = *(ulonglong *)(param_1 + 0x90);
    237:   Var6 = (unkuint9)(ulonglong)Var10 + (unkuint9)SUB168(auVar26 * auVar58,0) +
    238:          (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
    239:   Var12 = (unkuint9)(ulonglong)Var13 + (unkuint9)SUB168(auVar26 * auVar58,8) +
    240:           (unkuint9)((char)((unkuint9)Var10 >> 0x40) != '\0');

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:239
reconstrucao/src/decompiled_02.c:239:65: error: invalid operands to binary * (have ‘undefined1 *’ {aka ‘unsigned char *’} and ‘undefined1 *’ {aka ‘unsigned char *’})

    236:   auVar58._0_8_ = *(ulonglong *)(param_1 + 0x90);
    237:   Var6 = (unkuint9)(ulonglong)Var10 + (unkuint9)SUB168(auVar26 * auVar58,0) +
    238:          (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
    239:   Var12 = (unkuint9)(ulonglong)Var13 + (unkuint9)SUB168(auVar26 * auVar58,8) +
    240:           (unkuint9)((char)((unkuint9)Var10 >> 0x40) != '\0');
    241:   auVar27._8_8_ = 0;
    242:   auVar27._0_8_ = uVar85;

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:241
reconstrucao/src/decompiled_02.c:241:10: error: request for member ‘_8_8_’ in something not a structure or union

    238:          (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
    239:   Var12 = (unkuint9)(ulonglong)Var13 + (unkuint9)SUB168(auVar26 * auVar58,8) +
    240:           (unkuint9)((char)((unkuint9)Var10 >> 0x40) != '\0');
    241:   auVar27._8_8_ = 0;
    242:   auVar27._0_8_ = uVar85;
    243:   auVar59._8_8_ = 0;
    244:   auVar59._0_8_ = *(ulonglong *)(param_1 + 0x98);

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:242
reconstrucao/src/decompiled_02.c:242:10: error: request for member ‘_0_8_’ in something not a structure or union

    239:   Var12 = (unkuint9)(ulonglong)Var13 + (unkuint9)SUB168(auVar26 * auVar58,8) +
    240:           (unkuint9)((char)((unkuint9)Var10 >> 0x40) != '\0');
    241:   auVar27._8_8_ = 0;
    242:   auVar27._0_8_ = uVar85;
    243:   auVar59._8_8_ = 0;
    244:   auVar59._0_8_ = *(ulonglong *)(param_1 + 0x98);
    245:   Var10 = (unkuint9)(ulonglong)Var12 + (unkuint9)SUB168(auVar27 * auVar59,0) +

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:243
reconstrucao/src/decompiled_02.c:243:10: error: request for member ‘_8_8_’ in something not a structure or union

    240:           (unkuint9)((char)((unkuint9)Var10 >> 0x40) != '\0');
    241:   auVar27._8_8_ = 0;
    242:   auVar27._0_8_ = uVar85;
    243:   auVar59._8_8_ = 0;
    244:   auVar59._0_8_ = *(ulonglong *)(param_1 + 0x98);
    245:   Var10 = (unkuint9)(ulonglong)Var12 + (unkuint9)SUB168(auVar27 * auVar59,0) +
    246:           (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:244
reconstrucao/src/decompiled_02.c:244:10: error: request for member ‘_0_8_’ in something not a structure or union

    241:   auVar27._8_8_ = 0;
    242:   auVar27._0_8_ = uVar85;
    243:   auVar59._8_8_ = 0;
    244:   auVar59._0_8_ = *(ulonglong *)(param_1 + 0x98);
    245:   Var10 = (unkuint9)(ulonglong)Var12 + (unkuint9)SUB168(auVar27 * auVar59,0) +
    246:           (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
    247:   Var13 = (unkuint9)(ulonglong)Var14 + (unkuint9)SUB168(auVar27 * auVar59,8) +

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:245
reconstrucao/src/decompiled_02.c:245:65: error: invalid operands to binary * (have ‘undefined1 *’ {aka ‘unsigned char *’} and ‘undefined1 *’ {aka ‘unsigned char *’})

    242:   auVar27._0_8_ = uVar85;
    243:   auVar59._8_8_ = 0;
    244:   auVar59._0_8_ = *(ulonglong *)(param_1 + 0x98);
    245:   Var10 = (unkuint9)(ulonglong)Var12 + (unkuint9)SUB168(auVar27 * auVar59,0) +
    246:           (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
    247:   Var13 = (unkuint9)(ulonglong)Var14 + (unkuint9)SUB168(auVar27 * auVar59,8) +
    248:           (unkuint9)((char)((unkuint9)Var12 >> 0x40) != '\0');

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:247
reconstrucao/src/decompiled_02.c:247:65: error: invalid operands to binary * (have ‘undefined1 *’ {aka ‘unsigned char *’} and ‘undefined1 *’ {aka ‘unsigned char *’})

    244:   auVar59._0_8_ = *(ulonglong *)(param_1 + 0x98);
    245:   Var10 = (unkuint9)(ulonglong)Var12 + (unkuint9)SUB168(auVar27 * auVar59,0) +
    246:           (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
    247:   Var13 = (unkuint9)(ulonglong)Var14 + (unkuint9)SUB168(auVar27 * auVar59,8) +
    248:           (unkuint9)((char)((unkuint9)Var12 >> 0x40) != '\0');
    249:   Var12 = (unkuint9)(ulonglong)Var13 + (unkuint9)uVar82 +
    250:           (unkuint9)((char)((unkuint9)Var10 >> 0x40) != '\0');

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:257
reconstrucao/src/decompiled_02.c:257:10: error: request for member ‘_8_8_’ in something not a structure or union

    254:   uVar2 = uVar81 + uVar3;
    255:   uVar83 = uVar4 * *(longlong *)(param_1 + 0x18);
    256:   uVar1 = param_2[2];
    257:   auVar28._8_8_ = 0;
    258:   auVar28._0_8_ = uVar1;
    259:   auVar60._8_8_ = 0;
    260:   auVar60._0_8_ = *param_3;

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:258
reconstrucao/src/decompiled_02.c:258:10: error: request for member ‘_0_8_’ in something not a structure or union

    255:   uVar83 = uVar4 * *(longlong *)(param_1 + 0x18);
    256:   uVar1 = param_2[2];
    257:   auVar28._8_8_ = 0;
    258:   auVar28._0_8_ = uVar1;
    259:   auVar60._8_8_ = 0;
    260:   auVar60._0_8_ = *param_3;
    261:   Var13 = (unkuint9)(ulonglong)Var6 + (unkuint9)SUB168(auVar28 * auVar60,0);

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:259
reconstrucao/src/decompiled_02.c:259:10: error: request for member ‘_8_8_’ in something not a structure or union

    256:   uVar1 = param_2[2];
    257:   auVar28._8_8_ = 0;
    258:   auVar28._0_8_ = uVar1;
    259:   auVar60._8_8_ = 0;
    260:   auVar60._0_8_ = *param_3;
    261:   Var13 = (unkuint9)(ulonglong)Var6 + (unkuint9)SUB168(auVar28 * auVar60,0);
    262:   Var6 = (unkuint9)(ulonglong)Var10 + (unkuint9)SUB168(auVar28 * auVar60,8);

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:260
reconstrucao/src/decompiled_02.c:260:10: error: request for member ‘_0_8_’ in something not a structure or union

    257:   auVar28._8_8_ = 0;
    258:   auVar28._0_8_ = uVar1;
    259:   auVar60._8_8_ = 0;
    260:   auVar60._0_8_ = *param_3;
    261:   Var13 = (unkuint9)(ulonglong)Var6 + (unkuint9)SUB168(auVar28 * auVar60,0);
    262:   Var6 = (unkuint9)(ulonglong)Var10 + (unkuint9)SUB168(auVar28 * auVar60,8);
    263:   auVar29._8_8_ = 0;

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:261
reconstrucao/src/decompiled_02.c:261:64: error: invalid operands to binary * (have ‘undefined1 *’ {aka ‘unsigned char *’} and ‘undefined1 *’ {aka ‘unsigned char *’})

    258:   auVar28._0_8_ = uVar1;
    259:   auVar60._8_8_ = 0;
    260:   auVar60._0_8_ = *param_3;
    261:   Var13 = (unkuint9)(ulonglong)Var6 + (unkuint9)SUB168(auVar28 * auVar60,0);
    262:   Var6 = (unkuint9)(ulonglong)Var10 + (unkuint9)SUB168(auVar28 * auVar60,8);
    263:   auVar29._8_8_ = 0;
    264:   auVar29._0_8_ = uVar1;

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:262
reconstrucao/src/decompiled_02.c:262:64: error: invalid operands to binary * (have ‘undefined1 *’ {aka ‘unsigned char *’} and ‘undefined1 *’ {aka ‘unsigned char *’})

    259:   auVar60._8_8_ = 0;
    260:   auVar60._0_8_ = *param_3;
    261:   Var13 = (unkuint9)(ulonglong)Var6 + (unkuint9)SUB168(auVar28 * auVar60,0);
    262:   Var6 = (unkuint9)(ulonglong)Var10 + (unkuint9)SUB168(auVar28 * auVar60,8);
    263:   auVar29._8_8_ = 0;
    264:   auVar29._0_8_ = uVar1;
    265:   auVar61._8_8_ = 0;

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:263
reconstrucao/src/decompiled_02.c:263:10: error: request for member ‘_8_8_’ in something not a structure or union

    260:   auVar60._0_8_ = *param_3;
    261:   Var13 = (unkuint9)(ulonglong)Var6 + (unkuint9)SUB168(auVar28 * auVar60,0);
    262:   Var6 = (unkuint9)(ulonglong)Var10 + (unkuint9)SUB168(auVar28 * auVar60,8);
    263:   auVar29._8_8_ = 0;
    264:   auVar29._0_8_ = uVar1;
    265:   auVar61._8_8_ = 0;
    266:   auVar61._0_8_ = param_3[1];

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:264
reconstrucao/src/decompiled_02.c:264:10: error: request for member ‘_0_8_’ in something not a structure or union

    261:   Var13 = (unkuint9)(ulonglong)Var6 + (unkuint9)SUB168(auVar28 * auVar60,0);
    262:   Var6 = (unkuint9)(ulonglong)Var10 + (unkuint9)SUB168(auVar28 * auVar60,8);
    263:   auVar29._8_8_ = 0;
    264:   auVar29._0_8_ = uVar1;
    265:   auVar61._8_8_ = 0;
    266:   auVar61._0_8_ = param_3[1];
    267:   Var14 = (unkuint9)(ulonglong)Var6 + (unkuint9)SUB168(auVar29 * auVar61,0) +

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:265
reconstrucao/src/decompiled_02.c:265:10: error: request for member ‘_8_8_’ in something not a structure or union

    262:   Var6 = (unkuint9)(ulonglong)Var10 + (unkuint9)SUB168(auVar28 * auVar60,8);
    263:   auVar29._8_8_ = 0;
    264:   auVar29._0_8_ = uVar1;
    265:   auVar61._8_8_ = 0;
    266:   auVar61._0_8_ = param_3[1];
    267:   Var14 = (unkuint9)(ulonglong)Var6 + (unkuint9)SUB168(auVar29 * auVar61,0) +
    268:           (unkuint9)((char)((unkuint9)Var13 >> 0x40) != '\0');

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:266
reconstrucao/src/decompiled_02.c:266:10: error: request for member ‘_0_8_’ in something not a structure or union

    263:   auVar29._8_8_ = 0;
    264:   auVar29._0_8_ = uVar1;
    265:   auVar61._8_8_ = 0;
    266:   auVar61._0_8_ = param_3[1];
    267:   Var14 = (unkuint9)(ulonglong)Var6 + (unkuint9)SUB168(auVar29 * auVar61,0) +
    268:           (unkuint9)((char)((unkuint9)Var13 >> 0x40) != '\0');
    269:   Var6 = (unkuint9)(ulonglong)Var12 + (unkuint9)SUB168(auVar29 * auVar61,8) +

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:267
reconstrucao/src/decompiled_02.c:267:64: error: invalid operands to binary * (have ‘undefined1 *’ {aka ‘unsigned char *’} and ‘undefined1 *’ {aka ‘unsigned char *’})

    264:   auVar29._0_8_ = uVar1;
    265:   auVar61._8_8_ = 0;
    266:   auVar61._0_8_ = param_3[1];
    267:   Var14 = (unkuint9)(ulonglong)Var6 + (unkuint9)SUB168(auVar29 * auVar61,0) +
    268:           (unkuint9)((char)((unkuint9)Var13 >> 0x40) != '\0');
    269:   Var6 = (unkuint9)(ulonglong)Var12 + (unkuint9)SUB168(auVar29 * auVar61,8) +
    270:          (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:269
reconstrucao/src/decompiled_02.c:269:64: error: invalid operands to binary * (have ‘undefined1 *’ {aka ‘unsigned char *’} and ‘undefined1 *’ {aka ‘unsigned char *’})

    266:   auVar61._0_8_ = param_3[1];
    267:   Var14 = (unkuint9)(ulonglong)Var6 + (unkuint9)SUB168(auVar29 * auVar61,0) +
    268:           (unkuint9)((char)((unkuint9)Var13 >> 0x40) != '\0');
    269:   Var6 = (unkuint9)(ulonglong)Var12 + (unkuint9)SUB168(auVar29 * auVar61,8) +
    270:          (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
    271:   auVar30._8_8_ = 0;
    272:   auVar30._0_8_ = uVar1;

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:271
reconstrucao/src/decompiled_02.c:271:10: error: request for member ‘_8_8_’ in something not a structure or union

    268:           (unkuint9)((char)((unkuint9)Var13 >> 0x40) != '\0');
    269:   Var6 = (unkuint9)(ulonglong)Var12 + (unkuint9)SUB168(auVar29 * auVar61,8) +
    270:          (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
    271:   auVar30._8_8_ = 0;
    272:   auVar30._0_8_ = uVar1;
    273:   auVar62._8_8_ = 0;
    274:   auVar62._0_8_ = param_3[2];

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:272
reconstrucao/src/decompiled_02.c:272:10: error: request for member ‘_0_8_’ in something not a structure or union

    269:   Var6 = (unkuint9)(ulonglong)Var12 + (unkuint9)SUB168(auVar29 * auVar61,8) +
    270:          (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
    271:   auVar30._8_8_ = 0;
    272:   auVar30._0_8_ = uVar1;
    273:   auVar62._8_8_ = 0;
    274:   auVar62._0_8_ = param_3[2];
    275:   Var12 = (unkuint9)(ulonglong)Var6 + (unkuint9)SUB168(auVar30 * auVar62,0) +

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:273
reconstrucao/src/decompiled_02.c:273:10: error: request for member ‘_8_8_’ in something not a structure or union

    270:          (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
    271:   auVar30._8_8_ = 0;
    272:   auVar30._0_8_ = uVar1;
    273:   auVar62._8_8_ = 0;
    274:   auVar62._0_8_ = param_3[2];
    275:   Var12 = (unkuint9)(ulonglong)Var6 + (unkuint9)SUB168(auVar30 * auVar62,0) +
    276:           (unkuint9)((char)((unkuint9)Var14 >> 0x40) != '\0');

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:274
reconstrucao/src/decompiled_02.c:274:10: error: request for member ‘_0_8_’ in something not a structure or union

    271:   auVar30._8_8_ = 0;
    272:   auVar30._0_8_ = uVar1;
    273:   auVar62._8_8_ = 0;
    274:   auVar62._0_8_ = param_3[2];
    275:   Var12 = (unkuint9)(ulonglong)Var6 + (unkuint9)SUB168(auVar30 * auVar62,0) +
    276:           (unkuint9)((char)((unkuint9)Var14 >> 0x40) != '\0');
    277:   Var6 = (unkuint9)(uVar2 + uVar86) + (unkuint9)SUB168(auVar30 * auVar62,8) +

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:275
reconstrucao/src/decompiled_02.c:275:64: error: invalid operands to binary * (have ‘undefined1 *’ {aka ‘unsigned char *’} and ‘undefined1 *’ {aka ‘unsigned char *’})

    272:   auVar30._0_8_ = uVar1;
    273:   auVar62._8_8_ = 0;
    274:   auVar62._0_8_ = param_3[2];
    275:   Var12 = (unkuint9)(ulonglong)Var6 + (unkuint9)SUB168(auVar30 * auVar62,0) +
    276:           (unkuint9)((char)((unkuint9)Var14 >> 0x40) != '\0');
    277:   Var6 = (unkuint9)(uVar2 + uVar86) + (unkuint9)SUB168(auVar30 * auVar62,8) +
    278:          (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:277
reconstrucao/src/decompiled_02.c:277:64: error: invalid operands to binary * (have ‘undefined1 *’ {aka ‘unsigned char *’} and ‘undefined1 *’ {aka ‘unsigned char *’})

    274:   auVar62._0_8_ = param_3[2];
    275:   Var12 = (unkuint9)(ulonglong)Var6 + (unkuint9)SUB168(auVar30 * auVar62,0) +
    276:           (unkuint9)((char)((unkuint9)Var14 >> 0x40) != '\0');
    277:   Var6 = (unkuint9)(uVar2 + uVar86) + (unkuint9)SUB168(auVar30 * auVar62,8) +
    278:          (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
    279:   auVar31._8_8_ = 0;
    280:   auVar31._0_8_ = uVar1;

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:279
reconstrucao/src/decompiled_02.c:279:10: error: request for member ‘_8_8_’ in something not a structure or union

    276:           (unkuint9)((char)((unkuint9)Var14 >> 0x40) != '\0');
    277:   Var6 = (unkuint9)(uVar2 + uVar86) + (unkuint9)SUB168(auVar30 * auVar62,8) +
    278:          (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
    279:   auVar31._8_8_ = 0;
    280:   auVar31._0_8_ = uVar1;
    281:   auVar63._8_8_ = 0;
    282:   auVar63._0_8_ = param_3[3];

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:280
reconstrucao/src/decompiled_02.c:280:10: error: request for member ‘_0_8_’ in something not a structure or union

    277:   Var6 = (unkuint9)(uVar2 + uVar86) + (unkuint9)SUB168(auVar30 * auVar62,8) +
    278:          (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
    279:   auVar31._8_8_ = 0;
    280:   auVar31._0_8_ = uVar1;
    281:   auVar63._8_8_ = 0;
    282:   auVar63._0_8_ = param_3[3];
    283:   Var15 = (unkuint9)(ulonglong)Var6 + (unkuint9)SUB168(auVar31 * auVar63,0) +

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:281
reconstrucao/src/decompiled_02.c:281:10: error: request for member ‘_8_8_’ in something not a structure or union

    278:          (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
    279:   auVar31._8_8_ = 0;
    280:   auVar31._0_8_ = uVar1;
    281:   auVar63._8_8_ = 0;
    282:   auVar63._0_8_ = param_3[3];
    283:   Var15 = (unkuint9)(ulonglong)Var6 + (unkuint9)SUB168(auVar31 * auVar63,0) +
    284:           (unkuint9)((char)((unkuint9)Var12 >> 0x40) != '\0');

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:282
reconstrucao/src/decompiled_02.c:282:10: error: request for member ‘_0_8_’ in something not a structure or union

    279:   auVar31._8_8_ = 0;
    280:   auVar31._0_8_ = uVar1;
    281:   auVar63._8_8_ = 0;
    282:   auVar63._0_8_ = param_3[3];
    283:   Var15 = (unkuint9)(ulonglong)Var6 + (unkuint9)SUB168(auVar31 * auVar63,0) +
    284:           (unkuint9)((char)((unkuint9)Var12 >> 0x40) != '\0');
    285:   uVar7 = SUB168(auVar31 * auVar63,8) + (ulonglong)((char)((unkuint9)Var6 >> 0x40) != '\0');

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:283
reconstrucao/src/decompiled_02.c:283:64: error: invalid operands to binary * (have ‘undefined1 *’ {aka ‘unsigned char *’} and ‘undefined1 *’ {aka ‘unsigned char *’})

    280:   auVar31._0_8_ = uVar1;
    281:   auVar63._8_8_ = 0;
    282:   auVar63._0_8_ = param_3[3];
    283:   Var15 = (unkuint9)(ulonglong)Var6 + (unkuint9)SUB168(auVar31 * auVar63,0) +
    284:           (unkuint9)((char)((unkuint9)Var12 >> 0x40) != '\0');
    285:   uVar7 = SUB168(auVar31 * auVar63,8) + (ulonglong)((char)((unkuint9)Var6 >> 0x40) != '\0');
    286:   auVar32._8_8_ = 0;

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:285
reconstrucao/src/decompiled_02.c:285:26: error: invalid operands to binary * (have ‘undefined1 *’ {aka ‘unsigned char *’} and ‘undefined1 *’ {aka ‘unsigned char *’})

    282:   auVar63._0_8_ = param_3[3];
    283:   Var15 = (unkuint9)(ulonglong)Var6 + (unkuint9)SUB168(auVar31 * auVar63,0) +
    284:           (unkuint9)((char)((unkuint9)Var12 >> 0x40) != '\0');
    285:   uVar7 = SUB168(auVar31 * auVar63,8) + (ulonglong)((char)((unkuint9)Var6 >> 0x40) != '\0');
    286:   auVar32._8_8_ = 0;
    287:   auVar32._0_8_ = uVar83;
    288:   auVar64._8_8_ = 0;

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:286
reconstrucao/src/decompiled_02.c:286:10: error: request for member ‘_8_8_’ in something not a structure or union

    283:   Var15 = (unkuint9)(ulonglong)Var6 + (unkuint9)SUB168(auVar31 * auVar63,0) +
    284:           (unkuint9)((char)((unkuint9)Var12 >> 0x40) != '\0');
    285:   uVar7 = SUB168(auVar31 * auVar63,8) + (ulonglong)((char)((unkuint9)Var6 >> 0x40) != '\0');
    286:   auVar32._8_8_ = 0;
    287:   auVar32._0_8_ = uVar83;
    288:   auVar64._8_8_ = 0;
    289:   auVar64._0_8_ = *puVar80;

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:287
reconstrucao/src/decompiled_02.c:287:10: error: request for member ‘_0_8_’ in something not a structure or union

    284:           (unkuint9)((char)((unkuint9)Var12 >> 0x40) != '\0');
    285:   uVar7 = SUB168(auVar31 * auVar63,8) + (ulonglong)((char)((unkuint9)Var6 >> 0x40) != '\0');
    286:   auVar32._8_8_ = 0;
    287:   auVar32._0_8_ = uVar83;
    288:   auVar64._8_8_ = 0;
    289:   auVar64._0_8_ = *puVar80;
    290:   Var6 = (unkuint9)uVar4 + (unkuint9)SUB168(auVar32 * auVar64,0);

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:288
reconstrucao/src/decompiled_02.c:288:10: error: request for member ‘_8_8_’ in something not a structure or union

    285:   uVar7 = SUB168(auVar31 * auVar63,8) + (ulonglong)((char)((unkuint9)Var6 >> 0x40) != '\0');
    286:   auVar32._8_8_ = 0;
    287:   auVar32._0_8_ = uVar83;
    288:   auVar64._8_8_ = 0;
    289:   auVar64._0_8_ = *puVar80;
    290:   Var6 = (unkuint9)uVar4 + (unkuint9)SUB168(auVar32 * auVar64,0);
    291:   uVar4 = (ulonglong)Var6;

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:289
reconstrucao/src/decompiled_02.c:289:10: error: request for member ‘_0_8_’ in something not a structure or union

    286:   auVar32._8_8_ = 0;
    287:   auVar32._0_8_ = uVar83;
    288:   auVar64._8_8_ = 0;
    289:   auVar64._0_8_ = *puVar80;
    290:   Var6 = (unkuint9)uVar4 + (unkuint9)SUB168(auVar32 * auVar64,0);
    291:   uVar4 = (ulonglong)Var6;
    292:   Var10 = (unkuint9)(ulonglong)Var13 + (unkuint9)SUB168(auVar32 * auVar64,8);

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:290
reconstrucao/src/decompiled_02.c:290:53: error: invalid operands to binary * (have ‘undefined1 *’ {aka ‘unsigned char *’} and ‘undefined1 *’ {aka ‘unsigned char *’})

    287:   auVar32._0_8_ = uVar83;
    288:   auVar64._8_8_ = 0;
    289:   auVar64._0_8_ = *puVar80;
    290:   Var6 = (unkuint9)uVar4 + (unkuint9)SUB168(auVar32 * auVar64,0);
    291:   uVar4 = (ulonglong)Var6;
    292:   Var10 = (unkuint9)(ulonglong)Var13 + (unkuint9)SUB168(auVar32 * auVar64,8);
    293:   auVar33._8_8_ = 0;

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:292
reconstrucao/src/decompiled_02.c:292:65: error: invalid operands to binary * (have ‘undefined1 *’ {aka ‘unsigned char *’} and ‘undefined1 *’ {aka ‘unsigned char *’})

    289:   auVar64._0_8_ = *puVar80;
    290:   Var6 = (unkuint9)uVar4 + (unkuint9)SUB168(auVar32 * auVar64,0);
    291:   uVar4 = (ulonglong)Var6;
    292:   Var10 = (unkuint9)(ulonglong)Var13 + (unkuint9)SUB168(auVar32 * auVar64,8);
    293:   auVar33._8_8_ = 0;
    294:   auVar33._0_8_ = uVar83;
    295:   auVar65._8_8_ = 0;

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:293
reconstrucao/src/decompiled_02.c:293:10: error: request for member ‘_8_8_’ in something not a structure or union

    290:   Var6 = (unkuint9)uVar4 + (unkuint9)SUB168(auVar32 * auVar64,0);
    291:   uVar4 = (ulonglong)Var6;
    292:   Var10 = (unkuint9)(ulonglong)Var13 + (unkuint9)SUB168(auVar32 * auVar64,8);
    293:   auVar33._8_8_ = 0;
    294:   auVar33._0_8_ = uVar83;
    295:   auVar65._8_8_ = 0;
    296:   auVar65._0_8_ = *(ulonglong *)(param_1 + 0x88);

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:294
reconstrucao/src/decompiled_02.c:294:10: error: request for member ‘_0_8_’ in something not a structure or union

    291:   uVar4 = (ulonglong)Var6;
    292:   Var10 = (unkuint9)(ulonglong)Var13 + (unkuint9)SUB168(auVar32 * auVar64,8);
    293:   auVar33._8_8_ = 0;
    294:   auVar33._0_8_ = uVar83;
    295:   auVar65._8_8_ = 0;
    296:   auVar65._0_8_ = *(ulonglong *)(param_1 + 0x88);
    297:   Var6 = (unkuint9)(ulonglong)Var10 + (unkuint9)SUB168(auVar33 * auVar65,0) +

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:295
reconstrucao/src/decompiled_02.c:295:10: error: request for member ‘_8_8_’ in something not a structure or union

    292:   Var10 = (unkuint9)(ulonglong)Var13 + (unkuint9)SUB168(auVar32 * auVar64,8);
    293:   auVar33._8_8_ = 0;
    294:   auVar33._0_8_ = uVar83;
    295:   auVar65._8_8_ = 0;
    296:   auVar65._0_8_ = *(ulonglong *)(param_1 + 0x88);
    297:   Var6 = (unkuint9)(ulonglong)Var10 + (unkuint9)SUB168(auVar33 * auVar65,0) +
    298:          (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:296
reconstrucao/src/decompiled_02.c:296:10: error: request for member ‘_0_8_’ in something not a structure or union

    293:   auVar33._8_8_ = 0;
    294:   auVar33._0_8_ = uVar83;
    295:   auVar65._8_8_ = 0;
    296:   auVar65._0_8_ = *(ulonglong *)(param_1 + 0x88);
    297:   Var6 = (unkuint9)(ulonglong)Var10 + (unkuint9)SUB168(auVar33 * auVar65,0) +
    298:          (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
    299:   uVar5 = (ulonglong)Var6;

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:297
reconstrucao/src/decompiled_02.c:297:64: error: invalid operands to binary * (have ‘undefined1 *’ {aka ‘unsigned char *’} and ‘undefined1 *’ {aka ‘unsigned char *’})

    294:   auVar33._0_8_ = uVar83;
    295:   auVar65._8_8_ = 0;
    296:   auVar65._0_8_ = *(ulonglong *)(param_1 + 0x88);
    297:   Var6 = (unkuint9)(ulonglong)Var10 + (unkuint9)SUB168(auVar33 * auVar65,0) +
    298:          (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
    299:   uVar5 = (ulonglong)Var6;
    300:   Var10 = (unkuint9)(ulonglong)Var14 + (unkuint9)SUB168(auVar33 * auVar65,8) +

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:300
reconstrucao/src/decompiled_02.c:300:65: error: invalid operands to binary * (have ‘undefined1 *’ {aka ‘unsigned char *’} and ‘undefined1 *’ {aka ‘unsigned char *’})

    297:   Var6 = (unkuint9)(ulonglong)Var10 + (unkuint9)SUB168(auVar33 * auVar65,0) +
    298:          (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
    299:   uVar5 = (ulonglong)Var6;
    300:   Var10 = (unkuint9)(ulonglong)Var14 + (unkuint9)SUB168(auVar33 * auVar65,8) +
    301:           (unkuint9)((char)((unkuint9)Var10 >> 0x40) != '\0');
    302:   auVar34._8_8_ = 0;
    303:   auVar34._0_8_ = uVar83;

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:302
reconstrucao/src/decompiled_02.c:302:10: error: request for member ‘_8_8_’ in something not a structure or union

    299:   uVar5 = (ulonglong)Var6;
    300:   Var10 = (unkuint9)(ulonglong)Var14 + (unkuint9)SUB168(auVar33 * auVar65,8) +
    301:           (unkuint9)((char)((unkuint9)Var10 >> 0x40) != '\0');
    302:   auVar34._8_8_ = 0;
    303:   auVar34._0_8_ = uVar83;
    304:   auVar66._8_8_ = 0;
    305:   auVar66._0_8_ = *(ulonglong *)(param_1 + 0x90);

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:303
reconstrucao/src/decompiled_02.c:303:10: error: request for member ‘_0_8_’ in something not a structure or union

    300:   Var10 = (unkuint9)(ulonglong)Var14 + (unkuint9)SUB168(auVar33 * auVar65,8) +
    301:           (unkuint9)((char)((unkuint9)Var10 >> 0x40) != '\0');
    302:   auVar34._8_8_ = 0;
    303:   auVar34._0_8_ = uVar83;
    304:   auVar66._8_8_ = 0;
    305:   auVar66._0_8_ = *(ulonglong *)(param_1 + 0x90);
    306:   Var6 = (unkuint9)(ulonglong)Var10 + (unkuint9)SUB168(auVar34 * auVar66,0) +

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:304
reconstrucao/src/decompiled_02.c:304:10: error: request for member ‘_8_8_’ in something not a structure or union

    301:           (unkuint9)((char)((unkuint9)Var10 >> 0x40) != '\0');
    302:   auVar34._8_8_ = 0;
    303:   auVar34._0_8_ = uVar83;
    304:   auVar66._8_8_ = 0;
    305:   auVar66._0_8_ = *(ulonglong *)(param_1 + 0x90);
    306:   Var6 = (unkuint9)(ulonglong)Var10 + (unkuint9)SUB168(auVar34 * auVar66,0) +
    307:          (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:305
reconstrucao/src/decompiled_02.c:305:10: error: request for member ‘_0_8_’ in something not a structure or union

    302:   auVar34._8_8_ = 0;
    303:   auVar34._0_8_ = uVar83;
    304:   auVar66._8_8_ = 0;
    305:   auVar66._0_8_ = *(ulonglong *)(param_1 + 0x90);
    306:   Var6 = (unkuint9)(ulonglong)Var10 + (unkuint9)SUB168(auVar34 * auVar66,0) +
    307:          (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
    308:   Var12 = (unkuint9)(ulonglong)Var12 + (unkuint9)SUB168(auVar34 * auVar66,8) +

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:306
reconstrucao/src/decompiled_02.c:306:64: error: invalid operands to binary * (have ‘undefined1 *’ {aka ‘unsigned char *’} and ‘undefined1 *’ {aka ‘unsigned char *’})

    303:   auVar34._0_8_ = uVar83;
    304:   auVar66._8_8_ = 0;
    305:   auVar66._0_8_ = *(ulonglong *)(param_1 + 0x90);
    306:   Var6 = (unkuint9)(ulonglong)Var10 + (unkuint9)SUB168(auVar34 * auVar66,0) +
    307:          (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
    308:   Var12 = (unkuint9)(ulonglong)Var12 + (unkuint9)SUB168(auVar34 * auVar66,8) +
    309:           (unkuint9)((char)((unkuint9)Var10 >> 0x40) != '\0');

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:308
reconstrucao/src/decompiled_02.c:308:65: error: invalid operands to binary * (have ‘undefined1 *’ {aka ‘unsigned char *’} and ‘undefined1 *’ {aka ‘unsigned char *’})

    305:   auVar66._0_8_ = *(ulonglong *)(param_1 + 0x90);
    306:   Var6 = (unkuint9)(ulonglong)Var10 + (unkuint9)SUB168(auVar34 * auVar66,0) +
    307:          (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
    308:   Var12 = (unkuint9)(ulonglong)Var12 + (unkuint9)SUB168(auVar34 * auVar66,8) +
    309:           (unkuint9)((char)((unkuint9)Var10 >> 0x40) != '\0');
    310:   auVar35._8_8_ = 0;
    311:   auVar35._0_8_ = uVar83;

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:310
reconstrucao/src/decompiled_02.c:310:10: error: request for member ‘_8_8_’ in something not a structure or union

    307:          (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
    308:   Var12 = (unkuint9)(ulonglong)Var12 + (unkuint9)SUB168(auVar34 * auVar66,8) +
    309:           (unkuint9)((char)((unkuint9)Var10 >> 0x40) != '\0');
    310:   auVar35._8_8_ = 0;
    311:   auVar35._0_8_ = uVar83;
    312:   auVar67._8_8_ = 0;
    313:   auVar67._0_8_ = *(ulonglong *)(param_1 + 0x98);

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:311
reconstrucao/src/decompiled_02.c:311:10: error: request for member ‘_0_8_’ in something not a structure or union

    308:   Var12 = (unkuint9)(ulonglong)Var12 + (unkuint9)SUB168(auVar34 * auVar66,8) +
    309:           (unkuint9)((char)((unkuint9)Var10 >> 0x40) != '\0');
    310:   auVar35._8_8_ = 0;
    311:   auVar35._0_8_ = uVar83;
    312:   auVar67._8_8_ = 0;
    313:   auVar67._0_8_ = *(ulonglong *)(param_1 + 0x98);
    314:   Var10 = (unkuint9)(ulonglong)Var12 + (unkuint9)SUB168(auVar35 * auVar67,0) +

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:312
reconstrucao/src/decompiled_02.c:312:10: error: request for member ‘_8_8_’ in something not a structure or union

    309:           (unkuint9)((char)((unkuint9)Var10 >> 0x40) != '\0');
    310:   auVar35._8_8_ = 0;
    311:   auVar35._0_8_ = uVar83;
    312:   auVar67._8_8_ = 0;
    313:   auVar67._0_8_ = *(ulonglong *)(param_1 + 0x98);
    314:   Var10 = (unkuint9)(ulonglong)Var12 + (unkuint9)SUB168(auVar35 * auVar67,0) +
    315:           (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:313
reconstrucao/src/decompiled_02.c:313:10: error: request for member ‘_0_8_’ in something not a structure or union

    310:   auVar35._8_8_ = 0;
    311:   auVar35._0_8_ = uVar83;
    312:   auVar67._8_8_ = 0;
    313:   auVar67._0_8_ = *(ulonglong *)(param_1 + 0x98);
    314:   Var10 = (unkuint9)(ulonglong)Var12 + (unkuint9)SUB168(auVar35 * auVar67,0) +
    315:           (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
    316:   Var13 = (unkuint9)(ulonglong)Var15 + (unkuint9)SUB168(auVar35 * auVar67,8) +

## FUN_14077f3e0 */ — reconstrucao/src/decompiled_03.c:47
reconstrucao/src/decompiled_03.c:47:88: error: passing argument 4 of ‘FUN_140a33084’ from incompatible pointer type [-Wincompatible-pointer-types]

    44:       *(undefined4 *)((longlong)plVar6 + 0x1c) = uVar4;
    45:       *(undefined4 *)(plVar6 + 5) = 0xcccc;
    46:       *(undefined1 *)(plVar6 + 0xb) = 1;
    47:       iVar5 = FUN_140a33084(param_3,auStackX_20,*(undefined4 *)(param_1 + 0x18),plVar6 + 6);
    48:       if ((-1 < iVar5) &&
    49:          (iVar5 = FUN_140a33348(param_3,*(undefined4 *)(param_1 + 0x18),plVar6 + 9), -1 < iVar5)) {
    50:         *param_5 = (longlong)plVar6;

## FUN_14077f4f8 */ — reconstrucao/src/decompiled_03.c:79
reconstrucao/src/decompiled_03.c:79:16: error: ‘DAT_14001bcb8’ undeclared (first use in this function)

    76: void FUN_14077f4f8(void)
    77: 
    78: {
    79:   EtwRegister(&DAT_14001bcb8,FUN_140a94cf0,0,&DAT_140f07240);
    80:   return;
    81: }
    82: 

## FUN_14077f4f8 */ — reconstrucao/src/decompiled_03.c:79
reconstrucao/src/decompiled_03.c:79:47: error: ‘DAT_140f07240’ undeclared (first use in this function); did you mean ‘DAT_140fc7ad0’?

    76: void FUN_14077f4f8(void)
    77: 
    78: {
    79:   EtwRegister(&DAT_14001bcb8,FUN_140a94cf0,0,&DAT_140f07240);
    80:   return;
    81: }
    82: 

## FUN_14077f528 */ — reconstrucao/src/decompiled_03.c:88
reconstrucao/src/decompiled_03.c:88:3: error: implicit declaration of function ‘PoRegisterPowerSettingCallback’; did you mean ‘PoUnregisterPowerSettingCallback’? [-Wimplicit-function-declaration]

    85: void FUN_14077f528(void)
    86: 
    87: {
    88:   PoRegisterPowerSettingCallback(0,&DAT_14001a0b8,FUN_140aa9060,0,&DAT_140f06d38);
    89:   return;
    90: }
    91: 

## FUN_14077f528 */ — reconstrucao/src/decompiled_03.c:88
reconstrucao/src/decompiled_03.c:88:37: error: ‘DAT_14001a0b8’ undeclared (first use in this function); did you mean ‘FUN_14071a0b8’?

    85: void FUN_14077f528(void)
    86: 
    87: {
    88:   PoRegisterPowerSettingCallback(0,&DAT_14001a0b8,FUN_140aa9060,0,&DAT_140f06d38);
    89:   return;
    90: }
    91: 

## FUN_14077f528 */ — reconstrucao/src/decompiled_03.c:88
reconstrucao/src/decompiled_03.c:88:68: error: ‘DAT_140f06d38’ undeclared (first use in this function); did you mean ‘DAT_140f0cf28’?

    85: void FUN_14077f528(void)
    86: 
    87: {
    88:   PoRegisterPowerSettingCallback(0,&DAT_14001a0b8,FUN_140aa9060,0,&DAT_140f06d38);
    89:   return;
    90: }
    91: 

## FUN_14077f55c */ — reconstrucao/src/decompiled_03.c:97
reconstrucao/src/decompiled_03.c:97:36: error: ‘DAT_140f06d38’ undeclared (first use in this function); did you mean ‘DAT_140f0cf28’?

    94: void FUN_14077f55c(void)
    95: 
    96: {
    97:   PoUnregisterPowerSettingCallback(DAT_140f06d38);
    98:   return;
    99: }
    100: 

## FUN_14077f580 */ — reconstrucao/src/decompiled_03.c:140
reconstrucao/src/decompiled_03.c:140:29: error: passing argument 1 of ‘FUN_140a329d0’ makes pointer from integer without a cast [-Wint-conversion]

    137:     iVar1 = FUN_1403dcb90(uStack_30,&uStack_30,&uStack_40,param_4,0,&lStack_48);
    138:     lVar3 = lStack_48;
    139:     if (-1 < iVar1) {
    140:       iVar1 = FUN_140a329d0(lStack_48,&puStackX_8);
    141:       if (-1 < iVar1) goto LAB_14077f637;
    142:       puVar2 = puStackX_8;
    143:     }

## FUN_14077f580 */ — reconstrucao/src/decompiled_03.c:140
reconstrucao/src/decompiled_03.c:140:39: error: passing argument 2 of ‘FUN_140a329d0’ from incompatible pointer type [-Wincompatible-pointer-types]

    137:     iVar1 = FUN_1403dcb90(uStack_30,&uStack_30,&uStack_40,param_4,0,&lStack_48);
    138:     lVar3 = lStack_48;
    139:     if (-1 < iVar1) {
    140:       iVar1 = FUN_140a329d0(lStack_48,&puStackX_8);
    141:       if (-1 < iVar1) goto LAB_14077f637;
    142:       puVar2 = puStackX_8;
    143:     }

## FUN_14077f580 */ — reconstrucao/src/decompiled_03.c:146
reconstrucao/src/decompiled_03.c:146:19: error: passing argument 1 of ‘FUN_140a32d80’ makes pointer from integer without a cast [-Wint-conversion]

    143:     }
    144:   }
    145:   if (lVar3 != 0) {
    146:     FUN_140a32d80(lVar3);
    147:   }
    148:   if (puVar2 != (undefined *)0x0) {
    149:     FUN_140485460(puVar2);

## FUN_14077f580 */ — reconstrucao/src/decompiled_03.c:154
reconstrucao/src/decompiled_03.c:154:17: error: ‘DAT_140f06d48’ undeclared (first use in this function); did you mean ‘DAT_140f0cf28’?

    151:   if (iVar1 != -0x3fffff45) {
    152:     return iVar1;
    153:   }
    154:   puStackX_8 = &DAT_140f06d48;
    155:   iVar1 = 0;
    156: LAB_14077f637:
    157:   *param_5 = puStackX_8;

## FUN_14077f580 */ — reconstrucao/src/decompiled_03.c:157
reconstrucao/src/decompiled_03.c:157:12: error: assignment to ‘undefined8’ {aka ‘long unsigned int’} from ‘undefined *’ {aka ‘unsigned char *’} makes integer from pointer without a cast [-Wint-conversion]

    154:   puStackX_8 = &DAT_140f06d48;
    155:   iVar1 = 0;
    156: LAB_14077f637:
    157:   *param_5 = puStackX_8;
    158:   return iVar1;
    159: }
    160: 

## FUN_14077f660 */ — reconstrucao/src/decompiled_03.c:191
reconstrucao/src/decompiled_03.c:191:29: error: passing argument 1 of ‘FUN_140a329d0’ makes pointer from integer without a cast [-Wint-conversion]

    188:     iVar1 = FUN_140a324f0(uStack_20,&uStack_20,param_3,&lStack_28);
    189:     lVar3 = lStack_28;
    190:     if (-1 < iVar1) {
    191:       iVar1 = FUN_140a329d0(lStack_28,&puStackX_8);
    192:       if (-1 < iVar1) goto LAB_14077f704;
    193:       puVar2 = puStackX_8;
    194:     }

## FUN_14077f660 */ — reconstrucao/src/decompiled_03.c:191
reconstrucao/src/decompiled_03.c:191:39: error: passing argument 2 of ‘FUN_140a329d0’ from incompatible pointer type [-Wincompatible-pointer-types]

    188:     iVar1 = FUN_140a324f0(uStack_20,&uStack_20,param_3,&lStack_28);
    189:     lVar3 = lStack_28;
    190:     if (-1 < iVar1) {
    191:       iVar1 = FUN_140a329d0(lStack_28,&puStackX_8);
    192:       if (-1 < iVar1) goto LAB_14077f704;
    193:       puVar2 = puStackX_8;
    194:     }

## FUN_14077f660 */ — reconstrucao/src/decompiled_03.c:197
reconstrucao/src/decompiled_03.c:197:19: error: passing argument 1 of ‘FUN_140a32d80’ makes pointer from integer without a cast [-Wint-conversion]

    194:     }
    195:   }
    196:   if (lVar3 != 0) {
    197:     FUN_140a32d80(lVar3);
    198:   }
    199:   if (puVar2 != (undefined *)0x0) {
    200:     FUN_140485460(puVar2);

## FUN_14077f660 */ — reconstrucao/src/decompiled_03.c:205
reconstrucao/src/decompiled_03.c:205:17: error: ‘DAT_140f06d48’ undeclared (first use in this function); did you mean ‘DAT_140f0cf28’?

    202:   if (iVar1 != -0x3fffff45) {
    203:     return iVar1;
    204:   }
    205:   puStackX_8 = &DAT_140f06d48;
    206:   iVar1 = 0;
    207: LAB_14077f704:
    208:   *param_4 = puStackX_8;

## FUN_14077f660 */ — reconstrucao/src/decompiled_03.c:208
reconstrucao/src/decompiled_03.c:208:12: error: assignment to ‘undefined8’ {aka ‘long unsigned int’} from ‘undefined *’ {aka ‘unsigned char *’} makes integer from pointer without a cast [-Wint-conversion]

    205:   puStackX_8 = &DAT_140f06d48;
    206:   iVar1 = 0;
    207: LAB_14077f704:
    208:   *param_4 = puStackX_8;
    209:   return iVar1;
    210: }
    211: 

## FUN_14077f730 */ — reconstrucao/src/decompiled_03.c:233
reconstrucao/src/decompiled_03.c:233:21: error: passing argument 1 of ‘FUN_140a32d80’ makes pointer from integer without a cast [-Wint-conversion]

    230:     iVar1 = -0x3ffffff3;
    231: LAB_14077f7d4:
    232:     if (lVar3 != 0) {
    233:       FUN_140a32d80(lVar3);
    234:     }
    235:     if (puVar2 != (undefined *)0x0) {
    236:       FUN_140485460(puVar2);

## FUN_14077f730 */ — reconstrucao/src/decompiled_03.c:242
reconstrucao/src/decompiled_03.c:242:48: error: passing argument 2 of ‘FUN_140a324f0’ from incompatible pointer type [-Wincompatible-pointer-types]

    239:   else {
    240:     iVar1 = FUN_140a7cc30(param_2,alStack_38 + 1);
    241:     if (-1 < iVar1) {
    242:       iVar1 = FUN_140a324f0(param_1,alStack_38 + 1,param_3,alStack_38);
    243:       lVar3 = alStack_38[0];
    244:       if (-1 < iVar1) {
    245:         iVar1 = FUN_140a329d0(alStack_38[0],&puStackX_8);

## FUN_14077f730 */ — reconstrucao/src/decompiled_03.c:245
reconstrucao/src/decompiled_03.c:245:41: error: passing argument 1 of ‘FUN_140a329d0’ makes pointer from integer without a cast [-Wint-conversion]

    242:       iVar1 = FUN_140a324f0(param_1,alStack_38 + 1,param_3,alStack_38);
    243:       lVar3 = alStack_38[0];
    244:       if (-1 < iVar1) {
    245:         iVar1 = FUN_140a329d0(alStack_38[0],&puStackX_8);
    246:         if (-1 < iVar1) goto LAB_14077f7ff;
    247:         puVar2 = puStackX_8;
    248:       }

## FUN_14077f730 */ — reconstrucao/src/decompiled_03.c:245
reconstrucao/src/decompiled_03.c:245:45: error: passing argument 2 of ‘FUN_140a329d0’ from incompatible pointer type [-Wincompatible-pointer-types]

    242:       iVar1 = FUN_140a324f0(param_1,alStack_38 + 1,param_3,alStack_38);
    243:       lVar3 = alStack_38[0];
    244:       if (-1 < iVar1) {
    245:         iVar1 = FUN_140a329d0(alStack_38[0],&puStackX_8);
    246:         if (-1 < iVar1) goto LAB_14077f7ff;
    247:         puVar2 = puStackX_8;
    248:       }

## FUN_14077f730 */ — reconstrucao/src/decompiled_03.c:255
reconstrucao/src/decompiled_03.c:255:17: error: ‘DAT_140f06d48’ undeclared (first use in this function); did you mean ‘DAT_140f0cf28’?

    252:   if (iVar1 != -0x3fffff45) {
    253:     return iVar1;
    254:   }
    255:   puStackX_8 = &DAT_140f06d48;
    256:   iVar1 = 0;
    257: LAB_14077f7ff:
    258:   *param_4 = puStackX_8;

## FUN_14077f730 */ — reconstrucao/src/decompiled_03.c:258
reconstrucao/src/decompiled_03.c:258:12: error: assignment to ‘undefined8’ {aka ‘long unsigned int’} from ‘undefined *’ {aka ‘unsigned char *’} makes integer from pointer without a cast [-Wint-conversion]

    255:   puStackX_8 = &DAT_140f06d48;
    256:   iVar1 = 0;
    257: LAB_14077f7ff:
    258:   *param_4 = puStackX_8;
    259:   return iVar1;
    260: }
    261: 

## FUN_14077f830 */ — reconstrucao/src/decompiled_03.c:284
reconstrucao/src/decompiled_03.c:284:35: error: passing argument 2 of ‘FUN_140a324f0’ from incompatible pointer type [-Wincompatible-pointer-types]

    281:   else {
    282:     alStack_20[1] = 0;
    283:     alStack_20[0] = param_2;
    284:     iVar1 = FUN_140a324f0(param_1,alStack_20,param_3,&lStack_28);
    285:     lVar3 = lStack_28;
    286:     if (-1 < iVar1) {
    287:       iVar1 = FUN_140a329d0(lStack_28,&puStackX_8);

## FUN_14077f830 */ — reconstrucao/src/decompiled_03.c:287
reconstrucao/src/decompiled_03.c:287:29: error: passing argument 1 of ‘FUN_140a329d0’ makes pointer from integer without a cast [-Wint-conversion]

    284:     iVar1 = FUN_140a324f0(param_1,alStack_20,param_3,&lStack_28);
    285:     lVar3 = lStack_28;
    286:     if (-1 < iVar1) {
    287:       iVar1 = FUN_140a329d0(lStack_28,&puStackX_8);
    288:       if (-1 < iVar1) goto LAB_14077f8d9;
    289:       puVar2 = puStackX_8;
    290:     }

## FUN_14077f830 */ — reconstrucao/src/decompiled_03.c:287
reconstrucao/src/decompiled_03.c:287:39: error: passing argument 2 of ‘FUN_140a329d0’ from incompatible pointer type [-Wincompatible-pointer-types]

    284:     iVar1 = FUN_140a324f0(param_1,alStack_20,param_3,&lStack_28);
    285:     lVar3 = lStack_28;
    286:     if (-1 < iVar1) {
    287:       iVar1 = FUN_140a329d0(lStack_28,&puStackX_8);
    288:       if (-1 < iVar1) goto LAB_14077f8d9;
    289:       puVar2 = puStackX_8;
    290:     }

## FUN_14077f830 */ — reconstrucao/src/decompiled_03.c:293
reconstrucao/src/decompiled_03.c:293:19: error: passing argument 1 of ‘FUN_140a32d80’ makes pointer from integer without a cast [-Wint-conversion]

    290:     }
    291:   }
    292:   if (lVar3 != 0) {
    293:     FUN_140a32d80(lVar3);
    294:   }
    295:   if (puVar2 != (undefined *)0x0) {
    296:     FUN_140485460(puVar2);

## FUN_14077f830 */ — reconstrucao/src/decompiled_03.c:301
reconstrucao/src/decompiled_03.c:301:17: error: ‘DAT_140f06d48’ undeclared (first use in this function); did you mean ‘DAT_140f0cf28’?

    298:   if (iVar1 != -0x3fffff45) {
    299:     return iVar1;
    300:   }
    301:   puStackX_8 = &DAT_140f06d48;
    302:   iVar1 = 0;
    303: LAB_14077f8d9:
    304:   *param_4 = puStackX_8;

## FUN_14077f830 */ — reconstrucao/src/decompiled_03.c:304
reconstrucao/src/decompiled_03.c:304:12: error: assignment to ‘undefined8’ {aka ‘long unsigned int’} from ‘undefined *’ {aka ‘unsigned char *’} makes integer from pointer without a cast [-Wint-conversion]

    301:   puStackX_8 = &DAT_140f06d48;
    302:   iVar1 = 0;
    303: LAB_14077f8d9:
    304:   *param_4 = puStackX_8;
    305:   return iVar1;
    306: }
    307: 

## FUN_14077f900 */ — reconstrucao/src/decompiled_03.c:313
reconstrucao/src/decompiled_03.c:313:3: error: implicit declaration of function ‘FUN_14077f250’; did you mean ‘FUN_14070f250’? [-Wimplicit-function-declaration]

    310: void FUN_14077f900(void)
    311: 
    312: {
    313:   FUN_14077f250();
    314:   return;
    315: }
    316: 

## FUN_14077f918 */ — reconstrucao/src/decompiled_03.c:327
reconstrucao/src/decompiled_03.c:327:26: error: ‘DAT_140f06ba8’ undeclared (first use in this function); did you mean ‘DAT_140f0cf28’?

    324:   undefined8 uStack_18;
    325:   undefined8 uStack_10;
    326:   
    327:   lVar2 = FUN_1402f5ef0(&DAT_140f06ba8,0,0);
    328:   LOCK();
    329:   uVar1 = DAT_140f06ba8 & 1;
    330:   DAT_140f06ba8 = DAT_140f06ba8 | 1;

## FUN_14077f918 */ — reconstrucao/src/decompiled_03.c:328
reconstrucao/src/decompiled_03.c:328:3: error: implicit declaration of function ‘LOCK’ [-Wimplicit-function-declaration]

    325:   undefined8 uStack_10;
    326:   
    327:   lVar2 = FUN_1402f5ef0(&DAT_140f06ba8,0,0);
    328:   LOCK();
    329:   uVar1 = DAT_140f06ba8 & 1;
    330:   DAT_140f06ba8 = DAT_140f06ba8 | 1;
    331:   UNLOCK();

## FUN_14077f918 */ — reconstrucao/src/decompiled_03.c:331
reconstrucao/src/decompiled_03.c:331:3: error: implicit declaration of function ‘UNLOCK’ [-Wimplicit-function-declaration]

    328:   LOCK();
    329:   uVar1 = DAT_140f06ba8 & 1;
    330:   DAT_140f06ba8 = DAT_140f06ba8 | 1;
    331:   UNLOCK();
    332:   if (uVar1 != 0) {
    333:     FUN_1402f5950(&DAT_140f06ba8,lVar2,&DAT_140f06ba8);
    334:   }

## FUN_14077f918 */ — reconstrucao/src/decompiled_03.c:338
reconstrucao/src/decompiled_03.c:338:3: error: ‘DAT_140f06bb8’ undeclared (first use in this function); did you mean ‘DAT_140f0cf28’?

    335:   if (lVar2 != 0) {
    336:     *(undefined1 *)(lVar2 + 10) = 1;
    337:   }
    338:   DAT_140f06bb8 = DAT_140f06bb8 + -1;
    339:   if (DAT_140f06bb8 == 0) {
    340:     uStack_18 = 0;
    341:     uStack_10 = 0xffffffffffffffff;

## FUN_14077f918 */ — reconstrucao/src/decompiled_03.c:342
reconstrucao/src/decompiled_03.c:342:18: error: ‘DAT_140f06bc0’ undeclared (first use in this function); did you mean ‘DAT_140f0cf28’?

    339:   if (DAT_140f06bb8 == 0) {
    340:     uStack_18 = 0;
    341:     uStack_10 = 0xffffffffffffffff;
    342:     KeSetTimer2(&DAT_140f06bc0,0xfffffffffd050f80,0,&uStack_18);
    343:   }
    344:   FUN_1404935fc(&DAT_140f06ba8);
    345:   return;

## FUN_14077f9b0 */ — reconstrucao/src/decompiled_03.c:369
reconstrucao/src/decompiled_03.c:369:7: error: implicit declaration of function ‘AlpcInitializeMessageAttribute’; did you mean ‘AlpcGetMessageAttribute’? [-Wimplicit-function-declaration]

    366:     if (lVar3 != 0) {
    367:       FUN_1406d1200(lVar2,0,0xa0);
    368:       FUN_1406d1200(lVar3,0,0x40);
    369:       AlpcInitializeMessageAttribute(0x20000000,lVar2,0xa0,auStack_10);
    370:       while( true ) {
    371:         uStackX_20 = 0x40;
    372:         iVar1 = ZwAlpcSendWaitReceivePort(DAT_140f06ba0,0,0,0,lVar3,&uStackX_20,lVar2,&uStack_18);

## FUN_14077f9b0 */ — reconstrucao/src/decompiled_03.c:372
reconstrucao/src/decompiled_03.c:372:43: error: ‘DAT_140f06ba0’ undeclared (first use in this function); did you mean ‘DAT_140f0cf28’?

    369:       AlpcInitializeMessageAttribute(0x20000000,lVar2,0xa0,auStack_10);
    370:       while( true ) {
    371:         uStackX_20 = 0x40;
    372:         iVar1 = ZwAlpcSendWaitReceivePort(DAT_140f06ba0,0,0,0,lVar3,&uStackX_20,lVar2,&uStack_18);
    373:         if (iVar1 != 0) break;
    374:         uVar4 = AlpcGetMessageAttribute(lVar2,0x20000000);
    375:         FUN_14077fb9c(lVar3,uVar4);

## FUN_14077f9b0 */ — reconstrucao/src/decompiled_03.c:374
reconstrucao/src/decompiled_03.c:374:41: error: passing argument 1 of ‘AlpcGetMessageAttribute’ makes pointer from integer without a cast [-Wint-conversion]

    371:         uStackX_20 = 0x40;
    372:         iVar1 = ZwAlpcSendWaitReceivePort(DAT_140f06ba0,0,0,0,lVar3,&uStackX_20,lVar2,&uStack_18);
    373:         if (iVar1 != 0) break;
    374:         uVar4 = AlpcGetMessageAttribute(lVar2,0x20000000);
    375:         FUN_14077fb9c(lVar3,uVar4);
    376:         AlpcInitializeMessageAttribute(0x20000000);
    377:         uStack_18 = 0;

## FUN_14077faf0 */ — reconstrucao/src/decompiled_03.c:394
reconstrucao/src/decompiled_03.c:394:26: error: ‘DAT_140f06ba8’ undeclared (first use in this function); did you mean ‘DAT_140f0cf28’?

    391:   ulonglong uVar1;
    392:   longlong lVar2;
    393:   
    394:   lVar2 = FUN_1402f5ef0(&DAT_140f06ba8,0,0);
    395:   LOCK();
    396:   uVar1 = DAT_140f06ba8 & 1;
    397:   DAT_140f06ba8 = DAT_140f06ba8 | 1;

## FUN_14077faf0 */ — reconstrucao/src/decompiled_03.c:406
reconstrucao/src/decompiled_03.c:406:10: error: ‘DAT_140f06bbc’ undeclared (first use in this function); did you mean ‘DAT_140f0cf28’?

    403:     *(undefined1 *)(lVar2 + 10) = 1;
    404:   }
    405:   lVar2 = (longlong)param_1 * 0xc0;
    406:   if (((&DAT_140f06bbc)[lVar2] != '\0') && ((&DAT_140f06bb8)[(longlong)param_1 * 0x30] == 0)) {
    407:     FUN_14077ff18();
    408:     (&DAT_140f06bbc)[lVar2] = 0;
    409:   }

## FUN_14077faf0 */ — reconstrucao/src/decompiled_03.c:406
reconstrucao/src/decompiled_03.c:406:47: error: ‘DAT_140f06bb8’ undeclared (first use in this function); did you mean ‘DAT_140f0cf28’?

    403:     *(undefined1 *)(lVar2 + 10) = 1;
    404:   }
    405:   lVar2 = (longlong)param_1 * 0xc0;
    406:   if (((&DAT_140f06bbc)[lVar2] != '\0') && ((&DAT_140f06bb8)[(longlong)param_1 * 0x30] == 0)) {
    407:     FUN_14077ff18();
    408:     (&DAT_140f06bbc)[lVar2] = 0;
    409:   }

## FUN_14077fb9c */ — reconstrucao/src/decompiled_03.c:450
reconstrucao/src/decompiled_03.c:450:32: error: ‘DAT_140f06ba8’ undeclared (first use in this function); did you mean ‘DAT_140f0cf28’?

    447:   if (uVar5 != 1) {
    448:     if ((uVar5 != 2) && (uVar5 != 3)) {
    449:       if ((uVar5 == 5) || (uVar5 == 6)) {
    450:         lVar4 = FUN_1402f5ef0(&DAT_140f06ba8,0,0);
    451:         LOCK();
    452:         uVar1 = DAT_140f06ba8 & 1;
    453:         DAT_140f06ba8 = DAT_140f06ba8 | 1;

## FUN_14077fb9c */ — reconstrucao/src/decompiled_03.c:461
reconstrucao/src/decompiled_03.c:461:17: error: ‘DAT_140f06bb0’ undeclared (first use in this function); did you mean ‘DAT_140f0cf28’?

    458:         if (lVar4 != 0) {
    459:           *(undefined1 *)(lVar4 + 10) = 1;
    460:         }
    461:         lVar4 = DAT_140f06bb0;
    462:         DAT_140f06bb0 = 0;
    463:         FUN_1404935fc(&DAT_140f06ba8);
    464:         ZwClose(lVar4);

## FUN_14077fb9c */ — reconstrucao/src/decompiled_03.c:494
reconstrucao/src/decompiled_03.c:494:54: error: ‘DAT_140f06ba0’ undeclared (first use in this function); did you mean ‘DAT_140f0cf28’?

    491:       uStack_d0 = 0;
    492:       uStack_e0 = 0;
    493:       lStack_d8 = param_1;
    494:       iVar2 = ZwAlpcAcceptConnectPort(&DAT_140f06bb0,DAT_140f06ba0,0,&uStack_b0);
    495:       if (iVar2 < 0) {
    496:         puStack_e8 = auStack_78;
    497:         uStack_c8 = 0;

## FUN_14077fb9c */ — reconstrucao/src/decompiled_03.c:504
reconstrucao/src/decompiled_03.c:504:32: error: ‘DAT_140fc4ac0’ undeclared (first use in this function); did you mean ‘DAT_140fc7ad0’?

    501:         ZwAlpcAcceptConnectPort(&DAT_140f06bb0,DAT_140f06ba0,0,&uStack_b0);
    502:       }
    503:       else {
    504:         uStack_b8 = (ulonglong)DAT_140fc4ac0;
    505:         if ((DAT_140fc4ac0 & 0x10) == 0) {
    506:           uStack_b8 = (ulonglong)(DAT_140fc4ac0 | 1);
    507:           FUN_14053fd44(&PTR_DAT_1400dd860,uStack_b8,3,1);

## FUN_14077fb9c */ — reconstrucao/src/decompiled_03.c:507
reconstrucao/src/decompiled_03.c:507:26: error: ‘PTR_DAT_1400dd860’ undeclared (first use in this function)

    504:         uStack_b8 = (ulonglong)DAT_140fc4ac0;
    505:         if ((DAT_140fc4ac0 & 0x10) == 0) {
    506:           uStack_b8 = (ulonglong)(DAT_140fc4ac0 | 1);
    507:           FUN_14053fd44(&PTR_DAT_1400dd860,uStack_b8,3,1);
    508:           FUN_14053fdd4(uStack_b8,3,&PTR_DAT_1400dd860);
    509:         }
    510:       }

## FUN_14077fdf8 */ — reconstrucao/src/decompiled_03.c:532
reconstrucao/src/decompiled_03.c:532:10: error: ‘DAT_140fc4ac0’ undeclared (first use in this function); did you mean ‘DAT_140fc7ad0’?

    529:   uint uVar2;
    530:   
    531:   if (*(int *)(param_1 + 0x28) == 0) {
    532:     if ((DAT_140fc4ac0 & 0x10) == 0) {
    533:       uVar2 = DAT_140fc4ac0 | 1;
    534:       FUN_14053fd44(&PTR_DAT_1400dd860,uVar2,3);
    535:       FUN_14053fdd4(uVar2,3,&PTR_DAT_1400dd860);

## FUN_14077fdf8 */ — reconstrucao/src/decompiled_03.c:534
reconstrucao/src/decompiled_03.c:534:22: error: ‘PTR_DAT_1400dd860’ undeclared (first use in this function)

    531:   if (*(int *)(param_1 + 0x28) == 0) {
    532:     if ((DAT_140fc4ac0 & 0x10) == 0) {
    533:       uVar2 = DAT_140fc4ac0 | 1;
    534:       FUN_14053fd44(&PTR_DAT_1400dd860,uVar2,3);
    535:       FUN_14053fdd4(uVar2,3,&PTR_DAT_1400dd860);
    536:     }
    537:   }

## FUN_14077fdf8 */ — reconstrucao/src/decompiled_03.c:546
reconstrucao/src/decompiled_03.c:546:31: error: ‘DAT_140f06bb0’ undeclared (first use in this function); did you mean ‘DAT_140f0cf28’?

    543:     }
    544:     uVar1 = FUN_14077eff0(*(undefined8 *)(param_1 + 0x30));
    545:     *(undefined4 *)(param_1 + 0x30) = uVar1;
    546:     ZwAlpcSendWaitReceivePort(DAT_140f06bb0,0x10000,param_1,0,0,0,0,0);
    547:     return 0;
    548:   }
    549:   return 0xc00000bb;

## FUN_14077ff18 */ — reconstrucao/src/decompiled_03.c:554
reconstrucao/src/decompiled_03.c:554:6: error: conflicting types for ‘FUN_14077ff18’; have ‘void(undefined8,  uint,  uint,  void *, char)’ {aka ‘void(long unsigned int,  unsigned int,  unsigned int,  void *, char)’}

    551: 
    552: /* Ghidra label: FUN_14077ff18 */
    553: /* Ghidra address: 14077ff18 */
    554: void FUN_14077ff18(undefined8 param_1,uint param_2,uint param_3,void *param_4,char param_5)
    555: 
    556: {
    557:   longlong lVar1;

## FUN_14077ff18 */ — reconstrucao/src/decompiled_03.c:576
reconstrucao/src/decompiled_03.c:576:11: error: ‘DAT_140f06bb0’ undeclared (first use in this function); did you mean ‘DAT_140f0cf28’?

    573:   undefined1 auStack_c8 [160];
    574:   ulonglong uStack_28;
    575:   
    576:   lVar1 = DAT_140f06bb0;
    577:   uStack_28 = DAT_140e0a740 ^ (ulonglong)auStack_158;
    578:   if (DAT_140f06bb0 != 0) {
    579:     uStack_e8 = 0;

## TtmNotifyDeviceArrival */ — reconstrucao/src/decompiled_03.c:611
reconstrucao/src/decompiled_03.c:611:1: error: expected identifier or ‘(’ before ‘if’

    608: 
    609: /* Ghidra label: TtmNotifyDeviceArrival */
    610: /* Ghidra address: 140780020 */
    611: if (param_3 == (longlong *)0x0) {
    612:     iVar4 = -0x3ffffff3;
    613:     uVar9 = 0x182;
    614: LAB_14078029b:

## TtmNotifyDeviceDeparture */ — reconstrucao/src/decompiled_03.c:633
reconstrucao/src/decompiled_03.c:633:25: error: passing argument 1 of ‘FUN_140781b40’ makes integer from pointer without a cast [-Wint-conversion]

    630:   uStackX_18 = 0;
    631:   lStackX_20 = 0;
    632:   cVar1 = '\0';
    633:   iVar2 = FUN_140781b40(&uStackX_18);
    634:   if (iVar2 < 0) {
    635:     FUN_1409a24bc("TtmNotifyDeviceDeparture",0x26f,iVar2,iVar2);
    636:   }

## TtmNotifyDeviceDeparture */ — reconstrucao/src/decompiled_03.c:635
reconstrucao/src/decompiled_03.c:635:19: error: passing argument 1 of ‘FUN_1409a24bc’ makes integer from pointer without a cast [-Wint-conversion]

    632:   cVar1 = '\0';
    633:   iVar2 = FUN_140781b40(&uStackX_18);
    634:   if (iVar2 < 0) {
    635:     FUN_1409a24bc("TtmNotifyDeviceDeparture",0x26f,iVar2,iVar2);
    636:   }
    637:   else {
    638:     cVar1 = FUN_140781098(uStackX_18,param_1,param_2,&lStackX_20);

## TtmNotifyDeviceDeparture */ — reconstrucao/src/decompiled_03.c:645
reconstrucao/src/decompiled_03.c:645:28: error: ‘DAT_140f06b20’ undeclared (first use in this function); did you mean ‘DAT_140f0cf28’?

    642:         FUN_140781cb4(uStackX_18,1);
    643:       }
    644:     }
    645:     ExReleaseResourceLite(&DAT_140f06b20);
    646:     KeLeaveCriticalRegion();
    647:   }
    648:   FUN_140784338(param_1,param_2,cVar1);

## TtmNotifyDeviceInput */ — reconstrucao/src/decompiled_03.c:675
reconstrucao/src/decompiled_03.c:675:25: error: passing argument 1 of ‘FUN_140781b40’ makes integer from pointer without a cast [-Wint-conversion]

    672:   uStack_30 = 0;
    673:   uVar2 = 0;
    674:   uVar6 = 0;
    675:   iVar3 = FUN_140781b40(&lStackX_20);
    676:   lVar7 = lStackX_20;
    677:   if (iVar3 < 0) {
    678:     FUN_1409a24bc("TtmNotifyDeviceInput",0x2f8,iVar3,0xffffffff);

## TtmNotifyDeviceInput */ — reconstrucao/src/decompiled_03.c:678
reconstrucao/src/decompiled_03.c:678:19: error: passing argument 1 of ‘FUN_1409a24bc’ makes integer from pointer without a cast [-Wint-conversion]

    675:   iVar3 = FUN_140781b40(&lStackX_20);
    676:   lVar7 = lStackX_20;
    677:   if (iVar3 < 0) {
    678:     FUN_1409a24bc("TtmNotifyDeviceInput",0x2f8,iVar3,0xffffffff);
    679: LAB_140780444:
    680:     lVar5 = lStackX_20;
    681:   }

## TtmNotifyDeviceInput */ — reconstrucao/src/decompiled_03.c:692
reconstrucao/src/decompiled_03.c:692:46: error: ‘_DAT_fffff78000000008’ undeclared (first use in this function)

    689:         lVar5 = lVar7;
    690:       }
    691:       else {
    692:         *(undefined8 *)(lStack_38 + 0x260) = _DAT_fffff78000000008;
    693:         if (*(int *)(lStack_38 + 0x254) == -1) goto LAB_140780444;
    694:         lVar7 = lStack_38;
    695:         iVar3 = FUN_140787534(&uStack_30,lStackX_20);

## TtmNotifyDeviceInput */ — reconstrucao/src/decompiled_03.c:703
reconstrucao/src/decompiled_03.c:703:19: error: implicit declaration of function ‘FUN_1407878c0’; did you mean ‘FUN_1407898c0’? [-Wimplicit-function-declaration]

    700:               uVar6 = 1;
    701:             }
    702:           }
    703:           uVar2 = FUN_1407878c0(lVar5,uStack_30,4,0x54544941,uVar6);
    704:           goto LAB_140780448;
    705:         }
    706:         uVar4 = 0x324;

## TtmNotifyDeviceInput */ — reconstrucao/src/decompiled_03.c:714
reconstrucao/src/decompiled_03.c:714:19: error: passing argument 1 of ‘FUN_1409a24bc’ makes integer from pointer without a cast [-Wint-conversion]

    711:       iVar3 = -0x3ffffbab;
    712:       lVar5 = lVar7;
    713:     }
    714:     FUN_1409a24bc("TtmNotifyDeviceInput",uVar4,iVar3,0xffffffff);
    715:   }
    716: LAB_140780448:
    717:   FUN_1407846c4(param_1,param_2,param_3,cVar1,uVar2,uVar6);

## TtmNotifyDeviceInput */ — reconstrucao/src/decompiled_03.c:719
reconstrucao/src/decompiled_03.c:719:28: error: ‘DAT_140f06b20’ undeclared (first use in this function); did you mean ‘DAT_140f0cf28’?

    716: LAB_140780448:
    717:   FUN_1407846c4(param_1,param_2,param_3,cVar1,uVar2,uVar6);
    718:   if (lVar5 != 0) {
    719:     ExReleaseResourceLite(&DAT_140f06b20);
    720:     KeLeaveCriticalRegion();
    721:   }
    722:   return;

## FUN_14078056c */ — reconstrucao/src/decompiled_03.c:741
reconstrucao/src/decompiled_03.c:741:19: error: passing argument 1 of ‘FUN_1409a24bc’ makes integer from pointer without a cast [-Wint-conversion]

    738:   lVar1 = lStackX_20;
    739:   if (cVar2 == '\0') {
    740:     uVar3 = 0xc0000225;
    741:     FUN_1409a24bc("TtmiAssignDevice",0x465,0xffffffff,0xc0000225);
    742:   }
    743:   else {
    744:     *(undefined4 *)(lStackX_20 + 0x254) = *(undefined4 *)(param_2 + 0x1c);

## FUN_14078062c */ — reconstrucao/src/decompiled_03.c:775
reconstrucao/src/decompiled_03.c:775:9: error: ‘_uStack_30’ undeclared (first use in this function); did you mean ‘uStack_30’?

    772:         puVar2 = (undefined8 *)*puVar2) {
    773:       if ((*(uint *)(puVar2 + 0x4b) & 8) == 0) {
    774:         uStack_20 = puVar2[3];
    775:         _uStack_30 = CONCAT44(*(undefined4 *)(puVar2 + 4),*(undefined4 *)(puVar2 + 2));
    776:         uStack_18 = puVar2[0x4c];
    777:         _uStack_28 = CONCAT44(*(uint *)(puVar2 + 0x4b),*(undefined4 *)(puVar2 + 9));
    778:         _uStack_38 = CONCAT44(*(undefined4 *)((longlong)puVar2 + 0x254),uVar1);

## FUN_14078062c */ — reconstrucao/src/decompiled_03.c:777
reconstrucao/src/decompiled_03.c:777:9: error: ‘_uStack_28’ undeclared (first use in this function); did you mean ‘uStack_28’?

    774:         uStack_20 = puVar2[3];
    775:         _uStack_30 = CONCAT44(*(undefined4 *)(puVar2 + 4),*(undefined4 *)(puVar2 + 2));
    776:         uStack_18 = puVar2[0x4c];
    777:         _uStack_28 = CONCAT44(*(uint *)(puVar2 + 0x4b),*(undefined4 *)(puVar2 + 9));
    778:         _uStack_38 = CONCAT44(*(undefined4 *)((longlong)puVar2 + 0x254),uVar1);
    779:         FUN_140784830(&uStack_38);
    780:       }

## FUN_14078062c */ — reconstrucao/src/decompiled_03.c:778
reconstrucao/src/decompiled_03.c:778:9: error: ‘_uStack_38’ undeclared (first use in this function); did you mean ‘uStack_38’?

    775:         _uStack_30 = CONCAT44(*(undefined4 *)(puVar2 + 4),*(undefined4 *)(puVar2 + 2));
    776:         uStack_18 = puVar2[0x4c];
    777:         _uStack_28 = CONCAT44(*(uint *)(puVar2 + 0x4b),*(undefined4 *)(puVar2 + 9));
    778:         _uStack_38 = CONCAT44(*(undefined4 *)((longlong)puVar2 + 0x254),uVar1);
    779:         FUN_140784830(&uStack_38);
    780:       }
    781:     }

## FUN_14078073c */ — reconstrucao/src/decompiled_03.c:822
reconstrucao/src/decompiled_03.c:822:47: error: passing argument 3 of ‘FUN_140781248’ makes integer from pointer without a cast [-Wint-conversion]

    819:       return 0;
    820:     }
    821:     if ((((byte)*(undefined4 *)(puVar2 + 0x4b) & 10) == 2) &&
    822:        (iVar1 = FUN_140781248(param_1,param_2,puVar2,0), iVar1 < 0)) break;
    823:     puVar2 = (undefined8 *)*puVar2;
    824:   }
    825:   FUN_1409a24bc("TtmiPublishDeviceEnumerationEvents",0x41e,iVar1,iVar1);

## FUN_14078073c */ — reconstrucao/src/decompiled_03.c:825
reconstrucao/src/decompiled_03.c:825:17: error: passing argument 1 of ‘FUN_1409a24bc’ makes integer from pointer without a cast [-Wint-conversion]

    822:        (iVar1 = FUN_140781248(param_1,param_2,puVar2,0), iVar1 < 0)) break;
    823:     puVar2 = (undefined8 *)*puVar2;
    824:   }
    825:   FUN_1409a24bc("TtmiPublishDeviceEnumerationEvents",0x41e,iVar1,iVar1);
    826:   return iVar1;
    827: }
    828: 

## FUN_1407807d0 */ — reconstrucao/src/decompiled_03.c:862
reconstrucao/src/decompiled_03.c:862:41: error: passing argument 2 of ‘FUN_140780a78’ makes integer from pointer without a cast [-Wint-conversion]

    859:       if ((uVar1 & 1) == 0) {
    860:         if ((uVar1 & 0x10) != 0) {
    861:           *(uint *)(plVar6 + 0x4b) = uVar1 & 0xffffffef;
    862:           uVar8 = FUN_140780a78(param_1,plVar6);
    863:           uVar7 = 4;
    864:           goto LAB_140780846;
    865:         }

## FUN_1407807d0 */ — reconstrucao/src/decompiled_03.c:862
reconstrucao/src/decompiled_03.c:862:17: error: invalid use of void expression

    859:       if ((uVar1 & 1) == 0) {
    860:         if ((uVar1 & 0x10) != 0) {
    861:           *(uint *)(plVar6 + 0x4b) = uVar1 & 0xffffffef;
    862:           uVar8 = FUN_140780a78(param_1,plVar6);
    863:           uVar7 = 4;
    864:           goto LAB_140780846;
    865:         }

## FUN_1407807d0 */ — reconstrucao/src/decompiled_03.c:869
reconstrucao/src/decompiled_03.c:869:39: error: passing argument 2 of ‘FUN_140780a78’ makes integer from pointer without a cast [-Wint-conversion]

    866:       }
    867:       else {
    868:         *(uint *)(plVar6 + 0x4b) = uVar1 & 0xfffffffe | 2;
    869:         uVar8 = FUN_140780a78(param_1,plVar6);
    870:         uVar7 = 3;
    871: LAB_140780846:
    872:         FUN_140781248(uVar8,0,plVar6,uVar7);

## FUN_1407807d0 */ — reconstrucao/src/decompiled_03.c:869
reconstrucao/src/decompiled_03.c:869:15: error: invalid use of void expression

    866:       }
    867:       else {
    868:         *(uint *)(plVar6 + 0x4b) = uVar1 & 0xfffffffe | 2;
    869:         uVar8 = FUN_140780a78(param_1,plVar6);
    870:         uVar7 = 3;
    871: LAB_140780846:
    872:         FUN_140781248(uVar8,0,plVar6,uVar7);

## FUN_1407807d0 */ — reconstrucao/src/decompiled_03.c:872
reconstrucao/src/decompiled_03.c:872:31: error: passing argument 3 of ‘FUN_140781248’ makes integer from pointer without a cast [-Wint-conversion]

    869:         uVar8 = FUN_140780a78(param_1,plVar6);
    870:         uVar7 = 3;
    871: LAB_140780846:
    872:         FUN_140781248(uVar8,0,plVar6,uVar7);
    873:       }
    874:       if ((*(uint *)(plVar6 + 0x4b) & 0x20) != 0) {
    875:         *(uint *)(plVar6 + 0x4b) = *(uint *)(plVar6 + 0x4b) & 0xffffffdf;

## FUN_1407807d0 */ — reconstrucao/src/decompiled_03.c:876
reconstrucao/src/decompiled_03.c:876:31: error: passing argument 2 of ‘FUN_140780aa0’ makes integer from pointer without a cast [-Wint-conversion]

    873:       }
    874:       if ((*(uint *)(plVar6 + 0x4b) & 0x20) != 0) {
    875:         *(uint *)(plVar6 + 0x4b) = *(uint *)(plVar6 + 0x4b) & 0xffffffdf;
    876:         FUN_140780aa0(param_1,plVar6);
    877:       }
    878:     }
    879:     if (((byte)*(uint *)(plVar6 + 0x4b) & 0x44) == 0x40) {

## FUN_1407807d0 */ — reconstrucao/src/decompiled_03.c:881
reconstrucao/src/decompiled_03.c:881:37: error: passing argument 2 of ‘FUN_140781420’ makes integer from pointer without a cast [-Wint-conversion]

    878:     }
    879:     if (((byte)*(uint *)(plVar6 + 0x4b) & 0x44) == 0x40) {
    880:       *(uint *)(plVar6 + 0x4b) = *(uint *)(plVar6 + 0x4b) & 0xffffffbf;
    881:       cVar4 = FUN_140781420(param_1,plVar6);
    882:       if (cVar4 != '\0') {
    883:         *(uint *)(plVar6 + 0x4b) = *(uint *)(plVar6 + 0x4b) | 0x40;
    884:         *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x1000;

## FUN_1407807d0 */ — reconstrucao/src/decompiled_03.c:892
reconstrucao/src/decompiled_03.c:892:33: error: passing argument 3 of ‘FUN_140781248’ makes integer from pointer without a cast [-Wint-conversion]

    889:     if ((uVar1 & 4) != 0) {
    890:       if ((uVar1 & 2) != 0) {
    891:         *(uint *)(plVar6 + 0x4b) = uVar1 | 8;
    892:         FUN_140781248(param_1,0,plVar6,5);
    893:       }
    894:       if (plVar6[5] != 0) {
    895:         uStack_18 = 0;

## FUN_1407807d0 */ — reconstrucao/src/decompiled_03.c:900
reconstrucao/src/decompiled_03.c:900:34: error: passing argument 2 of ‘FUN_1407815d4’ makes pointer from integer without a cast [-Wint-conversion]

    897:         uStack_30 = 0;
    898:         uStack_28 = 0;
    899:         uStack_20 = 0;
    900:         FUN_1407815d4(&uStack_38,param_1,plVar6,2,plVar6[5],0);
    901:         FUN_1406c4fb0(plVar6[3]);
    902:         FUN_140781754(&uStack_38,0);
    903:       }

## FUN_1407807d0 */ — reconstrucao/src/decompiled_03.c:900
reconstrucao/src/decompiled_03.c:900:42: error: passing argument 3 of ‘FUN_1407815d4’ makes integer from pointer without a cast [-Wint-conversion]

    897:         uStack_30 = 0;
    898:         uStack_28 = 0;
    899:         uStack_20 = 0;
    900:         FUN_1407815d4(&uStack_38,param_1,plVar6,2,plVar6[5],0);
    901:         FUN_1406c4fb0(plVar6[3]);
    902:         FUN_140781754(&uStack_38,0);
    903:       }

## FUN_1407807d0 */ — reconstrucao/src/decompiled_03.c:902
reconstrucao/src/decompiled_03.c:902:23: error: passing argument 1 of ‘FUN_140781754’ makes integer from pointer without a cast [-Wint-conversion]

    899:         uStack_20 = 0;
    900:         FUN_1407815d4(&uStack_38,param_1,plVar6,2,plVar6[5],0);
    901:         FUN_1406c4fb0(plVar6[3]);
    902:         FUN_140781754(&uStack_38,0);
    903:       }
    904:       lVar2 = *plVar6;
    905:       plVar5 = (longlong *)plVar6[1];

## FUN_1407807d0 */ — reconstrucao/src/decompiled_03.c:907
reconstrucao/src/decompiled_03.c:907:26: error: implicit declaration of function ‘swi’ [-Wimplicit-function-declaration]

    904:       lVar2 = *plVar6;
    905:       plVar5 = (longlong *)plVar6[1];
    906:       if ((*(longlong **)(lVar2 + 8) != plVar6) || ((longlong *)*plVar5 != plVar6)) {
    907:         pcVar3 = (code *)swi(0x29);
    908:         (*pcVar3)(3);
    909:         pcVar3 = (code *)swi(3);
    910:         (*pcVar3)();

## FUN_1407809b4 */ — reconstrucao/src/decompiled_03.c:952
reconstrucao/src/decompiled_03.c:952:17: error: passing argument 1 of ‘FUN_1409a24bc’ makes integer from pointer without a cast [-Wint-conversion]

    949:     uVar5 = 0xc000000d;
    950:     uVar4 = 0x53b;
    951:   }
    952:   FUN_1409a24bc("TtmiSetInputWakeCapability",uVar4,0xffffffff,uVar5);
    953:   return uVar5;
    954: }
    955: 

## FUN_140780aa0 */ — reconstrucao/src/decompiled_03.c:990
reconstrucao/src/decompiled_03.c:990:30: error: passing argument 2 of ‘FUN_1407815d4’ makes pointer from integer without a cast [-Wint-conversion]

    987:     uStack_28 = 0;
    988:     uStack_20 = 0;
    989:     uStack_18 = 0;
    990:     FUN_1407815d4(&uStack_38,param_1,param_2,1,*(longlong *)(param_2 + 0x30),
    991:                   *(undefined4 *)(param_2 + 0x254));
    992:     iVar1 = FUN_1406c4fb0(*(undefined8 *)(param_2 + 0x18),*(undefined4 *)(param_2 + 0x254));
    993:     FUN_140781754(&uStack_38,iVar1);

## FUN_140780aa0 */ — reconstrucao/src/decompiled_03.c:992
reconstrucao/src/decompiled_03.c:992:11: error: invalid use of void expression

    989:     uStack_18 = 0;
    990:     FUN_1407815d4(&uStack_38,param_1,param_2,1,*(longlong *)(param_2 + 0x30),
    991:                   *(undefined4 *)(param_2 + 0x254));
    992:     iVar1 = FUN_1406c4fb0(*(undefined8 *)(param_2 + 0x18),*(undefined4 *)(param_2 + 0x254));
    993:     FUN_140781754(&uStack_38,iVar1);
    994:     if (iVar1 < 0) {
    995:       FUN_1409a24bc("TtmpCallAssignedToTerminal",0x94c,iVar1,0xffffffff);

## FUN_140780aa0 */ — reconstrucao/src/decompiled_03.c:993
reconstrucao/src/decompiled_03.c:993:19: error: passing argument 1 of ‘FUN_140781754’ makes integer from pointer without a cast [-Wint-conversion]

    990:     FUN_1407815d4(&uStack_38,param_1,param_2,1,*(longlong *)(param_2 + 0x30),
    991:                   *(undefined4 *)(param_2 + 0x254));
    992:     iVar1 = FUN_1406c4fb0(*(undefined8 *)(param_2 + 0x18),*(undefined4 *)(param_2 + 0x254));
    993:     FUN_140781754(&uStack_38,iVar1);
    994:     if (iVar1 < 0) {
    995:       FUN_1409a24bc("TtmpCallAssignedToTerminal",0x94c,iVar1,0xffffffff);
    996:     }

## FUN_140780aa0 */ — reconstrucao/src/decompiled_03.c:995
reconstrucao/src/decompiled_03.c:995:21: error: passing argument 1 of ‘FUN_1409a24bc’ makes integer from pointer without a cast [-Wint-conversion]

    992:     iVar1 = FUN_1406c4fb0(*(undefined8 *)(param_2 + 0x18),*(undefined4 *)(param_2 + 0x254));
    993:     FUN_140781754(&uStack_38,iVar1);
    994:     if (iVar1 < 0) {
    995:       FUN_1409a24bc("TtmpCallAssignedToTerminal",0x94c,iVar1,0xffffffff);
    996:     }
    997:   }
    998:   return;

## FUN_140780b3c */ — reconstrucao/src/decompiled_03.c:1018
reconstrucao/src/decompiled_03.c:1018:48: error: passing argument 5 of ‘FUN_1407815d4’ makes integer from pointer without a cast [-Wint-conversion]

    1015:     uStack_28 = 0;
    1016:     uStack_20 = 0;
    1017:     uStack_18 = 0;
    1018:     FUN_1407815d4(&uStack_38,param_1,param_2,5,FUN_1405dda80,param_3);
    1019:     FUN_1405dda80(param_3,*param_1);
    1020:     FUN_140781754(&uStack_38,0);
    1021:   }

## FUN_140780b3c */ — reconstrucao/src/decompiled_03.c:1020
reconstrucao/src/decompiled_03.c:1020:19: error: passing argument 1 of ‘FUN_140781754’ makes integer from pointer without a cast [-Wint-conversion]

    1017:     uStack_18 = 0;
    1018:     FUN_1407815d4(&uStack_38,param_1,param_2,5,FUN_1405dda80,param_3);
    1019:     FUN_1405dda80(param_3,*param_1);
    1020:     FUN_140781754(&uStack_38,0);
    1021:   }
    1022:   return;
    1023: }

## FUN_140780bbc */ — reconstrucao/src/decompiled_03.c:1043
reconstrucao/src/decompiled_03.c:1043:30: error: passing argument 2 of ‘FUN_1407815d4’ makes pointer from integer without a cast [-Wint-conversion]

    1040:     uStack_28 = 0;
    1041:     uStack_20 = 0;
    1042:     uStack_18 = 0;
    1043:     FUN_1407815d4(&uStack_38,param_1,param_2,4,*(longlong *)(param_2 + 0x38),param_3);
    1044:     iVar1 = FUN_1406c4fb0(*(undefined8 *)(param_2 + 0x18),param_3,*(undefined4 *)(param_1 + 0x78));
    1045:     FUN_140781754(&uStack_38,iVar1);
    1046:     if (iVar1 < 0) {

## FUN_140780bbc */ — reconstrucao/src/decompiled_03.c:1044
reconstrucao/src/decompiled_03.c:1044:11: error: invalid use of void expression

    1041:     uStack_20 = 0;
    1042:     uStack_18 = 0;
    1043:     FUN_1407815d4(&uStack_38,param_1,param_2,4,*(longlong *)(param_2 + 0x38),param_3);
    1044:     iVar1 = FUN_1406c4fb0(*(undefined8 *)(param_2 + 0x18),param_3,*(undefined4 *)(param_1 + 0x78));
    1045:     FUN_140781754(&uStack_38,iVar1);
    1046:     if (iVar1 < 0) {
    1047:       FUN_1409a24bc("TtmpCallSetDisplayState",0x988,iVar1,0xffffffff);

## FUN_140780bbc */ — reconstrucao/src/decompiled_03.c:1045
reconstrucao/src/decompiled_03.c:1045:19: error: passing argument 1 of ‘FUN_140781754’ makes integer from pointer without a cast [-Wint-conversion]

    1042:     uStack_18 = 0;
    1043:     FUN_1407815d4(&uStack_38,param_1,param_2,4,*(longlong *)(param_2 + 0x38),param_3);
    1044:     iVar1 = FUN_1406c4fb0(*(undefined8 *)(param_2 + 0x18),param_3,*(undefined4 *)(param_1 + 0x78));
    1045:     FUN_140781754(&uStack_38,iVar1);
    1046:     if (iVar1 < 0) {
    1047:       FUN_1409a24bc("TtmpCallSetDisplayState",0x988,iVar1,0xffffffff);
    1048:     }

## FUN_140780bbc */ — reconstrucao/src/decompiled_03.c:1047
reconstrucao/src/decompiled_03.c:1047:21: error: passing argument 1 of ‘FUN_1409a24bc’ makes integer from pointer without a cast [-Wint-conversion]

    1044:     iVar1 = FUN_1406c4fb0(*(undefined8 *)(param_2 + 0x18),param_3,*(undefined4 *)(param_1 + 0x78));
    1045:     FUN_140781754(&uStack_38,iVar1);
    1046:     if (iVar1 < 0) {
    1047:       FUN_1409a24bc("TtmpCallSetDisplayState",0x988,iVar1,0xffffffff);
    1048:     }
    1049:   }
    1050:   return;

## FUN_140780c6c */ — reconstrucao/src/decompiled_03.c:1071
reconstrucao/src/decompiled_03.c:1071:30: error: passing argument 2 of ‘FUN_1407815d4’ makes pointer from integer without a cast [-Wint-conversion]

    1068:     uStack_28 = 0;
    1069:     uStack_20 = 0;
    1070:     uStack_18 = 0;
    1071:     FUN_1407815d4(&uStack_38,param_1,param_2,3,*(longlong *)(param_2 + 0x40),param_3);
    1072:     iVar1 = FUN_1406c4fb0(*(undefined8 *)(param_2 + 0x18),param_3);
    1073:     FUN_140781754(&uStack_38,iVar1);
    1074:     if (iVar1 < 0) {

## FUN_140780c6c */ — reconstrucao/src/decompiled_03.c:1072
reconstrucao/src/decompiled_03.c:1072:11: error: invalid use of void expression

    1069:     uStack_20 = 0;
    1070:     uStack_18 = 0;
    1071:     FUN_1407815d4(&uStack_38,param_1,param_2,3,*(longlong *)(param_2 + 0x40),param_3);
    1072:     iVar1 = FUN_1406c4fb0(*(undefined8 *)(param_2 + 0x18),param_3);
    1073:     FUN_140781754(&uStack_38,iVar1);
    1074:     if (iVar1 < 0) {
    1075:       FUN_1409a24bc("TtmpCallSetInputMode",0x9c7,iVar1,0xffffffff);

## FUN_140780c6c */ — reconstrucao/src/decompiled_03.c:1073
reconstrucao/src/decompiled_03.c:1073:19: error: passing argument 1 of ‘FUN_140781754’ makes integer from pointer without a cast [-Wint-conversion]

    1070:     uStack_18 = 0;
    1071:     FUN_1407815d4(&uStack_38,param_1,param_2,3,*(longlong *)(param_2 + 0x40),param_3);
    1072:     iVar1 = FUN_1406c4fb0(*(undefined8 *)(param_2 + 0x18),param_3);
    1073:     FUN_140781754(&uStack_38,iVar1);
    1074:     if (iVar1 < 0) {
    1075:       FUN_1409a24bc("TtmpCallSetInputMode",0x9c7,iVar1,0xffffffff);
    1076:     }

## FUN_140780c6c */ — reconstrucao/src/decompiled_03.c:1075
reconstrucao/src/decompiled_03.c:1075:21: error: passing argument 1 of ‘FUN_1409a24bc’ makes integer from pointer without a cast [-Wint-conversion]

    1072:     iVar1 = FUN_1406c4fb0(*(undefined8 *)(param_2 + 0x18),param_3);
    1073:     FUN_140781754(&uStack_38,iVar1);
    1074:     if (iVar1 < 0) {
    1075:       FUN_1409a24bc("TtmpCallSetInputMode",0x9c7,iVar1,0xffffffff);
    1076:     }
    1077:   }
    1078:   return;

## FUN_140780d0c */ — reconstrucao/src/decompiled_03.c:1107
reconstrucao/src/decompiled_03.c:1107:18: error: ‘SystemReserved1’ undeclared (first use in this function)

    1104:     uStack_50 = 0x1a0;
    1105:     uStack_28 = 0;
    1106:     uStack_10 = 0;
    1107:     pvStack_38 = SystemReserved1[0xf];
    1108:     puStack_18 = &uStack_68;
    1109:     pcStack_20 = FUN_140780db0;
    1110:     uStack_58 = param_3;

## FUN_140780d0c */ — reconstrucao/src/decompiled_03.c:1109
reconstrucao/src/decompiled_03.c:1109:18: error: ‘FUN_140780db0’ undeclared (first use in this function); did you mean ‘FUN_140787db0’?

    1106:     uStack_10 = 0;
    1107:     pvStack_38 = SystemReserved1[0xf];
    1108:     puStack_18 = &uStack_68;
    1109:     pcStack_20 = FUN_140780db0;
    1110:     uStack_58 = param_3;
    1111:     uStack_54 = param_2;
    1112:     uStack_30 = param_4;

## FUN_140780db0 */ — reconstrucao/src/decompiled_03.c:1120
reconstrucao/src/decompiled_03.c:1120:1: error: return type defaults to ‘int’ [-Wimplicit-int]

    1117: 
    1118: /* Ghidra label: FUN_140780db0 */
    1119: /* Ghidra address: 140780db0 */
    1120: FUN_140780db0(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
    1121:              undefined8 param_5,undefined8 param_6)
    1122: 
    1123: {

## FUN_140780db0 */ — reconstrucao/src/decompiled_03.c:1138
reconstrucao/src/decompiled_03.c:1138:10: error: ‘DAT_140e67b50’ undeclared (first use in this function); did you mean ‘DAT_140fc7ad0’?

    1135:   }
    1136:   else {
    1137:     iVar1 = aiStack_18[0];
    1138:     if ((DAT_140e67b50 != '\0') && (aiStack_18[0] == 0)) {
    1139:                     /* WARNING: Subroutine does not return */
    1140:       KeBugCheckEx(param_2,param_3,param_4,param_5,param_6);
    1141:     }

## FUN_140780ec0 */ — reconstrucao/src/decompiled_03.c:1184
reconstrucao/src/decompiled_03.c:1184:23: error: passing argument 1 of ‘FUN_1409a24bc’ makes integer from pointer without a cast [-Wint-conversion]

    1181:       cVar5 = FUN_140781064(param_1,(int)plVar6[4],alStack_2b8);
    1182:       lVar1 = alStack_2b8[0];
    1183:       if (cVar5 == '\0') {
    1184:         FUN_1409a24bc("TtmpCommitTerminalDisplayStateUpdateWorker",0xbaa,0xc0000225,0xffffffff);
    1185:       }
    1186:       else {
    1187:         if ((lStack_270 == 0) && (*(longlong *)(alStack_2b8[0] + 0x38) != 0)) {

## FUN_140780ec0 */ — reconstrucao/src/decompiled_03.c:1195
reconstrucao/src/decompiled_03.c:1195:35: error: passing argument 2 of ‘FUN_140781368’ makes integer from pointer without a cast [-Wint-conversion]

    1192: LAB_140780fa0:
    1193:           if ((*(longlong *)(alStack_2b8[0] + 0x38) != 0) &&
    1194:              (*(longlong *)(alStack_2b8[0] + 0x38) != lStack_270)) {
    1195:             FUN_140781368(param_1,auStack_2a8,param_2);
    1196:             uStack_298 = *(undefined4 *)(lVar1 + 0x10);
    1197:             uStack_260 = *(undefined4 *)(lVar1 + 0x48);
    1198:             lStack_270 = *(longlong *)(lVar1 + 0x38);

## FUN_140780ec0 */ — reconstrucao/src/decompiled_03.c:1219
reconstrucao/src/decompiled_03.c:1219:29: error: passing argument 2 of ‘FUN_140781368’ makes integer from pointer without a cast [-Wint-conversion]

    1216:       plVar6 = (longlong *)*plVar2;
    1217:     } while (plVar6 != plVar7);
    1218:     if (bVar4) {
    1219:       FUN_140781368(param_1,auStack_2a8,param_2);
    1220:     }
    1221:   }
    1222:   return;

## FUN_140781064 */ — reconstrucao/src/decompiled_03.c:1239
reconstrucao/src/decompiled_03.c:1239:18: error: assignment to ‘undefined8’ {aka ‘long unsigned int’} from ‘undefined8 *’ {aka ‘long unsigned int *’} makes integer from pointer without a cast [-Wint-conversion]

    1236:     if (puVar1 == (undefined8 *)(param_1 + 0x60)) {
    1237: LAB_140781080:
    1238:       if (param_3 != (undefined8 *)0x0) {
    1239:         *param_3 = puVar2;
    1240:       }
    1241:       return CONCAT71((int7)((ulonglong)puVar1 >> 8),puVar2 != (undefined8 *)0x0);
    1242:     }

## FUN_140781098 */ — reconstrucao/src/decompiled_03.c:1265
reconstrucao/src/decompiled_03.c:1265:18: error: assignment to ‘undefined8’ {aka ‘long unsigned int’} from ‘undefined8 *’ {aka ‘long unsigned int *’} makes integer from pointer without a cast [-Wint-conversion]

    1262:     if (puVar1 == (undefined8 *)(param_1 + 0x60)) {
    1263: LAB_1407810ba:
    1264:       if (param_4 != (undefined8 *)0x0) {
    1265:         *param_4 = puVar2;
    1266:       }
    1267:       return CONCAT71((int7)((ulonglong)puVar1 >> 8),puVar2 != (undefined8 *)0x0);
    1268:     }

## FUN_140781128 */ — reconstrucao/src/decompiled_03.c:1350
reconstrucao/src/decompiled_03.c:1350:9: error: invalid use of void expression

    1347:   uStack_40 = 0x240;
    1348:   uStack_38 = 0;
    1349:   uStack_30 = 0;
    1350:   uVar2 = ZwOpenKey(&uStack_80,0x20019,&uStack_58);
    1351:   if (-1 < (int)uVar2) {
    1352:     RtlInitUnicodeString(&uStack_68,param_2);
    1353:     puStack_90 = auStack_88;

## FUN_140781128 */ — reconstrucao/src/decompiled_03.c:1355
reconstrucao/src/decompiled_03.c:1355:11: error: invalid use of void expression

    1352:     RtlInitUnicodeString(&uStack_68,param_2);
    1353:     puStack_90 = auStack_88;
    1354:     uStack_98 = 0x10;
    1355:     iVar1 = ZwQueryValueKey(uStack_80,&uStack_68,2,&uStack_28);
    1356:     uVar2 = ZwClose(uStack_80);
    1357:     if (((-1 < iVar1) && (uStack_28._4_4_ == 4)) && ((int)uStack_20 == 4)) {
    1358:       *param_3 = uStack_20._4_4_;

## FUN_140781128 */ — reconstrucao/src/decompiled_03.c:1356
reconstrucao/src/decompiled_03.c:1356:11: error: invalid use of void expression

    1353:     puStack_90 = auStack_88;
    1354:     uStack_98 = 0x10;
    1355:     iVar1 = ZwQueryValueKey(uStack_80,&uStack_68,2,&uStack_28);
    1356:     uVar2 = ZwClose(uStack_80);
    1357:     if (((-1 < iVar1) && (uStack_28._4_4_ == 4)) && ((int)uStack_20 == 4)) {
    1358:       *param_3 = uStack_20._4_4_;
    1359:       return CONCAT71((uint7)(uint3)((ulonglong)uStack_20 >> 0x28),1);

## FUN_140781128 */ — reconstrucao/src/decompiled_03.c:1357
reconstrucao/src/decompiled_03.c:1357:36: error: request for member ‘_4_4_’ in something not a structure or union

    1354:     uStack_98 = 0x10;
    1355:     iVar1 = ZwQueryValueKey(uStack_80,&uStack_68,2,&uStack_28);
    1356:     uVar2 = ZwClose(uStack_80);
    1357:     if (((-1 < iVar1) && (uStack_28._4_4_ == 4)) && ((int)uStack_20 == 4)) {
    1358:       *param_3 = uStack_20._4_4_;
    1359:       return CONCAT71((uint7)(uint3)((ulonglong)uStack_20 >> 0x28),1);
    1360:     }

## FUN_140781128 */ — reconstrucao/src/decompiled_03.c:1358
reconstrucao/src/decompiled_03.c:1358:27: error: request for member ‘_4_4_’ in something not a structure or union

    1355:     iVar1 = ZwQueryValueKey(uStack_80,&uStack_68,2,&uStack_28);
    1356:     uVar2 = ZwClose(uStack_80);
    1357:     if (((-1 < iVar1) && (uStack_28._4_4_ == 4)) && ((int)uStack_20 == 4)) {
    1358:       *param_3 = uStack_20._4_4_;
    1359:       return CONCAT71((uint7)(uint3)((ulonglong)uStack_20 >> 0x28),1);
    1360:     }
    1361:   }

## FUN_140781248 */ — reconstrucao/src/decompiled_03.c:1409
reconstrucao/src/decompiled_03.c:1409:27: error: passing argument 2 of ‘FUN_1407820dc’ makes integer from pointer without a cast [-Wint-conversion]

    1406:     FUN_140784268();
    1407:   }
    1408:   if (param_2 == 0) {
    1409:     FUN_1407820dc(param_1,&iStack_238);
    1410:   }
    1411:   else {
    1412:     uVar1 = FUN_140788934(param_2);

## FUN_140781368 */ — reconstrucao/src/decompiled_03.c:1426
reconstrucao/src/decompiled_03.c:1426:21: error: passing argument 1 of ‘FUN_140780b3c’ makes pointer from integer without a cast [-Wint-conversion]

    1423:   
    1424:   if (*(longlong *)(param_2 + 0x38) != 0) {
    1425:     if ((*(longlong *)(param_2 + 0x18) != 0xffffffff) && (param_3 < 2)) {
    1426:       FUN_140780b3c(param_1,param_2,0);
    1427:     }
    1428:     FUN_140780bbc(param_1,param_2,param_3);
    1429:     if (*(longlong *)(param_2 + 0x18) == 0xffffffff) {

## FUN_140781368 */ — reconstrucao/src/decompiled_03.c:1437
reconstrucao/src/decompiled_03.c:1437:23: error: passing argument 1 of ‘FUN_140780b3c’ makes pointer from integer without a cast [-Wint-conversion]

    1434:     else {
    1435:       uVar1 = 2;
    1436:       if (param_3 == 2) {
    1437:         FUN_140780b3c(param_1,param_2,2);
    1438:       }
    1439:       else if (param_3 == 3) {
    1440:         FUN_140780b3c(param_1,param_2,1);

## FUN_140781368 */ — reconstrucao/src/decompiled_03.c:1440
reconstrucao/src/decompiled_03.c:1440:23: error: passing argument 1 of ‘FUN_140780b3c’ makes pointer from integer without a cast [-Wint-conversion]

    1437:         FUN_140780b3c(param_1,param_2,2);
    1438:       }
    1439:       else if (param_3 == 3) {
    1440:         FUN_140780b3c(param_1,param_2,1);
    1441:         uVar1 = 1;
    1442:       }
    1443:       else {

## FUN_140781420 */ — reconstrucao/src/decompiled_03.c:1468
reconstrucao/src/decompiled_03.c:1468:21: error: passing argument 1 of ‘FUN_1409a24bc’ makes integer from pointer without a cast [-Wint-conversion]

    1465:     iVar2 = FUN_140787534(&lStackX_10,param_1);
    1466:     lVar1 = lStackX_10;
    1467:     if (iVar2 < 0) {
    1468:       FUN_1409a24bc("TtmpPushTerminalState",0xc6b,iVar2,0xffffffff);
    1469:     }
    1470:     else if (((*(uint *)(param_1 + 4) & 8) == 0) && (*(int *)(lStackX_10 + 0x114) - 2U < 2)) {
    1471:       uVar3 = 1;

## FUN_1407814f0 */ — reconstrucao/src/decompiled_03.c:1520
reconstrucao/src/decompiled_03.c:1520:21: error: passing argument 1 of ‘FUN_1409a24bc’ makes integer from pointer without a cast [-Wint-conversion]

    1517:       uVar5 = 0xb56;
    1518:       uVar7 = 0xc000009a;
    1519: LAB_14078154d:
    1520:       FUN_1409a24bc("TtmpQueueTerminalDisplayStateOntoDevice",uVar5,uVar7,0xffffffff);
    1521:     }
    1522:     else {
    1523:       plVar4[2] = uVar1;

## FUN_1407815d4 */ — reconstrucao/src/decompiled_03.c:1557
reconstrucao/src/decompiled_03.c:1557:7: error: ‘DAT_140e67b51’ undeclared (first use in this function)

    1554:   undefined4 uStack_88;
    1555:   undefined1 auStack_84 [92];
    1556:   
    1557:   if (DAT_140e67b51 == '\0') {
    1558:     puVar7 = &DAT_140e085d0;
    1559:     lVar5 = 6;
    1560:     do {

## FUN_1407815d4 */ — reconstrucao/src/decompiled_03.c:1558
reconstrucao/src/decompiled_03.c:1558:15: error: ‘DAT_140e085d0’ undeclared (first use in this function); did you mean ‘DAT_140e0a740’?

    1555:   undefined1 auStack_84 [92];
    1556:   
    1557:   if (DAT_140e67b51 == '\0') {
    1558:     puVar7 = &DAT_140e085d0;
    1559:     lVar5 = 6;
    1560:     do {
    1561:       cVar1 = FUN_140781128();

## FUN_1407815d4 */ — reconstrucao/src/decompiled_03.c:1561
reconstrucao/src/decompiled_03.c:1561:15: error: too few arguments to function ‘FUN_140781128’; expected 3, have 0

    1558:     puVar7 = &DAT_140e085d0;
    1559:     lVar5 = 6;
    1560:     do {
    1561:       cVar1 = FUN_140781128();
    1562:       if (cVar1 == '\x01') {
    1563:         *puVar7 = 0;
    1564:       }

## FUN_1407815d4 */ — reconstrucao/src/decompiled_03.c:1568
reconstrucao/src/decompiled_03.c:1568:5: error: too few arguments to function ‘FUN_140781128’; expected 3, have 0

    1565:       puVar7 = puVar7 + 6;
    1566:       lVar5 = lVar5 + -1;
    1567:     } while (lVar5 != 0);
    1568:     FUN_140781128();
    1569:     DAT_140e67b51 = '\x01';
    1570:   }
    1571:   *param_1 = param_2;

## FUN_1407815d4 */ — reconstrucao/src/decompiled_03.c:1571
reconstrucao/src/decompiled_03.c:1571:12: error: assignment to ‘undefined8’ {aka ‘long unsigned int’} from ‘undefined4 *’ {aka ‘unsigned int *’} makes integer from pointer without a cast [-Wint-conversion]

    1568:     FUN_140781128();
    1569:     DAT_140e67b51 = '\x01';
    1570:   }
    1571:   *param_1 = param_2;
    1572:   uVar4 = 0;
    1573:   param_1[1] = param_3;
    1574:   *(int *)(param_1 + 2) = param_4;

## FUN_1407815d4 */ — reconstrucao/src/decompiled_03.c:1583
reconstrucao/src/decompiled_03.c:1583:23: error: passing argument 1 of ‘FUN_140780d0c’ makes integer from pointer without a cast [-Wint-conversion]

    1580:       uStack_88 = 0x15;
    1581:       iVar2 = FUN_1409e7d20(0x57,&uStack_88,0x60,param_1 + 3,8);
    1582:       if ((-1 < iVar2) && (param_1[3] != 0)) {
    1583:         FUN_140780d0c(param_1,*param_2,iVar6,param_5);
    1584:       }
    1585: LAB_1407816f5:
    1586:       ExReleaseResourceLite(&DAT_140f06b20);

## FUN_140ac2d78 */ — reconstrucao/src/decompiled_04.c:39
reconstrucao/src/decompiled_04.c:39:9: error: invalid use of void expression

    36:   longlong lVar2;
    37:   longlong lVar3;
    38:   
    39:   lVar2 = FUN_14041b0bc(param_1,8);
    40:   lVar1 = *(longlong *)(lVar2 + 8);
    41:   do {
    42:     lVar3 = lVar1;

## FUN_140ac2d78 */ — reconstrucao/src/decompiled_04.c:45
reconstrucao/src/decompiled_04.c:45:21: error: passing argument 1 of ‘FUN_14031db18’ makes pointer from integer without a cast [-Wint-conversion]

    42:     lVar3 = lVar1;
    43:     if (*(int *)(lVar1 + 0xb0) == 1) {
    44: LAB_140ac2dd5:
    45:       FUN_14031db18(lVar3,0,0);
    46:       return lVar3;
    47:     }
    48:     lVar3 = FUN_14031d8f0(0,0);

## FUN_140ac2d78 */ — reconstrucao/src/decompiled_04.c:48
reconstrucao/src/decompiled_04.c:48:11: error: assignment to ‘longlong’ {aka ‘long int’} from ‘longlong *’ {aka ‘long int *’} makes integer from pointer without a cast [-Wint-conversion]

    45:       FUN_14031db18(lVar3,0,0);
    46:       return lVar3;
    47:     }
    48:     lVar3 = FUN_14031d8f0(0,0);
    49:     if (lVar3 != 0) {
    50:       FUN_14033e740(lVar1);
    51:       *(longlong *)(lVar2 + 8) = lVar3;

## FUN_140ac2e00 */ — reconstrucao/src/decompiled_04.c:235
reconstrucao/src/decompiled_04.c:235:48: error: request for member ‘_1_7_’ in something not a structure or union

    232:   uStack_e8 = 0x1000000;
    233:   uStack_c8 = 0x120;
    234:   uStack_b0 = 0x1000000;
    235:   pwStack_360 = (wchar_t *)CONCAT71(pwStack_360._1_7_,1);
    236:   iVar5 = FUN_14093ded0(0xc0000000,lStack_2e0,auStack_1e8,0);
    237:   if (iVar5 < 0) goto LAB_140ac33b1;
    238:   if ((lStack_2b0 != 0) && ((ushort)uStack_2b8 < 3)) {

## FUN_140ac2e00 */ — reconstrucao/src/decompiled_04.c:271
reconstrucao/src/decompiled_04.c:271:20: error: ‘DAT_140f8c958’ undeclared (first use in this function); did you mean ‘DAT_140f0cf28’?

    268:   plStack_208 = plStack_2a0;
    269:   uStack_220 = 2;
    270:   uStack_21c = 3;
    271:   for (; lVar11 != DAT_140f8c958; lVar11 = *(longlong *)(lVar11 + 0x10)) {
    272:     if (*(longlong *)(*(longlong *)(lVar11 + 0x20) + 8) == DAT_140f8adc0) {
    273:       RtlInitUnicodeString(auStack_240,L"SWD\\");
    274:       cVar4 = RtlPrefixUnicodeString(auStack_240,lVar11 + 0x28);

## FUN_140ac2e00 */ — reconstrucao/src/decompiled_04.c:272
reconstrucao/src/decompiled_04.c:272:60: error: ‘DAT_140f8adc0’ undeclared (first use in this function); did you mean ‘DAT_140fc7ad0’?

    269:   uStack_220 = 2;
    270:   uStack_21c = 3;
    271:   for (; lVar11 != DAT_140f8c958; lVar11 = *(longlong *)(lVar11 + 0x10)) {
    272:     if (*(longlong *)(*(longlong *)(lVar11 + 0x20) + 8) == DAT_140f8adc0) {
    273:       RtlInitUnicodeString(auStack_240,L"SWD\\");
    274:       cVar4 = RtlPrefixUnicodeString(auStack_240,lVar11 + 0x28);
    275:       if (cVar4 != '\0') {

## FUN_140ac2e00 */ — reconstrucao/src/decompiled_04.c:286
reconstrucao/src/decompiled_04.c:286:51: error: ‘DAT_140019790’ undeclared (first use in this function); did you mean ‘DAT_140e0a740’?

    283:               iVar5 = FUN_140a3034c(lStack_2b0,plStack_2a0);
    284:               if (iVar5 < 0) goto LAB_140ac33a4;
    285:               if ((auStack_2f0[0] & 8) == 0) {
    286:                 RtlInitUnicodeString(&uStack_270,&DAT_140019790);
    287:                 iVar5 = RtlHashUnicodeString(&uStack_270,1,0,&iStack_2f8);
    288:                 if (iVar5 < 0) goto LAB_140ac33a4;
    289:                 iVar16 = iStack_2f4 + iStack_2f8;

## FUN_140ac2e00 */ — reconstrucao/src/decompiled_04.c:287
reconstrucao/src/decompiled_04.c:287:46: error: passing argument 1 of ‘RtlHashUnicodeString’ from incompatible pointer type [-Wincompatible-pointer-types]

    284:               if (iVar5 < 0) goto LAB_140ac33a4;
    285:               if ((auStack_2f0[0] & 8) == 0) {
    286:                 RtlInitUnicodeString(&uStack_270,&DAT_140019790);
    287:                 iVar5 = RtlHashUnicodeString(&uStack_270,1,0,&iStack_2f8);
    288:                 if (iVar5 < 0) goto LAB_140ac33a4;
    289:                 iVar16 = iStack_2f4 + iStack_2f8;
    290:               }

## FUN_140ac2e00 */ — reconstrucao/src/decompiled_04.c:294
reconstrucao/src/decompiled_04.c:294:49: error: ‘DAT_140019778’ undeclared (first use in this function); did you mean ‘FUN_140b19778’?

    291:               else {
    292:                 iVar16 = iStack_2f4;
    293:               }
    294:               RtlInitUnicodeString(&uStack_270,&DAT_140019778);
    295:               iVar5 = RtlHashUnicodeString(&uStack_270,1,0,&iStack_2f8);
    296:               if (iVar5 < 0) goto LAB_140ac33a4;
    297:               iVar16 = iVar16 + iStack_2f8;

## FUN_140ac2e00 */ — reconstrucao/src/decompiled_04.c:295
reconstrucao/src/decompiled_04.c:295:44: error: passing argument 1 of ‘RtlHashUnicodeString’ from incompatible pointer type [-Wincompatible-pointer-types]

    292:                 iVar16 = iStack_2f4;
    293:               }
    294:               RtlInitUnicodeString(&uStack_270,&DAT_140019778);
    295:               iVar5 = RtlHashUnicodeString(&uStack_270,1,0,&iStack_2f8);
    296:               if (iVar5 < 0) goto LAB_140ac33a4;
    297:               iVar16 = iVar16 + iStack_2f8;
    298:               iStack_2f4 = iVar16;

## FUN_140ac2e00 */ — reconstrucao/src/decompiled_04.c:318
reconstrucao/src/decompiled_04.c:318:39: error: ‘DAT_140e66448’ undeclared (first use in this function); did you mean ‘DAT_140e0a740’?

    315:                 plStack_368 = (longlong *)&iStack_2d4;
    316:                 auStack_318[0] = uVar3;
    317:                 pwStack_360 = pwVar7;
    318:                 iVar5 = FUN_1408ddb20(DAT_140e66448,*(undefined8 *)(lVar11 + 0x30),0,*puStack_288);
    319:                 if (((iVar5 < 0) || (iStack_2d4 != 7)) || (auStack_318[0] < 2)) {
    320:                   *pwVar7 = L'\0';
    321:                   iVar5 = 0;

## FUN_140ac2e00 */ — reconstrucao/src/decompiled_04.c:386
reconstrucao/src/decompiled_04.c:386:56: error: request for member ‘_4_4_’ in something not a structure or union

    383:         uVar18 = (ulonglong)uStack_2c8;
    384:         do {
    385:           puStack_358 = auStack_318;
    386:           pwStack_360 = (wchar_t *)CONCAT44(pwStack_360._4_4_,(uint)uVar18);
    387:           plStack_368 = plVar10;
    388:           iVar5 = FUN_1409a9498(lVar11,lStack_2e0,0,0);
    389:           uVar3 = auStack_318[0];

## FUN_140ac2e00 */ — reconstrucao/src/decompiled_04.c:434
reconstrucao/src/decompiled_04.c:434:19: error: request for member ‘_0_4_’ in something not a structure or union

    431:         do {
    432:           lVar20 = lVar20 + 1;
    433:         } while (*(short *)(lStack_310 + lVar20 * 2) != 0);
    434:         uStack_230._0_4_ = CONCAT22(((short)lVar13 + 3 + (short)lVar20) * 2,(undefined2)uStack_230);
    435:         lStack_228 = ExAllocatePool2(0x100,(lVar12 + lVar20) * 2 + 4U & 0xffff,0x67727453);
    436:         if (lStack_228 == 0) {
    437:           iVar5 = -0x3fffff66;

## FUN_140ac2e00 */ — reconstrucao/src/decompiled_04.c:489
reconstrucao/src/decompiled_04.c:489:24: error: ‘DAT_140ef02c4’ undeclared (first use in this function); did you mean ‘DAT_140e0a740’?

    486:   if (lStack_2e0 != 0) {
    487:     ZwClose();
    488:   }
    489:   if ((iVar5 < 0) && ((DAT_140ef02c4 & 4) != 0)) {
    490:     pwStack_360 = (wchar_t *)CONCAT44(pwStack_360._4_4_,iVar5);
    491:     plStack_368 = (longlong *)lStack_280;
    492:     FUN_14039f2ac();

## FUN_140ac2e00 */ — reconstrucao/src/decompiled_04.c:490
reconstrucao/src/decompiled_04.c:490:50: error: request for member ‘_4_4_’ in something not a structure or union

    487:     ZwClose();
    488:   }
    489:   if ((iVar5 < 0) && ((DAT_140ef02c4 & 4) != 0)) {
    490:     pwStack_360 = (wchar_t *)CONCAT44(pwStack_360._4_4_,iVar5);
    491:     plStack_368 = (longlong *)lStack_280;
    492:     FUN_14039f2ac();
    493:   }

## FUN_140ac2e00 */ — reconstrucao/src/decompiled_04.c:517
reconstrucao/src/decompiled_04.c:517:49: error: request for member ‘_4_4_’ in something not a structure or union

    514:     puVar14 = (undefined4 *)((longlong)plStack_2e8 + uVar19 * 0x14);
    515:     while( true ) {
    516:       puStack_350 = auStack_318;
    517:       puStack_358 = (uint *)CONCAT44(puStack_358._4_4_,*(undefined4 *)((longlong)plVar15 + 4));
    518:       pwStack_360 = (wchar_t *)plVar15[1];
    519:       plStack_368 = plVar15;
    520:       iVar5 = FUN_1408dfe50(lStack_218,lStack_2e0,0,puVar14);

## FUN_140ac2e00 */ — reconstrucao/src/decompiled_04.c:555
reconstrucao/src/decompiled_04.c:555:45: error: request for member ‘_4_4_’ in something not a structure or union

    552:   lStack_340 = lStack_278;
    553:   lStack_348 = lStack_248;
    554:   puStack_350 = puStack_258;
    555:   puStack_358 = (uint *)CONCAT44(puStack_358._4_4_,auStack_2f0[0]);
    556:   plStack_368 = plStack_2a0;
    557:   iVar5 = FUN_14074541c(L"DRIVERENUM",*(undefined8 *)(*plStack_308 + 0x30),lStack_228,lStack_2b0);
    558:   if (lVar11 != 0) {

## FUN_140ac393c */ — reconstrucao/src/decompiled_04.c:655
reconstrucao/src/decompiled_04.c:655:7: error: ‘DAT_140e67b01’ undeclared (first use in this function); did you mean ‘DAT_140e0a740’?

    652:   wchar_t *pwVar11;
    653:   uint auStackX_8 [2];
    654:   
    655:   if (DAT_140e67b01 != '\0') {
    656:     cVar4 = EtwEventEnabled(DAT_140f085e0,&DAT_14001e1b8);
    657:     puVar3 = DAT_140fc7ad0;
    658:     if (cVar4 != '\0') {

## FUN_140ac393c */ — reconstrucao/src/decompiled_04.c:656
reconstrucao/src/decompiled_04.c:656:29: error: ‘DAT_140f085e0’ undeclared (first use in this function); did you mean ‘FUN_1407085e0’?

    653:   uint auStackX_8 [2];
    654:   
    655:   if (DAT_140e67b01 != '\0') {
    656:     cVar4 = EtwEventEnabled(DAT_140f085e0,&DAT_14001e1b8);
    657:     puVar3 = DAT_140fc7ad0;
    658:     if (cVar4 != '\0') {
    659:       if (DAT_140fc7ad0 == (uint *)0x0) {

## FUN_140ac393c */ — reconstrucao/src/decompiled_04.c:656
reconstrucao/src/decompiled_04.c:656:44: error: ‘DAT_14001e1b8’ undeclared (first use in this function); did you mean ‘FUN_14081e1b8’?

    653:   uint auStackX_8 [2];
    654:   
    655:   if (DAT_140e67b01 != '\0') {
    656:     cVar4 = EtwEventEnabled(DAT_140f085e0,&DAT_14001e1b8);
    657:     puVar3 = DAT_140fc7ad0;
    658:     if (cVar4 != '\0') {
    659:       if (DAT_140fc7ad0 == (uint *)0x0) {

## FUN_140ac3ab0 */ — reconstrucao/src/decompiled_04.c:759
reconstrucao/src/decompiled_04.c:759:11: error: implicit declaration of function ‘FUN_1404a86a0’; did you mean ‘FUN_1404a8660’? [-Wimplicit-function-declaration]

    756:     lVar4 = uStack_40;
    757:     goto LAB_140ac3cc3;
    758:   }
    759:   iVar6 = FUN_1404a86a0(&uStack_48,&uStack_38,0x800,L"%wZ:%wZ",puVar7,puVar10);
    760:   uVar9 = (undefined4)((ulonglong)puVar7 >> 0x20);
    761:   if (iVar6 < 0) {
    762: LAB_140ac3cbf:

## FUN_140ac3ab0 */ — reconstrucao/src/decompiled_04.c:776
reconstrucao/src/decompiled_04.c:776:37: error: request for member ‘_2_2_’ in something not a structure or union

    773:       uVar9 = (undefined4)((ulonglong)psVar8 >> 0x20);
    774:       if (iVar6 < 0) goto LAB_140ac3cbf;
    775:       sVar5 = (short)uStack_48 + *psVar1 + 2;
    776:       uStack_48 = CONCAT22(uStack_48._2_2_,sVar5);
    777:     }
    778:     uVar11 = (undefined4)((ulonglong)puVar10 >> 0x20);
    779:     cVar3 = FUN_140965660(param_1 + 0xbc);

## FUN_140ac3ab0 */ — reconstrucao/src/decompiled_04.c:782
reconstrucao/src/decompiled_04.c:782:43: error: ‘LAB_140b08590’ undeclared (first use in this function); did you mean ‘FUN_140b18590’?

    779:     cVar3 = FUN_140965660(param_1 + 0xbc);
    780:     if (cVar3 == '\0') {
    781:       if (*(longlong *)(param_1 + 0x60) == 0) {
    782:         iVar6 = FUN_1405a6570(&uStack_38,&LAB_140b08590,&uStack_38,0x800);
    783:         if (iVar6 < 0) goto LAB_140ac3cbf;
    784:         sVar5 = sVar5 + 2;
    785:       }

## FUN_140ac3ab0 */ — reconstrucao/src/decompiled_04.c:782
reconstrucao/src/decompiled_04.c:782:31: error: passing argument 1 of ‘FUN_1405a6570’ from incompatible pointer type [-Wincompatible-pointer-types]

    779:     cVar3 = FUN_140965660(param_1 + 0xbc);
    780:     if (cVar3 == '\0') {
    781:       if (*(longlong *)(param_1 + 0x60) == 0) {
    782:         iVar6 = FUN_1405a6570(&uStack_38,&LAB_140b08590,&uStack_38,0x800);
    783:         if (iVar6 < 0) goto LAB_140ac3cbf;
    784:         sVar5 = sVar5 + 2;
    785:       }

## FUN_140ac3ab0 */ — reconstrucao/src/decompiled_04.c:782
reconstrucao/src/decompiled_04.c:782:57: error: passing argument 3 of ‘FUN_1405a6570’ from incompatible pointer type [-Wincompatible-pointer-types]

    779:     cVar3 = FUN_140965660(param_1 + 0xbc);
    780:     if (cVar3 == '\0') {
    781:       if (*(longlong *)(param_1 + 0x60) == 0) {
    782:         iVar6 = FUN_1405a6570(&uStack_38,&LAB_140b08590,&uStack_38,0x800);
    783:         if (iVar6 < 0) goto LAB_140ac3cbf;
    784:         sVar5 = sVar5 + 2;
    785:       }

## FUN_140ac3ab0 */ — reconstrucao/src/decompiled_04.c:787
reconstrucao/src/decompiled_04.c:787:85: error: request for member ‘_2_2_’ in something not a structure or union

    784:         sVar5 = sVar5 + 2;
    785:       }
    786:       RtlTimeToTimeFields(param_1 + 0x70,&uStack_28);
    787:       iVar6 = FUN_140489994(&uStack_38,L",%02d/%02d/%04d,%u.%u.%u.%u",(int)uStack_28._2_2_,
    788:                             (int)uStack_28._4_2_,CONCAT44(uVar9,(int)(short)uStack_28),
    789:                             CONCAT44(uVar11,*(uint *)(param_1 + 0x7c) >> 0x10),
    790:                             *(undefined2 *)(param_1 + 0x7c),*(undefined2 *)(param_1 + 0x7a),

## FUN_140ac3ab0 */ — reconstrucao/src/decompiled_04.c:788
reconstrucao/src/decompiled_04.c:788:43: error: request for member ‘_4_2_’ in something not a structure or union

    785:       }
    786:       RtlTimeToTimeFields(param_1 + 0x70,&uStack_28);
    787:       iVar6 = FUN_140489994(&uStack_38,L",%02d/%02d/%04d,%u.%u.%u.%u",(int)uStack_28._2_2_,
    788:                             (int)uStack_28._4_2_,CONCAT44(uVar9,(int)(short)uStack_28),
    789:                             CONCAT44(uVar11,*(uint *)(param_1 + 0x7c) >> 0x10),
    790:                             *(undefined2 *)(param_1 + 0x7c),*(undefined2 *)(param_1 + 0x7a),
    791:                             *(undefined2 *)(param_1 + 0x78));

## FUN_140ac3ab0 */ — reconstrucao/src/decompiled_04.c:793
reconstrucao/src/decompiled_04.c:793:37: error: request for member ‘_2_2_’ in something not a structure or union

    790:                             *(undefined2 *)(param_1 + 0x7c),*(undefined2 *)(param_1 + 0x7a),
    791:                             *(undefined2 *)(param_1 + 0x78));
    792:       if (iVar6 < 0) goto LAB_140ac3cbf;
    793:       uStack_48 = CONCAT22(uStack_48._2_2_,sVar5 + (short)uStack_38);
    794:     }
    795:     *param_2 = uStack_48;
    796:     param_2[1] = uStack_44;

## FUN_140ac3ab0 */ — reconstrucao/src/decompiled_04.c:798
reconstrucao/src/decompiled_04.c:798:27: error: request for member ‘_4_4_’ in something not a structure or union

    795:     *param_2 = uStack_48;
    796:     param_2[1] = uStack_44;
    797:     param_2[2] = (undefined4)uStack_40;
    798:     param_2[3] = uStack_40._4_4_;
    799:     lVar4 = 0;
    800:   }
    801: LAB_140ac3cc3:

## FUN_140ac3d18 */ — reconstrucao/src/decompiled_04.c:822
reconstrucao/src/decompiled_04.c:822:14: error: ‘DAT_140f09690’ undeclared (first use in this function); did you mean ‘DAT_140f0cf28’?

    819: void FUN_140ac3d18(undefined4 *param_1)
    820: 
    821: {
    822:   *param_1 = DAT_140f09690;
    823:   return;
    824: }
    825: 

## FUN_140ac3d30 */ — reconstrucao/src/decompiled_04.c:843
reconstrucao/src/decompiled_04.c:843:3: error: ‘_DAT_140e672dc’ undeclared (first use in this function)

    840:   puVar6 = auStack_28;
    841:   uVar5 = 0;
    842:   lVar4 = 0;
    843:   _DAT_140e672dc = _DAT_140e672dc + 1;
    844:   if (param_1 == (undefined *)0x0) {
    845:     param_1 = &DAT_140e66f70;
    846:     puVar6 = auStack_28;

## FUN_140ac3d30 */ — reconstrucao/src/decompiled_04.c:845
reconstrucao/src/decompiled_04.c:845:16: error: ‘DAT_140e66f70’ undeclared (first use in this function); did you mean ‘DAT_140e0a740’?

    842:   lVar4 = 0;
    843:   _DAT_140e672dc = _DAT_140e672dc + 1;
    844:   if (param_1 == (undefined *)0x0) {
    845:     param_1 = &DAT_140e66f70;
    846:     puVar6 = auStack_28;
    847: LAB_140ac3d98:
    848:     *(undefined8 *)(puVar6 + -8) = 0x140ac3da2;

## FUN_140ac3d30 */ — reconstrucao/src/decompiled_04.c:849
reconstrucao/src/decompiled_04.c:849:11: error: assignment to ‘longlong’ {aka ‘long int’} from ‘ulonglong *’ {aka ‘long unsigned int *’} makes integer from pointer without a cast [-Wint-conversion]

    846:     puVar6 = auStack_28;
    847: LAB_140ac3d98:
    848:     *(undefined8 *)(puVar6 + -8) = 0x140ac3da2;
    849:     lVar4 = FUN_1402f5ef0(param_1,0,0);
    850:     if (lVar4 != 0) {
    851:       *(undefined8 *)(puVar6 + -8) = 0x140ac3db2;
    852:       FUN_1402f4220(lVar4);

## FUN_140ac3d30 */ — reconstrucao/src/decompiled_04.c:852
reconstrucao/src/decompiled_04.c:852:21: error: passing argument 1 of ‘FUN_1402f4220’ makes pointer from integer without a cast [-Wint-conversion]

    849:     lVar4 = FUN_1402f5ef0(param_1,0,0);
    850:     if (lVar4 != 0) {
    851:       *(undefined8 *)(puVar6 + -8) = 0x140ac3db2;
    852:       FUN_1402f4220(lVar4);
    853:       goto LAB_140ac3db2;
    854:     }
    855:   }

## FUN_140ac3d30 */ — reconstrucao/src/decompiled_04.c:858
reconstrucao/src/decompiled_04.c:858:5: error: implicit declaration of function ‘LOCK’ [-Wimplicit-function-declaration]

    855:   }
    856:   else {
    857:     *(undefined4 *)(param_1 + 0x48) = 1;
    858:     LOCK();
    859:     *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + 1;
    860:     UNLOCK();
    861:     *(undefined4 *)(param_1 + 0x3c) = 0;

## FUN_140ac3d30 */ — reconstrucao/src/decompiled_04.c:860
reconstrucao/src/decompiled_04.c:860:5: error: implicit declaration of function ‘UNLOCK’ [-Wimplicit-function-declaration]

    857:     *(undefined4 *)(param_1 + 0x48) = 1;
    858:     LOCK();
    859:     *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + 1;
    860:     UNLOCK();
    861:     *(undefined4 *)(param_1 + 0x3c) = 0;
    862:     LOCK();
    863:     plVar1 = (longlong *)(param_1 + 0x78);

## FUN_140ac3d30 */ — reconstrucao/src/decompiled_04.c:868
reconstrucao/src/decompiled_04.c:868:24: error: implicit declaration of function ‘swi’ [-Wimplicit-function-declaration]

    865:     *plVar1 = *plVar1 + 1;
    866:     UNLOCK();
    867:     if (lVar2 + 1 < 2) {
    868:       pcVar3 = (code *)swi(0x29);
    869:       (*pcVar3)(0xe);
    870:       puVar6 = auStack_20;
    871:     }

## FUN_140ac3d30 */ — reconstrucao/src/decompiled_04.c:877
reconstrucao/src/decompiled_04.c:877:12: error: assignment to ‘undefined8’ {aka ‘long unsigned int’} from ‘void (*)()’ makes integer from pointer without a cast [-Wint-conversion]

    874:   uVar5 = 0xc000009a;
    875: LAB_140ac3db2:
    876:   param_3[1] = lVar4;
    877:   *param_3 = FUN_140ac9cd0;
    878:   return uVar5;
    879: }
    880: 

## FUN_140ac3ddc */ — reconstrucao/src/decompiled_04.c:893
reconstrucao/src/decompiled_04.c:893:18: error: ‘DAT_140f0f410’ undeclared (first use in this function); did you mean ‘DAT_140f0cf28’?

    890:   undefined1 auStack_28 [8];
    891:   undefined1 auStack_20 [24];
    892:   
    893:   FUN_14042d154(&DAT_140f0f410);
    894:   puVar4 = auStack_28;
    895:   do {
    896:     puVar3 = DAT_140f0f430;

## FUN_140ac3ddc */ — reconstrucao/src/decompiled_04.c:896
reconstrucao/src/decompiled_04.c:896:14: error: ‘DAT_140f0f430’ undeclared (first use in this function); did you mean ‘DAT_140f0cf28’?

    893:   FUN_14042d154(&DAT_140f0f410);
    894:   puVar4 = auStack_28;
    895:   do {
    896:     puVar3 = DAT_140f0f430;
    897:     if ((undefined8 **)DAT_140f0f430 == &DAT_140f0f430) {
    898: LAB_140ac3e2e:
    899:       *(undefined8 *)(puVar4 + -8) = 0x140ac3e3a;

