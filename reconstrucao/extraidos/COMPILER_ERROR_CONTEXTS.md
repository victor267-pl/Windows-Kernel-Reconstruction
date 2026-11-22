# Contextos dos primeiros erros de compilação

Cada erro está associado ao marcador de função Ghidra mais próximo. O contexto serve para reconstrução orientada por evidência.

## FUN_140200008 */ — reconstrucao/src/decompiled_01.c:108
reconstrucao/src/decompiled_01.c:108:15: error: ‘DAT_140e0a740’ undeclared (first use in this function)

    105:   undefined8 uStack_20;
    106:   ulonglong uStack_18;
    107:   
    108:   uStack_18 = DAT_140e0a740 ^ (ulonglong)auStack_2f8;
    109:   uStack_28 = param_36;
    110:   uStack_38 = param_35;
    111:   puStack_58 = auStack_40;

## FUN_140200008 */ — reconstrucao/src/decompiled_01.c:202
reconstrucao/src/decompiled_01.c:202:18: error: ‘DAT_140e0a590’ undeclared (first use in this function)

    199:   uStack_280 = 4;
    200:   uStack_290 = 4;
    201:   uStack_2a0 = 8;
    202:   FUN_1403a0f70(&DAT_140e0a590,param_2,0,0);
    203:   return;
    204: }
    205: 

## FUN_140200740 */ — reconstrucao/src/decompiled_01.c:337
reconstrucao/src/decompiled_01.c:337:7: error: ‘DAT_140fc7d20’ undeclared (first use in this function)

    334:   undefined8 auStackX_10 [3];
    335:   
    336:   auStackX_10[0] = 0;
    337:   if (DAT_140fc7d20 != 0) {
    338:     FUN_1404f6e6c(in_CR8,2);
    339:   }
    340:   FUN_1402007a8(param_1,auStackX_10);

## FUN_140200740 */ — reconstrucao/src/decompiled_01.c:340
reconstrucao/src/decompiled_01.c:340:25: error: passing argument 2 of ‘FUN_1402007a8’ makes integer from pointer without a cast [-Wint-conversion]

    337:   if (DAT_140fc7d20 != 0) {
    338:     FUN_1404f6e6c(in_CR8,2);
    339:   }
    340:   FUN_1402007a8(param_1,auStackX_10);
    341:   FUN_140271070(FiberData,auStackX_10);
    342:   return;
    343: }

## FUN_140200740 */ — reconstrucao/src/decompiled_01.c:341
reconstrucao/src/decompiled_01.c:341:17: error: ‘FiberData’ undeclared (first use in this function)

    338:     FUN_1404f6e6c(in_CR8,2);
    339:   }
    340:   FUN_1402007a8(param_1,auStackX_10);
    341:   FUN_140271070(FiberData,auStackX_10);
    342:   return;
    343: }
    344: 

## FUN_1402007a8 */ — reconstrucao/src/decompiled_01.c:357
reconstrucao/src/decompiled_01.c:357:5: error: implicit declaration of function ‘LOCK’ [-Wimplicit-function-declaration]

    354:   
    355:   uVar4 = 0;
    356:   while( true ) {
    357:     LOCK();
    358:     puVar1 = (ulonglong *)(param_1 + 0x40);
    359:     uVar2 = *puVar1;
    360:     *puVar1 = *puVar1 | 1;

## FUN_1402007a8 */ — reconstrucao/src/decompiled_01.c:361
reconstrucao/src/decompiled_01.c:361:5: error: implicit declaration of function ‘UNLOCK’ [-Wimplicit-function-declaration]

    358:     puVar1 = (ulonglong *)(param_1 + 0x40);
    359:     uVar2 = *puVar1;
    360:     *puVar1 = *puVar1 | 1;
    361:     UNLOCK();
    362:     if ((uVar2 & 1) == 0) break;
    363:     do {
    364:       uVar4 = uVar4 + 1;

## FUN_1402007a8 */ — reconstrucao/src/decompiled_01.c:365
reconstrucao/src/decompiled_01.c:365:14: error: ‘DAT_140fc62ac’ undeclared (first use in this function)

    362:     if ((uVar2 & 1) == 0) break;
    363:     do {
    364:       uVar4 = uVar4 + 1;
    365:       if ((((DAT_140fc62ac & uVar4) == 0) && ((DAT_140fc7ab8 & 0x40) != 0)) &&
    366:          (cVar3 = FUN_14020cb70(), cVar3 != '\0')) {
    367:         FUN_14020cb40(uVar4);
    368:       }

## FUN_1402007a8 */ — reconstrucao/src/decompiled_01.c:365
reconstrucao/src/decompiled_01.c:365:48: error: ‘DAT_140fc7ab8’ undeclared (first use in this function); did you mean ‘FUN_1402c7ab8’?

    362:     if ((uVar2 & 1) == 0) break;
    363:     do {
    364:       uVar4 = uVar4 + 1;
    365:       if ((((DAT_140fc62ac & uVar4) == 0) && ((DAT_140fc7ab8 & 0x40) != 0)) &&
    366:          (cVar3 = FUN_14020cb70(), cVar3 != '\0')) {
    367:         FUN_14020cb40(uVar4);
    368:       }

## FUN_140200820 */ — reconstrucao/src/decompiled_01.c:406
reconstrucao/src/decompiled_01.c:406:15: error: ‘DAT_140fc7b04’ undeclared (first use in this function)

    403:     *(undefined8 *)(param_1 + 0x40) = 0;
    404:     iVar3 = iVar1;
    405:   }
    406:   if ((((uint)DAT_140fc7b04 & 0x1000) != 0) && (cVar2 != '\0')) {
    407:     FUN_1403c0604(param_1,*(undefined2 *)(param_1 + 0x248),
    408:                   CONCAT31((uint3)(*(uint *)(param_1 + 0x74) >> 0xb),
    409:                            (char)(*(uint *)(param_1 + 0x74) >> 3)) & 0xffffff01,0,

## FUN_140200820 */ — reconstrucao/src/decompiled_01.c:412
reconstrucao/src/decompiled_01.c:412:29: error: ‘DAT_140fc7b10’ undeclared (first use in this function)

    409:                            (char)(*(uint *)(param_1 + 0x74) >> 3)) & 0xffffff01,0,
    410:                   *(undefined8 *)(param_1 + 0x240),0x536);
    411:   }
    412:   if ((iVar1 != iVar3) && ((DAT_140fc7b10 & 0x8000000) != 0)) {
    413:     FUN_1403be528(param_1,0x546,iVar1,iVar3);
    414:   }
    415:   return;

## FUN_140200950 */ — reconstrucao/src/decompiled_01.c:430
reconstrucao/src/decompiled_01.c:430:7: error: ‘DAT_140fc7ad0’ undeclared (first use in this function)

    427:   ulonglong uVar5;
    428:   ulonglong uVar6;
    429:   
    430:   if (DAT_140fc7ad0 != (uint *)0x0) {
    431:     uVar2 = KeAcquireSpinLockRaiseToDpc(&DAT_140f0cf28);
    432:     uVar6 = 0;
    433:     if (*DAT_140fc7ad0 != 0) {

## FUN_140200950 */ — reconstrucao/src/decompiled_01.c:431
reconstrucao/src/decompiled_01.c:431:42: error: ‘DAT_140f0cf28’ undeclared (first use in this function)

    428:   ulonglong uVar6;
    429:   
    430:   if (DAT_140fc7ad0 != (uint *)0x0) {
    431:     uVar2 = KeAcquireSpinLockRaiseToDpc(&DAT_140f0cf28);
    432:     uVar6 = 0;
    433:     if (*DAT_140fc7ad0 != 0) {
    434:       do {

## FUN_140200950 */ — reconstrucao/src/decompiled_01.c:446
reconstrucao/src/decompiled_01.c:446:45: error: passing argument 1 of ‘FUN_140201790’ makes integer from pointer without a cast [-Wint-conversion]

    443:             uVar5 = uVar4;
    444:           } while (uVar3 < puVar1[uVar6 * 0x70 + 0x1b]);
    445:         }
    446:         FUN_140201790(puVar1 + uVar6 * 0x70 + 0x14,CONCAT71((int7)(uVar4 >> 8),4),1);
    447:         uVar3 = (int)uVar6 + 1;
    448:         uVar6 = (ulonglong)uVar3;
    449:       } while (uVar3 < *DAT_140fc7ad0);

## FUN_1402009ec */ — reconstrucao/src/decompiled_01.c:458
reconstrucao/src/decompiled_01.c:458:1: error: return type defaults to ‘int’ [-Wimplicit-int]

    455: 
    456: /* Ghidra label: FUN_1402009ec */
    457: /* Ghidra address: 1402009ec */
    458: FUN_1402009ec(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
    459:              undefined1 param_5)
    460: 
    461: {

## FUN_1402009ec */ — reconstrucao/src/decompiled_01.c:465
reconstrucao/src/decompiled_01.c:465:17: error: ‘DAT_140fc7c20’ undeclared (first use in this function)

    462:   undefined4 uVar1;
    463:   
    464:   param_5 = 0;
    465:   FUN_140200a58(DAT_140fc7c20,&param_5);
    466:   uVar1 = FUN_140201958(param_1,param_2,0,param_4,0);
    467:   FUN_1404f6c6c(DAT_140fc7c20,param_5);
    468:   return uVar1;

## FUN_1402009ec */ — reconstrucao/src/decompiled_01.c:466
reconstrucao/src/decompiled_01.c:466:33: error: passing argument 2 of ‘FUN_140201958’ makes pointer from integer without a cast [-Wint-conversion]

    463:   
    464:   param_5 = 0;
    465:   FUN_140200a58(DAT_140fc7c20,&param_5);
    466:   uVar1 = FUN_140201958(param_1,param_2,0,param_4,0);
    467:   FUN_1404f6c6c(DAT_140fc7c20,param_5);
    468:   return uVar1;
    469: }

## FUN_140200a58 */ — reconstrucao/src/decompiled_01.c:478
reconstrucao/src/decompiled_01.c:478:7: error: ‘DAT_140fc7d20’ undeclared (first use in this function)

    475: {
    476:   undefined1 in_CR8;
    477:   
    478:   if (DAT_140fc7d20 != 0) {
    479:     FUN_1404f6e6c(in_CR8,2);
    480:   }
    481:   *param_2 = in_CR8;

## KeSetSelectedCpuSetsThread */ — reconstrucao/src/decompiled_01.c:514
reconstrucao/src/decompiled_01.c:514:15: error: ‘DAT_140fc6014’ undeclared (first use in this function)

    511:     }
    512:     else {
    513:       plVar7 = (longlong *)*plVar7;
    514:       uVar6 = DAT_140fc6014;
    515:     }
    516:     FUN_14037eee0(lVar3,auStackX_20);
    517:     uVar8 = 0;

## KeSetSelectedCpuSetsThread */ — reconstrucao/src/decompiled_01.c:527
reconstrucao/src/decompiled_01.c:527:16: error: ‘DAT_140fc62ac’ undeclared (first use in this function)

    524:       if ((uVar2 & 1) == 0) break;
    525:       do {
    526:         uVar8 = uVar8 + 1;
    527:         if ((((DAT_140fc62ac & uVar8) == 0) && ((DAT_140fc7ab8 & 0x40) != 0)) &&
    528:            (cVar4 = FUN_14020cb70(), cVar4 != '\0')) {
    529:           FUN_14020cb40(uVar8);
    530:         }

## KeSetSelectedCpuSetsThread */ — reconstrucao/src/decompiled_01.c:527
reconstrucao/src/decompiled_01.c:527:50: error: ‘DAT_140fc7ab8’ undeclared (first use in this function); did you mean ‘FUN_1402c7ab8’?

    524:       if ((uVar2 & 1) == 0) break;
    525:       do {
    526:         uVar8 = uVar8 + 1;
    527:         if ((((DAT_140fc62ac & uVar8) == 0) && ((DAT_140fc7ab8 & 0x40) != 0)) &&
    528:            (cVar4 = FUN_14020cb70(), cVar4 != '\0')) {
    529:           FUN_14020cb40(uVar8);
    530:         }

## KeSetSelectedCpuSetsThread */ — reconstrucao/src/decompiled_01.c:534
reconstrucao/src/decompiled_01.c:534:5: error: too many arguments to function ‘FUN_140200820’; expected 1, have 2

    531:       } while (*(longlong *)(param_1 + 0x40) != 0);
    532:     }
    533:     FUN_1404fbce4(plVar7,uVar6,param_3,param_2);
    534:     FUN_140200820(param_1,auStack_38);
    535:     ExReleaseSpinLockSharedFromDpcLevel(lVar3 + 0x40);
    536:     FUN_140271070(FiberData,auStack_38,auStackX_20[0]);
    537:     uVar5 = 0;

## KeSetSelectedCpuSetsThread */ — reconstrucao/src/decompiled_01.c:536
reconstrucao/src/decompiled_01.c:536:19: error: ‘FiberData’ undeclared (first use in this function)

    533:     FUN_1404fbce4(plVar7,uVar6,param_3,param_2);
    534:     FUN_140200820(param_1,auStack_38);
    535:     ExReleaseSpinLockSharedFromDpcLevel(lVar3 + 0x40);
    536:     FUN_140271070(FiberData,auStack_38,auStackX_20[0]);
    537:     uVar5 = 0;
    538:   }
    539:   return uVar5;

## FUN_140200bc0 */ — reconstrucao/src/decompiled_01.c:565
reconstrucao/src/decompiled_01.c:565:12: error: ‘FiberData’ undeclared (first use in this function)

    562:   undefined1 auStack_89 [89];
    563:   ulonglong uStack_30;
    564:   
    565:   pvVar1 = FiberData;
    566:   uStack_30 = DAT_140e0a740 ^ (ulonglong)auStack_128;
    567:   puStack_f8 = (undefined4 *)0x0;
    568:   uStack_f0 = uStack_f0 & 0xffffffff00000000;

## FUN_140200bc0 */ — reconstrucao/src/decompiled_01.c:566
reconstrucao/src/decompiled_01.c:566:15: error: ‘DAT_140e0a740’ undeclared (first use in this function)

    563:   ulonglong uStack_30;
    564:   
    565:   pvVar1 = FiberData;
    566:   uStack_30 = DAT_140e0a740 ^ (ulonglong)auStack_128;
    567:   puStack_f8 = (undefined4 *)0x0;
    568:   uStack_f0 = uStack_f0 & 0xffffffff00000000;
    569:   uVar6 = 0;

## FUN_140200bc0 */ — reconstrucao/src/decompiled_01.c:571
reconstrucao/src/decompiled_01.c:571:14: error: assignment to ‘undefined8’ {aka ‘long unsigned int’} from ‘void *’ makes integer from pointer without a cast [-Wint-conversion]

    568:   uStack_f0 = uStack_f0 & 0xffffffff00000000;
    569:   uVar6 = 0;
    570:   uStack_108 = 0;
    571:   uStack_100 = (void *)0x0;
    572:   if ((DAT_140fc7a90 & 8) == 0) {
    573:     uStack_108 = 4;
    574:     uVar2 = FUN_1402fd8a0();

## FUN_140200bc0 */ — reconstrucao/src/decompiled_01.c:572
reconstrucao/src/decompiled_01.c:572:8: error: ‘DAT_140fc7a90’ undeclared (first use in this function)

    569:   uVar6 = 0;
    570:   uStack_108 = 0;
    571:   uStack_100 = (void *)0x0;
    572:   if ((DAT_140fc7a90 & 8) == 0) {
    573:     uStack_108 = 4;
    574:     uVar2 = FUN_1402fd8a0();
    575:     uStack_100 = (void *)CONCAT71(uStack_100._1_7_,uVar2);

## FUN_140200bc0 */ — reconstrucao/src/decompiled_01.c:575
reconstrucao/src/decompiled_01.c:575:45: error: request for member ‘_1_7_’ in something not a structure or union

    572:   if ((DAT_140fc7a90 & 8) == 0) {
    573:     uStack_108 = 4;
    574:     uVar2 = FUN_1402fd8a0();
    575:     uStack_100 = (void *)CONCAT71(uStack_100._1_7_,uVar2);
    576:     uStack_100 = (void *)CONCAT44(1,(undefined4)uStack_100);
    577:     puVar5 = *(undefined4 **)((longlong)FiberData + 0x8c00);
    578:     uStack_f0 = *(ulonglong *)(puVar5 + 4);

## FUN_140200bc0 */ — reconstrucao/src/decompiled_01.c:576
reconstrucao/src/decompiled_01.c:576:16: error: assignment to ‘undefined8’ {aka ‘long unsigned int’} from ‘void *’ makes integer from pointer without a cast [-Wint-conversion]

    573:     uStack_108 = 4;
    574:     uVar2 = FUN_1402fd8a0();
    575:     uStack_100 = (void *)CONCAT71(uStack_100._1_7_,uVar2);
    576:     uStack_100 = (void *)CONCAT44(1,(undefined4)uStack_100);
    577:     puVar5 = *(undefined4 **)((longlong)FiberData + 0x8c00);
    578:     uStack_f0 = *(ulonglong *)(puVar5 + 4);
    579:     uVar6 = (uint)uStack_108;

## FUN_140200bc0 */ — reconstrucao/src/decompiled_01.c:584
reconstrucao/src/decompiled_01.c:584:39: error: request for member ‘_4_4_’ in something not a structure or union

    581:   else {
    582:     puVar5 = (undefined4 *)ExpInterlockedPopEntrySList((longlong)FiberData + 0x8bc0);
    583:     if (puVar5 == (undefined4 *)0x0) {
    584:       uStack_108 = CONCAT44(uStack_108._4_4_,2);
    585:       uVar6 = 2;
    586:       puVar5 = (undefined4 *)((ulonglong)auStack_89 & 0xfffffffffffff000);
    587:       if ((((ulonglong)auStack_89 ^ (ulonglong)auStack_e0) & 0xfffffffffffff000) == 0) {

## FUN_140200bc0 */ — reconstrucao/src/decompiled_01.c:590
reconstrucao/src/decompiled_01.c:590:47: error: request for member ‘_1_7_’ in something not a structure or union

    587:       if ((((ulonglong)auStack_89 ^ (ulonglong)auStack_e0) & 0xfffffffffffff000) == 0) {
    588:         puVar5 = auStack_e0;
    589:       }
    590:       uStack_100 = (void *)CONCAT71(uStack_100._1_7_,(byte)in_CR8);
    591:       if (((byte)in_CR8 < 2) && (DAT_140fc7d20 != 0)) {
    592:         FUN_1404f6e6c(in_CR8,0xfffffffffffff002);
    593:       }

## FUN_140200bc0 */ — reconstrucao/src/decompiled_01.c:591
reconstrucao/src/decompiled_01.c:591:34: error: ‘DAT_140fc7d20’ undeclared (first use in this function)

    588:         puVar5 = auStack_e0;
    589:       }
    590:       uStack_100 = (void *)CONCAT71(uStack_100._1_7_,(byte)in_CR8);
    591:       if (((byte)in_CR8 < 2) && (DAT_140fc7d20 != 0)) {
    592:         FUN_1404f6e6c(in_CR8,0xfffffffffffff002);
    593:       }
    594:       uStack_f0 = MmGetPhysicalAddress(puVar5);

## FUN_140200bc0 */ — reconstrucao/src/decompiled_01.c:597
reconstrucao/src/decompiled_01.c:597:18: error: assignment to ‘undefined8’ {aka ‘long unsigned int’} from ‘void *’ makes integer from pointer without a cast [-Wint-conversion]

    594:       uStack_f0 = MmGetPhysicalAddress(puVar5);
    595:     }
    596:     else {
    597:       uStack_100 = pvVar1;
    598:       uStack_f0 = *(ulonglong *)(puVar5 + 4);
    599:       uStack_108 = CONCAT44(uStack_108._4_4_,1);
    600:       puStack_f8 = puVar5;

## FUN_140200bc0 */ — reconstrucao/src/decompiled_01.c:599
reconstrucao/src/decompiled_01.c:599:39: error: request for member ‘_4_4_’ in something not a structure or union

    596:     else {
    597:       uStack_100 = pvVar1;
    598:       uStack_f0 = *(ulonglong *)(puVar5 + 4);
    599:       uStack_108 = CONCAT44(uStack_108._4_4_,1);
    600:       puStack_f8 = puVar5;
    601:     }
    602:   }

## FUN_140200bc0 */ — reconstrucao/src/decompiled_01.c:604
reconstrucao/src/decompiled_01.c:604:25: error: passing argument 1 of ‘FUN_140203fd4’ makes pointer from integer without a cast [-Wint-conversion]

    601:     }
    602:   }
    603:   uVar7 = uStack_f0;
    604:   iVar4 = FUN_140203fd4(param_1,puVar5 + 2,(-(uint)((uVar6 & 2) != 0) & 0xfffff058) + 0xfe8);
    605:   if (iVar4 == -1) {
    606:     FUN_140210b60(&uStack_108);
    607:     puVar5 = (undefined4 *)FUN_14046f5e0(&uStack_108,1,0);

## FUN_140200bc0 */ — reconstrucao/src/decompiled_01.c:604
reconstrucao/src/decompiled_01.c:604:40: error: passing argument 2 of ‘FUN_140203fd4’ from incompatible pointer type [-Wincompatible-pointer-types]

    601:     }
    602:   }
    603:   uVar7 = uStack_f0;
    604:   iVar4 = FUN_140203fd4(param_1,puVar5 + 2,(-(uint)((uVar6 & 2) != 0) & 0xfffff058) + 0xfe8);
    605:   if (iVar4 == -1) {
    606:     FUN_140210b60(&uStack_108);
    607:     puVar5 = (undefined4 *)FUN_14046f5e0(&uStack_108,1,0);

## FUN_140200bc0 */ — reconstrucao/src/decompiled_01.c:606
reconstrucao/src/decompiled_01.c:606:19: error: passing argument 1 of ‘FUN_140210b60’ from incompatible pointer type [-Wincompatible-pointer-types]

    603:   uVar7 = uStack_f0;
    604:   iVar4 = FUN_140203fd4(param_1,puVar5 + 2,(-(uint)((uVar6 & 2) != 0) & 0xfffff058) + 0xfe8);
    605:   if (iVar4 == -1) {
    606:     FUN_140210b60(&uStack_108);
    607:     puVar5 = (undefined4 *)FUN_14046f5e0(&uStack_108,1,0);
    608:     iVar4 = FUN_140203fd4(param_1,puVar5 + 2,0xfe8);
    609:     uVar7 = uStack_f0;

## FUN_140200bc0 */ — reconstrucao/src/decompiled_01.c:608
reconstrucao/src/decompiled_01.c:608:27: error: passing argument 1 of ‘FUN_140203fd4’ makes pointer from integer without a cast [-Wint-conversion]

    605:   if (iVar4 == -1) {
    606:     FUN_140210b60(&uStack_108);
    607:     puVar5 = (undefined4 *)FUN_14046f5e0(&uStack_108,1,0);
    608:     iVar4 = FUN_140203fd4(param_1,puVar5 + 2,0xfe8);
    609:     uVar7 = uStack_f0;
    610:   }
    611:   puVar5[1] = 0;

## FUN_140200bc0 */ — reconstrucao/src/decompiled_01.c:608
reconstrucao/src/decompiled_01.c:608:42: error: passing argument 2 of ‘FUN_140203fd4’ from incompatible pointer type [-Wincompatible-pointer-types]

    605:   if (iVar4 == -1) {
    606:     FUN_140210b60(&uStack_108);
    607:     puVar5 = (undefined4 *)FUN_14046f5e0(&uStack_108,1,0);
    608:     iVar4 = FUN_140203fd4(param_1,puVar5 + 2,0xfe8);
    609:     uVar7 = uStack_f0;
    610:   }
    611:   puVar5[1] = 0;

## FUN_140200bc0 */ — reconstrucao/src/decompiled_01.c:615
reconstrucao/src/decompiled_01.c:615:17: error: passing argument 1 of ‘FUN_140210b60’ from incompatible pointer type [-Wincompatible-pointer-types]

    612:   *puVar5 = param_2;
    613:   uStack_e8 = (ulonglong)(uint)((iVar4 + 7) * 0x4000) & 0xffffffff03fe0000 | 0x15;
    614:   sVar3 = HvlInvokeHypercall(uStack_e8,uVar7,0);
    615:   FUN_140210b60(&uStack_108);
    616:   return -(uint)(sVar3 != 0) & 0xc0000001;
    617: }
    618: 

## FUN_140200dcc */ — reconstrucao/src/decompiled_01.c:636
reconstrucao/src/decompiled_01.c:636:15: error: ‘DAT_140e0a740’ undeclared (first use in this function)

    633:   undefined4 uStack_1c;
    634:   ulonglong uStack_18;
    635:   
    636:   uStack_18 = DAT_140e0a740 ^ (ulonglong)auStack_68;
    637:   if (DAT_140e67941 != '\0') {
    638:     auStackX_8[0] = param_1;
    639:     cVar1 = EtwEventEnabled(DAT_140f0bb00,&DAT_140010400);

## FUN_140200dcc */ — reconstrucao/src/decompiled_01.c:637
reconstrucao/src/decompiled_01.c:637:7: error: ‘DAT_140e67941’ undeclared (first use in this function)

    634:   ulonglong uStack_18;
    635:   
    636:   uStack_18 = DAT_140e0a740 ^ (ulonglong)auStack_68;
    637:   if (DAT_140e67941 != '\0') {
    638:     auStackX_8[0] = param_1;
    639:     cVar1 = EtwEventEnabled(DAT_140f0bb00,&DAT_140010400);
    640:     if (cVar1 != '\0') {

## FUN_140200dcc */ — reconstrucao/src/decompiled_01.c:639
reconstrucao/src/decompiled_01.c:639:29: error: ‘DAT_140f0bb00’ undeclared (first use in this function)

    636:   uStack_18 = DAT_140e0a740 ^ (ulonglong)auStack_68;
    637:   if (DAT_140e67941 != '\0') {
    638:     auStackX_8[0] = param_1;
    639:     cVar1 = EtwEventEnabled(DAT_140f0bb00,&DAT_140010400);
    640:     if (cVar1 != '\0') {
    641:       uStack_1c = 0;
    642:       puStack_28 = auStackX_8;

## FUN_140200dcc */ — reconstrucao/src/decompiled_01.c:639
reconstrucao/src/decompiled_01.c:639:44: error: ‘DAT_140010400’ undeclared (first use in this function)

    636:   uStack_18 = DAT_140e0a740 ^ (ulonglong)auStack_68;
    637:   if (DAT_140e67941 != '\0') {
    638:     auStackX_8[0] = param_1;
    639:     cVar1 = EtwEventEnabled(DAT_140f0bb00,&DAT_140010400);
    640:     if (cVar1 != '\0') {
    641:       uStack_1c = 0;
    642:       puStack_28 = auStackX_8;

## FUN_140200e70 */ — reconstrucao/src/decompiled_01.c:675
reconstrucao/src/decompiled_01.c:675:32: error: ‘DAT_140f230b0’ undeclared (first use in this function)

    672:   undefined4 auStack_38 [8];
    673:   undefined8 auStack_18 [2];
    674:   
    675:   KeAcquireSpinLockAtDpcLevel(&DAT_140f230b0);
    676:   puVar9 = auStack_38;
    677:   puVar12 = &DAT_140f230a0;
    678:   puVar6 = DAT_140f230a0;

## FUN_140200e70 */ — reconstrucao/src/decompiled_01.c:677
reconstrucao/src/decompiled_01.c:677:14: error: ‘DAT_140f230a0’ undeclared (first use in this function); did you mean ‘FUN_1408230a0’?

    674:   
    675:   KeAcquireSpinLockAtDpcLevel(&DAT_140f230b0);
    676:   puVar9 = auStack_38;
    677:   puVar12 = &DAT_140f230a0;
    678:   puVar6 = DAT_140f230a0;
    679:   puVar8 = (undefined8 *)0x0;
    680:   while (puVar5 = puVar6, puVar5 != puVar12) {

## FUN_140200e70 */ — reconstrucao/src/decompiled_01.c:686
reconstrucao/src/decompiled_01.c:686:24: error: implicit declaration of function ‘swi’ [-Wimplicit-function-declaration]

    683:     if (((undefined8 *)puVar11[1] != puVar5) || (puVar6 = puVar11, (undefined8 *)*puVar7 != puVar5))
    684:     {
    685:       puVar6 = (undefined8 *)0x3;
    686:       pcVar3 = (code *)swi(0x29);
    687:       puVar5 = (undefined8 *)(*pcVar3)();
    688:       puVar9 = puVar9 + 2;
    689:     }

## FUN_140200e70 */ — reconstrucao/src/decompiled_01.c:690
reconstrucao/src/decompiled_01.c:690:13: error: assignment to ‘undefined8’ {aka ‘long unsigned int’} from ‘undefined8 *’ {aka ‘long unsigned int *’} makes integer from pointer without a cast [-Wint-conversion]

    687:       puVar5 = (undefined8 *)(*pcVar3)();
    688:       puVar9 = puVar9 + 2;
    689:     }
    690:     *puVar7 = puVar11;
    691:     puVar11[1] = puVar7;
    692:     *puVar5 = puVar8;
    693:     puVar5[1] = 0;

## FUN_140200e70 */ — reconstrucao/src/decompiled_01.c:691
reconstrucao/src/decompiled_01.c:691:16: error: assignment to ‘undefined8’ {aka ‘long unsigned int’} from ‘undefined8 *’ {aka ‘long unsigned int *’} makes integer from pointer without a cast [-Wint-conversion]

    688:       puVar9 = puVar9 + 2;
    689:     }
    690:     *puVar7 = puVar11;
    691:     puVar11[1] = puVar7;
    692:     *puVar5 = puVar8;
    693:     puVar5[1] = 0;
    694:     LOCK();

## FUN_140200e70 */ — reconstrucao/src/decompiled_01.c:692
reconstrucao/src/decompiled_01.c:692:13: error: assignment to ‘undefined8’ {aka ‘long unsigned int’} from ‘undefined8 *’ {aka ‘long unsigned int *’} makes integer from pointer without a cast [-Wint-conversion]

    689:     }
    690:     *puVar7 = puVar11;
    691:     puVar11[1] = puVar7;
    692:     *puVar5 = puVar8;
    693:     puVar5[1] = 0;
    694:     LOCK();
    695:     *(short *)((longlong)puVar5 + -0x8c) = *(short *)((longlong)puVar5 + -0x8c) + 1;

## FUN_140200e70 */ — reconstrucao/src/decompiled_01.c:718
reconstrucao/src/decompiled_01.c:718:15: error: ‘DAT_140fc62ac’ undeclared (first use in this function)

    715:       if ((uVar2 & 1) == 0) break;
    716:       do {
    717:         uVar10 = uVar10 + 1;
    718:         if (((DAT_140fc62ac & uVar10) == 0) && ((DAT_140fc7ab8 & 0x40) != 0)) {
    719:           *(undefined8 *)(puVar9 + -2) = 0x140200fa6;
    720:           cVar4 = FUN_14020cb70();
    721:           if (cVar4 != '\0') {

## FUN_140200e70 */ — reconstrucao/src/decompiled_01.c:718
reconstrucao/src/decompiled_01.c:718:50: error: ‘DAT_140fc7ab8’ undeclared (first use in this function); did you mean ‘FUN_1402c7ab8’?

    715:       if ((uVar2 & 1) == 0) break;
    716:       do {
    717:         uVar10 = uVar10 + 1;
    718:         if (((DAT_140fc62ac & uVar10) == 0) && ((DAT_140fc7ab8 & 0x40) != 0)) {
    719:           *(undefined8 *)(puVar9 + -2) = 0x140200fa6;
    720:           cVar4 = FUN_14020cb70();
    721:           if (cVar4 != '\0') {

## FUN_140200e70 */ — reconstrucao/src/decompiled_01.c:730
reconstrucao/src/decompiled_01.c:730:28: error: passing argument 1 of ‘FUN_140201280’ makes integer from pointer without a cast [-Wint-conversion]

    727:     }
    728:     if ((*(uint *)(puVar8 + -0x6f) & 0x400000) != 0) {
    729:       *(undefined8 *)(puVar9 + -2) = 0x140200edb;
    730:       FUN_140201280(puVar8 + -0x7e,puVar9 + 8,1);
    731:     }
    732:     puVar8[-0x76] = 0;
    733:     LOCK();

## FUN_140200e70 */ — reconstrucao/src/decompiled_01.c:730
reconstrucao/src/decompiled_01.c:730:43: error: passing argument 2 of ‘FUN_140201280’ makes integer from pointer without a cast [-Wint-conversion]

    727:     }
    728:     if ((*(uint *)(puVar8 + -0x6f) & 0x400000) != 0) {
    729:       *(undefined8 *)(puVar9 + -2) = 0x140200edb;
    730:       FUN_140201280(puVar8 + -0x7e,puVar9 + 8,1);
    731:     }
    732:     puVar8[-0x76] = 0;
    733:     LOCK();

## FUN_140200e70 */ — reconstrucao/src/decompiled_01.c:739
reconstrucao/src/decompiled_01.c:739:17: error: ‘FiberData’ undeclared (first use in this function)

    736:     puVar8 = puVar6;
    737:   }
    738:   *(undefined8 *)(puVar9 + -2) = 0x140200f06;
    739:   FUN_140271070(FiberData,puVar9 + 8,2);
    740:   return;
    741: }
    742: 

## FUN_140200fd8 */ — reconstrucao/src/decompiled_01.c:798
reconstrucao/src/decompiled_01.c:798:19: error: passing argument 1 of ‘FUN_14034b620’ makes integer from pointer without a cast [-Wint-conversion]

    795:     if ((param_1[0x1e] & 0x400000) == 0) {
    796:       return;
    797:     }
    798:     FUN_14034b620(param_1,auStackX_18);
    799:     if (param_1[0x100] != 0x20) {
    800:       FUN_14034b6b4(param_1,&uStackX_20,(int)(char)param_1[0x100],1);
    801:       param_1[0x100] = 0x20;

## FUN_140200fd8 */ — reconstrucao/src/decompiled_01.c:800
reconstrucao/src/decompiled_01.c:800:21: error: passing argument 1 of ‘FUN_14034b6b4’ makes integer from pointer without a cast [-Wint-conversion]

    797:     }
    798:     FUN_14034b620(param_1,auStackX_18);
    799:     if (param_1[0x100] != 0x20) {
    800:       FUN_14034b6b4(param_1,&uStackX_20,(int)(char)param_1[0x100],1);
    801:       param_1[0x100] = 0x20;
    802:     }
    803:     uStack_48 = 0;

## FUN_140200fd8 */ — reconstrucao/src/decompiled_01.c:800
reconstrucao/src/decompiled_01.c:800:29: error: passing argument 2 of ‘FUN_14034b6b4’ makes integer from pointer without a cast [-Wint-conversion]

    797:     }
    798:     FUN_14034b620(param_1,auStackX_18);
    799:     if (param_1[0x100] != 0x20) {
    800:       FUN_14034b6b4(param_1,&uStackX_20,(int)(char)param_1[0x100],1);
    801:       param_1[0x100] = 0x20;
    802:     }
    803:     uStack_48 = 0;

## FUN_140200fd8 */ — reconstrucao/src/decompiled_01.c:817
reconstrucao/src/decompiled_01.c:817:19: error: ‘FiberData’ undeclared (first use in this function)

    814:     FUN_1402fd5d0(uVar8,pvStack_60,&uStack_68,uStack_58,&uStack_48);
    815:     param_1[0x10] = 0;
    816:     param_1[0x11] = 0;
    817:     FUN_140271070(FiberData,&uStackX_20,auStackX_18[0]);
    818:     KeSetPriorityThread(param_1,(int)*(char *)((longlong)param_1 + 0x233));
    819:     return;
    820:   }

## FUN_140200fd8 */ — reconstrucao/src/decompiled_01.c:818
reconstrucao/src/decompiled_01.c:818:25: error: passing argument 1 of ‘KeSetPriorityThread’ makes integer from pointer without a cast [-Wint-conversion]

    815:     param_1[0x10] = 0;
    816:     param_1[0x11] = 0;
    817:     FUN_140271070(FiberData,&uStackX_20,auStackX_18[0]);
    818:     KeSetPriorityThread(param_1,(int)*(char *)((longlong)param_1 + 0x233));
    819:     return;
    820:   }
    821:   if (param_3 != 1) {

## FUN_140200fd8 */ — reconstrucao/src/decompiled_01.c:823
reconstrucao/src/decompiled_01.c:823:12: error: ‘DAT_140fc7b14’ undeclared (first use in this function); did you mean ‘FUN_140ac7b14’?

    820:   }
    821:   if (param_3 != 1) {
    822:     if ((param_3 == 2) || (param_3 == 3)) {
    823:       if ((DAT_140fc7b14 & 0x20) != 0) {
    824:         FUN_1406597f4(param_1,param_3);
    825:       }
    826:       FUN_14034b620(param_1,auStackX_18);

## FUN_140200fd8 */ — reconstrucao/src/decompiled_01.c:824
reconstrucao/src/decompiled_01.c:824:23: error: passing argument 1 of ‘FUN_1406597f4’ makes integer from pointer without a cast [-Wint-conversion]

    821:   if (param_3 != 1) {
    822:     if ((param_3 == 2) || (param_3 == 3)) {
    823:       if ((DAT_140fc7b14 & 0x20) != 0) {
    824:         FUN_1406597f4(param_1,param_3);
    825:       }
    826:       FUN_14034b620(param_1,auStackX_18);
    827:     }

## FUN_140200fd8 */ — reconstrucao/src/decompiled_01.c:826
reconstrucao/src/decompiled_01.c:826:21: error: passing argument 1 of ‘FUN_14034b620’ makes integer from pointer without a cast [-Wint-conversion]

    823:       if ((DAT_140fc7b14 & 0x20) != 0) {
    824:         FUN_1406597f4(param_1,param_3);
    825:       }
    826:       FUN_14034b620(param_1,auStackX_18);
    827:     }
    828:     else {
    829:       if (param_3 != 4) {

## FUN_140200fd8 */ — reconstrucao/src/decompiled_01.c:832
reconstrucao/src/decompiled_01.c:832:21: error: passing argument 1 of ‘FUN_14034b620’ makes integer from pointer without a cast [-Wint-conversion]

    829:       if (param_3 != 4) {
    830:         return;
    831:       }
    832:       FUN_14034b620(param_1,auStackX_18);
    833:       lVar2 = *(longlong *)(param_1 + 0xf2);
    834:       if (lVar2 == 0) goto LAB_14020104d;
    835:       LOCK();

## FUN_140200fd8 */ — reconstrucao/src/decompiled_01.c:841
reconstrucao/src/decompiled_01.c:841:19: error: passing argument 1 of ‘FUN_140201280’ makes integer from pointer without a cast [-Wint-conversion]

    838:       if ((*(longlong *)(lVar2 + 0x28) == *(longlong *)(lVar2 + 0x30)) ||
    839:          ((char)param_1[0x61] != '\x01')) goto LAB_14020104d;
    840:     }
    841:     FUN_140201280(param_1,&uStackX_20,0);
    842: LAB_14020104d:
    843:     param_1[0x10] = 0;
    844:     param_1[0x11] = 0;

## FUN_140200fd8 */ — reconstrucao/src/decompiled_01.c:841
reconstrucao/src/decompiled_01.c:841:27: error: passing argument 2 of ‘FUN_140201280’ makes integer from pointer without a cast [-Wint-conversion]

    838:       if ((*(longlong *)(lVar2 + 0x28) == *(longlong *)(lVar2 + 0x30)) ||
    839:          ((char)param_1[0x61] != '\x01')) goto LAB_14020104d;
    840:     }
    841:     FUN_140201280(param_1,&uStackX_20,0);
    842: LAB_14020104d:
    843:     param_1[0x10] = 0;
    844:     param_1[0x11] = 0;

## FUN_140200fd8 */ — reconstrucao/src/decompiled_01.c:852
reconstrucao/src/decompiled_01.c:852:17: error: passing argument 1 of ‘FUN_14034b620’ makes integer from pointer without a cast [-Wint-conversion]

    849:   if (lVar2 == 0) {
    850:     return;
    851:   }
    852:   FUN_14034b620(param_1,auStackX_18);
    853:   pvVar4 = FiberData;
    854:   uVar5 = *(uint *)(lVar2 + 4);
    855:   if (6 < (int)uVar5) goto LAB_14020115f;

## FUN_140200fd8 */ — reconstrucao/src/decompiled_01.c:867
reconstrucao/src/decompiled_01.c:867:9: error: invalid use of void expression

    864:   uStack_38 = 0;
    865:   uStack_30 = 0;
    866:   pvStack_60 = pvVar4;
    867:   uVar8 = FUN_14020c440(pvVar4,1,&uStack_68);
    868:   *(char *)(param_1 + 0x81) = (char)uVar5;
    869:   if (*(longlong *)((longlong)pvVar4 + 0x10) == 0) {
    870:     pvStack_50 = pvVar4;

## FUN_140200fd8 */ — reconstrucao/src/decompiled_01.c:881
reconstrucao/src/decompiled_01.c:881:15: error: invalid use of void expression

    878:         bVar1 = *(byte *)(*(longlong *)((longlong)*ppvVar6 + 0x38) + 0x40);
    879:         *(byte *)(*(longlong *)((longlong)*ppvVar6 + 0x38) + 0x40) =
    880:              (bVar1 ^ (byte)param_1[0x81]) & 7 ^ bVar1;
    881:         uVar8 = FUN_14027835c();
    882:         ppvVar6 = ppvVar6 + 1;
    883:         uVar7 = uVar7 - 1;
    884:       } while (uVar7 != 0);

## FUN_140200fd8 */ — reconstrucao/src/decompiled_01.c:898
reconstrucao/src/decompiled_01.c:898:7: error: ‘DAT_140fc7d20’ undeclared (first use in this function)

    895:   param_1[0x10] = 0;
    896:   param_1[0x11] = 0;
    897:   FUN_140295160(pvVar4,param_1);
    898:   if (DAT_140fc7d20 != 0) {
    899:     FUN_1404f6e08(in_CR8,auStackX_18[0]);
    900:   }
    901:   return;

## FUN_140201280 */ — reconstrucao/src/decompiled_01.c:971
reconstrucao/src/decompiled_01.c:971:9: error: invalid use of void expression

    968:     *(undefined1 *)(param_1 + 0x366) = 0;
    969:     *(ushort *)(param_1 + 0x206) = *(ushort *)(param_1 + 0x206) & 0xf00f;
    970:   }
    971:   iVar6 = FUN_1403c1fa4(param_1,0,0);
    972:   if (iVar6 != iVar9) {
    973:     FUN_140306b38(param_1,param_2,iVar6);
    974:   }

## FUN_140201280 */ — reconstrucao/src/decompiled_01.c:995
reconstrucao/src/decompiled_01.c:995:78: error: passing argument 3 of ‘FUN_1403fce40’ from incompatible pointer type [-Wincompatible-pointer-types]

    992:         alStack_50[0] = lStack_88;
    993:         plStack_78 = (longlong *)0x0;
    994:         auStackX_20[0] = 0;
    995:         uVar11 = FUN_1403fce40(alStack_50,*(uint *)(param_1 + 0x78) >> 1 & 1,&plStack_78,auStackX_20
    996:                               );
    997:         if (auStackX_20[0] != 0) {
    998:           uVar8 = (ulonglong)auStackX_20[0];

## FUN_140201280 */ — reconstrucao/src/decompiled_01.c:995
reconstrucao/src/decompiled_01.c:995:16: error: invalid use of void expression

    992:         alStack_50[0] = lStack_88;
    993:         plStack_78 = (longlong *)0x0;
    994:         auStackX_20[0] = 0;
    995:         uVar11 = FUN_1403fce40(alStack_50,*(uint *)(param_1 + 0x78) >> 1 & 1,&plStack_78,auStackX_20
    996:                               );
    997:         if (auStackX_20[0] != 0) {
    998:           uVar8 = (ulonglong)auStackX_20[0];

## FUN_140201280 */ — reconstrucao/src/decompiled_01.c:1004
reconstrucao/src/decompiled_01.c:1004:20: error: invalid use of void expression

    1001:             bVar1 = *(byte *)(*(longlong *)(*plVar10 + 0x38) + 0x40);
    1002:             *(byte *)(*(longlong *)(*plVar10 + 0x38) + 0x40) =
    1003:                  bVar1 ^ (bVar1 ^ *(byte *)(param_1 + 0x204)) & 7;
    1004:             uVar11 = FUN_14027835c();
    1005:             plVar10 = plVar10 + 1;
    1006:             uVar8 = uVar8 - 1;
    1007:           } while (uVar8 != 0);

## FUN_140201280 */ — reconstrucao/src/decompiled_01.c:1015
reconstrucao/src/decompiled_01.c:1015:76: error: passing argument 3 of ‘FUN_1403fce40’ from incompatible pointer type [-Wincompatible-pointer-types]

    1012:       lStack_58 = lStack_88;
    1013:       plStack_80 = (longlong *)0x0;
    1014:       auStackX_8[0] = 0;
    1015:       uVar11 = FUN_1403fce40(&lStack_58,*(uint *)(param_1 + 0x78) >> 1 & 1,&plStack_80,auStackX_8);
    1016:       if (auStackX_8[0] != 0) {
    1017:         uVar8 = (ulonglong)auStackX_8[0];
    1018:         plVar10 = plStack_80;

## FUN_140201280 */ — reconstrucao/src/decompiled_01.c:1015
reconstrucao/src/decompiled_01.c:1015:14: error: invalid use of void expression

    1012:       lStack_58 = lStack_88;
    1013:       plStack_80 = (longlong *)0x0;
    1014:       auStackX_8[0] = 0;
    1015:       uVar11 = FUN_1403fce40(&lStack_58,*(uint *)(param_1 + 0x78) >> 1 & 1,&plStack_80,auStackX_8);
    1016:       if (auStackX_8[0] != 0) {
    1017:         uVar8 = (ulonglong)auStackX_8[0];
    1018:         plVar10 = plStack_80;

## FUN_140201280 */ — reconstrucao/src/decompiled_01.c:1023
reconstrucao/src/decompiled_01.c:1023:18: error: invalid use of void expression

    1020:           bVar1 = *(byte *)(*(longlong *)(*plVar10 + 0x38) + 0x40);
    1021:           *(byte *)(*(longlong *)(*plVar10 + 0x38) + 0x40) =
    1022:                bVar1 ^ (bVar1 ^ *(byte *)(param_1 + 0x204)) & 7;
    1023:           uVar11 = FUN_14027835c();
    1024:           plVar10 = plVar10 + 1;
    1025:           uVar8 = uVar8 - 1;
    1026:         } while (uVar8 != 0);

## FUN_140201280 */ — reconstrucao/src/decompiled_01.c:1036
reconstrucao/src/decompiled_01.c:1036:29: error: ‘DAT_140fc7b14’ undeclared (first use in this function); did you mean ‘FUN_140ac7b14’?

    1033:     **(uint **)(param_1 + 0x3c8) = **(uint **)(param_1 + 0x3c8) & 0xffefffff;
    1034:     UNLOCK();
    1035:   }
    1036:   if ((iVar9 != iVar6) && ((DAT_140fc7b14 & 0x20) != 0)) {
    1037:     FUN_1404d0da8(param_1,iVar9,iVar5,iVar6,&uStack_60);
    1038:   }
    1039:   return;

## FUN_1402015a0 */ — reconstrucao/src/decompiled_01.c:1053
reconstrucao/src/decompiled_01.c:1053:40: error: ‘DAT_140f08470’ undeclared (first use in this function)

    1050:   longlong lStackX_10;
    1051:   
    1052:   lStackX_10 = 0;
    1053:   uVar2 = KeAcquireSpinLockRaiseToDpc(&DAT_140f08470);
    1054:   puVar1 = DAT_140f08468;
    1055:   if (DAT_140f08468 != (uint *)0x0) {
    1056:     uVar3 = *DAT_140f08468;

## FUN_1402015a0 */ — reconstrucao/src/decompiled_01.c:1054
reconstrucao/src/decompiled_01.c:1054:12: error: ‘DAT_140f08468’ undeclared (first use in this function)

    1051:   
    1052:   lStackX_10 = 0;
    1053:   uVar2 = KeAcquireSpinLockRaiseToDpc(&DAT_140f08470);
    1054:   puVar1 = DAT_140f08468;
    1055:   if (DAT_140f08468 != (uint *)0x0) {
    1056:     uVar3 = *DAT_140f08468;
    1057:     if (((uVar3 & 0x10) != 0) && ((uVar3 & 1) != (uint)param_1)) {

## FUN_14020164c */ — reconstrucao/src/decompiled_01.c:1085
reconstrucao/src/decompiled_01.c:1085:40: error: ‘DAT_140f0cf28’ undeclared (first use in this function)

    1082: {
    1083:   undefined1 uVar1;
    1084:   
    1085:   uVar1 = KeAcquireSpinLockRaiseToDpc(&DAT_140f0cf28);
    1086:   FUN_140201790(DAT_140fc7ad0 + (ulonglong)param_1 * 0x70 + 0x14,1,param_2);
    1087:   KeReleaseSpinLock(&DAT_140f0cf28,uVar1);
    1088:   if (param_1 == *DAT_140fc7ad0 - 1U) {

## FUN_14020164c */ — reconstrucao/src/decompiled_01.c:1086
reconstrucao/src/decompiled_01.c:1086:17: error: ‘DAT_140fc7ad0’ undeclared (first use in this function)

    1083:   undefined1 uVar1;
    1084:   
    1085:   uVar1 = KeAcquireSpinLockRaiseToDpc(&DAT_140f0cf28);
    1086:   FUN_140201790(DAT_140fc7ad0 + (ulonglong)param_1 * 0x70 + 0x14,1,param_2);
    1087:   KeReleaseSpinLock(&DAT_140f0cf28,uVar1);
    1088:   if (param_1 == *DAT_140fc7ad0 - 1U) {
    1089:     if (param_2 == '\0') {

## FUN_140201708 */ — reconstrucao/src/decompiled_01.c:1115
reconstrucao/src/decompiled_01.c:1115:7: error: ‘DAT_140fc7ad0’ undeclared (first use in this function)

    1112:   ulonglong uVar3;
    1113:   
    1114:   uVar3 = 0;
    1115:   if (DAT_140fc7ad0 != (uint *)0x0) {
    1116:     uVar1 = KeAcquireSpinLockRaiseToDpc(&DAT_140f0cf28);
    1117:     if (*DAT_140fc7ad0 != 0) {
    1118:       do {

## FUN_140201708 */ — reconstrucao/src/decompiled_01.c:1116
reconstrucao/src/decompiled_01.c:1116:42: error: ‘DAT_140f0cf28’ undeclared (first use in this function)

    1113:   
    1114:   uVar3 = 0;
    1115:   if (DAT_140fc7ad0 != (uint *)0x0) {
    1116:     uVar1 = KeAcquireSpinLockRaiseToDpc(&DAT_140f0cf28);
    1117:     if (*DAT_140fc7ad0 != 0) {
    1118:       do {
    1119:         FUN_140201790(DAT_140fc7ad0 + uVar3 * 0x70 + 0x14,CONCAT71((int7)(uVar3 >> 8),2),

## FUN_140201834 */ — reconstrucao/src/decompiled_01.c:1190
reconstrucao/src/decompiled_01.c:1190:40: error: ‘DAT_140f0e990’ undeclared (first use in this function)

    1187: {
    1188:   undefined1 uVar1;
    1189:   
    1190:   uVar1 = KeAcquireSpinLockRaiseToDpc(&DAT_140f0e990);
    1191:   if (DAT_140f0e9a1 != '\0') {
    1192:     if (DAT_140f0e9a0 == param_1) goto LAB_14020188d;
    1193:     if (param_1 == '\0') {

## FUN_140201834 */ — reconstrucao/src/decompiled_01.c:1191
reconstrucao/src/decompiled_01.c:1191:7: error: ‘DAT_140f0e9a1’ undeclared (first use in this function)

    1188:   undefined1 uVar1;
    1189:   
    1190:   uVar1 = KeAcquireSpinLockRaiseToDpc(&DAT_140f0e990);
    1191:   if (DAT_140f0e9a1 != '\0') {
    1192:     if (DAT_140f0e9a0 == param_1) goto LAB_14020188d;
    1193:     if (param_1 == '\0') {
    1194:       FUN_1404b8ffc(_DAT_fffff78000000008,0);

## FUN_140201834 */ — reconstrucao/src/decompiled_01.c:1192
reconstrucao/src/decompiled_01.c:1192:9: error: ‘DAT_140f0e9a0’ undeclared (first use in this function)

    1189:   
    1190:   uVar1 = KeAcquireSpinLockRaiseToDpc(&DAT_140f0e990);
    1191:   if (DAT_140f0e9a1 != '\0') {
    1192:     if (DAT_140f0e9a0 == param_1) goto LAB_14020188d;
    1193:     if (param_1 == '\0') {
    1194:       FUN_1404b8ffc(_DAT_fffff78000000008,0);
    1195:     }

## FUN_140201834 */ — reconstrucao/src/decompiled_01.c:1194
reconstrucao/src/decompiled_01.c:1194:21: error: ‘_DAT_fffff78000000008’ undeclared (first use in this function)

    1191:   if (DAT_140f0e9a1 != '\0') {
    1192:     if (DAT_140f0e9a0 == param_1) goto LAB_14020188d;
    1193:     if (param_1 == '\0') {
    1194:       FUN_1404b8ffc(_DAT_fffff78000000008,0);
    1195:     }
    1196:     else {
    1197:       DAT_140f0e9a8 = _DAT_fffff78000000008;

## FUN_140201834 */ — reconstrucao/src/decompiled_01.c:1197
reconstrucao/src/decompiled_01.c:1197:7: error: ‘DAT_140f0e9a8’ undeclared (first use in this function)

    1194:       FUN_1404b8ffc(_DAT_fffff78000000008,0);
    1195:     }
    1196:     else {
    1197:       DAT_140f0e9a8 = _DAT_fffff78000000008;
    1198:     }
    1199:   }
    1200:   if (DAT_140f0e9a0 != param_1) {

## FUN_1402018b8 */ — reconstrucao/src/decompiled_01.c:1217
reconstrucao/src/decompiled_01.c:1217:40: error: ‘DAT_140f0ce60’ undeclared (first use in this function)

    1214:   undefined1 uVar1;
    1215:   undefined8 uVar2;
    1216:   
    1217:   uVar1 = KeAcquireSpinLockRaiseToDpc(&DAT_140f0ce60);
    1218:   if (DAT_140f0c0d8 != '\0') {
    1219:     uVar2 = KeQueryPerformanceCounter(0);
    1220:     if (param_1 == '\0') {

## FUN_1402018b8 */ — reconstrucao/src/decompiled_01.c:1218
reconstrucao/src/decompiled_01.c:1218:7: error: ‘DAT_140f0c0d8’ undeclared (first use in this function)

    1215:   undefined8 uVar2;
    1216:   
    1217:   uVar1 = KeAcquireSpinLockRaiseToDpc(&DAT_140f0ce60);
    1218:   if (DAT_140f0c0d8 != '\0') {
    1219:     uVar2 = KeQueryPerformanceCounter(0);
    1220:     if (param_1 == '\0') {
    1221:       FUN_1404bc4ec(uVar2);

## FUN_1402018b8 */ — reconstrucao/src/decompiled_01.c:1219
reconstrucao/src/decompiled_01.c:1219:11: error: invalid use of void expression

    1216:   
    1217:   uVar1 = KeAcquireSpinLockRaiseToDpc(&DAT_140f0ce60);
    1218:   if (DAT_140f0c0d8 != '\0') {
    1219:     uVar2 = KeQueryPerformanceCounter(0);
    1220:     if (param_1 == '\0') {
    1221:       FUN_1404bc4ec(uVar2);
    1222:     }

## FUN_1402018b8 */ — reconstrucao/src/decompiled_01.c:1224
reconstrucao/src/decompiled_01.c:1224:7: error: ‘DAT_140f0c0d0’ undeclared (first use in this function)

    1221:       FUN_1404bc4ec(uVar2);
    1222:     }
    1223:     else {
    1224:       DAT_140f0c0d0 = uVar2;
    1225:     }
    1226:   }
    1227:   KeReleaseSpinLock(&DAT_140f0ce60,uVar1);

## FUN_140201918 */ — reconstrucao/src/decompiled_01.c:1238
reconstrucao/src/decompiled_01.c:1238:18: error: ‘DAT_140fc6014’ undeclared (first use in this function)

    1235: {
    1236:   ulonglong uVar1;
    1237:   
    1238:   if (param_2 <= DAT_140fc6014) {
    1239:     uVar1 = 0;
    1240:     while( true ) {
    1241:       if (param_2 <= (uint)uVar1) {

## FUN_140201918 */ — reconstrucao/src/decompiled_01.c:1244
reconstrucao/src/decompiled_01.c:1244:53: error: ‘DAT_140fc8128’ undeclared (first use in this function)

    1241:       if (param_2 <= (uint)uVar1) {
    1242:         return 0;
    1243:       }
    1244:       if ((*(ulonglong *)(param_1 + uVar1 * 8) & ~(&DAT_140fc8128)[uVar1]) != 0) break;
    1245:       uVar1 = (ulonglong)((uint)uVar1 + 1);
    1246:     }
    1247:   }

## FUN_140201958 */ — reconstrucao/src/decompiled_01.c:1272
reconstrucao/src/decompiled_01.c:1272:25: error: passing argument 1 of ‘FUN_140201918’ makes integer from pointer without a cast [-Wint-conversion]

    1269:   ulonglong *puStack_38;
    1270:   
    1271:   uVar6 = 0;
    1272:   uVar3 = FUN_140201918(param_2,param_1);
    1273:   if (-1 < (int)uVar3) {
    1274:     if ((param_3 == (ushort *)0x0) ||
    1275:        (iVar2 = KeIsSubsetAffinityEx(param_3,&DAT_140fc8120), iVar2 != 0)) {

## FUN_140201958 */ — reconstrucao/src/decompiled_01.c:1275
reconstrucao/src/decompiled_01.c:1275:47: error: ‘DAT_140fc8120’ undeclared (first use in this function)

    1272:   uVar3 = FUN_140201918(param_2,param_1);
    1273:   if (-1 < (int)uVar3) {
    1274:     if ((param_3 == (ushort *)0x0) ||
    1275:        (iVar2 = KeIsSubsetAffinityEx(param_3,&DAT_140fc8120), iVar2 != 0)) {
    1276:       uVar12 = 0x20;
    1277:       if (param_1 < 0x20) {
    1278:         uVar12 = param_1;

## FUN_140201958 */ — reconstrucao/src/decompiled_01.c:1281
reconstrucao/src/decompiled_01.c:1281:36: error: ‘DAT_140f23730’ undeclared (first use in this function)

    1278:         uVar12 = param_1;
    1279:       }
    1280:       uVar7 = 0;
    1281:       KeAcquireSpinLockAtDpcLevel(&DAT_140f23730);
    1282:       uVar4 = DAT_140fc7bf8;
    1283:       do {
    1284:         while ((uVar4 & 1) != 0) {

## FUN_140201958 */ — reconstrucao/src/decompiled_01.c:1282
reconstrucao/src/decompiled_01.c:1282:15: error: ‘DAT_140fc7bf8’ undeclared (first use in this function)

    1279:       }
    1280:       uVar7 = 0;
    1281:       KeAcquireSpinLockAtDpcLevel(&DAT_140f23730);
    1282:       uVar4 = DAT_140fc7bf8;
    1283:       do {
    1284:         while ((uVar4 & 1) != 0) {
    1285:           uVar4 = DAT_140fc7bf8;

## FUN_140201958 */ — reconstrucao/src/decompiled_01.c:1299
reconstrucao/src/decompiled_01.c:1299:21: error: ‘DAT_140fc9320’ undeclared (first use in this function)

    1296:       } while (!bVar13);
    1297:       uVar4 = 0;
    1298:       lVar10 = 0;
    1299:       puStack_38 = &DAT_140fc9320 + param_4;
    1300:       lVar9 = (longlong)&DAT_140fc8128 - (longlong)param_2;
    1301:       lVar11 = (longlong)&DAT_140fc9720 - (longlong)param_2;
    1302:       do {

## FUN_140201958 */ — reconstrucao/src/decompiled_01.c:1300
reconstrucao/src/decompiled_01.c:1300:26: error: ‘DAT_140fc8128’ undeclared (first use in this function)

    1297:       uVar4 = 0;
    1298:       lVar10 = 0;
    1299:       puStack_38 = &DAT_140fc9320 + param_4;
    1300:       lVar9 = (longlong)&DAT_140fc8128 - (longlong)param_2;
    1301:       lVar11 = (longlong)&DAT_140fc9720 - (longlong)param_2;
    1302:       do {
    1303:         uVar1 = *(ulonglong *)(lVar9 + (longlong)param_2);

## FUN_140201958 */ — reconstrucao/src/decompiled_01.c:1301
reconstrucao/src/decompiled_01.c:1301:27: error: ‘DAT_140fc9720’ undeclared (first use in this function)

    1298:       lVar10 = 0;
    1299:       puStack_38 = &DAT_140fc9320 + param_4;
    1300:       lVar9 = (longlong)&DAT_140fc8128 - (longlong)param_2;
    1301:       lVar11 = (longlong)&DAT_140fc9720 - (longlong)param_2;
    1302:       do {
    1303:         uVar1 = *(ulonglong *)(lVar9 + (longlong)param_2);
    1304:         if (param_3 == (ushort *)0x0) {

## FUN_140201958 */ — reconstrucao/src/decompiled_01.c:1330
reconstrucao/src/decompiled_01.c:1330:41: error: ‘DAT_140fc7c20’ undeclared (first use in this function)

    1327:         else if (param_5 == 2) {
    1328:           uVar6 = ~uVar5 & *puStack_38;
    1329:         }
    1330:         if ((ushort)uVar4 < *(ushort *)*DAT_140fc7c20) {
    1331:           uVar5 = *(ulonglong *)((ushort *)*DAT_140fc7c20 + (uVar4 & 0xffff) * 4 + 4);
    1332:         }
    1333:         else {

## FUN_140201958 */ — reconstrucao/src/decompiled_01.c:1348
reconstrucao/src/decompiled_01.c:1348:9: error: ‘DAT_140fc7e74’ undeclared (first use in this function)

    1345:         lVar10 = lVar10 + 2;
    1346:       } while (uVar8 < 0x20);
    1347:       if (param_4 == 0) {
    1348:         DAT_140fc7e74 = uVar7;
    1349:       }
    1350:       DAT_140fc7bf8 = DAT_140fc7bf8 + 1;
    1351:       FUN_140202990(0);

## FUN_140201b84 */ — reconstrucao/src/decompiled_01.c:1371
reconstrucao/src/decompiled_01.c:1371:38: error: ‘DAT_140e2edc0’ undeclared (first use in this function)

    1368:   
    1369:   uVar1 = param_1[1];
    1370:   bVar2 = false;
    1371:   ExAcquireSpinLockSharedAtDpcLevel(&DAT_140e2edc0);
    1372:   if ((ushort)uVar1 < DAT_140e2edc8) {
    1373:     bVar2 = (*(ulonglong *)(&DAT_140e2edd0 + (ulonglong)(ushort)uVar1 * 8) & *param_1) != 0;
    1374:   }

## FUN_140201b84 */ — reconstrucao/src/decompiled_01.c:1372
reconstrucao/src/decompiled_01.c:1372:23: error: ‘DAT_140e2edc8’ undeclared (first use in this function)

    1369:   uVar1 = param_1[1];
    1370:   bVar2 = false;
    1371:   ExAcquireSpinLockSharedAtDpcLevel(&DAT_140e2edc0);
    1372:   if ((ushort)uVar1 < DAT_140e2edc8) {
    1373:     bVar2 = (*(ulonglong *)(&DAT_140e2edd0 + (ulonglong)(ushort)uVar1 * 8) & *param_1) != 0;
    1374:   }
    1375:   ExReleaseSpinLockSharedFromDpcLevel(&DAT_140e2edc0);

## FUN_140201b84 */ — reconstrucao/src/decompiled_01.c:1373
reconstrucao/src/decompiled_01.c:1373:30: error: ‘DAT_140e2edd0’ undeclared (first use in this function)

    1370:   bVar2 = false;
    1371:   ExAcquireSpinLockSharedAtDpcLevel(&DAT_140e2edc0);
    1372:   if ((ushort)uVar1 < DAT_140e2edc8) {
    1373:     bVar2 = (*(ulonglong *)(&DAT_140e2edd0 + (ulonglong)(ushort)uVar1 * 8) & *param_1) != 0;
    1374:   }
    1375:   ExReleaseSpinLockSharedFromDpcLevel(&DAT_140e2edc0);
    1376:   return bVar2;

## FUN_140201bf0 */ — reconstrucao/src/decompiled_01.c:1408
reconstrucao/src/decompiled_01.c:1408:23: error: ‘DAT_140fc601a’ undeclared (first use in this function)

    1405:   
    1406:   puVar16 = auStack_48;
    1407:   lVar5 = *param_1;
    1408:   uVar13 = (ulonglong)DAT_140fc601a;
    1409:   puVar15 = auStack_48;
    1410:   if (DAT_140fc7d20 != 0) goto LAB_140201cd7;
    1411:   do {

## FUN_140201bf0 */ — reconstrucao/src/decompiled_01.c:1410
reconstrucao/src/decompiled_01.c:1410:7: error: ‘DAT_140fc7d20’ undeclared (first use in this function)

    1407:   lVar5 = *param_1;
    1408:   uVar13 = (ulonglong)DAT_140fc601a;
    1409:   puVar15 = auStack_48;
    1410:   if (DAT_140fc7d20 != 0) goto LAB_140201cd7;
    1411:   do {
    1412:     LOCK();
    1413:     plVar1 = param_1 + 1;

## FUN_140201bf0 */ — reconstrucao/src/decompiled_01.c:1424
reconstrucao/src/decompiled_01.c:1424:41: error: ‘FiberData’ undeclared (first use in this function)

    1421:       UNLOCK();
    1422:       do {
    1423:       } while (0 < *(int *)((longlong)param_1 + 0xc));
    1424:       uVar4 = *(undefined4 *)((longlong)FiberData + 0x24);
    1425:       *(undefined8 *)(puVar15 + -2) = 0x140201c62;
    1426:       iVar10 = KeCheckProcessorAffinityEx(param_1 + 2,uVar4);
    1427:       if (iVar10 != 0) {

## FUN_140201bf0 */ — reconstrucao/src/decompiled_01.c:1443
reconstrucao/src/decompiled_01.c:1443:16: error: ‘DAT_140f23250’ undeclared (first use in this function)

    1440:     plVar11 = (longlong *)*plVar1;
    1441:     if (plVar11 == plVar1) {
    1442: LAB_140201ceb:
    1443:       plVar1 = DAT_140f23250;
    1444:       do {
    1445:         plVar11 = plVar1;
    1446:         plVar1 = (longlong *)*plVar11;

## FUN_140201bf0 */ — reconstrucao/src/decompiled_01.c:1491
reconstrucao/src/decompiled_01.c:1491:35: error: ‘DAT_140f23818’ undeclared (first use in this function)

    1488:         uVar17 = uVar17 & ~(1L << (uVar7 & 0x3f));
    1489:         piVar2 = (int *)((longlong)plVar11 +
    1490:                         (ulonglong)
    1491:                         *(uint *)(DAT_140f23818 +
    1492:                                  (ulonglong)((uint)uVar14 * 0x40 + ((uint)uVar7 & 0xff)) * 4) * 4 +
    1493:                         0x120);
    1494:         *piVar2 = *piVar2 + -1;

## FUN_140201e00 */ — reconstrucao/src/decompiled_01.c:1526
reconstrucao/src/decompiled_01.c:1526:40: error: ‘DAT_140e27f48’ undeclared (first use in this function)

    1523:   undefined1 uVar1;
    1524:   undefined8 uVar2;
    1525:   
    1526:   uVar1 = KeAcquireSpinLockRaiseToDpc(&DAT_140e27f48);
    1527:   if (param_1 == '\0') {
    1528:     DAT_140e27f44 = DAT_140e27f44 + -1;
    1529:     if (DAT_140e27f44 != 0) goto LAB_140201e85;

## FUN_140201e00 */ — reconstrucao/src/decompiled_01.c:1528
reconstrucao/src/decompiled_01.c:1528:5: error: ‘DAT_140e27f44’ undeclared (first use in this function)

    1525:   
    1526:   uVar1 = KeAcquireSpinLockRaiseToDpc(&DAT_140e27f48);
    1527:   if (param_1 == '\0') {
    1528:     DAT_140e27f44 = DAT_140e27f44 + -1;
    1529:     if (DAT_140e27f44 != 0) goto LAB_140201e85;
    1530:     FUN_14049fa04(1,&DAT_140e27df0,&DAT_140e27df8);
    1531:     uVar2 = 1;

## FUN_140201e00 */ — reconstrucao/src/decompiled_01.c:1530
reconstrucao/src/decompiled_01.c:1530:22: error: ‘DAT_140e27df0’ undeclared (first use in this function)

    1527:   if (param_1 == '\0') {
    1528:     DAT_140e27f44 = DAT_140e27f44 + -1;
    1529:     if (DAT_140e27f44 != 0) goto LAB_140201e85;
    1530:     FUN_14049fa04(1,&DAT_140e27df0,&DAT_140e27df8);
    1531:     uVar2 = 1;
    1532:   }
    1533:   else {

## FUN_140201e00 */ — reconstrucao/src/decompiled_01.c:1530
reconstrucao/src/decompiled_01.c:1530:37: error: ‘DAT_140e27df8’ undeclared (first use in this function)

    1527:   if (param_1 == '\0') {
    1528:     DAT_140e27f44 = DAT_140e27f44 + -1;
    1529:     if (DAT_140e27f44 != 0) goto LAB_140201e85;
    1530:     FUN_14049fa04(1,&DAT_140e27df0,&DAT_140e27df8);
    1531:     uVar2 = 1;
    1532:   }
    1533:   else {

## FUN_140201e00 */ — reconstrucao/src/decompiled_01.c:1539
reconstrucao/src/decompiled_01.c:1539:24: error: ‘DAT_140e27e00’ undeclared (first use in this function)

    1536:     FUN_14049fa04(0,&DAT_140e27df0,&DAT_140e27df8);
    1537:     uVar2 = 0;
    1538:   }
    1539:   FUN_14049f910(uVar2,&DAT_140e27e00,&DAT_140e27e08,&DAT_140e27e10);
    1540: LAB_140201e85:
    1541:   FUN_140200dcc(DAT_140e27f44);
    1542:   KeReleaseSpinLock(&DAT_140e27f48,uVar1);

## FUN_140201e00 */ — reconstrucao/src/decompiled_01.c:1539
reconstrucao/src/decompiled_01.c:1539:39: error: ‘DAT_140e27e08’ undeclared (first use in this function); did you mean ‘FUN_140827e08’?

    1536:     FUN_14049fa04(0,&DAT_140e27df0,&DAT_140e27df8);
    1537:     uVar2 = 0;
    1538:   }
    1539:   FUN_14049f910(uVar2,&DAT_140e27e00,&DAT_140e27e08,&DAT_140e27e10);
    1540: LAB_140201e85:
    1541:   FUN_140200dcc(DAT_140e27f44);
    1542:   KeReleaseSpinLock(&DAT_140e27f48,uVar1);

## FUN_140201e00 */ — reconstrucao/src/decompiled_01.c:1539
reconstrucao/src/decompiled_01.c:1539:54: error: ‘DAT_140e27e10’ undeclared (first use in this function)

    1536:     FUN_14049fa04(0,&DAT_140e27df0,&DAT_140e27df8);
    1537:     uVar2 = 0;
    1538:   }
    1539:   FUN_14049f910(uVar2,&DAT_140e27e00,&DAT_140e27e08,&DAT_140e27e10);
    1540: LAB_140201e85:
    1541:   FUN_140200dcc(DAT_140e27f44);
    1542:   KeReleaseSpinLock(&DAT_140e27f48,uVar1);

## FUN_140201ec0 */ — reconstrucao/src/decompiled_01.c:1564
reconstrucao/src/decompiled_01.c:1564:15: error: ‘DAT_140e0a740’ undeclared (first use in this function)

    1561:   undefined1 auStack_120 [264];
    1562:   ulonglong uStack_18;
    1563:   
    1564:   uStack_18 = DAT_140e0a740 ^ (ulonglong)auStack_158;
    1565:   acStack_138[0] = '\0';
    1566:   FUN_1406d1200(auStack_120,0,0x100);
    1567:   puVar1 = DAT_140fc7ad0;

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:156
reconstrucao/src/decompiled_02.c:156:10: error: request for member ‘_8_8_’ in something not a structure or union

    153:   ulonglong uVar86;
    154:   
    155:   uVar1 = *param_2;
    156:   auVar16._8_8_ = 0;
    157:   auVar16._0_8_ = uVar1;
    158:   auVar48._8_8_ = 0;
    159:   auVar48._0_8_ = *param_3;

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:157
reconstrucao/src/decompiled_02.c:157:10: error: request for member ‘_0_8_’ in something not a structure or union

    154:   
    155:   uVar1 = *param_2;
    156:   auVar16._8_8_ = 0;
    157:   auVar16._0_8_ = uVar1;
    158:   auVar48._8_8_ = 0;
    159:   auVar48._0_8_ = *param_3;
    160:   uVar4 = SUB168(auVar16 * auVar48,0);

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:158
reconstrucao/src/decompiled_02.c:158:10: error: request for member ‘_8_8_’ in something not a structure or union

    155:   uVar1 = *param_2;
    156:   auVar16._8_8_ = 0;
    157:   auVar16._0_8_ = uVar1;
    158:   auVar48._8_8_ = 0;
    159:   auVar48._0_8_ = *param_3;
    160:   uVar4 = SUB168(auVar16 * auVar48,0);
    161:   uVar83 = SUB168(auVar16 * auVar48,8);

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:159
reconstrucao/src/decompiled_02.c:159:10: error: request for member ‘_0_8_’ in something not a structure or union

    156:   auVar16._8_8_ = 0;
    157:   auVar16._0_8_ = uVar1;
    158:   auVar48._8_8_ = 0;
    159:   auVar48._0_8_ = *param_3;
    160:   uVar4 = SUB168(auVar16 * auVar48,0);
    161:   uVar83 = SUB168(auVar16 * auVar48,8);
    162:   auVar17._8_8_ = 0;

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:160
reconstrucao/src/decompiled_02.c:160:11: error: implicit declaration of function ‘SUB168’ [-Wimplicit-function-declaration]

    157:   auVar16._0_8_ = uVar1;
    158:   auVar48._8_8_ = 0;
    159:   auVar48._0_8_ = *param_3;
    160:   uVar4 = SUB168(auVar16 * auVar48,0);
    161:   uVar83 = SUB168(auVar16 * auVar48,8);
    162:   auVar17._8_8_ = 0;
    163:   auVar17._0_8_ = uVar1;

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:160
reconstrucao/src/decompiled_02.c:160:26: error: invalid operands to binary * (have ‘undefined1 *’ {aka ‘unsigned char *’} and ‘undefined1 *’ {aka ‘unsigned char *’})

    157:   auVar16._0_8_ = uVar1;
    158:   auVar48._8_8_ = 0;
    159:   auVar48._0_8_ = *param_3;
    160:   uVar4 = SUB168(auVar16 * auVar48,0);
    161:   uVar83 = SUB168(auVar16 * auVar48,8);
    162:   auVar17._8_8_ = 0;
    163:   auVar17._0_8_ = uVar1;

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:161
reconstrucao/src/decompiled_02.c:161:27: error: invalid operands to binary * (have ‘undefined1 *’ {aka ‘unsigned char *’} and ‘undefined1 *’ {aka ‘unsigned char *’})

    158:   auVar48._8_8_ = 0;
    159:   auVar48._0_8_ = *param_3;
    160:   uVar4 = SUB168(auVar16 * auVar48,0);
    161:   uVar83 = SUB168(auVar16 * auVar48,8);
    162:   auVar17._8_8_ = 0;
    163:   auVar17._0_8_ = uVar1;
    164:   auVar49._8_8_ = 0;

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:162
reconstrucao/src/decompiled_02.c:162:10: error: request for member ‘_8_8_’ in something not a structure or union

    159:   auVar48._0_8_ = *param_3;
    160:   uVar4 = SUB168(auVar16 * auVar48,0);
    161:   uVar83 = SUB168(auVar16 * auVar48,8);
    162:   auVar17._8_8_ = 0;
    163:   auVar17._0_8_ = uVar1;
    164:   auVar49._8_8_ = 0;
    165:   auVar49._0_8_ = param_3[1];

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:163
reconstrucao/src/decompiled_02.c:163:10: error: request for member ‘_0_8_’ in something not a structure or union

    160:   uVar4 = SUB168(auVar16 * auVar48,0);
    161:   uVar83 = SUB168(auVar16 * auVar48,8);
    162:   auVar17._8_8_ = 0;
    163:   auVar17._0_8_ = uVar1;
    164:   auVar49._8_8_ = 0;
    165:   auVar49._0_8_ = param_3[1];
    166:   uVar7 = SUB168(auVar17 * auVar49,0);

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:164
reconstrucao/src/decompiled_02.c:164:10: error: request for member ‘_8_8_’ in something not a structure or union

    161:   uVar83 = SUB168(auVar16 * auVar48,8);
    162:   auVar17._8_8_ = 0;
    163:   auVar17._0_8_ = uVar1;
    164:   auVar49._8_8_ = 0;
    165:   auVar49._0_8_ = param_3[1];
    166:   uVar7 = SUB168(auVar17 * auVar49,0);
    167:   uVar82 = SUB168(auVar17 * auVar49,8);

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:165
reconstrucao/src/decompiled_02.c:165:10: error: request for member ‘_0_8_’ in something not a structure or union

    162:   auVar17._8_8_ = 0;
    163:   auVar17._0_8_ = uVar1;
    164:   auVar49._8_8_ = 0;
    165:   auVar49._0_8_ = param_3[1];
    166:   uVar7 = SUB168(auVar17 * auVar49,0);
    167:   uVar82 = SUB168(auVar17 * auVar49,8);
    168:   auVar18._8_8_ = 0;

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:166
reconstrucao/src/decompiled_02.c:166:26: error: invalid operands to binary * (have ‘undefined1 *’ {aka ‘unsigned char *’} and ‘undefined1 *’ {aka ‘unsigned char *’})

    163:   auVar17._0_8_ = uVar1;
    164:   auVar49._8_8_ = 0;
    165:   auVar49._0_8_ = param_3[1];
    166:   uVar7 = SUB168(auVar17 * auVar49,0);
    167:   uVar82 = SUB168(auVar17 * auVar49,8);
    168:   auVar18._8_8_ = 0;
    169:   auVar18._0_8_ = uVar1;

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:167
reconstrucao/src/decompiled_02.c:167:27: error: invalid operands to binary * (have ‘undefined1 *’ {aka ‘unsigned char *’} and ‘undefined1 *’ {aka ‘unsigned char *’})

    164:   auVar49._8_8_ = 0;
    165:   auVar49._0_8_ = param_3[1];
    166:   uVar7 = SUB168(auVar17 * auVar49,0);
    167:   uVar82 = SUB168(auVar17 * auVar49,8);
    168:   auVar18._8_8_ = 0;
    169:   auVar18._0_8_ = uVar1;
    170:   auVar50._8_8_ = 0;

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:168
reconstrucao/src/decompiled_02.c:168:10: error: request for member ‘_8_8_’ in something not a structure or union

    165:   auVar49._0_8_ = param_3[1];
    166:   uVar7 = SUB168(auVar17 * auVar49,0);
    167:   uVar82 = SUB168(auVar17 * auVar49,8);
    168:   auVar18._8_8_ = 0;
    169:   auVar18._0_8_ = uVar1;
    170:   auVar50._8_8_ = 0;
    171:   auVar50._0_8_ = param_3[2];

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:169
reconstrucao/src/decompiled_02.c:169:10: error: request for member ‘_0_8_’ in something not a structure or union

    166:   uVar7 = SUB168(auVar17 * auVar49,0);
    167:   uVar82 = SUB168(auVar17 * auVar49,8);
    168:   auVar18._8_8_ = 0;
    169:   auVar18._0_8_ = uVar1;
    170:   auVar50._8_8_ = 0;
    171:   auVar50._0_8_ = param_3[2];
    172:   uVar2 = SUB168(auVar18 * auVar50,0);

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:170
reconstrucao/src/decompiled_02.c:170:10: error: request for member ‘_8_8_’ in something not a structure or union

    167:   uVar82 = SUB168(auVar17 * auVar49,8);
    168:   auVar18._8_8_ = 0;
    169:   auVar18._0_8_ = uVar1;
    170:   auVar50._8_8_ = 0;
    171:   auVar50._0_8_ = param_3[2];
    172:   uVar2 = SUB168(auVar18 * auVar50,0);
    173:   uVar81 = SUB168(auVar18 * auVar50,8);

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:171
reconstrucao/src/decompiled_02.c:171:10: error: request for member ‘_0_8_’ in something not a structure or union

    168:   auVar18._8_8_ = 0;
    169:   auVar18._0_8_ = uVar1;
    170:   auVar50._8_8_ = 0;
    171:   auVar50._0_8_ = param_3[2];
    172:   uVar2 = SUB168(auVar18 * auVar50,0);
    173:   uVar81 = SUB168(auVar18 * auVar50,8);
    174:   uVar86 = (ulonglong)CARRY8(uVar83,uVar7);

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:172
reconstrucao/src/decompiled_02.c:172:26: error: invalid operands to binary * (have ‘undefined1 *’ {aka ‘unsigned char *’} and ‘undefined1 *’ {aka ‘unsigned char *’})

    169:   auVar18._0_8_ = uVar1;
    170:   auVar50._8_8_ = 0;
    171:   auVar50._0_8_ = param_3[2];
    172:   uVar2 = SUB168(auVar18 * auVar50,0);
    173:   uVar81 = SUB168(auVar18 * auVar50,8);
    174:   uVar86 = (ulonglong)CARRY8(uVar83,uVar7);
    175:   uVar3 = uVar82 + uVar2;

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:173
reconstrucao/src/decompiled_02.c:173:27: error: invalid operands to binary * (have ‘undefined1 *’ {aka ‘unsigned char *’} and ‘undefined1 *’ {aka ‘unsigned char *’})

    170:   auVar50._8_8_ = 0;
    171:   auVar50._0_8_ = param_3[2];
    172:   uVar2 = SUB168(auVar18 * auVar50,0);
    173:   uVar81 = SUB168(auVar18 * auVar50,8);
    174:   uVar86 = (ulonglong)CARRY8(uVar83,uVar7);
    175:   uVar3 = uVar82 + uVar2;
    176:   auVar19._8_8_ = 0;

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:174
reconstrucao/src/decompiled_02.c:174:23: error: implicit declaration of function ‘CARRY8’ [-Wimplicit-function-declaration]

    171:   auVar50._0_8_ = param_3[2];
    172:   uVar2 = SUB168(auVar18 * auVar50,0);
    173:   uVar81 = SUB168(auVar18 * auVar50,8);
    174:   uVar86 = (ulonglong)CARRY8(uVar83,uVar7);
    175:   uVar3 = uVar82 + uVar2;
    176:   auVar19._8_8_ = 0;
    177:   auVar19._0_8_ = uVar1;

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:176
reconstrucao/src/decompiled_02.c:176:10: error: request for member ‘_8_8_’ in something not a structure or union

    173:   uVar81 = SUB168(auVar18 * auVar50,8);
    174:   uVar86 = (ulonglong)CARRY8(uVar83,uVar7);
    175:   uVar3 = uVar82 + uVar2;
    176:   auVar19._8_8_ = 0;
    177:   auVar19._0_8_ = uVar1;
    178:   auVar51._8_8_ = 0;
    179:   auVar51._0_8_ = param_3[3];

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:177
reconstrucao/src/decompiled_02.c:177:10: error: request for member ‘_0_8_’ in something not a structure or union

    174:   uVar86 = (ulonglong)CARRY8(uVar83,uVar7);
    175:   uVar3 = uVar82 + uVar2;
    176:   auVar19._8_8_ = 0;
    177:   auVar19._0_8_ = uVar1;
    178:   auVar51._8_8_ = 0;
    179:   auVar51._0_8_ = param_3[3];
    180:   uVar5 = SUB168(auVar19 * auVar51,0);

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:178
reconstrucao/src/decompiled_02.c:178:10: error: request for member ‘_8_8_’ in something not a structure or union

    175:   uVar3 = uVar82 + uVar2;
    176:   auVar19._8_8_ = 0;
    177:   auVar19._0_8_ = uVar1;
    178:   auVar51._8_8_ = 0;
    179:   auVar51._0_8_ = param_3[3];
    180:   uVar5 = SUB168(auVar19 * auVar51,0);
    181:   uVar2 = (ulonglong)(CARRY8(uVar82,uVar2) || CARRY8(uVar3,uVar86));

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:179
reconstrucao/src/decompiled_02.c:179:10: error: request for member ‘_0_8_’ in something not a structure or union

    176:   auVar19._8_8_ = 0;
    177:   auVar19._0_8_ = uVar1;
    178:   auVar51._8_8_ = 0;
    179:   auVar51._0_8_ = param_3[3];
    180:   uVar5 = SUB168(auVar19 * auVar51,0);
    181:   uVar2 = (ulonglong)(CARRY8(uVar82,uVar2) || CARRY8(uVar3,uVar86));
    182:   uVar82 = uVar81 + uVar5;

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:180
reconstrucao/src/decompiled_02.c:180:26: error: invalid operands to binary * (have ‘undefined1 *’ {aka ‘unsigned char *’} and ‘undefined1 *’ {aka ‘unsigned char *’})

    177:   auVar19._0_8_ = uVar1;
    178:   auVar51._8_8_ = 0;
    179:   auVar51._0_8_ = param_3[3];
    180:   uVar5 = SUB168(auVar19 * auVar51,0);
    181:   uVar2 = (ulonglong)(CARRY8(uVar82,uVar2) || CARRY8(uVar3,uVar86));
    182:   uVar82 = uVar81 + uVar5;
    183:   uVar85 = uVar4 * *(longlong *)(param_1 + 0x18);

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:186
reconstrucao/src/decompiled_02.c:186:10: error: request for member ‘_8_8_’ in something not a structure or union

    183:   uVar85 = uVar4 * *(longlong *)(param_1 + 0x18);
    184:   puVar80 = (ulonglong *)(param_1 + 0x80);
    185:   uVar1 = param_2[1];
    186:   auVar20._8_8_ = 0;
    187:   auVar20._0_8_ = uVar1;
    188:   auVar52._8_8_ = 0;
    189:   auVar52._0_8_ = *param_3;

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:187
reconstrucao/src/decompiled_02.c:187:10: error: request for member ‘_0_8_’ in something not a structure or union

    184:   puVar80 = (ulonglong *)(param_1 + 0x80);
    185:   uVar1 = param_2[1];
    186:   auVar20._8_8_ = 0;
    187:   auVar20._0_8_ = uVar1;
    188:   auVar52._8_8_ = 0;
    189:   auVar52._0_8_ = *param_3;
    190:   Var10 = (unkuint9)(uVar83 + uVar7) + (unkuint9)SUB168(auVar20 * auVar52,0);

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:188
reconstrucao/src/decompiled_02.c:188:10: error: request for member ‘_8_8_’ in something not a structure or union

    185:   uVar1 = param_2[1];
    186:   auVar20._8_8_ = 0;
    187:   auVar20._0_8_ = uVar1;
    188:   auVar52._8_8_ = 0;
    189:   auVar52._0_8_ = *param_3;
    190:   Var10 = (unkuint9)(uVar83 + uVar7) + (unkuint9)SUB168(auVar20 * auVar52,0);
    191:   Var6 = (unkuint9)(uVar3 + uVar86) + (unkuint9)SUB168(auVar20 * auVar52,8);

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:189
reconstrucao/src/decompiled_02.c:189:10: error: request for member ‘_0_8_’ in something not a structure or union

    186:   auVar20._8_8_ = 0;
    187:   auVar20._0_8_ = uVar1;
    188:   auVar52._8_8_ = 0;
    189:   auVar52._0_8_ = *param_3;
    190:   Var10 = (unkuint9)(uVar83 + uVar7) + (unkuint9)SUB168(auVar20 * auVar52,0);
    191:   Var6 = (unkuint9)(uVar3 + uVar86) + (unkuint9)SUB168(auVar20 * auVar52,8);
    192:   auVar21._8_8_ = 0;

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:190
reconstrucao/src/decompiled_02.c:190:65: error: invalid operands to binary * (have ‘undefined1 *’ {aka ‘unsigned char *’} and ‘undefined1 *’ {aka ‘unsigned char *’})

    187:   auVar20._0_8_ = uVar1;
    188:   auVar52._8_8_ = 0;
    189:   auVar52._0_8_ = *param_3;
    190:   Var10 = (unkuint9)(uVar83 + uVar7) + (unkuint9)SUB168(auVar20 * auVar52,0);
    191:   Var6 = (unkuint9)(uVar3 + uVar86) + (unkuint9)SUB168(auVar20 * auVar52,8);
    192:   auVar21._8_8_ = 0;
    193:   auVar21._0_8_ = uVar1;

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:191
reconstrucao/src/decompiled_02.c:191:64: error: invalid operands to binary * (have ‘undefined1 *’ {aka ‘unsigned char *’} and ‘undefined1 *’ {aka ‘unsigned char *’})

    188:   auVar52._8_8_ = 0;
    189:   auVar52._0_8_ = *param_3;
    190:   Var10 = (unkuint9)(uVar83 + uVar7) + (unkuint9)SUB168(auVar20 * auVar52,0);
    191:   Var6 = (unkuint9)(uVar3 + uVar86) + (unkuint9)SUB168(auVar20 * auVar52,8);
    192:   auVar21._8_8_ = 0;
    193:   auVar21._0_8_ = uVar1;
    194:   auVar53._8_8_ = 0;

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:192
reconstrucao/src/decompiled_02.c:192:10: error: request for member ‘_8_8_’ in something not a structure or union

    189:   auVar52._0_8_ = *param_3;
    190:   Var10 = (unkuint9)(uVar83 + uVar7) + (unkuint9)SUB168(auVar20 * auVar52,0);
    191:   Var6 = (unkuint9)(uVar3 + uVar86) + (unkuint9)SUB168(auVar20 * auVar52,8);
    192:   auVar21._8_8_ = 0;
    193:   auVar21._0_8_ = uVar1;
    194:   auVar53._8_8_ = 0;
    195:   auVar53._0_8_ = param_3[1];

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:193
reconstrucao/src/decompiled_02.c:193:10: error: request for member ‘_0_8_’ in something not a structure or union

    190:   Var10 = (unkuint9)(uVar83 + uVar7) + (unkuint9)SUB168(auVar20 * auVar52,0);
    191:   Var6 = (unkuint9)(uVar3 + uVar86) + (unkuint9)SUB168(auVar20 * auVar52,8);
    192:   auVar21._8_8_ = 0;
    193:   auVar21._0_8_ = uVar1;
    194:   auVar53._8_8_ = 0;
    195:   auVar53._0_8_ = param_3[1];
    196:   Var12 = (unkuint9)(ulonglong)Var6 + (unkuint9)SUB168(auVar21 * auVar53,0) +

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:194
reconstrucao/src/decompiled_02.c:194:10: error: request for member ‘_8_8_’ in something not a structure or union

    191:   Var6 = (unkuint9)(uVar3 + uVar86) + (unkuint9)SUB168(auVar20 * auVar52,8);
    192:   auVar21._8_8_ = 0;
    193:   auVar21._0_8_ = uVar1;
    194:   auVar53._8_8_ = 0;
    195:   auVar53._0_8_ = param_3[1];
    196:   Var12 = (unkuint9)(ulonglong)Var6 + (unkuint9)SUB168(auVar21 * auVar53,0) +
    197:           (unkuint9)((char)((unkuint9)Var10 >> 0x40) != '\0');

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:195
reconstrucao/src/decompiled_02.c:195:10: error: request for member ‘_0_8_’ in something not a structure or union

    192:   auVar21._8_8_ = 0;
    193:   auVar21._0_8_ = uVar1;
    194:   auVar53._8_8_ = 0;
    195:   auVar53._0_8_ = param_3[1];
    196:   Var12 = (unkuint9)(ulonglong)Var6 + (unkuint9)SUB168(auVar21 * auVar53,0) +
    197:           (unkuint9)((char)((unkuint9)Var10 >> 0x40) != '\0');
    198:   Var6 = (unkuint9)(uVar82 + uVar2) + (unkuint9)SUB168(auVar21 * auVar53,8) +

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:196
reconstrucao/src/decompiled_02.c:196:64: error: invalid operands to binary * (have ‘undefined1 *’ {aka ‘unsigned char *’} and ‘undefined1 *’ {aka ‘unsigned char *’})

    193:   auVar21._0_8_ = uVar1;
    194:   auVar53._8_8_ = 0;
    195:   auVar53._0_8_ = param_3[1];
    196:   Var12 = (unkuint9)(ulonglong)Var6 + (unkuint9)SUB168(auVar21 * auVar53,0) +
    197:           (unkuint9)((char)((unkuint9)Var10 >> 0x40) != '\0');
    198:   Var6 = (unkuint9)(uVar82 + uVar2) + (unkuint9)SUB168(auVar21 * auVar53,8) +
    199:          (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:198
reconstrucao/src/decompiled_02.c:198:64: error: invalid operands to binary * (have ‘undefined1 *’ {aka ‘unsigned char *’} and ‘undefined1 *’ {aka ‘unsigned char *’})

    195:   auVar53._0_8_ = param_3[1];
    196:   Var12 = (unkuint9)(ulonglong)Var6 + (unkuint9)SUB168(auVar21 * auVar53,0) +
    197:           (unkuint9)((char)((unkuint9)Var10 >> 0x40) != '\0');
    198:   Var6 = (unkuint9)(uVar82 + uVar2) + (unkuint9)SUB168(auVar21 * auVar53,8) +
    199:          (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
    200:   auVar22._8_8_ = 0;
    201:   auVar22._0_8_ = uVar1;

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:200
reconstrucao/src/decompiled_02.c:200:10: error: request for member ‘_8_8_’ in something not a structure or union

    197:           (unkuint9)((char)((unkuint9)Var10 >> 0x40) != '\0');
    198:   Var6 = (unkuint9)(uVar82 + uVar2) + (unkuint9)SUB168(auVar21 * auVar53,8) +
    199:          (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
    200:   auVar22._8_8_ = 0;
    201:   auVar22._0_8_ = uVar1;
    202:   auVar54._8_8_ = 0;
    203:   auVar54._0_8_ = param_3[2];

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:201
reconstrucao/src/decompiled_02.c:201:10: error: request for member ‘_0_8_’ in something not a structure or union

    198:   Var6 = (unkuint9)(uVar82 + uVar2) + (unkuint9)SUB168(auVar21 * auVar53,8) +
    199:          (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
    200:   auVar22._8_8_ = 0;
    201:   auVar22._0_8_ = uVar1;
    202:   auVar54._8_8_ = 0;
    203:   auVar54._0_8_ = param_3[2];
    204:   Var13 = (unkuint9)(ulonglong)Var6 + (unkuint9)SUB168(auVar22 * auVar54,0) +

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:202
reconstrucao/src/decompiled_02.c:202:10: error: request for member ‘_8_8_’ in something not a structure or union

    199:          (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
    200:   auVar22._8_8_ = 0;
    201:   auVar22._0_8_ = uVar1;
    202:   auVar54._8_8_ = 0;
    203:   auVar54._0_8_ = param_3[2];
    204:   Var13 = (unkuint9)(ulonglong)Var6 + (unkuint9)SUB168(auVar22 * auVar54,0) +
    205:           (unkuint9)((char)((unkuint9)Var12 >> 0x40) != '\0');

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:203
reconstrucao/src/decompiled_02.c:203:10: error: request for member ‘_0_8_’ in something not a structure or union

    200:   auVar22._8_8_ = 0;
    201:   auVar22._0_8_ = uVar1;
    202:   auVar54._8_8_ = 0;
    203:   auVar54._0_8_ = param_3[2];
    204:   Var13 = (unkuint9)(ulonglong)Var6 + (unkuint9)SUB168(auVar22 * auVar54,0) +
    205:           (unkuint9)((char)((unkuint9)Var12 >> 0x40) != '\0');
    206:   Var6 = (unkuint9)

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:204
reconstrucao/src/decompiled_02.c:204:64: error: invalid operands to binary * (have ‘undefined1 *’ {aka ‘unsigned char *’} and ‘undefined1 *’ {aka ‘unsigned char *’})

    201:   auVar22._0_8_ = uVar1;
    202:   auVar54._8_8_ = 0;
    203:   auVar54._0_8_ = param_3[2];
    204:   Var13 = (unkuint9)(ulonglong)Var6 + (unkuint9)SUB168(auVar22 * auVar54,0) +
    205:           (unkuint9)((char)((unkuint9)Var12 >> 0x40) != '\0');
    206:   Var6 = (unkuint9)
    207:          (SUB168(auVar19 * auVar51,8) + (ulonglong)(CARRY8(uVar81,uVar5) || CARRY8(uVar82,uVar2))) +

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:207
reconstrucao/src/decompiled_02.c:207:26: error: invalid operands to binary * (have ‘undefined1 *’ {aka ‘unsigned char *’} and ‘undefined1 *’ {aka ‘unsigned char *’})

    204:   Var13 = (unkuint9)(ulonglong)Var6 + (unkuint9)SUB168(auVar22 * auVar54,0) +
    205:           (unkuint9)((char)((unkuint9)Var12 >> 0x40) != '\0');
    206:   Var6 = (unkuint9)
    207:          (SUB168(auVar19 * auVar51,8) + (ulonglong)(CARRY8(uVar81,uVar5) || CARRY8(uVar82,uVar2))) +
    208:          (unkuint9)SUB168(auVar22 * auVar54,8) + (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
    209:   auVar23._8_8_ = 0;
    210:   auVar23._0_8_ = uVar1;

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:208
reconstrucao/src/decompiled_02.c:208:35: error: invalid operands to binary * (have ‘undefined1 *’ {aka ‘unsigned char *’} and ‘undefined1 *’ {aka ‘unsigned char *’})

    205:           (unkuint9)((char)((unkuint9)Var12 >> 0x40) != '\0');
    206:   Var6 = (unkuint9)
    207:          (SUB168(auVar19 * auVar51,8) + (ulonglong)(CARRY8(uVar81,uVar5) || CARRY8(uVar82,uVar2))) +
    208:          (unkuint9)SUB168(auVar22 * auVar54,8) + (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
    209:   auVar23._8_8_ = 0;
    210:   auVar23._0_8_ = uVar1;
    211:   auVar55._8_8_ = 0;

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:209
reconstrucao/src/decompiled_02.c:209:10: error: request for member ‘_8_8_’ in something not a structure or union

    206:   Var6 = (unkuint9)
    207:          (SUB168(auVar19 * auVar51,8) + (ulonglong)(CARRY8(uVar81,uVar5) || CARRY8(uVar82,uVar2))) +
    208:          (unkuint9)SUB168(auVar22 * auVar54,8) + (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
    209:   auVar23._8_8_ = 0;
    210:   auVar23._0_8_ = uVar1;
    211:   auVar55._8_8_ = 0;
    212:   auVar55._0_8_ = param_3[3];

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:210
reconstrucao/src/decompiled_02.c:210:10: error: request for member ‘_0_8_’ in something not a structure or union

    207:          (SUB168(auVar19 * auVar51,8) + (ulonglong)(CARRY8(uVar81,uVar5) || CARRY8(uVar82,uVar2))) +
    208:          (unkuint9)SUB168(auVar22 * auVar54,8) + (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
    209:   auVar23._8_8_ = 0;
    210:   auVar23._0_8_ = uVar1;
    211:   auVar55._8_8_ = 0;
    212:   auVar55._0_8_ = param_3[3];
    213:   Var14 = (unkuint9)(ulonglong)Var6 + (unkuint9)SUB168(auVar23 * auVar55,0) +

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:211
reconstrucao/src/decompiled_02.c:211:10: error: request for member ‘_8_8_’ in something not a structure or union

    208:          (unkuint9)SUB168(auVar22 * auVar54,8) + (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
    209:   auVar23._8_8_ = 0;
    210:   auVar23._0_8_ = uVar1;
    211:   auVar55._8_8_ = 0;
    212:   auVar55._0_8_ = param_3[3];
    213:   Var14 = (unkuint9)(ulonglong)Var6 + (unkuint9)SUB168(auVar23 * auVar55,0) +
    214:           (unkuint9)((char)((unkuint9)Var13 >> 0x40) != '\0');

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:212
reconstrucao/src/decompiled_02.c:212:10: error: request for member ‘_0_8_’ in something not a structure or union

    209:   auVar23._8_8_ = 0;
    210:   auVar23._0_8_ = uVar1;
    211:   auVar55._8_8_ = 0;
    212:   auVar55._0_8_ = param_3[3];
    213:   Var14 = (unkuint9)(ulonglong)Var6 + (unkuint9)SUB168(auVar23 * auVar55,0) +
    214:           (unkuint9)((char)((unkuint9)Var13 >> 0x40) != '\0');
    215:   uVar3 = SUB168(auVar23 * auVar55,8) + (ulonglong)((char)((unkuint9)Var6 >> 0x40) != '\0');

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:213
reconstrucao/src/decompiled_02.c:213:64: error: invalid operands to binary * (have ‘undefined1 *’ {aka ‘unsigned char *’} and ‘undefined1 *’ {aka ‘unsigned char *’})

    210:   auVar23._0_8_ = uVar1;
    211:   auVar55._8_8_ = 0;
    212:   auVar55._0_8_ = param_3[3];
    213:   Var14 = (unkuint9)(ulonglong)Var6 + (unkuint9)SUB168(auVar23 * auVar55,0) +
    214:           (unkuint9)((char)((unkuint9)Var13 >> 0x40) != '\0');
    215:   uVar3 = SUB168(auVar23 * auVar55,8) + (ulonglong)((char)((unkuint9)Var6 >> 0x40) != '\0');
    216:   auVar24._8_8_ = 0;

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:215
reconstrucao/src/decompiled_02.c:215:26: error: invalid operands to binary * (have ‘undefined1 *’ {aka ‘unsigned char *’} and ‘undefined1 *’ {aka ‘unsigned char *’})

    212:   auVar55._0_8_ = param_3[3];
    213:   Var14 = (unkuint9)(ulonglong)Var6 + (unkuint9)SUB168(auVar23 * auVar55,0) +
    214:           (unkuint9)((char)((unkuint9)Var13 >> 0x40) != '\0');
    215:   uVar3 = SUB168(auVar23 * auVar55,8) + (ulonglong)((char)((unkuint9)Var6 >> 0x40) != '\0');
    216:   auVar24._8_8_ = 0;
    217:   auVar24._0_8_ = uVar85;
    218:   auVar56._8_8_ = 0;

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:216
reconstrucao/src/decompiled_02.c:216:10: error: request for member ‘_8_8_’ in something not a structure or union

    213:   Var14 = (unkuint9)(ulonglong)Var6 + (unkuint9)SUB168(auVar23 * auVar55,0) +
    214:           (unkuint9)((char)((unkuint9)Var13 >> 0x40) != '\0');
    215:   uVar3 = SUB168(auVar23 * auVar55,8) + (ulonglong)((char)((unkuint9)Var6 >> 0x40) != '\0');
    216:   auVar24._8_8_ = 0;
    217:   auVar24._0_8_ = uVar85;
    218:   auVar56._8_8_ = 0;
    219:   auVar56._0_8_ = *puVar80;

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:217
reconstrucao/src/decompiled_02.c:217:10: error: request for member ‘_0_8_’ in something not a structure or union

    214:           (unkuint9)((char)((unkuint9)Var13 >> 0x40) != '\0');
    215:   uVar3 = SUB168(auVar23 * auVar55,8) + (ulonglong)((char)((unkuint9)Var6 >> 0x40) != '\0');
    216:   auVar24._8_8_ = 0;
    217:   auVar24._0_8_ = uVar85;
    218:   auVar56._8_8_ = 0;
    219:   auVar56._0_8_ = *puVar80;
    220:   Var6 = (unkuint9)uVar4 + (unkuint9)SUB168(auVar24 * auVar56,0);

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:218
reconstrucao/src/decompiled_02.c:218:10: error: request for member ‘_8_8_’ in something not a structure or union

    215:   uVar3 = SUB168(auVar23 * auVar55,8) + (ulonglong)((char)((unkuint9)Var6 >> 0x40) != '\0');
    216:   auVar24._8_8_ = 0;
    217:   auVar24._0_8_ = uVar85;
    218:   auVar56._8_8_ = 0;
    219:   auVar56._0_8_ = *puVar80;
    220:   Var6 = (unkuint9)uVar4 + (unkuint9)SUB168(auVar24 * auVar56,0);
    221:   uVar82 = (ulonglong)Var6;

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:219
reconstrucao/src/decompiled_02.c:219:10: error: request for member ‘_0_8_’ in something not a structure or union

    216:   auVar24._8_8_ = 0;
    217:   auVar24._0_8_ = uVar85;
    218:   auVar56._8_8_ = 0;
    219:   auVar56._0_8_ = *puVar80;
    220:   Var6 = (unkuint9)uVar4 + (unkuint9)SUB168(auVar24 * auVar56,0);
    221:   uVar82 = (ulonglong)Var6;
    222:   Var10 = (unkuint9)(ulonglong)Var10 + (unkuint9)SUB168(auVar24 * auVar56,8);

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:220
reconstrucao/src/decompiled_02.c:220:53: error: invalid operands to binary * (have ‘undefined1 *’ {aka ‘unsigned char *’} and ‘undefined1 *’ {aka ‘unsigned char *’})

    217:   auVar24._0_8_ = uVar85;
    218:   auVar56._8_8_ = 0;
    219:   auVar56._0_8_ = *puVar80;
    220:   Var6 = (unkuint9)uVar4 + (unkuint9)SUB168(auVar24 * auVar56,0);
    221:   uVar82 = (ulonglong)Var6;
    222:   Var10 = (unkuint9)(ulonglong)Var10 + (unkuint9)SUB168(auVar24 * auVar56,8);
    223:   auVar25._8_8_ = 0;

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:222
reconstrucao/src/decompiled_02.c:222:65: error: invalid operands to binary * (have ‘undefined1 *’ {aka ‘unsigned char *’} and ‘undefined1 *’ {aka ‘unsigned char *’})

    219:   auVar56._0_8_ = *puVar80;
    220:   Var6 = (unkuint9)uVar4 + (unkuint9)SUB168(auVar24 * auVar56,0);
    221:   uVar82 = (ulonglong)Var6;
    222:   Var10 = (unkuint9)(ulonglong)Var10 + (unkuint9)SUB168(auVar24 * auVar56,8);
    223:   auVar25._8_8_ = 0;
    224:   auVar25._0_8_ = uVar85;
    225:   auVar57._8_8_ = 0;

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:223
reconstrucao/src/decompiled_02.c:223:10: error: request for member ‘_8_8_’ in something not a structure or union

    220:   Var6 = (unkuint9)uVar4 + (unkuint9)SUB168(auVar24 * auVar56,0);
    221:   uVar82 = (ulonglong)Var6;
    222:   Var10 = (unkuint9)(ulonglong)Var10 + (unkuint9)SUB168(auVar24 * auVar56,8);
    223:   auVar25._8_8_ = 0;
    224:   auVar25._0_8_ = uVar85;
    225:   auVar57._8_8_ = 0;
    226:   auVar57._0_8_ = *(ulonglong *)(param_1 + 0x88);

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:224
reconstrucao/src/decompiled_02.c:224:10: error: request for member ‘_0_8_’ in something not a structure or union

    221:   uVar82 = (ulonglong)Var6;
    222:   Var10 = (unkuint9)(ulonglong)Var10 + (unkuint9)SUB168(auVar24 * auVar56,8);
    223:   auVar25._8_8_ = 0;
    224:   auVar25._0_8_ = uVar85;
    225:   auVar57._8_8_ = 0;
    226:   auVar57._0_8_ = *(ulonglong *)(param_1 + 0x88);
    227:   Var6 = (unkuint9)(ulonglong)Var10 + (unkuint9)SUB168(auVar25 * auVar57,0) +

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:225
reconstrucao/src/decompiled_02.c:225:10: error: request for member ‘_8_8_’ in something not a structure or union

    222:   Var10 = (unkuint9)(ulonglong)Var10 + (unkuint9)SUB168(auVar24 * auVar56,8);
    223:   auVar25._8_8_ = 0;
    224:   auVar25._0_8_ = uVar85;
    225:   auVar57._8_8_ = 0;
    226:   auVar57._0_8_ = *(ulonglong *)(param_1 + 0x88);
    227:   Var6 = (unkuint9)(ulonglong)Var10 + (unkuint9)SUB168(auVar25 * auVar57,0) +
    228:          (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:226
reconstrucao/src/decompiled_02.c:226:10: error: request for member ‘_0_8_’ in something not a structure or union

    223:   auVar25._8_8_ = 0;
    224:   auVar25._0_8_ = uVar85;
    225:   auVar57._8_8_ = 0;
    226:   auVar57._0_8_ = *(ulonglong *)(param_1 + 0x88);
    227:   Var6 = (unkuint9)(ulonglong)Var10 + (unkuint9)SUB168(auVar25 * auVar57,0) +
    228:          (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
    229:   uVar4 = (ulonglong)Var6;

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:227
reconstrucao/src/decompiled_02.c:227:64: error: invalid operands to binary * (have ‘undefined1 *’ {aka ‘unsigned char *’} and ‘undefined1 *’ {aka ‘unsigned char *’})

    224:   auVar25._0_8_ = uVar85;
    225:   auVar57._8_8_ = 0;
    226:   auVar57._0_8_ = *(ulonglong *)(param_1 + 0x88);
    227:   Var6 = (unkuint9)(ulonglong)Var10 + (unkuint9)SUB168(auVar25 * auVar57,0) +
    228:          (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
    229:   uVar4 = (ulonglong)Var6;
    230:   Var10 = (unkuint9)(ulonglong)Var12 + (unkuint9)SUB168(auVar25 * auVar57,8) +

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:230
reconstrucao/src/decompiled_02.c:230:65: error: invalid operands to binary * (have ‘undefined1 *’ {aka ‘unsigned char *’} and ‘undefined1 *’ {aka ‘unsigned char *’})

    227:   Var6 = (unkuint9)(ulonglong)Var10 + (unkuint9)SUB168(auVar25 * auVar57,0) +
    228:          (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
    229:   uVar4 = (ulonglong)Var6;
    230:   Var10 = (unkuint9)(ulonglong)Var12 + (unkuint9)SUB168(auVar25 * auVar57,8) +
    231:           (unkuint9)((char)((unkuint9)Var10 >> 0x40) != '\0');
    232:   auVar26._8_8_ = 0;
    233:   auVar26._0_8_ = uVar85;

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:232
reconstrucao/src/decompiled_02.c:232:10: error: request for member ‘_8_8_’ in something not a structure or union

    229:   uVar4 = (ulonglong)Var6;
    230:   Var10 = (unkuint9)(ulonglong)Var12 + (unkuint9)SUB168(auVar25 * auVar57,8) +
    231:           (unkuint9)((char)((unkuint9)Var10 >> 0x40) != '\0');
    232:   auVar26._8_8_ = 0;
    233:   auVar26._0_8_ = uVar85;
    234:   auVar58._8_8_ = 0;
    235:   auVar58._0_8_ = *(ulonglong *)(param_1 + 0x90);

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:233
reconstrucao/src/decompiled_02.c:233:10: error: request for member ‘_0_8_’ in something not a structure or union

    230:   Var10 = (unkuint9)(ulonglong)Var12 + (unkuint9)SUB168(auVar25 * auVar57,8) +
    231:           (unkuint9)((char)((unkuint9)Var10 >> 0x40) != '\0');
    232:   auVar26._8_8_ = 0;
    233:   auVar26._0_8_ = uVar85;
    234:   auVar58._8_8_ = 0;
    235:   auVar58._0_8_ = *(ulonglong *)(param_1 + 0x90);
    236:   Var6 = (unkuint9)(ulonglong)Var10 + (unkuint9)SUB168(auVar26 * auVar58,0) +

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:234
reconstrucao/src/decompiled_02.c:234:10: error: request for member ‘_8_8_’ in something not a structure or union

    231:           (unkuint9)((char)((unkuint9)Var10 >> 0x40) != '\0');
    232:   auVar26._8_8_ = 0;
    233:   auVar26._0_8_ = uVar85;
    234:   auVar58._8_8_ = 0;
    235:   auVar58._0_8_ = *(ulonglong *)(param_1 + 0x90);
    236:   Var6 = (unkuint9)(ulonglong)Var10 + (unkuint9)SUB168(auVar26 * auVar58,0) +
    237:          (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:235
reconstrucao/src/decompiled_02.c:235:10: error: request for member ‘_0_8_’ in something not a structure or union

    232:   auVar26._8_8_ = 0;
    233:   auVar26._0_8_ = uVar85;
    234:   auVar58._8_8_ = 0;
    235:   auVar58._0_8_ = *(ulonglong *)(param_1 + 0x90);
    236:   Var6 = (unkuint9)(ulonglong)Var10 + (unkuint9)SUB168(auVar26 * auVar58,0) +
    237:          (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
    238:   Var12 = (unkuint9)(ulonglong)Var13 + (unkuint9)SUB168(auVar26 * auVar58,8) +

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:236
reconstrucao/src/decompiled_02.c:236:64: error: invalid operands to binary * (have ‘undefined1 *’ {aka ‘unsigned char *’} and ‘undefined1 *’ {aka ‘unsigned char *’})

    233:   auVar26._0_8_ = uVar85;
    234:   auVar58._8_8_ = 0;
    235:   auVar58._0_8_ = *(ulonglong *)(param_1 + 0x90);
    236:   Var6 = (unkuint9)(ulonglong)Var10 + (unkuint9)SUB168(auVar26 * auVar58,0) +
    237:          (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
    238:   Var12 = (unkuint9)(ulonglong)Var13 + (unkuint9)SUB168(auVar26 * auVar58,8) +
    239:           (unkuint9)((char)((unkuint9)Var10 >> 0x40) != '\0');

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:238
reconstrucao/src/decompiled_02.c:238:65: error: invalid operands to binary * (have ‘undefined1 *’ {aka ‘unsigned char *’} and ‘undefined1 *’ {aka ‘unsigned char *’})

    235:   auVar58._0_8_ = *(ulonglong *)(param_1 + 0x90);
    236:   Var6 = (unkuint9)(ulonglong)Var10 + (unkuint9)SUB168(auVar26 * auVar58,0) +
    237:          (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
    238:   Var12 = (unkuint9)(ulonglong)Var13 + (unkuint9)SUB168(auVar26 * auVar58,8) +
    239:           (unkuint9)((char)((unkuint9)Var10 >> 0x40) != '\0');
    240:   auVar27._8_8_ = 0;
    241:   auVar27._0_8_ = uVar85;

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:240
reconstrucao/src/decompiled_02.c:240:10: error: request for member ‘_8_8_’ in something not a structure or union

    237:          (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
    238:   Var12 = (unkuint9)(ulonglong)Var13 + (unkuint9)SUB168(auVar26 * auVar58,8) +
    239:           (unkuint9)((char)((unkuint9)Var10 >> 0x40) != '\0');
    240:   auVar27._8_8_ = 0;
    241:   auVar27._0_8_ = uVar85;
    242:   auVar59._8_8_ = 0;
    243:   auVar59._0_8_ = *(ulonglong *)(param_1 + 0x98);

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:241
reconstrucao/src/decompiled_02.c:241:10: error: request for member ‘_0_8_’ in something not a structure or union

    238:   Var12 = (unkuint9)(ulonglong)Var13 + (unkuint9)SUB168(auVar26 * auVar58,8) +
    239:           (unkuint9)((char)((unkuint9)Var10 >> 0x40) != '\0');
    240:   auVar27._8_8_ = 0;
    241:   auVar27._0_8_ = uVar85;
    242:   auVar59._8_8_ = 0;
    243:   auVar59._0_8_ = *(ulonglong *)(param_1 + 0x98);
    244:   Var10 = (unkuint9)(ulonglong)Var12 + (unkuint9)SUB168(auVar27 * auVar59,0) +

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:242
reconstrucao/src/decompiled_02.c:242:10: error: request for member ‘_8_8_’ in something not a structure or union

    239:           (unkuint9)((char)((unkuint9)Var10 >> 0x40) != '\0');
    240:   auVar27._8_8_ = 0;
    241:   auVar27._0_8_ = uVar85;
    242:   auVar59._8_8_ = 0;
    243:   auVar59._0_8_ = *(ulonglong *)(param_1 + 0x98);
    244:   Var10 = (unkuint9)(ulonglong)Var12 + (unkuint9)SUB168(auVar27 * auVar59,0) +
    245:           (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:243
reconstrucao/src/decompiled_02.c:243:10: error: request for member ‘_0_8_’ in something not a structure or union

    240:   auVar27._8_8_ = 0;
    241:   auVar27._0_8_ = uVar85;
    242:   auVar59._8_8_ = 0;
    243:   auVar59._0_8_ = *(ulonglong *)(param_1 + 0x98);
    244:   Var10 = (unkuint9)(ulonglong)Var12 + (unkuint9)SUB168(auVar27 * auVar59,0) +
    245:           (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
    246:   Var13 = (unkuint9)(ulonglong)Var14 + (unkuint9)SUB168(auVar27 * auVar59,8) +

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:244
reconstrucao/src/decompiled_02.c:244:65: error: invalid operands to binary * (have ‘undefined1 *’ {aka ‘unsigned char *’} and ‘undefined1 *’ {aka ‘unsigned char *’})

    241:   auVar27._0_8_ = uVar85;
    242:   auVar59._8_8_ = 0;
    243:   auVar59._0_8_ = *(ulonglong *)(param_1 + 0x98);
    244:   Var10 = (unkuint9)(ulonglong)Var12 + (unkuint9)SUB168(auVar27 * auVar59,0) +
    245:           (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
    246:   Var13 = (unkuint9)(ulonglong)Var14 + (unkuint9)SUB168(auVar27 * auVar59,8) +
    247:           (unkuint9)((char)((unkuint9)Var12 >> 0x40) != '\0');

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:246
reconstrucao/src/decompiled_02.c:246:65: error: invalid operands to binary * (have ‘undefined1 *’ {aka ‘unsigned char *’} and ‘undefined1 *’ {aka ‘unsigned char *’})

    243:   auVar59._0_8_ = *(ulonglong *)(param_1 + 0x98);
    244:   Var10 = (unkuint9)(ulonglong)Var12 + (unkuint9)SUB168(auVar27 * auVar59,0) +
    245:           (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
    246:   Var13 = (unkuint9)(ulonglong)Var14 + (unkuint9)SUB168(auVar27 * auVar59,8) +
    247:           (unkuint9)((char)((unkuint9)Var12 >> 0x40) != '\0');
    248:   Var12 = (unkuint9)(ulonglong)Var13 + (unkuint9)uVar82 +
    249:           (unkuint9)((char)((unkuint9)Var10 >> 0x40) != '\0');

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:256
reconstrucao/src/decompiled_02.c:256:10: error: request for member ‘_8_8_’ in something not a structure or union

    253:   uVar2 = uVar81 + uVar3;
    254:   uVar83 = uVar4 * *(longlong *)(param_1 + 0x18);
    255:   uVar1 = param_2[2];
    256:   auVar28._8_8_ = 0;
    257:   auVar28._0_8_ = uVar1;
    258:   auVar60._8_8_ = 0;
    259:   auVar60._0_8_ = *param_3;

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:257
reconstrucao/src/decompiled_02.c:257:10: error: request for member ‘_0_8_’ in something not a structure or union

    254:   uVar83 = uVar4 * *(longlong *)(param_1 + 0x18);
    255:   uVar1 = param_2[2];
    256:   auVar28._8_8_ = 0;
    257:   auVar28._0_8_ = uVar1;
    258:   auVar60._8_8_ = 0;
    259:   auVar60._0_8_ = *param_3;
    260:   Var13 = (unkuint9)(ulonglong)Var6 + (unkuint9)SUB168(auVar28 * auVar60,0);

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:258
reconstrucao/src/decompiled_02.c:258:10: error: request for member ‘_8_8_’ in something not a structure or union

    255:   uVar1 = param_2[2];
    256:   auVar28._8_8_ = 0;
    257:   auVar28._0_8_ = uVar1;
    258:   auVar60._8_8_ = 0;
    259:   auVar60._0_8_ = *param_3;
    260:   Var13 = (unkuint9)(ulonglong)Var6 + (unkuint9)SUB168(auVar28 * auVar60,0);
    261:   Var6 = (unkuint9)(ulonglong)Var10 + (unkuint9)SUB168(auVar28 * auVar60,8);

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:259
reconstrucao/src/decompiled_02.c:259:10: error: request for member ‘_0_8_’ in something not a structure or union

    256:   auVar28._8_8_ = 0;
    257:   auVar28._0_8_ = uVar1;
    258:   auVar60._8_8_ = 0;
    259:   auVar60._0_8_ = *param_3;
    260:   Var13 = (unkuint9)(ulonglong)Var6 + (unkuint9)SUB168(auVar28 * auVar60,0);
    261:   Var6 = (unkuint9)(ulonglong)Var10 + (unkuint9)SUB168(auVar28 * auVar60,8);
    262:   auVar29._8_8_ = 0;

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:260
reconstrucao/src/decompiled_02.c:260:64: error: invalid operands to binary * (have ‘undefined1 *’ {aka ‘unsigned char *’} and ‘undefined1 *’ {aka ‘unsigned char *’})

    257:   auVar28._0_8_ = uVar1;
    258:   auVar60._8_8_ = 0;
    259:   auVar60._0_8_ = *param_3;
    260:   Var13 = (unkuint9)(ulonglong)Var6 + (unkuint9)SUB168(auVar28 * auVar60,0);
    261:   Var6 = (unkuint9)(ulonglong)Var10 + (unkuint9)SUB168(auVar28 * auVar60,8);
    262:   auVar29._8_8_ = 0;
    263:   auVar29._0_8_ = uVar1;

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:261
reconstrucao/src/decompiled_02.c:261:64: error: invalid operands to binary * (have ‘undefined1 *’ {aka ‘unsigned char *’} and ‘undefined1 *’ {aka ‘unsigned char *’})

    258:   auVar60._8_8_ = 0;
    259:   auVar60._0_8_ = *param_3;
    260:   Var13 = (unkuint9)(ulonglong)Var6 + (unkuint9)SUB168(auVar28 * auVar60,0);
    261:   Var6 = (unkuint9)(ulonglong)Var10 + (unkuint9)SUB168(auVar28 * auVar60,8);
    262:   auVar29._8_8_ = 0;
    263:   auVar29._0_8_ = uVar1;
    264:   auVar61._8_8_ = 0;

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:262
reconstrucao/src/decompiled_02.c:262:10: error: request for member ‘_8_8_’ in something not a structure or union

    259:   auVar60._0_8_ = *param_3;
    260:   Var13 = (unkuint9)(ulonglong)Var6 + (unkuint9)SUB168(auVar28 * auVar60,0);
    261:   Var6 = (unkuint9)(ulonglong)Var10 + (unkuint9)SUB168(auVar28 * auVar60,8);
    262:   auVar29._8_8_ = 0;
    263:   auVar29._0_8_ = uVar1;
    264:   auVar61._8_8_ = 0;
    265:   auVar61._0_8_ = param_3[1];

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:263
reconstrucao/src/decompiled_02.c:263:10: error: request for member ‘_0_8_’ in something not a structure or union

    260:   Var13 = (unkuint9)(ulonglong)Var6 + (unkuint9)SUB168(auVar28 * auVar60,0);
    261:   Var6 = (unkuint9)(ulonglong)Var10 + (unkuint9)SUB168(auVar28 * auVar60,8);
    262:   auVar29._8_8_ = 0;
    263:   auVar29._0_8_ = uVar1;
    264:   auVar61._8_8_ = 0;
    265:   auVar61._0_8_ = param_3[1];
    266:   Var14 = (unkuint9)(ulonglong)Var6 + (unkuint9)SUB168(auVar29 * auVar61,0) +

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:264
reconstrucao/src/decompiled_02.c:264:10: error: request for member ‘_8_8_’ in something not a structure or union

    261:   Var6 = (unkuint9)(ulonglong)Var10 + (unkuint9)SUB168(auVar28 * auVar60,8);
    262:   auVar29._8_8_ = 0;
    263:   auVar29._0_8_ = uVar1;
    264:   auVar61._8_8_ = 0;
    265:   auVar61._0_8_ = param_3[1];
    266:   Var14 = (unkuint9)(ulonglong)Var6 + (unkuint9)SUB168(auVar29 * auVar61,0) +
    267:           (unkuint9)((char)((unkuint9)Var13 >> 0x40) != '\0');

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:265
reconstrucao/src/decompiled_02.c:265:10: error: request for member ‘_0_8_’ in something not a structure or union

    262:   auVar29._8_8_ = 0;
    263:   auVar29._0_8_ = uVar1;
    264:   auVar61._8_8_ = 0;
    265:   auVar61._0_8_ = param_3[1];
    266:   Var14 = (unkuint9)(ulonglong)Var6 + (unkuint9)SUB168(auVar29 * auVar61,0) +
    267:           (unkuint9)((char)((unkuint9)Var13 >> 0x40) != '\0');
    268:   Var6 = (unkuint9)(ulonglong)Var12 + (unkuint9)SUB168(auVar29 * auVar61,8) +

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:266
reconstrucao/src/decompiled_02.c:266:64: error: invalid operands to binary * (have ‘undefined1 *’ {aka ‘unsigned char *’} and ‘undefined1 *’ {aka ‘unsigned char *’})

    263:   auVar29._0_8_ = uVar1;
    264:   auVar61._8_8_ = 0;
    265:   auVar61._0_8_ = param_3[1];
    266:   Var14 = (unkuint9)(ulonglong)Var6 + (unkuint9)SUB168(auVar29 * auVar61,0) +
    267:           (unkuint9)((char)((unkuint9)Var13 >> 0x40) != '\0');
    268:   Var6 = (unkuint9)(ulonglong)Var12 + (unkuint9)SUB168(auVar29 * auVar61,8) +
    269:          (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:268
reconstrucao/src/decompiled_02.c:268:64: error: invalid operands to binary * (have ‘undefined1 *’ {aka ‘unsigned char *’} and ‘undefined1 *’ {aka ‘unsigned char *’})

    265:   auVar61._0_8_ = param_3[1];
    266:   Var14 = (unkuint9)(ulonglong)Var6 + (unkuint9)SUB168(auVar29 * auVar61,0) +
    267:           (unkuint9)((char)((unkuint9)Var13 >> 0x40) != '\0');
    268:   Var6 = (unkuint9)(ulonglong)Var12 + (unkuint9)SUB168(auVar29 * auVar61,8) +
    269:          (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
    270:   auVar30._8_8_ = 0;
    271:   auVar30._0_8_ = uVar1;

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:270
reconstrucao/src/decompiled_02.c:270:10: error: request for member ‘_8_8_’ in something not a structure or union

    267:           (unkuint9)((char)((unkuint9)Var13 >> 0x40) != '\0');
    268:   Var6 = (unkuint9)(ulonglong)Var12 + (unkuint9)SUB168(auVar29 * auVar61,8) +
    269:          (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
    270:   auVar30._8_8_ = 0;
    271:   auVar30._0_8_ = uVar1;
    272:   auVar62._8_8_ = 0;
    273:   auVar62._0_8_ = param_3[2];

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:271
reconstrucao/src/decompiled_02.c:271:10: error: request for member ‘_0_8_’ in something not a structure or union

    268:   Var6 = (unkuint9)(ulonglong)Var12 + (unkuint9)SUB168(auVar29 * auVar61,8) +
    269:          (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
    270:   auVar30._8_8_ = 0;
    271:   auVar30._0_8_ = uVar1;
    272:   auVar62._8_8_ = 0;
    273:   auVar62._0_8_ = param_3[2];
    274:   Var12 = (unkuint9)(ulonglong)Var6 + (unkuint9)SUB168(auVar30 * auVar62,0) +

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:272
reconstrucao/src/decompiled_02.c:272:10: error: request for member ‘_8_8_’ in something not a structure or union

    269:          (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
    270:   auVar30._8_8_ = 0;
    271:   auVar30._0_8_ = uVar1;
    272:   auVar62._8_8_ = 0;
    273:   auVar62._0_8_ = param_3[2];
    274:   Var12 = (unkuint9)(ulonglong)Var6 + (unkuint9)SUB168(auVar30 * auVar62,0) +
    275:           (unkuint9)((char)((unkuint9)Var14 >> 0x40) != '\0');

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:273
reconstrucao/src/decompiled_02.c:273:10: error: request for member ‘_0_8_’ in something not a structure or union

    270:   auVar30._8_8_ = 0;
    271:   auVar30._0_8_ = uVar1;
    272:   auVar62._8_8_ = 0;
    273:   auVar62._0_8_ = param_3[2];
    274:   Var12 = (unkuint9)(ulonglong)Var6 + (unkuint9)SUB168(auVar30 * auVar62,0) +
    275:           (unkuint9)((char)((unkuint9)Var14 >> 0x40) != '\0');
    276:   Var6 = (unkuint9)(uVar2 + uVar86) + (unkuint9)SUB168(auVar30 * auVar62,8) +

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:274
reconstrucao/src/decompiled_02.c:274:64: error: invalid operands to binary * (have ‘undefined1 *’ {aka ‘unsigned char *’} and ‘undefined1 *’ {aka ‘unsigned char *’})

    271:   auVar30._0_8_ = uVar1;
    272:   auVar62._8_8_ = 0;
    273:   auVar62._0_8_ = param_3[2];
    274:   Var12 = (unkuint9)(ulonglong)Var6 + (unkuint9)SUB168(auVar30 * auVar62,0) +
    275:           (unkuint9)((char)((unkuint9)Var14 >> 0x40) != '\0');
    276:   Var6 = (unkuint9)(uVar2 + uVar86) + (unkuint9)SUB168(auVar30 * auVar62,8) +
    277:          (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:276
reconstrucao/src/decompiled_02.c:276:64: error: invalid operands to binary * (have ‘undefined1 *’ {aka ‘unsigned char *’} and ‘undefined1 *’ {aka ‘unsigned char *’})

    273:   auVar62._0_8_ = param_3[2];
    274:   Var12 = (unkuint9)(ulonglong)Var6 + (unkuint9)SUB168(auVar30 * auVar62,0) +
    275:           (unkuint9)((char)((unkuint9)Var14 >> 0x40) != '\0');
    276:   Var6 = (unkuint9)(uVar2 + uVar86) + (unkuint9)SUB168(auVar30 * auVar62,8) +
    277:          (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
    278:   auVar31._8_8_ = 0;
    279:   auVar31._0_8_ = uVar1;

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:278
reconstrucao/src/decompiled_02.c:278:10: error: request for member ‘_8_8_’ in something not a structure or union

    275:           (unkuint9)((char)((unkuint9)Var14 >> 0x40) != '\0');
    276:   Var6 = (unkuint9)(uVar2 + uVar86) + (unkuint9)SUB168(auVar30 * auVar62,8) +
    277:          (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
    278:   auVar31._8_8_ = 0;
    279:   auVar31._0_8_ = uVar1;
    280:   auVar63._8_8_ = 0;
    281:   auVar63._0_8_ = param_3[3];

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:279
reconstrucao/src/decompiled_02.c:279:10: error: request for member ‘_0_8_’ in something not a structure or union

    276:   Var6 = (unkuint9)(uVar2 + uVar86) + (unkuint9)SUB168(auVar30 * auVar62,8) +
    277:          (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
    278:   auVar31._8_8_ = 0;
    279:   auVar31._0_8_ = uVar1;
    280:   auVar63._8_8_ = 0;
    281:   auVar63._0_8_ = param_3[3];
    282:   Var15 = (unkuint9)(ulonglong)Var6 + (unkuint9)SUB168(auVar31 * auVar63,0) +

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:280
reconstrucao/src/decompiled_02.c:280:10: error: request for member ‘_8_8_’ in something not a structure or union

    277:          (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
    278:   auVar31._8_8_ = 0;
    279:   auVar31._0_8_ = uVar1;
    280:   auVar63._8_8_ = 0;
    281:   auVar63._0_8_ = param_3[3];
    282:   Var15 = (unkuint9)(ulonglong)Var6 + (unkuint9)SUB168(auVar31 * auVar63,0) +
    283:           (unkuint9)((char)((unkuint9)Var12 >> 0x40) != '\0');

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:281
reconstrucao/src/decompiled_02.c:281:10: error: request for member ‘_0_8_’ in something not a structure or union

    278:   auVar31._8_8_ = 0;
    279:   auVar31._0_8_ = uVar1;
    280:   auVar63._8_8_ = 0;
    281:   auVar63._0_8_ = param_3[3];
    282:   Var15 = (unkuint9)(ulonglong)Var6 + (unkuint9)SUB168(auVar31 * auVar63,0) +
    283:           (unkuint9)((char)((unkuint9)Var12 >> 0x40) != '\0');
    284:   uVar7 = SUB168(auVar31 * auVar63,8) + (ulonglong)((char)((unkuint9)Var6 >> 0x40) != '\0');

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:282
reconstrucao/src/decompiled_02.c:282:64: error: invalid operands to binary * (have ‘undefined1 *’ {aka ‘unsigned char *’} and ‘undefined1 *’ {aka ‘unsigned char *’})

    279:   auVar31._0_8_ = uVar1;
    280:   auVar63._8_8_ = 0;
    281:   auVar63._0_8_ = param_3[3];
    282:   Var15 = (unkuint9)(ulonglong)Var6 + (unkuint9)SUB168(auVar31 * auVar63,0) +
    283:           (unkuint9)((char)((unkuint9)Var12 >> 0x40) != '\0');
    284:   uVar7 = SUB168(auVar31 * auVar63,8) + (ulonglong)((char)((unkuint9)Var6 >> 0x40) != '\0');
    285:   auVar32._8_8_ = 0;

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:284
reconstrucao/src/decompiled_02.c:284:26: error: invalid operands to binary * (have ‘undefined1 *’ {aka ‘unsigned char *’} and ‘undefined1 *’ {aka ‘unsigned char *’})

    281:   auVar63._0_8_ = param_3[3];
    282:   Var15 = (unkuint9)(ulonglong)Var6 + (unkuint9)SUB168(auVar31 * auVar63,0) +
    283:           (unkuint9)((char)((unkuint9)Var12 >> 0x40) != '\0');
    284:   uVar7 = SUB168(auVar31 * auVar63,8) + (ulonglong)((char)((unkuint9)Var6 >> 0x40) != '\0');
    285:   auVar32._8_8_ = 0;
    286:   auVar32._0_8_ = uVar83;
    287:   auVar64._8_8_ = 0;

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:285
reconstrucao/src/decompiled_02.c:285:10: error: request for member ‘_8_8_’ in something not a structure or union

    282:   Var15 = (unkuint9)(ulonglong)Var6 + (unkuint9)SUB168(auVar31 * auVar63,0) +
    283:           (unkuint9)((char)((unkuint9)Var12 >> 0x40) != '\0');
    284:   uVar7 = SUB168(auVar31 * auVar63,8) + (ulonglong)((char)((unkuint9)Var6 >> 0x40) != '\0');
    285:   auVar32._8_8_ = 0;
    286:   auVar32._0_8_ = uVar83;
    287:   auVar64._8_8_ = 0;
    288:   auVar64._0_8_ = *puVar80;

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:286
reconstrucao/src/decompiled_02.c:286:10: error: request for member ‘_0_8_’ in something not a structure or union

    283:           (unkuint9)((char)((unkuint9)Var12 >> 0x40) != '\0');
    284:   uVar7 = SUB168(auVar31 * auVar63,8) + (ulonglong)((char)((unkuint9)Var6 >> 0x40) != '\0');
    285:   auVar32._8_8_ = 0;
    286:   auVar32._0_8_ = uVar83;
    287:   auVar64._8_8_ = 0;
    288:   auVar64._0_8_ = *puVar80;
    289:   Var6 = (unkuint9)uVar4 + (unkuint9)SUB168(auVar32 * auVar64,0);

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:287
reconstrucao/src/decompiled_02.c:287:10: error: request for member ‘_8_8_’ in something not a structure or union

    284:   uVar7 = SUB168(auVar31 * auVar63,8) + (ulonglong)((char)((unkuint9)Var6 >> 0x40) != '\0');
    285:   auVar32._8_8_ = 0;
    286:   auVar32._0_8_ = uVar83;
    287:   auVar64._8_8_ = 0;
    288:   auVar64._0_8_ = *puVar80;
    289:   Var6 = (unkuint9)uVar4 + (unkuint9)SUB168(auVar32 * auVar64,0);
    290:   uVar4 = (ulonglong)Var6;

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:288
reconstrucao/src/decompiled_02.c:288:10: error: request for member ‘_0_8_’ in something not a structure or union

    285:   auVar32._8_8_ = 0;
    286:   auVar32._0_8_ = uVar83;
    287:   auVar64._8_8_ = 0;
    288:   auVar64._0_8_ = *puVar80;
    289:   Var6 = (unkuint9)uVar4 + (unkuint9)SUB168(auVar32 * auVar64,0);
    290:   uVar4 = (ulonglong)Var6;
    291:   Var10 = (unkuint9)(ulonglong)Var13 + (unkuint9)SUB168(auVar32 * auVar64,8);

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:289
reconstrucao/src/decompiled_02.c:289:53: error: invalid operands to binary * (have ‘undefined1 *’ {aka ‘unsigned char *’} and ‘undefined1 *’ {aka ‘unsigned char *’})

    286:   auVar32._0_8_ = uVar83;
    287:   auVar64._8_8_ = 0;
    288:   auVar64._0_8_ = *puVar80;
    289:   Var6 = (unkuint9)uVar4 + (unkuint9)SUB168(auVar32 * auVar64,0);
    290:   uVar4 = (ulonglong)Var6;
    291:   Var10 = (unkuint9)(ulonglong)Var13 + (unkuint9)SUB168(auVar32 * auVar64,8);
    292:   auVar33._8_8_ = 0;

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:291
reconstrucao/src/decompiled_02.c:291:65: error: invalid operands to binary * (have ‘undefined1 *’ {aka ‘unsigned char *’} and ‘undefined1 *’ {aka ‘unsigned char *’})

    288:   auVar64._0_8_ = *puVar80;
    289:   Var6 = (unkuint9)uVar4 + (unkuint9)SUB168(auVar32 * auVar64,0);
    290:   uVar4 = (ulonglong)Var6;
    291:   Var10 = (unkuint9)(ulonglong)Var13 + (unkuint9)SUB168(auVar32 * auVar64,8);
    292:   auVar33._8_8_ = 0;
    293:   auVar33._0_8_ = uVar83;
    294:   auVar65._8_8_ = 0;

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:292
reconstrucao/src/decompiled_02.c:292:10: error: request for member ‘_8_8_’ in something not a structure or union

    289:   Var6 = (unkuint9)uVar4 + (unkuint9)SUB168(auVar32 * auVar64,0);
    290:   uVar4 = (ulonglong)Var6;
    291:   Var10 = (unkuint9)(ulonglong)Var13 + (unkuint9)SUB168(auVar32 * auVar64,8);
    292:   auVar33._8_8_ = 0;
    293:   auVar33._0_8_ = uVar83;
    294:   auVar65._8_8_ = 0;
    295:   auVar65._0_8_ = *(ulonglong *)(param_1 + 0x88);

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:293
reconstrucao/src/decompiled_02.c:293:10: error: request for member ‘_0_8_’ in something not a structure or union

    290:   uVar4 = (ulonglong)Var6;
    291:   Var10 = (unkuint9)(ulonglong)Var13 + (unkuint9)SUB168(auVar32 * auVar64,8);
    292:   auVar33._8_8_ = 0;
    293:   auVar33._0_8_ = uVar83;
    294:   auVar65._8_8_ = 0;
    295:   auVar65._0_8_ = *(ulonglong *)(param_1 + 0x88);
    296:   Var6 = (unkuint9)(ulonglong)Var10 + (unkuint9)SUB168(auVar33 * auVar65,0) +

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:294
reconstrucao/src/decompiled_02.c:294:10: error: request for member ‘_8_8_’ in something not a structure or union

    291:   Var10 = (unkuint9)(ulonglong)Var13 + (unkuint9)SUB168(auVar32 * auVar64,8);
    292:   auVar33._8_8_ = 0;
    293:   auVar33._0_8_ = uVar83;
    294:   auVar65._8_8_ = 0;
    295:   auVar65._0_8_ = *(ulonglong *)(param_1 + 0x88);
    296:   Var6 = (unkuint9)(ulonglong)Var10 + (unkuint9)SUB168(auVar33 * auVar65,0) +
    297:          (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:295
reconstrucao/src/decompiled_02.c:295:10: error: request for member ‘_0_8_’ in something not a structure or union

    292:   auVar33._8_8_ = 0;
    293:   auVar33._0_8_ = uVar83;
    294:   auVar65._8_8_ = 0;
    295:   auVar65._0_8_ = *(ulonglong *)(param_1 + 0x88);
    296:   Var6 = (unkuint9)(ulonglong)Var10 + (unkuint9)SUB168(auVar33 * auVar65,0) +
    297:          (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
    298:   uVar5 = (ulonglong)Var6;

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:296
reconstrucao/src/decompiled_02.c:296:64: error: invalid operands to binary * (have ‘undefined1 *’ {aka ‘unsigned char *’} and ‘undefined1 *’ {aka ‘unsigned char *’})

    293:   auVar33._0_8_ = uVar83;
    294:   auVar65._8_8_ = 0;
    295:   auVar65._0_8_ = *(ulonglong *)(param_1 + 0x88);
    296:   Var6 = (unkuint9)(ulonglong)Var10 + (unkuint9)SUB168(auVar33 * auVar65,0) +
    297:          (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
    298:   uVar5 = (ulonglong)Var6;
    299:   Var10 = (unkuint9)(ulonglong)Var14 + (unkuint9)SUB168(auVar33 * auVar65,8) +

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:299
reconstrucao/src/decompiled_02.c:299:65: error: invalid operands to binary * (have ‘undefined1 *’ {aka ‘unsigned char *’} and ‘undefined1 *’ {aka ‘unsigned char *’})

    296:   Var6 = (unkuint9)(ulonglong)Var10 + (unkuint9)SUB168(auVar33 * auVar65,0) +
    297:          (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
    298:   uVar5 = (ulonglong)Var6;
    299:   Var10 = (unkuint9)(ulonglong)Var14 + (unkuint9)SUB168(auVar33 * auVar65,8) +
    300:           (unkuint9)((char)((unkuint9)Var10 >> 0x40) != '\0');
    301:   auVar34._8_8_ = 0;
    302:   auVar34._0_8_ = uVar83;

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:301
reconstrucao/src/decompiled_02.c:301:10: error: request for member ‘_8_8_’ in something not a structure or union

    298:   uVar5 = (ulonglong)Var6;
    299:   Var10 = (unkuint9)(ulonglong)Var14 + (unkuint9)SUB168(auVar33 * auVar65,8) +
    300:           (unkuint9)((char)((unkuint9)Var10 >> 0x40) != '\0');
    301:   auVar34._8_8_ = 0;
    302:   auVar34._0_8_ = uVar83;
    303:   auVar66._8_8_ = 0;
    304:   auVar66._0_8_ = *(ulonglong *)(param_1 + 0x90);

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:302
reconstrucao/src/decompiled_02.c:302:10: error: request for member ‘_0_8_’ in something not a structure or union

    299:   Var10 = (unkuint9)(ulonglong)Var14 + (unkuint9)SUB168(auVar33 * auVar65,8) +
    300:           (unkuint9)((char)((unkuint9)Var10 >> 0x40) != '\0');
    301:   auVar34._8_8_ = 0;
    302:   auVar34._0_8_ = uVar83;
    303:   auVar66._8_8_ = 0;
    304:   auVar66._0_8_ = *(ulonglong *)(param_1 + 0x90);
    305:   Var6 = (unkuint9)(ulonglong)Var10 + (unkuint9)SUB168(auVar34 * auVar66,0) +

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:303
reconstrucao/src/decompiled_02.c:303:10: error: request for member ‘_8_8_’ in something not a structure or union

    300:           (unkuint9)((char)((unkuint9)Var10 >> 0x40) != '\0');
    301:   auVar34._8_8_ = 0;
    302:   auVar34._0_8_ = uVar83;
    303:   auVar66._8_8_ = 0;
    304:   auVar66._0_8_ = *(ulonglong *)(param_1 + 0x90);
    305:   Var6 = (unkuint9)(ulonglong)Var10 + (unkuint9)SUB168(auVar34 * auVar66,0) +
    306:          (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:304
reconstrucao/src/decompiled_02.c:304:10: error: request for member ‘_0_8_’ in something not a structure or union

    301:   auVar34._8_8_ = 0;
    302:   auVar34._0_8_ = uVar83;
    303:   auVar66._8_8_ = 0;
    304:   auVar66._0_8_ = *(ulonglong *)(param_1 + 0x90);
    305:   Var6 = (unkuint9)(ulonglong)Var10 + (unkuint9)SUB168(auVar34 * auVar66,0) +
    306:          (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
    307:   Var12 = (unkuint9)(ulonglong)Var12 + (unkuint9)SUB168(auVar34 * auVar66,8) +

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:305
reconstrucao/src/decompiled_02.c:305:64: error: invalid operands to binary * (have ‘undefined1 *’ {aka ‘unsigned char *’} and ‘undefined1 *’ {aka ‘unsigned char *’})

    302:   auVar34._0_8_ = uVar83;
    303:   auVar66._8_8_ = 0;
    304:   auVar66._0_8_ = *(ulonglong *)(param_1 + 0x90);
    305:   Var6 = (unkuint9)(ulonglong)Var10 + (unkuint9)SUB168(auVar34 * auVar66,0) +
    306:          (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
    307:   Var12 = (unkuint9)(ulonglong)Var12 + (unkuint9)SUB168(auVar34 * auVar66,8) +
    308:           (unkuint9)((char)((unkuint9)Var10 >> 0x40) != '\0');

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:307
reconstrucao/src/decompiled_02.c:307:65: error: invalid operands to binary * (have ‘undefined1 *’ {aka ‘unsigned char *’} and ‘undefined1 *’ {aka ‘unsigned char *’})

    304:   auVar66._0_8_ = *(ulonglong *)(param_1 + 0x90);
    305:   Var6 = (unkuint9)(ulonglong)Var10 + (unkuint9)SUB168(auVar34 * auVar66,0) +
    306:          (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
    307:   Var12 = (unkuint9)(ulonglong)Var12 + (unkuint9)SUB168(auVar34 * auVar66,8) +
    308:           (unkuint9)((char)((unkuint9)Var10 >> 0x40) != '\0');
    309:   auVar35._8_8_ = 0;
    310:   auVar35._0_8_ = uVar83;

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:309
reconstrucao/src/decompiled_02.c:309:10: error: request for member ‘_8_8_’ in something not a structure or union

    306:          (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
    307:   Var12 = (unkuint9)(ulonglong)Var12 + (unkuint9)SUB168(auVar34 * auVar66,8) +
    308:           (unkuint9)((char)((unkuint9)Var10 >> 0x40) != '\0');
    309:   auVar35._8_8_ = 0;
    310:   auVar35._0_8_ = uVar83;
    311:   auVar67._8_8_ = 0;
    312:   auVar67._0_8_ = *(ulonglong *)(param_1 + 0x98);

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:310
reconstrucao/src/decompiled_02.c:310:10: error: request for member ‘_0_8_’ in something not a structure or union

    307:   Var12 = (unkuint9)(ulonglong)Var12 + (unkuint9)SUB168(auVar34 * auVar66,8) +
    308:           (unkuint9)((char)((unkuint9)Var10 >> 0x40) != '\0');
    309:   auVar35._8_8_ = 0;
    310:   auVar35._0_8_ = uVar83;
    311:   auVar67._8_8_ = 0;
    312:   auVar67._0_8_ = *(ulonglong *)(param_1 + 0x98);
    313:   Var10 = (unkuint9)(ulonglong)Var12 + (unkuint9)SUB168(auVar35 * auVar67,0) +

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:311
reconstrucao/src/decompiled_02.c:311:10: error: request for member ‘_8_8_’ in something not a structure or union

    308:           (unkuint9)((char)((unkuint9)Var10 >> 0x40) != '\0');
    309:   auVar35._8_8_ = 0;
    310:   auVar35._0_8_ = uVar83;
    311:   auVar67._8_8_ = 0;
    312:   auVar67._0_8_ = *(ulonglong *)(param_1 + 0x98);
    313:   Var10 = (unkuint9)(ulonglong)Var12 + (unkuint9)SUB168(auVar35 * auVar67,0) +
    314:           (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:312
reconstrucao/src/decompiled_02.c:312:10: error: request for member ‘_0_8_’ in something not a structure or union

    309:   auVar35._8_8_ = 0;
    310:   auVar35._0_8_ = uVar83;
    311:   auVar67._8_8_ = 0;
    312:   auVar67._0_8_ = *(ulonglong *)(param_1 + 0x98);
    313:   Var10 = (unkuint9)(ulonglong)Var12 + (unkuint9)SUB168(auVar35 * auVar67,0) +
    314:           (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
    315:   Var13 = (unkuint9)(ulonglong)Var15 + (unkuint9)SUB168(auVar35 * auVar67,8) +

## FUN_14077f3e0 */ — reconstrucao/src/decompiled_03.c:46
reconstrucao/src/decompiled_03.c:46:88: error: passing argument 4 of ‘FUN_140a33084’ from incompatible pointer type [-Wincompatible-pointer-types]

    43:       *(undefined4 *)((longlong)plVar6 + 0x1c) = uVar4;
    44:       *(undefined4 *)(plVar6 + 5) = 0xcccc;
    45:       *(undefined1 *)(plVar6 + 0xb) = 1;
    46:       iVar5 = FUN_140a33084(param_3,auStackX_20,*(undefined4 *)(param_1 + 0x18),plVar6 + 6);
    47:       if ((-1 < iVar5) &&
    48:          (iVar5 = FUN_140a33348(param_3,*(undefined4 *)(param_1 + 0x18),plVar6 + 9), -1 < iVar5)) {
    49:         *param_5 = (longlong)plVar6;

## FUN_14077f4f8 */ — reconstrucao/src/decompiled_03.c:78
reconstrucao/src/decompiled_03.c:78:16: error: ‘DAT_14001bcb8’ undeclared (first use in this function)

    75: void FUN_14077f4f8(void)
    76: 
    77: {
    78:   EtwRegister(&DAT_14001bcb8,FUN_140a94cf0,0,&DAT_140f07240);
    79:   return;
    80: }
    81: 

## FUN_14077f4f8 */ — reconstrucao/src/decompiled_03.c:78
reconstrucao/src/decompiled_03.c:78:47: error: ‘DAT_140f07240’ undeclared (first use in this function)

    75: void FUN_14077f4f8(void)
    76: 
    77: {
    78:   EtwRegister(&DAT_14001bcb8,FUN_140a94cf0,0,&DAT_140f07240);
    79:   return;
    80: }
    81: 

## FUN_14077f528 */ — reconstrucao/src/decompiled_03.c:87
reconstrucao/src/decompiled_03.c:87:3: error: implicit declaration of function ‘PoRegisterPowerSettingCallback’; did you mean ‘PoUnregisterPowerSettingCallback’? [-Wimplicit-function-declaration]

    84: void FUN_14077f528(void)
    85: 
    86: {
    87:   PoRegisterPowerSettingCallback(0,&DAT_14001a0b8,FUN_140aa9060,0,&DAT_140f06d38);
    88:   return;
    89: }
    90: 

## FUN_14077f528 */ — reconstrucao/src/decompiled_03.c:87
reconstrucao/src/decompiled_03.c:87:37: error: ‘DAT_14001a0b8’ undeclared (first use in this function); did you mean ‘FUN_14071a0b8’?

    84: void FUN_14077f528(void)
    85: 
    86: {
    87:   PoRegisterPowerSettingCallback(0,&DAT_14001a0b8,FUN_140aa9060,0,&DAT_140f06d38);
    88:   return;
    89: }
    90: 

## FUN_14077f528 */ — reconstrucao/src/decompiled_03.c:87
reconstrucao/src/decompiled_03.c:87:68: error: ‘DAT_140f06d38’ undeclared (first use in this function)

    84: void FUN_14077f528(void)
    85: 
    86: {
    87:   PoRegisterPowerSettingCallback(0,&DAT_14001a0b8,FUN_140aa9060,0,&DAT_140f06d38);
    88:   return;
    89: }
    90: 

## FUN_14077f55c */ — reconstrucao/src/decompiled_03.c:96
reconstrucao/src/decompiled_03.c:96:36: error: ‘DAT_140f06d38’ undeclared (first use in this function)

    93: void FUN_14077f55c(void)
    94: 
    95: {
    96:   PoUnregisterPowerSettingCallback(DAT_140f06d38);
    97:   return;
    98: }
    99: 

## FUN_14077f580 */ — reconstrucao/src/decompiled_03.c:139
reconstrucao/src/decompiled_03.c:139:29: error: passing argument 1 of ‘FUN_140a329d0’ makes pointer from integer without a cast [-Wint-conversion]

    136:     iVar1 = FUN_1403dcb90(uStack_30,&uStack_30,&uStack_40,param_4,0,&lStack_48);
    137:     lVar3 = lStack_48;
    138:     if (-1 < iVar1) {
    139:       iVar1 = FUN_140a329d0(lStack_48,&puStackX_8);
    140:       if (-1 < iVar1) goto LAB_14077f637;
    141:       puVar2 = puStackX_8;
    142:     }

## FUN_14077f580 */ — reconstrucao/src/decompiled_03.c:139
reconstrucao/src/decompiled_03.c:139:39: error: passing argument 2 of ‘FUN_140a329d0’ from incompatible pointer type [-Wincompatible-pointer-types]

    136:     iVar1 = FUN_1403dcb90(uStack_30,&uStack_30,&uStack_40,param_4,0,&lStack_48);
    137:     lVar3 = lStack_48;
    138:     if (-1 < iVar1) {
    139:       iVar1 = FUN_140a329d0(lStack_48,&puStackX_8);
    140:       if (-1 < iVar1) goto LAB_14077f637;
    141:       puVar2 = puStackX_8;
    142:     }

## FUN_14077f580 */ — reconstrucao/src/decompiled_03.c:145
reconstrucao/src/decompiled_03.c:145:19: error: passing argument 1 of ‘FUN_140a32d80’ makes pointer from integer without a cast [-Wint-conversion]

    142:     }
    143:   }
    144:   if (lVar3 != 0) {
    145:     FUN_140a32d80(lVar3);
    146:   }
    147:   if (puVar2 != (undefined *)0x0) {
    148:     FUN_140485460(puVar2);

## FUN_14077f580 */ — reconstrucao/src/decompiled_03.c:153
reconstrucao/src/decompiled_03.c:153:17: error: ‘DAT_140f06d48’ undeclared (first use in this function)

    150:   if (iVar1 != -0x3fffff45) {
    151:     return iVar1;
    152:   }
    153:   puStackX_8 = &DAT_140f06d48;
    154:   iVar1 = 0;
    155: LAB_14077f637:
    156:   *param_5 = puStackX_8;

## FUN_14077f580 */ — reconstrucao/src/decompiled_03.c:156
reconstrucao/src/decompiled_03.c:156:12: error: assignment to ‘undefined8’ {aka ‘long unsigned int’} from ‘undefined *’ {aka ‘unsigned char *’} makes integer from pointer without a cast [-Wint-conversion]

    153:   puStackX_8 = &DAT_140f06d48;
    154:   iVar1 = 0;
    155: LAB_14077f637:
    156:   *param_5 = puStackX_8;
    157:   return iVar1;
    158: }
    159: 

## FUN_14077f660 */ — reconstrucao/src/decompiled_03.c:190
reconstrucao/src/decompiled_03.c:190:29: error: passing argument 1 of ‘FUN_140a329d0’ makes pointer from integer without a cast [-Wint-conversion]

    187:     iVar1 = FUN_140a324f0(uStack_20,&uStack_20,param_3,&lStack_28);
    188:     lVar3 = lStack_28;
    189:     if (-1 < iVar1) {
    190:       iVar1 = FUN_140a329d0(lStack_28,&puStackX_8);
    191:       if (-1 < iVar1) goto LAB_14077f704;
    192:       puVar2 = puStackX_8;
    193:     }

## FUN_14077f660 */ — reconstrucao/src/decompiled_03.c:190
reconstrucao/src/decompiled_03.c:190:39: error: passing argument 2 of ‘FUN_140a329d0’ from incompatible pointer type [-Wincompatible-pointer-types]

    187:     iVar1 = FUN_140a324f0(uStack_20,&uStack_20,param_3,&lStack_28);
    188:     lVar3 = lStack_28;
    189:     if (-1 < iVar1) {
    190:       iVar1 = FUN_140a329d0(lStack_28,&puStackX_8);
    191:       if (-1 < iVar1) goto LAB_14077f704;
    192:       puVar2 = puStackX_8;
    193:     }

## FUN_14077f660 */ — reconstrucao/src/decompiled_03.c:196
reconstrucao/src/decompiled_03.c:196:19: error: passing argument 1 of ‘FUN_140a32d80’ makes pointer from integer without a cast [-Wint-conversion]

    193:     }
    194:   }
    195:   if (lVar3 != 0) {
    196:     FUN_140a32d80(lVar3);
    197:   }
    198:   if (puVar2 != (undefined *)0x0) {
    199:     FUN_140485460(puVar2);

## FUN_14077f660 */ — reconstrucao/src/decompiled_03.c:204
reconstrucao/src/decompiled_03.c:204:17: error: ‘DAT_140f06d48’ undeclared (first use in this function)

    201:   if (iVar1 != -0x3fffff45) {
    202:     return iVar1;
    203:   }
    204:   puStackX_8 = &DAT_140f06d48;
    205:   iVar1 = 0;
    206: LAB_14077f704:
    207:   *param_4 = puStackX_8;

## FUN_14077f660 */ — reconstrucao/src/decompiled_03.c:207
reconstrucao/src/decompiled_03.c:207:12: error: assignment to ‘undefined8’ {aka ‘long unsigned int’} from ‘undefined *’ {aka ‘unsigned char *’} makes integer from pointer without a cast [-Wint-conversion]

    204:   puStackX_8 = &DAT_140f06d48;
    205:   iVar1 = 0;
    206: LAB_14077f704:
    207:   *param_4 = puStackX_8;
    208:   return iVar1;
    209: }
    210: 

## FUN_14077f730 */ — reconstrucao/src/decompiled_03.c:232
reconstrucao/src/decompiled_03.c:232:21: error: passing argument 1 of ‘FUN_140a32d80’ makes pointer from integer without a cast [-Wint-conversion]

    229:     iVar1 = -0x3ffffff3;
    230: LAB_14077f7d4:
    231:     if (lVar3 != 0) {
    232:       FUN_140a32d80(lVar3);
    233:     }
    234:     if (puVar2 != (undefined *)0x0) {
    235:       FUN_140485460(puVar2);

## FUN_14077f730 */ — reconstrucao/src/decompiled_03.c:241
reconstrucao/src/decompiled_03.c:241:48: error: passing argument 2 of ‘FUN_140a324f0’ from incompatible pointer type [-Wincompatible-pointer-types]

    238:   else {
    239:     iVar1 = FUN_140a7cc30(param_2,alStack_38 + 1);
    240:     if (-1 < iVar1) {
    241:       iVar1 = FUN_140a324f0(param_1,alStack_38 + 1,param_3,alStack_38);
    242:       lVar3 = alStack_38[0];
    243:       if (-1 < iVar1) {
    244:         iVar1 = FUN_140a329d0(alStack_38[0],&puStackX_8);

## FUN_14077f730 */ — reconstrucao/src/decompiled_03.c:244
reconstrucao/src/decompiled_03.c:244:41: error: passing argument 1 of ‘FUN_140a329d0’ makes pointer from integer without a cast [-Wint-conversion]

    241:       iVar1 = FUN_140a324f0(param_1,alStack_38 + 1,param_3,alStack_38);
    242:       lVar3 = alStack_38[0];
    243:       if (-1 < iVar1) {
    244:         iVar1 = FUN_140a329d0(alStack_38[0],&puStackX_8);
    245:         if (-1 < iVar1) goto LAB_14077f7ff;
    246:         puVar2 = puStackX_8;
    247:       }

## FUN_14077f730 */ — reconstrucao/src/decompiled_03.c:244
reconstrucao/src/decompiled_03.c:244:45: error: passing argument 2 of ‘FUN_140a329d0’ from incompatible pointer type [-Wincompatible-pointer-types]

    241:       iVar1 = FUN_140a324f0(param_1,alStack_38 + 1,param_3,alStack_38);
    242:       lVar3 = alStack_38[0];
    243:       if (-1 < iVar1) {
    244:         iVar1 = FUN_140a329d0(alStack_38[0],&puStackX_8);
    245:         if (-1 < iVar1) goto LAB_14077f7ff;
    246:         puVar2 = puStackX_8;
    247:       }

## FUN_14077f730 */ — reconstrucao/src/decompiled_03.c:254
reconstrucao/src/decompiled_03.c:254:17: error: ‘DAT_140f06d48’ undeclared (first use in this function)

    251:   if (iVar1 != -0x3fffff45) {
    252:     return iVar1;
    253:   }
    254:   puStackX_8 = &DAT_140f06d48;
    255:   iVar1 = 0;
    256: LAB_14077f7ff:
    257:   *param_4 = puStackX_8;

## FUN_14077f730 */ — reconstrucao/src/decompiled_03.c:257
reconstrucao/src/decompiled_03.c:257:12: error: assignment to ‘undefined8’ {aka ‘long unsigned int’} from ‘undefined *’ {aka ‘unsigned char *’} makes integer from pointer without a cast [-Wint-conversion]

    254:   puStackX_8 = &DAT_140f06d48;
    255:   iVar1 = 0;
    256: LAB_14077f7ff:
    257:   *param_4 = puStackX_8;
    258:   return iVar1;
    259: }
    260: 

## FUN_14077f830 */ — reconstrucao/src/decompiled_03.c:283
reconstrucao/src/decompiled_03.c:283:35: error: passing argument 2 of ‘FUN_140a324f0’ from incompatible pointer type [-Wincompatible-pointer-types]

    280:   else {
    281:     alStack_20[1] = 0;
    282:     alStack_20[0] = param_2;
    283:     iVar1 = FUN_140a324f0(param_1,alStack_20,param_3,&lStack_28);
    284:     lVar3 = lStack_28;
    285:     if (-1 < iVar1) {
    286:       iVar1 = FUN_140a329d0(lStack_28,&puStackX_8);

## FUN_14077f830 */ — reconstrucao/src/decompiled_03.c:286
reconstrucao/src/decompiled_03.c:286:29: error: passing argument 1 of ‘FUN_140a329d0’ makes pointer from integer without a cast [-Wint-conversion]

    283:     iVar1 = FUN_140a324f0(param_1,alStack_20,param_3,&lStack_28);
    284:     lVar3 = lStack_28;
    285:     if (-1 < iVar1) {
    286:       iVar1 = FUN_140a329d0(lStack_28,&puStackX_8);
    287:       if (-1 < iVar1) goto LAB_14077f8d9;
    288:       puVar2 = puStackX_8;
    289:     }

## FUN_14077f830 */ — reconstrucao/src/decompiled_03.c:286
reconstrucao/src/decompiled_03.c:286:39: error: passing argument 2 of ‘FUN_140a329d0’ from incompatible pointer type [-Wincompatible-pointer-types]

    283:     iVar1 = FUN_140a324f0(param_1,alStack_20,param_3,&lStack_28);
    284:     lVar3 = lStack_28;
    285:     if (-1 < iVar1) {
    286:       iVar1 = FUN_140a329d0(lStack_28,&puStackX_8);
    287:       if (-1 < iVar1) goto LAB_14077f8d9;
    288:       puVar2 = puStackX_8;
    289:     }

## FUN_14077f830 */ — reconstrucao/src/decompiled_03.c:292
reconstrucao/src/decompiled_03.c:292:19: error: passing argument 1 of ‘FUN_140a32d80’ makes pointer from integer without a cast [-Wint-conversion]

    289:     }
    290:   }
    291:   if (lVar3 != 0) {
    292:     FUN_140a32d80(lVar3);
    293:   }
    294:   if (puVar2 != (undefined *)0x0) {
    295:     FUN_140485460(puVar2);

## FUN_14077f830 */ — reconstrucao/src/decompiled_03.c:300
reconstrucao/src/decompiled_03.c:300:17: error: ‘DAT_140f06d48’ undeclared (first use in this function)

    297:   if (iVar1 != -0x3fffff45) {
    298:     return iVar1;
    299:   }
    300:   puStackX_8 = &DAT_140f06d48;
    301:   iVar1 = 0;
    302: LAB_14077f8d9:
    303:   *param_4 = puStackX_8;

## FUN_14077f830 */ — reconstrucao/src/decompiled_03.c:303
reconstrucao/src/decompiled_03.c:303:12: error: assignment to ‘undefined8’ {aka ‘long unsigned int’} from ‘undefined *’ {aka ‘unsigned char *’} makes integer from pointer without a cast [-Wint-conversion]

    300:   puStackX_8 = &DAT_140f06d48;
    301:   iVar1 = 0;
    302: LAB_14077f8d9:
    303:   *param_4 = puStackX_8;
    304:   return iVar1;
    305: }
    306: 

## FUN_14077f900 */ — reconstrucao/src/decompiled_03.c:312
reconstrucao/src/decompiled_03.c:312:3: error: implicit declaration of function ‘FUN_14077f250’; did you mean ‘FUN_14070f250’? [-Wimplicit-function-declaration]

    309: void FUN_14077f900(void)
    310: 
    311: {
    312:   FUN_14077f250();
    313:   return;
    314: }
    315: 

## FUN_14077f918 */ — reconstrucao/src/decompiled_03.c:326
reconstrucao/src/decompiled_03.c:326:26: error: ‘DAT_140f06ba8’ undeclared (first use in this function); did you mean ‘FUN_140206ba8’?

    323:   undefined8 uStack_18;
    324:   undefined8 uStack_10;
    325:   
    326:   lVar2 = FUN_1402f5ef0(&DAT_140f06ba8,0,0);
    327:   LOCK();
    328:   uVar1 = DAT_140f06ba8 & 1;
    329:   DAT_140f06ba8 = DAT_140f06ba8 | 1;

## FUN_14077f918 */ — reconstrucao/src/decompiled_03.c:327
reconstrucao/src/decompiled_03.c:327:3: error: implicit declaration of function ‘LOCK’ [-Wimplicit-function-declaration]

    324:   undefined8 uStack_10;
    325:   
    326:   lVar2 = FUN_1402f5ef0(&DAT_140f06ba8,0,0);
    327:   LOCK();
    328:   uVar1 = DAT_140f06ba8 & 1;
    329:   DAT_140f06ba8 = DAT_140f06ba8 | 1;
    330:   UNLOCK();

## FUN_14077f918 */ — reconstrucao/src/decompiled_03.c:330
reconstrucao/src/decompiled_03.c:330:3: error: implicit declaration of function ‘UNLOCK’ [-Wimplicit-function-declaration]

    327:   LOCK();
    328:   uVar1 = DAT_140f06ba8 & 1;
    329:   DAT_140f06ba8 = DAT_140f06ba8 | 1;
    330:   UNLOCK();
    331:   if (uVar1 != 0) {
    332:     FUN_1402f5950(&DAT_140f06ba8,lVar2,&DAT_140f06ba8);
    333:   }

## FUN_14077f918 */ — reconstrucao/src/decompiled_03.c:337
reconstrucao/src/decompiled_03.c:337:3: error: ‘DAT_140f06bb8’ undeclared (first use in this function)

    334:   if (lVar2 != 0) {
    335:     *(undefined1 *)(lVar2 + 10) = 1;
    336:   }
    337:   DAT_140f06bb8 = DAT_140f06bb8 + -1;
    338:   if (DAT_140f06bb8 == 0) {
    339:     uStack_18 = 0;
    340:     uStack_10 = 0xffffffffffffffff;

## FUN_14077f918 */ — reconstrucao/src/decompiled_03.c:341
reconstrucao/src/decompiled_03.c:341:18: error: ‘DAT_140f06bc0’ undeclared (first use in this function)

    338:   if (DAT_140f06bb8 == 0) {
    339:     uStack_18 = 0;
    340:     uStack_10 = 0xffffffffffffffff;
    341:     KeSetTimer2(&DAT_140f06bc0,0xfffffffffd050f80,0,&uStack_18);
    342:   }
    343:   FUN_1404935fc(&DAT_140f06ba8);
    344:   return;

## FUN_14077f9b0 */ — reconstrucao/src/decompiled_03.c:368
reconstrucao/src/decompiled_03.c:368:7: error: implicit declaration of function ‘AlpcInitializeMessageAttribute’; did you mean ‘AlpcGetMessageAttribute’? [-Wimplicit-function-declaration]

    365:     if (lVar3 != 0) {
    366:       FUN_1406d1200(lVar2,0,0xa0);
    367:       FUN_1406d1200(lVar3,0,0x40);
    368:       AlpcInitializeMessageAttribute(0x20000000,lVar2,0xa0,auStack_10);
    369:       while( true ) {
    370:         uStackX_20 = 0x40;
    371:         iVar1 = ZwAlpcSendWaitReceivePort(DAT_140f06ba0,0,0,0,lVar3,&uStackX_20,lVar2,&uStack_18);

## FUN_14077f9b0 */ — reconstrucao/src/decompiled_03.c:371
reconstrucao/src/decompiled_03.c:371:43: error: ‘DAT_140f06ba0’ undeclared (first use in this function)

    368:       AlpcInitializeMessageAttribute(0x20000000,lVar2,0xa0,auStack_10);
    369:       while( true ) {
    370:         uStackX_20 = 0x40;
    371:         iVar1 = ZwAlpcSendWaitReceivePort(DAT_140f06ba0,0,0,0,lVar3,&uStackX_20,lVar2,&uStack_18);
    372:         if (iVar1 != 0) break;
    373:         uVar4 = AlpcGetMessageAttribute(lVar2,0x20000000);
    374:         FUN_14077fb9c(lVar3,uVar4);

## FUN_14077f9b0 */ — reconstrucao/src/decompiled_03.c:373
reconstrucao/src/decompiled_03.c:373:41: error: passing argument 1 of ‘AlpcGetMessageAttribute’ makes pointer from integer without a cast [-Wint-conversion]

    370:         uStackX_20 = 0x40;
    371:         iVar1 = ZwAlpcSendWaitReceivePort(DAT_140f06ba0,0,0,0,lVar3,&uStackX_20,lVar2,&uStack_18);
    372:         if (iVar1 != 0) break;
    373:         uVar4 = AlpcGetMessageAttribute(lVar2,0x20000000);
    374:         FUN_14077fb9c(lVar3,uVar4);
    375:         AlpcInitializeMessageAttribute(0x20000000);
    376:         uStack_18 = 0;

## FUN_14077faf0 */ — reconstrucao/src/decompiled_03.c:393
reconstrucao/src/decompiled_03.c:393:26: error: ‘DAT_140f06ba8’ undeclared (first use in this function); did you mean ‘FUN_140206ba8’?

    390:   ulonglong uVar1;
    391:   longlong lVar2;
    392:   
    393:   lVar2 = FUN_1402f5ef0(&DAT_140f06ba8,0,0);
    394:   LOCK();
    395:   uVar1 = DAT_140f06ba8 & 1;
    396:   DAT_140f06ba8 = DAT_140f06ba8 | 1;

## FUN_14077faf0 */ — reconstrucao/src/decompiled_03.c:405
reconstrucao/src/decompiled_03.c:405:10: error: ‘DAT_140f06bbc’ undeclared (first use in this function)

    402:     *(undefined1 *)(lVar2 + 10) = 1;
    403:   }
    404:   lVar2 = (longlong)param_1 * 0xc0;
    405:   if (((&DAT_140f06bbc)[lVar2] != '\0') && ((&DAT_140f06bb8)[(longlong)param_1 * 0x30] == 0)) {
    406:     FUN_14077ff18();
    407:     (&DAT_140f06bbc)[lVar2] = 0;
    408:   }

## FUN_14077faf0 */ — reconstrucao/src/decompiled_03.c:405
reconstrucao/src/decompiled_03.c:405:47: error: ‘DAT_140f06bb8’ undeclared (first use in this function)

    402:     *(undefined1 *)(lVar2 + 10) = 1;
    403:   }
    404:   lVar2 = (longlong)param_1 * 0xc0;
    405:   if (((&DAT_140f06bbc)[lVar2] != '\0') && ((&DAT_140f06bb8)[(longlong)param_1 * 0x30] == 0)) {
    406:     FUN_14077ff18();
    407:     (&DAT_140f06bbc)[lVar2] = 0;
    408:   }

## FUN_14077fb9c */ — reconstrucao/src/decompiled_03.c:442
reconstrucao/src/decompiled_03.c:442:15: error: ‘DAT_140e0a740’ undeclared (first use in this function)

    439:   undefined8 uStack_68;
    440:   ulonglong uStack_28;
    441:   
    442:   uStack_28 = DAT_140e0a740 ^ (ulonglong)auStack_108;
    443:   uStack_ac = 0;
    444:   uStack_94 = 0;
    445:   uVar5 = *(ushort *)(param_1 + 4) & 0xff;

## FUN_14077fb9c */ — reconstrucao/src/decompiled_03.c:449
reconstrucao/src/decompiled_03.c:449:32: error: ‘DAT_140f06ba8’ undeclared (first use in this function); did you mean ‘FUN_140206ba8’?

    446:   if (uVar5 != 1) {
    447:     if ((uVar5 != 2) && (uVar5 != 3)) {
    448:       if ((uVar5 == 5) || (uVar5 == 6)) {
    449:         lVar4 = FUN_1402f5ef0(&DAT_140f06ba8,0,0);
    450:         LOCK();
    451:         uVar1 = DAT_140f06ba8 & 1;
    452:         DAT_140f06ba8 = DAT_140f06ba8 | 1;

## FUN_14077fb9c */ — reconstrucao/src/decompiled_03.c:460
reconstrucao/src/decompiled_03.c:460:17: error: ‘DAT_140f06bb0’ undeclared (first use in this function)

    457:         if (lVar4 != 0) {
    458:           *(undefined1 *)(lVar4 + 10) = 1;
    459:         }
    460:         lVar4 = DAT_140f06bb0;
    461:         DAT_140f06bb0 = 0;
    462:         FUN_1404935fc(&DAT_140f06ba8);
    463:         ZwClose(lVar4);

## FUN_14077fb9c */ — reconstrucao/src/decompiled_03.c:493
reconstrucao/src/decompiled_03.c:493:54: error: ‘DAT_140f06ba0’ undeclared (first use in this function)

    490:       uStack_d0 = 0;
    491:       uStack_e0 = 0;
    492:       lStack_d8 = param_1;
    493:       iVar2 = ZwAlpcAcceptConnectPort(&DAT_140f06bb0,DAT_140f06ba0,0,&uStack_b0);
    494:       if (iVar2 < 0) {
    495:         puStack_e8 = auStack_78;
    496:         uStack_c8 = 0;

## FUN_14077fb9c */ — reconstrucao/src/decompiled_03.c:503
reconstrucao/src/decompiled_03.c:503:32: error: ‘DAT_140fc4ac0’ undeclared (first use in this function)

    500:         ZwAlpcAcceptConnectPort(&DAT_140f06bb0,DAT_140f06ba0,0,&uStack_b0);
    501:       }
    502:       else {
    503:         uStack_b8 = (ulonglong)DAT_140fc4ac0;
    504:         if ((DAT_140fc4ac0 & 0x10) == 0) {
    505:           uStack_b8 = (ulonglong)(DAT_140fc4ac0 | 1);
    506:           FUN_14053fd44(&PTR_DAT_1400dd860,uStack_b8,3,1);

## FUN_14077fb9c */ — reconstrucao/src/decompiled_03.c:506
reconstrucao/src/decompiled_03.c:506:26: error: ‘PTR_DAT_1400dd860’ undeclared (first use in this function)

    503:         uStack_b8 = (ulonglong)DAT_140fc4ac0;
    504:         if ((DAT_140fc4ac0 & 0x10) == 0) {
    505:           uStack_b8 = (ulonglong)(DAT_140fc4ac0 | 1);
    506:           FUN_14053fd44(&PTR_DAT_1400dd860,uStack_b8,3,1);
    507:           FUN_14053fdd4(uStack_b8,3,&PTR_DAT_1400dd860);
    508:         }
    509:       }

## FUN_14077fdf8 */ — reconstrucao/src/decompiled_03.c:531
reconstrucao/src/decompiled_03.c:531:10: error: ‘DAT_140fc4ac0’ undeclared (first use in this function)

    528:   uint uVar2;
    529:   
    530:   if (*(int *)(param_1 + 0x28) == 0) {
    531:     if ((DAT_140fc4ac0 & 0x10) == 0) {
    532:       uVar2 = DAT_140fc4ac0 | 1;
    533:       FUN_14053fd44(&PTR_DAT_1400dd860,uVar2,3);
    534:       FUN_14053fdd4(uVar2,3,&PTR_DAT_1400dd860);

## FUN_14077fdf8 */ — reconstrucao/src/decompiled_03.c:533
reconstrucao/src/decompiled_03.c:533:22: error: ‘PTR_DAT_1400dd860’ undeclared (first use in this function)

    530:   if (*(int *)(param_1 + 0x28) == 0) {
    531:     if ((DAT_140fc4ac0 & 0x10) == 0) {
    532:       uVar2 = DAT_140fc4ac0 | 1;
    533:       FUN_14053fd44(&PTR_DAT_1400dd860,uVar2,3);
    534:       FUN_14053fdd4(uVar2,3,&PTR_DAT_1400dd860);
    535:     }
    536:   }

## FUN_14077fdf8 */ — reconstrucao/src/decompiled_03.c:545
reconstrucao/src/decompiled_03.c:545:31: error: ‘DAT_140f06bb0’ undeclared (first use in this function)

    542:     }
    543:     uVar1 = FUN_14077eff0(*(undefined8 *)(param_1 + 0x30));
    544:     *(undefined4 *)(param_1 + 0x30) = uVar1;
    545:     ZwAlpcSendWaitReceivePort(DAT_140f06bb0,0x10000,param_1,0,0,0,0,0);
    546:     return 0;
    547:   }
    548:   return 0xc00000bb;

## FUN_14077ff18 */ — reconstrucao/src/decompiled_03.c:553
reconstrucao/src/decompiled_03.c:553:6: error: conflicting types for ‘FUN_14077ff18’; have ‘void(undefined8,  uint,  uint,  void *, char)’ {aka ‘void(long unsigned int,  unsigned int,  unsigned int,  void *, char)’}

    550: 
    551: /* Ghidra label: FUN_14077ff18 */
    552: /* Ghidra address: 14077ff18 */
    553: void FUN_14077ff18(undefined8 param_1,uint param_2,uint param_3,void *param_4,char param_5)
    554: 
    555: {
    556:   longlong lVar1;

## FUN_14077ff18 */ — reconstrucao/src/decompiled_03.c:575
reconstrucao/src/decompiled_03.c:575:11: error: ‘DAT_140f06bb0’ undeclared (first use in this function)

    572:   undefined1 auStack_c8 [160];
    573:   ulonglong uStack_28;
    574:   
    575:   lVar1 = DAT_140f06bb0;
    576:   uStack_28 = DAT_140e0a740 ^ (ulonglong)auStack_158;
    577:   if (DAT_140f06bb0 != 0) {
    578:     uStack_e8 = 0;

## FUN_14077ff18 */ — reconstrucao/src/decompiled_03.c:576
reconstrucao/src/decompiled_03.c:576:15: error: ‘DAT_140e0a740’ undeclared (first use in this function)

    573:   ulonglong uStack_28;
    574:   
    575:   lVar1 = DAT_140f06bb0;
    576:   uStack_28 = DAT_140e0a740 ^ (ulonglong)auStack_158;
    577:   if (DAT_140f06bb0 != 0) {
    578:     uStack_e8 = 0;
    579:     uStack_e0 = (ulonglong)param_2;

## TtmNotifyDeviceArrival */ — reconstrucao/src/decompiled_03.c:610
reconstrucao/src/decompiled_03.c:610:1: error: expected identifier or ‘(’ before ‘if’

    607: 
    608: /* Ghidra label: TtmNotifyDeviceArrival */
    609: /* Ghidra address: 140780020 */
    610: if (param_3 == (longlong *)0x0) {
    611:     iVar4 = -0x3ffffff3;
    612:     uVar9 = 0x182;
    613: LAB_14078029b:

## TtmNotifyDeviceDeparture */ — reconstrucao/src/decompiled_03.c:632
reconstrucao/src/decompiled_03.c:632:25: error: passing argument 1 of ‘FUN_140781b40’ makes integer from pointer without a cast [-Wint-conversion]

    629:   uStackX_18 = 0;
    630:   lStackX_20 = 0;
    631:   cVar1 = '\0';
    632:   iVar2 = FUN_140781b40(&uStackX_18);
    633:   if (iVar2 < 0) {
    634:     FUN_1409a24bc("TtmNotifyDeviceDeparture",0x26f,iVar2,iVar2);
    635:   }

## TtmNotifyDeviceDeparture */ — reconstrucao/src/decompiled_03.c:634
reconstrucao/src/decompiled_03.c:634:19: error: passing argument 1 of ‘FUN_1409a24bc’ makes integer from pointer without a cast [-Wint-conversion]

    631:   cVar1 = '\0';
    632:   iVar2 = FUN_140781b40(&uStackX_18);
    633:   if (iVar2 < 0) {
    634:     FUN_1409a24bc("TtmNotifyDeviceDeparture",0x26f,iVar2,iVar2);
    635:   }
    636:   else {
    637:     cVar1 = FUN_140781098(uStackX_18,param_1,param_2,&lStackX_20);

## TtmNotifyDeviceDeparture */ — reconstrucao/src/decompiled_03.c:644
reconstrucao/src/decompiled_03.c:644:28: error: ‘DAT_140f06b20’ undeclared (first use in this function)

    641:         FUN_140781cb4(uStackX_18,1);
    642:       }
    643:     }
    644:     ExReleaseResourceLite(&DAT_140f06b20);
    645:     KeLeaveCriticalRegion();
    646:   }
    647:   FUN_140784338(param_1,param_2,cVar1);

## TtmNotifyDeviceInput */ — reconstrucao/src/decompiled_03.c:674
reconstrucao/src/decompiled_03.c:674:25: error: passing argument 1 of ‘FUN_140781b40’ makes integer from pointer without a cast [-Wint-conversion]

    671:   uStack_30 = 0;
    672:   uVar2 = 0;
    673:   uVar6 = 0;
    674:   iVar3 = FUN_140781b40(&lStackX_20);
    675:   lVar7 = lStackX_20;
    676:   if (iVar3 < 0) {
    677:     FUN_1409a24bc("TtmNotifyDeviceInput",0x2f8,iVar3,0xffffffff);

## TtmNotifyDeviceInput */ — reconstrucao/src/decompiled_03.c:677
reconstrucao/src/decompiled_03.c:677:19: error: passing argument 1 of ‘FUN_1409a24bc’ makes integer from pointer without a cast [-Wint-conversion]

    674:   iVar3 = FUN_140781b40(&lStackX_20);
    675:   lVar7 = lStackX_20;
    676:   if (iVar3 < 0) {
    677:     FUN_1409a24bc("TtmNotifyDeviceInput",0x2f8,iVar3,0xffffffff);
    678: LAB_140780444:
    679:     lVar5 = lStackX_20;
    680:   }

## TtmNotifyDeviceInput */ — reconstrucao/src/decompiled_03.c:691
reconstrucao/src/decompiled_03.c:691:46: error: ‘_DAT_fffff78000000008’ undeclared (first use in this function)

    688:         lVar5 = lVar7;
    689:       }
    690:       else {
    691:         *(undefined8 *)(lStack_38 + 0x260) = _DAT_fffff78000000008;
    692:         if (*(int *)(lStack_38 + 0x254) == -1) goto LAB_140780444;
    693:         lVar7 = lStack_38;
    694:         iVar3 = FUN_140787534(&uStack_30,lStackX_20);

## TtmNotifyDeviceInput */ — reconstrucao/src/decompiled_03.c:702
reconstrucao/src/decompiled_03.c:702:19: error: implicit declaration of function ‘FUN_1407878c0’; did you mean ‘FUN_1407898c0’? [-Wimplicit-function-declaration]

    699:               uVar6 = 1;
    700:             }
    701:           }
    702:           uVar2 = FUN_1407878c0(lVar5,uStack_30,4,0x54544941,uVar6);
    703:           goto LAB_140780448;
    704:         }
    705:         uVar4 = 0x324;

## TtmNotifyDeviceInput */ — reconstrucao/src/decompiled_03.c:713
reconstrucao/src/decompiled_03.c:713:19: error: passing argument 1 of ‘FUN_1409a24bc’ makes integer from pointer without a cast [-Wint-conversion]

    710:       iVar3 = -0x3ffffbab;
    711:       lVar5 = lVar7;
    712:     }
    713:     FUN_1409a24bc("TtmNotifyDeviceInput",uVar4,iVar3,0xffffffff);
    714:   }
    715: LAB_140780448:
    716:   FUN_1407846c4(param_1,param_2,param_3,cVar1,uVar2,uVar6);

## TtmNotifyDeviceInput */ — reconstrucao/src/decompiled_03.c:718
reconstrucao/src/decompiled_03.c:718:28: error: ‘DAT_140f06b20’ undeclared (first use in this function)

    715: LAB_140780448:
    716:   FUN_1407846c4(param_1,param_2,param_3,cVar1,uVar2,uVar6);
    717:   if (lVar5 != 0) {
    718:     ExReleaseResourceLite(&DAT_140f06b20);
    719:     KeLeaveCriticalRegion();
    720:   }
    721:   return;

## FUN_14078056c */ — reconstrucao/src/decompiled_03.c:740
reconstrucao/src/decompiled_03.c:740:19: error: passing argument 1 of ‘FUN_1409a24bc’ makes integer from pointer without a cast [-Wint-conversion]

    737:   lVar1 = lStackX_20;
    738:   if (cVar2 == '\0') {
    739:     uVar3 = 0xc0000225;
    740:     FUN_1409a24bc("TtmiAssignDevice",0x465,0xffffffff,0xc0000225);
    741:   }
    742:   else {
    743:     *(undefined4 *)(lStackX_20 + 0x254) = *(undefined4 *)(param_2 + 0x1c);

## FUN_14078062c */ — reconstrucao/src/decompiled_03.c:774
reconstrucao/src/decompiled_03.c:774:9: error: ‘_uStack_30’ undeclared (first use in this function); did you mean ‘uStack_30’?

    771:         puVar2 = (undefined8 *)*puVar2) {
    772:       if ((*(uint *)(puVar2 + 0x4b) & 8) == 0) {
    773:         uStack_20 = puVar2[3];
    774:         _uStack_30 = CONCAT44(*(undefined4 *)(puVar2 + 4),*(undefined4 *)(puVar2 + 2));
    775:         uStack_18 = puVar2[0x4c];
    776:         _uStack_28 = CONCAT44(*(uint *)(puVar2 + 0x4b),*(undefined4 *)(puVar2 + 9));
    777:         _uStack_38 = CONCAT44(*(undefined4 *)((longlong)puVar2 + 0x254),uVar1);

## FUN_14078062c */ — reconstrucao/src/decompiled_03.c:776
reconstrucao/src/decompiled_03.c:776:9: error: ‘_uStack_28’ undeclared (first use in this function); did you mean ‘uStack_28’?

    773:         uStack_20 = puVar2[3];
    774:         _uStack_30 = CONCAT44(*(undefined4 *)(puVar2 + 4),*(undefined4 *)(puVar2 + 2));
    775:         uStack_18 = puVar2[0x4c];
    776:         _uStack_28 = CONCAT44(*(uint *)(puVar2 + 0x4b),*(undefined4 *)(puVar2 + 9));
    777:         _uStack_38 = CONCAT44(*(undefined4 *)((longlong)puVar2 + 0x254),uVar1);
    778:         FUN_140784830(&uStack_38);
    779:       }

## FUN_14078062c */ — reconstrucao/src/decompiled_03.c:777
reconstrucao/src/decompiled_03.c:777:9: error: ‘_uStack_38’ undeclared (first use in this function); did you mean ‘uStack_38’?

    774:         _uStack_30 = CONCAT44(*(undefined4 *)(puVar2 + 4),*(undefined4 *)(puVar2 + 2));
    775:         uStack_18 = puVar2[0x4c];
    776:         _uStack_28 = CONCAT44(*(uint *)(puVar2 + 0x4b),*(undefined4 *)(puVar2 + 9));
    777:         _uStack_38 = CONCAT44(*(undefined4 *)((longlong)puVar2 + 0x254),uVar1);
    778:         FUN_140784830(&uStack_38);
    779:       }
    780:     }

## FUN_14078073c */ — reconstrucao/src/decompiled_03.c:821
reconstrucao/src/decompiled_03.c:821:47: error: passing argument 3 of ‘FUN_140781248’ makes integer from pointer without a cast [-Wint-conversion]

    818:       return 0;
    819:     }
    820:     if ((((byte)*(undefined4 *)(puVar2 + 0x4b) & 10) == 2) &&
    821:        (iVar1 = FUN_140781248(param_1,param_2,puVar2,0), iVar1 < 0)) break;
    822:     puVar2 = (undefined8 *)*puVar2;
    823:   }
    824:   FUN_1409a24bc("TtmiPublishDeviceEnumerationEvents",0x41e,iVar1,iVar1);

## FUN_14078073c */ — reconstrucao/src/decompiled_03.c:824
reconstrucao/src/decompiled_03.c:824:17: error: passing argument 1 of ‘FUN_1409a24bc’ makes integer from pointer without a cast [-Wint-conversion]

    821:        (iVar1 = FUN_140781248(param_1,param_2,puVar2,0), iVar1 < 0)) break;
    822:     puVar2 = (undefined8 *)*puVar2;
    823:   }
    824:   FUN_1409a24bc("TtmiPublishDeviceEnumerationEvents",0x41e,iVar1,iVar1);
    825:   return iVar1;
    826: }
    827: 

## FUN_1407807d0 */ — reconstrucao/src/decompiled_03.c:861
reconstrucao/src/decompiled_03.c:861:41: error: passing argument 2 of ‘FUN_140780a78’ makes integer from pointer without a cast [-Wint-conversion]

    858:       if ((uVar1 & 1) == 0) {
    859:         if ((uVar1 & 0x10) != 0) {
    860:           *(uint *)(plVar6 + 0x4b) = uVar1 & 0xffffffef;
    861:           uVar8 = FUN_140780a78(param_1,plVar6);
    862:           uVar7 = 4;
    863:           goto LAB_140780846;
    864:         }

## FUN_1407807d0 */ — reconstrucao/src/decompiled_03.c:861
reconstrucao/src/decompiled_03.c:861:17: error: invalid use of void expression

    858:       if ((uVar1 & 1) == 0) {
    859:         if ((uVar1 & 0x10) != 0) {
    860:           *(uint *)(plVar6 + 0x4b) = uVar1 & 0xffffffef;
    861:           uVar8 = FUN_140780a78(param_1,plVar6);
    862:           uVar7 = 4;
    863:           goto LAB_140780846;
    864:         }

## FUN_1407807d0 */ — reconstrucao/src/decompiled_03.c:868
reconstrucao/src/decompiled_03.c:868:39: error: passing argument 2 of ‘FUN_140780a78’ makes integer from pointer without a cast [-Wint-conversion]

    865:       }
    866:       else {
    867:         *(uint *)(plVar6 + 0x4b) = uVar1 & 0xfffffffe | 2;
    868:         uVar8 = FUN_140780a78(param_1,plVar6);
    869:         uVar7 = 3;
    870: LAB_140780846:
    871:         FUN_140781248(uVar8,0,plVar6,uVar7);

## FUN_1407807d0 */ — reconstrucao/src/decompiled_03.c:868
reconstrucao/src/decompiled_03.c:868:15: error: invalid use of void expression

    865:       }
    866:       else {
    867:         *(uint *)(plVar6 + 0x4b) = uVar1 & 0xfffffffe | 2;
    868:         uVar8 = FUN_140780a78(param_1,plVar6);
    869:         uVar7 = 3;
    870: LAB_140780846:
    871:         FUN_140781248(uVar8,0,plVar6,uVar7);

## FUN_1407807d0 */ — reconstrucao/src/decompiled_03.c:871
reconstrucao/src/decompiled_03.c:871:31: error: passing argument 3 of ‘FUN_140781248’ makes integer from pointer without a cast [-Wint-conversion]

    868:         uVar8 = FUN_140780a78(param_1,plVar6);
    869:         uVar7 = 3;
    870: LAB_140780846:
    871:         FUN_140781248(uVar8,0,plVar6,uVar7);
    872:       }
    873:       if ((*(uint *)(plVar6 + 0x4b) & 0x20) != 0) {
    874:         *(uint *)(plVar6 + 0x4b) = *(uint *)(plVar6 + 0x4b) & 0xffffffdf;

## FUN_1407807d0 */ — reconstrucao/src/decompiled_03.c:875
reconstrucao/src/decompiled_03.c:875:31: error: passing argument 2 of ‘FUN_140780aa0’ makes integer from pointer without a cast [-Wint-conversion]

    872:       }
    873:       if ((*(uint *)(plVar6 + 0x4b) & 0x20) != 0) {
    874:         *(uint *)(plVar6 + 0x4b) = *(uint *)(plVar6 + 0x4b) & 0xffffffdf;
    875:         FUN_140780aa0(param_1,plVar6);
    876:       }
    877:     }
    878:     if (((byte)*(uint *)(plVar6 + 0x4b) & 0x44) == 0x40) {

## FUN_1407807d0 */ — reconstrucao/src/decompiled_03.c:880
reconstrucao/src/decompiled_03.c:880:37: error: passing argument 2 of ‘FUN_140781420’ makes integer from pointer without a cast [-Wint-conversion]

    877:     }
    878:     if (((byte)*(uint *)(plVar6 + 0x4b) & 0x44) == 0x40) {
    879:       *(uint *)(plVar6 + 0x4b) = *(uint *)(plVar6 + 0x4b) & 0xffffffbf;
    880:       cVar4 = FUN_140781420(param_1,plVar6);
    881:       if (cVar4 != '\0') {
    882:         *(uint *)(plVar6 + 0x4b) = *(uint *)(plVar6 + 0x4b) | 0x40;
    883:         *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x1000;

## FUN_1407807d0 */ — reconstrucao/src/decompiled_03.c:891
reconstrucao/src/decompiled_03.c:891:33: error: passing argument 3 of ‘FUN_140781248’ makes integer from pointer without a cast [-Wint-conversion]

    888:     if ((uVar1 & 4) != 0) {
    889:       if ((uVar1 & 2) != 0) {
    890:         *(uint *)(plVar6 + 0x4b) = uVar1 | 8;
    891:         FUN_140781248(param_1,0,plVar6,5);
    892:       }
    893:       if (plVar6[5] != 0) {
    894:         uStack_18 = 0;

## FUN_1407807d0 */ — reconstrucao/src/decompiled_03.c:899
reconstrucao/src/decompiled_03.c:899:34: error: passing argument 2 of ‘FUN_1407815d4’ makes pointer from integer without a cast [-Wint-conversion]

    896:         uStack_30 = 0;
    897:         uStack_28 = 0;
    898:         uStack_20 = 0;
    899:         FUN_1407815d4(&uStack_38,param_1,plVar6,2,plVar6[5],0);
    900:         FUN_1406c4fb0(plVar6[3]);
    901:         FUN_140781754(&uStack_38,0);
    902:       }

## FUN_1407807d0 */ — reconstrucao/src/decompiled_03.c:899
reconstrucao/src/decompiled_03.c:899:42: error: passing argument 3 of ‘FUN_1407815d4’ makes integer from pointer without a cast [-Wint-conversion]

    896:         uStack_30 = 0;
    897:         uStack_28 = 0;
    898:         uStack_20 = 0;
    899:         FUN_1407815d4(&uStack_38,param_1,plVar6,2,plVar6[5],0);
    900:         FUN_1406c4fb0(plVar6[3]);
    901:         FUN_140781754(&uStack_38,0);
    902:       }

## FUN_1407807d0 */ — reconstrucao/src/decompiled_03.c:901
reconstrucao/src/decompiled_03.c:901:23: error: passing argument 1 of ‘FUN_140781754’ makes integer from pointer without a cast [-Wint-conversion]

    898:         uStack_20 = 0;
    899:         FUN_1407815d4(&uStack_38,param_1,plVar6,2,plVar6[5],0);
    900:         FUN_1406c4fb0(plVar6[3]);
    901:         FUN_140781754(&uStack_38,0);
    902:       }
    903:       lVar2 = *plVar6;
    904:       plVar5 = (longlong *)plVar6[1];

## FUN_1407807d0 */ — reconstrucao/src/decompiled_03.c:906
reconstrucao/src/decompiled_03.c:906:26: error: implicit declaration of function ‘swi’ [-Wimplicit-function-declaration]

    903:       lVar2 = *plVar6;
    904:       plVar5 = (longlong *)plVar6[1];
    905:       if ((*(longlong **)(lVar2 + 8) != plVar6) || ((longlong *)*plVar5 != plVar6)) {
    906:         pcVar3 = (code *)swi(0x29);
    907:         (*pcVar3)(3);
    908:         pcVar3 = (code *)swi(3);
    909:         (*pcVar3)();

## FUN_1407809b4 */ — reconstrucao/src/decompiled_03.c:951
reconstrucao/src/decompiled_03.c:951:17: error: passing argument 1 of ‘FUN_1409a24bc’ makes integer from pointer without a cast [-Wint-conversion]

    948:     uVar5 = 0xc000000d;
    949:     uVar4 = 0x53b;
    950:   }
    951:   FUN_1409a24bc("TtmiSetInputWakeCapability",uVar4,0xffffffff,uVar5);
    952:   return uVar5;
    953: }
    954: 

## FUN_140780aa0 */ — reconstrucao/src/decompiled_03.c:989
reconstrucao/src/decompiled_03.c:989:30: error: passing argument 2 of ‘FUN_1407815d4’ makes pointer from integer without a cast [-Wint-conversion]

    986:     uStack_28 = 0;
    987:     uStack_20 = 0;
    988:     uStack_18 = 0;
    989:     FUN_1407815d4(&uStack_38,param_1,param_2,1,*(longlong *)(param_2 + 0x30),
    990:                   *(undefined4 *)(param_2 + 0x254));
    991:     iVar1 = FUN_1406c4fb0(*(undefined8 *)(param_2 + 0x18),*(undefined4 *)(param_2 + 0x254));
    992:     FUN_140781754(&uStack_38,iVar1);

## FUN_140780aa0 */ — reconstrucao/src/decompiled_03.c:991
reconstrucao/src/decompiled_03.c:991:11: error: invalid use of void expression

    988:     uStack_18 = 0;
    989:     FUN_1407815d4(&uStack_38,param_1,param_2,1,*(longlong *)(param_2 + 0x30),
    990:                   *(undefined4 *)(param_2 + 0x254));
    991:     iVar1 = FUN_1406c4fb0(*(undefined8 *)(param_2 + 0x18),*(undefined4 *)(param_2 + 0x254));
    992:     FUN_140781754(&uStack_38,iVar1);
    993:     if (iVar1 < 0) {
    994:       FUN_1409a24bc("TtmpCallAssignedToTerminal",0x94c,iVar1,0xffffffff);

## FUN_140780aa0 */ — reconstrucao/src/decompiled_03.c:992
reconstrucao/src/decompiled_03.c:992:19: error: passing argument 1 of ‘FUN_140781754’ makes integer from pointer without a cast [-Wint-conversion]

    989:     FUN_1407815d4(&uStack_38,param_1,param_2,1,*(longlong *)(param_2 + 0x30),
    990:                   *(undefined4 *)(param_2 + 0x254));
    991:     iVar1 = FUN_1406c4fb0(*(undefined8 *)(param_2 + 0x18),*(undefined4 *)(param_2 + 0x254));
    992:     FUN_140781754(&uStack_38,iVar1);
    993:     if (iVar1 < 0) {
    994:       FUN_1409a24bc("TtmpCallAssignedToTerminal",0x94c,iVar1,0xffffffff);
    995:     }

## FUN_140780aa0 */ — reconstrucao/src/decompiled_03.c:994
reconstrucao/src/decompiled_03.c:994:21: error: passing argument 1 of ‘FUN_1409a24bc’ makes integer from pointer without a cast [-Wint-conversion]

    991:     iVar1 = FUN_1406c4fb0(*(undefined8 *)(param_2 + 0x18),*(undefined4 *)(param_2 + 0x254));
    992:     FUN_140781754(&uStack_38,iVar1);
    993:     if (iVar1 < 0) {
    994:       FUN_1409a24bc("TtmpCallAssignedToTerminal",0x94c,iVar1,0xffffffff);
    995:     }
    996:   }
    997:   return;

## FUN_140780b3c */ — reconstrucao/src/decompiled_03.c:1017
reconstrucao/src/decompiled_03.c:1017:48: error: passing argument 5 of ‘FUN_1407815d4’ makes integer from pointer without a cast [-Wint-conversion]

    1014:     uStack_28 = 0;
    1015:     uStack_20 = 0;
    1016:     uStack_18 = 0;
    1017:     FUN_1407815d4(&uStack_38,param_1,param_2,5,FUN_1405dda80,param_3);
    1018:     FUN_1405dda80(param_3,*param_1);
    1019:     FUN_140781754(&uStack_38,0);
    1020:   }

## FUN_140780b3c */ — reconstrucao/src/decompiled_03.c:1019
reconstrucao/src/decompiled_03.c:1019:19: error: passing argument 1 of ‘FUN_140781754’ makes integer from pointer without a cast [-Wint-conversion]

    1016:     uStack_18 = 0;
    1017:     FUN_1407815d4(&uStack_38,param_1,param_2,5,FUN_1405dda80,param_3);
    1018:     FUN_1405dda80(param_3,*param_1);
    1019:     FUN_140781754(&uStack_38,0);
    1020:   }
    1021:   return;
    1022: }

## FUN_140780bbc */ — reconstrucao/src/decompiled_03.c:1042
reconstrucao/src/decompiled_03.c:1042:30: error: passing argument 2 of ‘FUN_1407815d4’ makes pointer from integer without a cast [-Wint-conversion]

    1039:     uStack_28 = 0;
    1040:     uStack_20 = 0;
    1041:     uStack_18 = 0;
    1042:     FUN_1407815d4(&uStack_38,param_1,param_2,4,*(longlong *)(param_2 + 0x38),param_3);
    1043:     iVar1 = FUN_1406c4fb0(*(undefined8 *)(param_2 + 0x18),param_3,*(undefined4 *)(param_1 + 0x78));
    1044:     FUN_140781754(&uStack_38,iVar1);
    1045:     if (iVar1 < 0) {

## FUN_140780bbc */ — reconstrucao/src/decompiled_03.c:1043
reconstrucao/src/decompiled_03.c:1043:11: error: invalid use of void expression

    1040:     uStack_20 = 0;
    1041:     uStack_18 = 0;
    1042:     FUN_1407815d4(&uStack_38,param_1,param_2,4,*(longlong *)(param_2 + 0x38),param_3);
    1043:     iVar1 = FUN_1406c4fb0(*(undefined8 *)(param_2 + 0x18),param_3,*(undefined4 *)(param_1 + 0x78));
    1044:     FUN_140781754(&uStack_38,iVar1);
    1045:     if (iVar1 < 0) {
    1046:       FUN_1409a24bc("TtmpCallSetDisplayState",0x988,iVar1,0xffffffff);

## FUN_140780bbc */ — reconstrucao/src/decompiled_03.c:1044
reconstrucao/src/decompiled_03.c:1044:19: error: passing argument 1 of ‘FUN_140781754’ makes integer from pointer without a cast [-Wint-conversion]

    1041:     uStack_18 = 0;
    1042:     FUN_1407815d4(&uStack_38,param_1,param_2,4,*(longlong *)(param_2 + 0x38),param_3);
    1043:     iVar1 = FUN_1406c4fb0(*(undefined8 *)(param_2 + 0x18),param_3,*(undefined4 *)(param_1 + 0x78));
    1044:     FUN_140781754(&uStack_38,iVar1);
    1045:     if (iVar1 < 0) {
    1046:       FUN_1409a24bc("TtmpCallSetDisplayState",0x988,iVar1,0xffffffff);
    1047:     }

## FUN_140780bbc */ — reconstrucao/src/decompiled_03.c:1046
reconstrucao/src/decompiled_03.c:1046:21: error: passing argument 1 of ‘FUN_1409a24bc’ makes integer from pointer without a cast [-Wint-conversion]

    1043:     iVar1 = FUN_1406c4fb0(*(undefined8 *)(param_2 + 0x18),param_3,*(undefined4 *)(param_1 + 0x78));
    1044:     FUN_140781754(&uStack_38,iVar1);
    1045:     if (iVar1 < 0) {
    1046:       FUN_1409a24bc("TtmpCallSetDisplayState",0x988,iVar1,0xffffffff);
    1047:     }
    1048:   }
    1049:   return;

## FUN_140780c6c */ — reconstrucao/src/decompiled_03.c:1070
reconstrucao/src/decompiled_03.c:1070:30: error: passing argument 2 of ‘FUN_1407815d4’ makes pointer from integer without a cast [-Wint-conversion]

    1067:     uStack_28 = 0;
    1068:     uStack_20 = 0;
    1069:     uStack_18 = 0;
    1070:     FUN_1407815d4(&uStack_38,param_1,param_2,3,*(longlong *)(param_2 + 0x40),param_3);
    1071:     iVar1 = FUN_1406c4fb0(*(undefined8 *)(param_2 + 0x18),param_3);
    1072:     FUN_140781754(&uStack_38,iVar1);
    1073:     if (iVar1 < 0) {

## FUN_140780c6c */ — reconstrucao/src/decompiled_03.c:1071
reconstrucao/src/decompiled_03.c:1071:11: error: invalid use of void expression

    1068:     uStack_20 = 0;
    1069:     uStack_18 = 0;
    1070:     FUN_1407815d4(&uStack_38,param_1,param_2,3,*(longlong *)(param_2 + 0x40),param_3);
    1071:     iVar1 = FUN_1406c4fb0(*(undefined8 *)(param_2 + 0x18),param_3);
    1072:     FUN_140781754(&uStack_38,iVar1);
    1073:     if (iVar1 < 0) {
    1074:       FUN_1409a24bc("TtmpCallSetInputMode",0x9c7,iVar1,0xffffffff);

## FUN_140780c6c */ — reconstrucao/src/decompiled_03.c:1072
reconstrucao/src/decompiled_03.c:1072:19: error: passing argument 1 of ‘FUN_140781754’ makes integer from pointer without a cast [-Wint-conversion]

    1069:     uStack_18 = 0;
    1070:     FUN_1407815d4(&uStack_38,param_1,param_2,3,*(longlong *)(param_2 + 0x40),param_3);
    1071:     iVar1 = FUN_1406c4fb0(*(undefined8 *)(param_2 + 0x18),param_3);
    1072:     FUN_140781754(&uStack_38,iVar1);
    1073:     if (iVar1 < 0) {
    1074:       FUN_1409a24bc("TtmpCallSetInputMode",0x9c7,iVar1,0xffffffff);
    1075:     }

## FUN_140780c6c */ — reconstrucao/src/decompiled_03.c:1074
reconstrucao/src/decompiled_03.c:1074:21: error: passing argument 1 of ‘FUN_1409a24bc’ makes integer from pointer without a cast [-Wint-conversion]

    1071:     iVar1 = FUN_1406c4fb0(*(undefined8 *)(param_2 + 0x18),param_3);
    1072:     FUN_140781754(&uStack_38,iVar1);
    1073:     if (iVar1 < 0) {
    1074:       FUN_1409a24bc("TtmpCallSetInputMode",0x9c7,iVar1,0xffffffff);
    1075:     }
    1076:   }
    1077:   return;

## FUN_140780d0c */ — reconstrucao/src/decompiled_03.c:1106
reconstrucao/src/decompiled_03.c:1106:18: error: ‘SystemReserved1’ undeclared (first use in this function)

    1103:     uStack_50 = 0x1a0;
    1104:     uStack_28 = 0;
    1105:     uStack_10 = 0;
    1106:     pvStack_38 = SystemReserved1[0xf];
    1107:     puStack_18 = &uStack_68;
    1108:     pcStack_20 = FUN_140780db0;
    1109:     uStack_58 = param_3;

## FUN_140780d0c */ — reconstrucao/src/decompiled_03.c:1108
reconstrucao/src/decompiled_03.c:1108:18: error: ‘FUN_140780db0’ undeclared (first use in this function); did you mean ‘FUN_140787db0’?

    1105:     uStack_10 = 0;
    1106:     pvStack_38 = SystemReserved1[0xf];
    1107:     puStack_18 = &uStack_68;
    1108:     pcStack_20 = FUN_140780db0;
    1109:     uStack_58 = param_3;
    1110:     uStack_54 = param_2;
    1111:     uStack_30 = param_4;

## FUN_140780db0 */ — reconstrucao/src/decompiled_03.c:1119
reconstrucao/src/decompiled_03.c:1119:1: error: return type defaults to ‘int’ [-Wimplicit-int]

    1116: 
    1117: /* Ghidra label: FUN_140780db0 */
    1118: /* Ghidra address: 140780db0 */
    1119: FUN_140780db0(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
    1120:              undefined8 param_5,undefined8 param_6)
    1121: 
    1122: {

## FUN_140780db0 */ — reconstrucao/src/decompiled_03.c:1137
reconstrucao/src/decompiled_03.c:1137:10: error: ‘DAT_140e67b50’ undeclared (first use in this function)

    1134:   }
    1135:   else {
    1136:     iVar1 = aiStack_18[0];
    1137:     if ((DAT_140e67b50 != '\0') && (aiStack_18[0] == 0)) {
    1138:                     /* WARNING: Subroutine does not return */
    1139:       KeBugCheckEx(param_2,param_3,param_4,param_5,param_6);
    1140:     }

## FUN_140780ec0 */ — reconstrucao/src/decompiled_03.c:1170
reconstrucao/src/decompiled_03.c:1170:15: error: ‘DAT_140e0a740’ undeclared (first use in this function)

    1167:   undefined4 uStack_260;
    1168:   ulonglong uStack_38;
    1169:   
    1170:   uStack_38 = DAT_140e0a740 ^ (ulonglong)auStack_2d8;
    1171:   FUN_1406d1200(auStack_2a8,0,0x268);
    1172:   alStack_2b8[0] = 0;
    1173:   plVar7 = (longlong *)(((longlong)param_2 + 8) * 0x10 + param_1);

## FUN_140780ec0 */ — reconstrucao/src/decompiled_03.c:1183
reconstrucao/src/decompiled_03.c:1183:23: error: passing argument 1 of ‘FUN_1409a24bc’ makes integer from pointer without a cast [-Wint-conversion]

    1180:       cVar5 = FUN_140781064(param_1,(int)plVar6[4],alStack_2b8);
    1181:       lVar1 = alStack_2b8[0];
    1182:       if (cVar5 == '\0') {
    1183:         FUN_1409a24bc("TtmpCommitTerminalDisplayStateUpdateWorker",0xbaa,0xc0000225,0xffffffff);
    1184:       }
    1185:       else {
    1186:         if ((lStack_270 == 0) && (*(longlong *)(alStack_2b8[0] + 0x38) != 0)) {

## FUN_140780ec0 */ — reconstrucao/src/decompiled_03.c:1194
reconstrucao/src/decompiled_03.c:1194:35: error: passing argument 2 of ‘FUN_140781368’ makes integer from pointer without a cast [-Wint-conversion]

    1191: LAB_140780fa0:
    1192:           if ((*(longlong *)(alStack_2b8[0] + 0x38) != 0) &&
    1193:              (*(longlong *)(alStack_2b8[0] + 0x38) != lStack_270)) {
    1194:             FUN_140781368(param_1,auStack_2a8,param_2);
    1195:             uStack_298 = *(undefined4 *)(lVar1 + 0x10);
    1196:             uStack_260 = *(undefined4 *)(lVar1 + 0x48);
    1197:             lStack_270 = *(longlong *)(lVar1 + 0x38);

## FUN_140780ec0 */ — reconstrucao/src/decompiled_03.c:1218
reconstrucao/src/decompiled_03.c:1218:29: error: passing argument 2 of ‘FUN_140781368’ makes integer from pointer without a cast [-Wint-conversion]

    1215:       plVar6 = (longlong *)*plVar2;
    1216:     } while (plVar6 != plVar7);
    1217:     if (bVar4) {
    1218:       FUN_140781368(param_1,auStack_2a8,param_2);
    1219:     }
    1220:   }
    1221:   return;

## FUN_140781064 */ — reconstrucao/src/decompiled_03.c:1238
reconstrucao/src/decompiled_03.c:1238:18: error: assignment to ‘undefined8’ {aka ‘long unsigned int’} from ‘undefined8 *’ {aka ‘long unsigned int *’} makes integer from pointer without a cast [-Wint-conversion]

    1235:     if (puVar1 == (undefined8 *)(param_1 + 0x60)) {
    1236: LAB_140781080:
    1237:       if (param_3 != (undefined8 *)0x0) {
    1238:         *param_3 = puVar2;
    1239:       }
    1240:       return CONCAT71((int7)((ulonglong)puVar1 >> 8),puVar2 != (undefined8 *)0x0);
    1241:     }

## FUN_140781098 */ — reconstrucao/src/decompiled_03.c:1264
reconstrucao/src/decompiled_03.c:1264:18: error: assignment to ‘undefined8’ {aka ‘long unsigned int’} from ‘undefined8 *’ {aka ‘long unsigned int *’} makes integer from pointer without a cast [-Wint-conversion]

    1261:     if (puVar1 == (undefined8 *)(param_1 + 0x60)) {
    1262: LAB_1407810ba:
    1263:       if (param_4 != (undefined8 *)0x0) {
    1264:         *param_4 = puVar2;
    1265:       }
    1266:       return CONCAT71((int7)((ulonglong)puVar1 >> 8),puVar2 != (undefined8 *)0x0);
    1267:     }

## FUN_140781128 */ — reconstrucao/src/decompiled_03.c:1330
reconstrucao/src/decompiled_03.c:1330:15: error: ‘DAT_140e0a740’ undeclared (first use in this function)

    1327:   undefined8 uStack_20;
    1328:   ulonglong uStack_18;
    1329:   
    1330:   uStack_18 = DAT_140e0a740 ^ (ulonglong)auStack_b8;
    1331:   uStack_3c = 0;
    1332:   uStack_80 = 0;
    1333:   auStack_88[0] = 0;

## FUN_140781128 */ — reconstrucao/src/decompiled_03.c:1349
reconstrucao/src/decompiled_03.c:1349:9: error: invalid use of void expression

    1346:   uStack_40 = 0x240;
    1347:   uStack_38 = 0;
    1348:   uStack_30 = 0;
    1349:   uVar2 = ZwOpenKey(&uStack_80,0x20019,&uStack_58);
    1350:   if (-1 < (int)uVar2) {
    1351:     RtlInitUnicodeString(&uStack_68,param_2);
    1352:     puStack_90 = auStack_88;

## FUN_140781128 */ — reconstrucao/src/decompiled_03.c:1354
reconstrucao/src/decompiled_03.c:1354:11: error: invalid use of void expression

    1351:     RtlInitUnicodeString(&uStack_68,param_2);
    1352:     puStack_90 = auStack_88;
    1353:     uStack_98 = 0x10;
    1354:     iVar1 = ZwQueryValueKey(uStack_80,&uStack_68,2,&uStack_28);
    1355:     uVar2 = ZwClose(uStack_80);
    1356:     if (((-1 < iVar1) && (uStack_28._4_4_ == 4)) && ((int)uStack_20 == 4)) {
    1357:       *param_3 = uStack_20._4_4_;

## FUN_140781128 */ — reconstrucao/src/decompiled_03.c:1355
reconstrucao/src/decompiled_03.c:1355:11: error: invalid use of void expression

    1352:     puStack_90 = auStack_88;
    1353:     uStack_98 = 0x10;
    1354:     iVar1 = ZwQueryValueKey(uStack_80,&uStack_68,2,&uStack_28);
    1355:     uVar2 = ZwClose(uStack_80);
    1356:     if (((-1 < iVar1) && (uStack_28._4_4_ == 4)) && ((int)uStack_20 == 4)) {
    1357:       *param_3 = uStack_20._4_4_;
    1358:       return CONCAT71((uint7)(uint3)((ulonglong)uStack_20 >> 0x28),1);

## FUN_140781128 */ — reconstrucao/src/decompiled_03.c:1356
reconstrucao/src/decompiled_03.c:1356:36: error: request for member ‘_4_4_’ in something not a structure or union

    1353:     uStack_98 = 0x10;
    1354:     iVar1 = ZwQueryValueKey(uStack_80,&uStack_68,2,&uStack_28);
    1355:     uVar2 = ZwClose(uStack_80);
    1356:     if (((-1 < iVar1) && (uStack_28._4_4_ == 4)) && ((int)uStack_20 == 4)) {
    1357:       *param_3 = uStack_20._4_4_;
    1358:       return CONCAT71((uint7)(uint3)((ulonglong)uStack_20 >> 0x28),1);
    1359:     }

## FUN_140781128 */ — reconstrucao/src/decompiled_03.c:1357
reconstrucao/src/decompiled_03.c:1357:27: error: request for member ‘_4_4_’ in something not a structure or union

    1354:     iVar1 = ZwQueryValueKey(uStack_80,&uStack_68,2,&uStack_28);
    1355:     uVar2 = ZwClose(uStack_80);
    1356:     if (((-1 < iVar1) && (uStack_28._4_4_ == 4)) && ((int)uStack_20 == 4)) {
    1357:       *param_3 = uStack_20._4_4_;
    1358:       return CONCAT71((uint7)(uint3)((ulonglong)uStack_20 >> 0x28),1);
    1359:     }
    1360:   }

## FUN_140781248 */ — reconstrucao/src/decompiled_03.c:1408
reconstrucao/src/decompiled_03.c:1408:27: error: passing argument 2 of ‘FUN_1407820dc’ makes integer from pointer without a cast [-Wint-conversion]

    1405:     FUN_140784268();
    1406:   }
    1407:   if (param_2 == 0) {
    1408:     FUN_1407820dc(param_1,&iStack_238);
    1409:   }
    1410:   else {
    1411:     uVar1 = FUN_140788934(param_2);

## FUN_140781368 */ — reconstrucao/src/decompiled_03.c:1425
reconstrucao/src/decompiled_03.c:1425:21: error: passing argument 1 of ‘FUN_140780b3c’ makes pointer from integer without a cast [-Wint-conversion]

    1422:   
    1423:   if (*(longlong *)(param_2 + 0x38) != 0) {
    1424:     if ((*(longlong *)(param_2 + 0x18) != 0xffffffff) && (param_3 < 2)) {
    1425:       FUN_140780b3c(param_1,param_2,0);
    1426:     }
    1427:     FUN_140780bbc(param_1,param_2,param_3);
    1428:     if (*(longlong *)(param_2 + 0x18) == 0xffffffff) {

## FUN_140781368 */ — reconstrucao/src/decompiled_03.c:1436
reconstrucao/src/decompiled_03.c:1436:23: error: passing argument 1 of ‘FUN_140780b3c’ makes pointer from integer without a cast [-Wint-conversion]

    1433:     else {
    1434:       uVar1 = 2;
    1435:       if (param_3 == 2) {
    1436:         FUN_140780b3c(param_1,param_2,2);
    1437:       }
    1438:       else if (param_3 == 3) {
    1439:         FUN_140780b3c(param_1,param_2,1);

## FUN_140781368 */ — reconstrucao/src/decompiled_03.c:1439
reconstrucao/src/decompiled_03.c:1439:23: error: passing argument 1 of ‘FUN_140780b3c’ makes pointer from integer without a cast [-Wint-conversion]

    1436:         FUN_140780b3c(param_1,param_2,2);
    1437:       }
    1438:       else if (param_3 == 3) {
    1439:         FUN_140780b3c(param_1,param_2,1);
    1440:         uVar1 = 1;
    1441:       }
    1442:       else {

## FUN_140781420 */ — reconstrucao/src/decompiled_03.c:1467
reconstrucao/src/decompiled_03.c:1467:21: error: passing argument 1 of ‘FUN_1409a24bc’ makes integer from pointer without a cast [-Wint-conversion]

    1464:     iVar2 = FUN_140787534(&lStackX_10,param_1);
    1465:     lVar1 = lStackX_10;
    1466:     if (iVar2 < 0) {
    1467:       FUN_1409a24bc("TtmpPushTerminalState",0xc6b,iVar2,0xffffffff);
    1468:     }
    1469:     else if (((*(uint *)(param_1 + 4) & 8) == 0) && (*(int *)(lStackX_10 + 0x114) - 2U < 2)) {
    1470:       uVar3 = 1;

## FUN_1407814f0 */ — reconstrucao/src/decompiled_03.c:1519
reconstrucao/src/decompiled_03.c:1519:21: error: passing argument 1 of ‘FUN_1409a24bc’ makes integer from pointer without a cast [-Wint-conversion]

    1516:       uVar5 = 0xb56;
    1517:       uVar7 = 0xc000009a;
    1518: LAB_14078154d:
    1519:       FUN_1409a24bc("TtmpQueueTerminalDisplayStateOntoDevice",uVar5,uVar7,0xffffffff);
    1520:     }
    1521:     else {
    1522:       plVar4[2] = uVar1;

## FUN_1407815d4 */ — reconstrucao/src/decompiled_03.c:1556
reconstrucao/src/decompiled_03.c:1556:7: error: ‘DAT_140e67b51’ undeclared (first use in this function)

    1553:   undefined4 uStack_88;
    1554:   undefined1 auStack_84 [92];
    1555:   
    1556:   if (DAT_140e67b51 == '\0') {
    1557:     puVar7 = &DAT_140e085d0;
    1558:     lVar5 = 6;
    1559:     do {

## FUN_1407815d4 */ — reconstrucao/src/decompiled_03.c:1557
reconstrucao/src/decompiled_03.c:1557:15: error: ‘DAT_140e085d0’ undeclared (first use in this function)

    1554:   undefined1 auStack_84 [92];
    1555:   
    1556:   if (DAT_140e67b51 == '\0') {
    1557:     puVar7 = &DAT_140e085d0;
    1558:     lVar5 = 6;
    1559:     do {
    1560:       cVar1 = FUN_140781128();

## FUN_140ac2d78 */ — reconstrucao/src/decompiled_04.c:38
reconstrucao/src/decompiled_04.c:38:9: error: invalid use of void expression

    35:   longlong lVar2;
    36:   longlong lVar3;
    37:   
    38:   lVar2 = FUN_14041b0bc(param_1,8);
    39:   lVar1 = *(longlong *)(lVar2 + 8);
    40:   do {
    41:     lVar3 = lVar1;

## FUN_140ac2d78 */ — reconstrucao/src/decompiled_04.c:44
reconstrucao/src/decompiled_04.c:44:21: error: passing argument 1 of ‘FUN_14031db18’ makes pointer from integer without a cast [-Wint-conversion]

    41:     lVar3 = lVar1;
    42:     if (*(int *)(lVar1 + 0xb0) == 1) {
    43: LAB_140ac2dd5:
    44:       FUN_14031db18(lVar3,0,0);
    45:       return lVar3;
    46:     }
    47:     lVar3 = FUN_14031d8f0(0,0);

## FUN_140ac2d78 */ — reconstrucao/src/decompiled_04.c:47
reconstrucao/src/decompiled_04.c:47:11: error: assignment to ‘longlong’ {aka ‘long int’} from ‘longlong *’ {aka ‘long int *’} makes integer from pointer without a cast [-Wint-conversion]

    44:       FUN_14031db18(lVar3,0,0);
    45:       return lVar3;
    46:     }
    47:     lVar3 = FUN_14031d8f0(0,0);
    48:     if (lVar3 != 0) {
    49:       FUN_14033e740(lVar1);
    50:       *(longlong *)(lVar2 + 8) = lVar3;

## FUN_140ac2e00 */ — reconstrucao/src/decompiled_04.c:160
reconstrucao/src/decompiled_04.c:160:15: error: ‘DAT_140e0a740’ undeclared (first use in this function)

    157:   undefined4 uStack_b0;
    158:   ulonglong uStack_58;
    159:   
    160:   uStack_58 = DAT_140e0a740 ^ (ulonglong)auStack_388;
    161:   pwStack_360 = (wchar_t *)0x0;
    162:   iStack_2d4 = 1;
    163:   lStack_2e0 = 0;

## FUN_140ac2e00 */ — reconstrucao/src/decompiled_04.c:234
reconstrucao/src/decompiled_04.c:234:48: error: request for member ‘_1_7_’ in something not a structure or union

    231:   uStack_e8 = 0x1000000;
    232:   uStack_c8 = 0x120;
    233:   uStack_b0 = 0x1000000;
    234:   pwStack_360 = (wchar_t *)CONCAT71(pwStack_360._1_7_,1);
    235:   iVar5 = FUN_14093ded0(0xc0000000,lStack_2e0,auStack_1e8,0);
    236:   if (iVar5 < 0) goto LAB_140ac33b1;
    237:   if ((lStack_2b0 != 0) && ((ushort)uStack_2b8 < 3)) {

## FUN_140ac2e00 */ — reconstrucao/src/decompiled_04.c:270
reconstrucao/src/decompiled_04.c:270:20: error: ‘DAT_140f8c958’ undeclared (first use in this function)

    267:   plStack_208 = plStack_2a0;
    268:   uStack_220 = 2;
    269:   uStack_21c = 3;
    270:   for (; lVar11 != DAT_140f8c958; lVar11 = *(longlong *)(lVar11 + 0x10)) {
    271:     if (*(longlong *)(*(longlong *)(lVar11 + 0x20) + 8) == DAT_140f8adc0) {
    272:       RtlInitUnicodeString(auStack_240,L"SWD\\");
    273:       cVar4 = RtlPrefixUnicodeString(auStack_240,lVar11 + 0x28);

## FUN_140ac2e00 */ — reconstrucao/src/decompiled_04.c:271
reconstrucao/src/decompiled_04.c:271:60: error: ‘DAT_140f8adc0’ undeclared (first use in this function)

    268:   uStack_220 = 2;
    269:   uStack_21c = 3;
    270:   for (; lVar11 != DAT_140f8c958; lVar11 = *(longlong *)(lVar11 + 0x10)) {
    271:     if (*(longlong *)(*(longlong *)(lVar11 + 0x20) + 8) == DAT_140f8adc0) {
    272:       RtlInitUnicodeString(auStack_240,L"SWD\\");
    273:       cVar4 = RtlPrefixUnicodeString(auStack_240,lVar11 + 0x28);
    274:       if (cVar4 != '\0') {

## FUN_140ac2e00 */ — reconstrucao/src/decompiled_04.c:285
reconstrucao/src/decompiled_04.c:285:51: error: ‘DAT_140019790’ undeclared (first use in this function)

    282:               iVar5 = FUN_140a3034c(lStack_2b0,plStack_2a0);
    283:               if (iVar5 < 0) goto LAB_140ac33a4;
    284:               if ((auStack_2f0[0] & 8) == 0) {
    285:                 RtlInitUnicodeString(&uStack_270,&DAT_140019790);
    286:                 iVar5 = RtlHashUnicodeString(&uStack_270,1,0,&iStack_2f8);
    287:                 if (iVar5 < 0) goto LAB_140ac33a4;
    288:                 iVar16 = iStack_2f4 + iStack_2f8;

## FUN_140ac2e00 */ — reconstrucao/src/decompiled_04.c:286
reconstrucao/src/decompiled_04.c:286:46: error: passing argument 1 of ‘RtlHashUnicodeString’ from incompatible pointer type [-Wincompatible-pointer-types]

    283:               if (iVar5 < 0) goto LAB_140ac33a4;
    284:               if ((auStack_2f0[0] & 8) == 0) {
    285:                 RtlInitUnicodeString(&uStack_270,&DAT_140019790);
    286:                 iVar5 = RtlHashUnicodeString(&uStack_270,1,0,&iStack_2f8);
    287:                 if (iVar5 < 0) goto LAB_140ac33a4;
    288:                 iVar16 = iStack_2f4 + iStack_2f8;
    289:               }

## FUN_140ac2e00 */ — reconstrucao/src/decompiled_04.c:293
reconstrucao/src/decompiled_04.c:293:49: error: ‘DAT_140019778’ undeclared (first use in this function); did you mean ‘FUN_140b19778’?

    290:               else {
    291:                 iVar16 = iStack_2f4;
    292:               }
    293:               RtlInitUnicodeString(&uStack_270,&DAT_140019778);
    294:               iVar5 = RtlHashUnicodeString(&uStack_270,1,0,&iStack_2f8);
    295:               if (iVar5 < 0) goto LAB_140ac33a4;
    296:               iVar16 = iVar16 + iStack_2f8;

## FUN_140ac2e00 */ — reconstrucao/src/decompiled_04.c:294
reconstrucao/src/decompiled_04.c:294:44: error: passing argument 1 of ‘RtlHashUnicodeString’ from incompatible pointer type [-Wincompatible-pointer-types]

    291:                 iVar16 = iStack_2f4;
    292:               }
    293:               RtlInitUnicodeString(&uStack_270,&DAT_140019778);
    294:               iVar5 = RtlHashUnicodeString(&uStack_270,1,0,&iStack_2f8);
    295:               if (iVar5 < 0) goto LAB_140ac33a4;
    296:               iVar16 = iVar16 + iStack_2f8;
    297:               iStack_2f4 = iVar16;

## FUN_140ac2e00 */ — reconstrucao/src/decompiled_04.c:317
reconstrucao/src/decompiled_04.c:317:39: error: ‘DAT_140e66448’ undeclared (first use in this function)

    314:                 plStack_368 = (longlong *)&iStack_2d4;
    315:                 auStack_318[0] = uVar3;
    316:                 pwStack_360 = pwVar7;
    317:                 iVar5 = FUN_1408ddb20(DAT_140e66448,*(undefined8 *)(lVar11 + 0x30),0,*puStack_288);
    318:                 if (((iVar5 < 0) || (iStack_2d4 != 7)) || (auStack_318[0] < 2)) {
    319:                   *pwVar7 = L'\0';
    320:                   iVar5 = 0;

## FUN_140ac2e00 */ — reconstrucao/src/decompiled_04.c:385
reconstrucao/src/decompiled_04.c:385:56: error: request for member ‘_4_4_’ in something not a structure or union

    382:         uVar18 = (ulonglong)uStack_2c8;
    383:         do {
    384:           puStack_358 = auStack_318;
    385:           pwStack_360 = (wchar_t *)CONCAT44(pwStack_360._4_4_,(uint)uVar18);
    386:           plStack_368 = plVar10;
    387:           iVar5 = FUN_1409a9498(lVar11,lStack_2e0,0,0);
    388:           uVar3 = auStack_318[0];

## FUN_140ac2e00 */ — reconstrucao/src/decompiled_04.c:433
reconstrucao/src/decompiled_04.c:433:19: error: request for member ‘_0_4_’ in something not a structure or union

    430:         do {
    431:           lVar20 = lVar20 + 1;
    432:         } while (*(short *)(lStack_310 + lVar20 * 2) != 0);
    433:         uStack_230._0_4_ = CONCAT22(((short)lVar13 + 3 + (short)lVar20) * 2,(undefined2)uStack_230);
    434:         lStack_228 = ExAllocatePool2(0x100,(lVar12 + lVar20) * 2 + 4U & 0xffff,0x67727453);
    435:         if (lStack_228 == 0) {
    436:           iVar5 = -0x3fffff66;

## FUN_140ac2e00 */ — reconstrucao/src/decompiled_04.c:488
reconstrucao/src/decompiled_04.c:488:24: error: ‘DAT_140ef02c4’ undeclared (first use in this function)

    485:   if (lStack_2e0 != 0) {
    486:     ZwClose();
    487:   }
    488:   if ((iVar5 < 0) && ((DAT_140ef02c4 & 4) != 0)) {
    489:     pwStack_360 = (wchar_t *)CONCAT44(pwStack_360._4_4_,iVar5);
    490:     plStack_368 = (longlong *)lStack_280;
    491:     FUN_14039f2ac();

## FUN_140ac2e00 */ — reconstrucao/src/decompiled_04.c:489
reconstrucao/src/decompiled_04.c:489:50: error: request for member ‘_4_4_’ in something not a structure or union

    486:     ZwClose();
    487:   }
    488:   if ((iVar5 < 0) && ((DAT_140ef02c4 & 4) != 0)) {
    489:     pwStack_360 = (wchar_t *)CONCAT44(pwStack_360._4_4_,iVar5);
    490:     plStack_368 = (longlong *)lStack_280;
    491:     FUN_14039f2ac();
    492:   }

## FUN_140ac2e00 */ — reconstrucao/src/decompiled_04.c:516
reconstrucao/src/decompiled_04.c:516:49: error: request for member ‘_4_4_’ in something not a structure or union

    513:     puVar14 = (undefined4 *)((longlong)plStack_2e8 + uVar19 * 0x14);
    514:     while( true ) {
    515:       puStack_350 = auStack_318;
    516:       puStack_358 = (uint *)CONCAT44(puStack_358._4_4_,*(undefined4 *)((longlong)plVar15 + 4));
    517:       pwStack_360 = (wchar_t *)plVar15[1];
    518:       plStack_368 = plVar15;
    519:       iVar5 = FUN_1408dfe50(lStack_218,lStack_2e0,0,puVar14);

## FUN_140ac2e00 */ — reconstrucao/src/decompiled_04.c:554
reconstrucao/src/decompiled_04.c:554:45: error: request for member ‘_4_4_’ in something not a structure or union

    551:   lStack_340 = lStack_278;
    552:   lStack_348 = lStack_248;
    553:   puStack_350 = puStack_258;
    554:   puStack_358 = (uint *)CONCAT44(puStack_358._4_4_,auStack_2f0[0]);
    555:   plStack_368 = plStack_2a0;
    556:   iVar5 = FUN_14074541c(L"DRIVERENUM",*(undefined8 *)(*plStack_308 + 0x30),lStack_228,lStack_2b0);
    557:   if (lVar11 != 0) {

## FUN_140ac393c */ — reconstrucao/src/decompiled_04.c:654
reconstrucao/src/decompiled_04.c:654:7: error: ‘DAT_140e67b01’ undeclared (first use in this function)

    651:   wchar_t *pwVar11;
    652:   uint auStackX_8 [2];
    653:   
    654:   if (DAT_140e67b01 != '\0') {
    655:     cVar4 = EtwEventEnabled(DAT_140f085e0,&DAT_14001e1b8);
    656:     puVar3 = DAT_140fc7ad0;
    657:     if (cVar4 != '\0') {

## FUN_140ac393c */ — reconstrucao/src/decompiled_04.c:655
reconstrucao/src/decompiled_04.c:655:29: error: ‘DAT_140f085e0’ undeclared (first use in this function); did you mean ‘FUN_1407085e0’?

    652:   uint auStackX_8 [2];
    653:   
    654:   if (DAT_140e67b01 != '\0') {
    655:     cVar4 = EtwEventEnabled(DAT_140f085e0,&DAT_14001e1b8);
    656:     puVar3 = DAT_140fc7ad0;
    657:     if (cVar4 != '\0') {
    658:       if (DAT_140fc7ad0 == (uint *)0x0) {

## FUN_140ac393c */ — reconstrucao/src/decompiled_04.c:655
reconstrucao/src/decompiled_04.c:655:44: error: ‘DAT_14001e1b8’ undeclared (first use in this function); did you mean ‘FUN_14081e1b8’?

    652:   uint auStackX_8 [2];
    653:   
    654:   if (DAT_140e67b01 != '\0') {
    655:     cVar4 = EtwEventEnabled(DAT_140f085e0,&DAT_14001e1b8);
    656:     puVar3 = DAT_140fc7ad0;
    657:     if (cVar4 != '\0') {
    658:       if (DAT_140fc7ad0 == (uint *)0x0) {

## FUN_140ac393c */ — reconstrucao/src/decompiled_04.c:656
reconstrucao/src/decompiled_04.c:656:14: error: ‘DAT_140fc7ad0’ undeclared (first use in this function)

    653:   
    654:   if (DAT_140e67b01 != '\0') {
    655:     cVar4 = EtwEventEnabled(DAT_140f085e0,&DAT_14001e1b8);
    656:     puVar3 = DAT_140fc7ad0;
    657:     if (cVar4 != '\0') {
    658:       if (DAT_140fc7ad0 == (uint *)0x0) {
    659:         auStackX_8[0] = 0;

## FUN_140ac3ab0 */ — reconstrucao/src/decompiled_04.c:758
reconstrucao/src/decompiled_04.c:758:11: error: implicit declaration of function ‘FUN_1404a86a0’; did you mean ‘FUN_1404a8660’? [-Wimplicit-function-declaration]

    755:     lVar4 = uStack_40;
    756:     goto LAB_140ac3cc3;
    757:   }
    758:   iVar6 = FUN_1404a86a0(&uStack_48,&uStack_38,0x800,L"%wZ:%wZ",puVar7,puVar10);
    759:   uVar9 = (undefined4)((ulonglong)puVar7 >> 0x20);
    760:   if (iVar6 < 0) {
    761: LAB_140ac3cbf:

## FUN_140ac3ab0 */ — reconstrucao/src/decompiled_04.c:775
reconstrucao/src/decompiled_04.c:775:37: error: request for member ‘_2_2_’ in something not a structure or union

    772:       uVar9 = (undefined4)((ulonglong)psVar8 >> 0x20);
    773:       if (iVar6 < 0) goto LAB_140ac3cbf;
    774:       sVar5 = (short)uStack_48 + *psVar1 + 2;
    775:       uStack_48 = CONCAT22(uStack_48._2_2_,sVar5);
    776:     }
    777:     uVar11 = (undefined4)((ulonglong)puVar10 >> 0x20);
    778:     cVar3 = FUN_140965660(param_1 + 0xbc);

## FUN_140ac3ab0 */ — reconstrucao/src/decompiled_04.c:781
reconstrucao/src/decompiled_04.c:781:43: error: ‘LAB_140b08590’ undeclared (first use in this function); did you mean ‘FUN_140b18590’?

    778:     cVar3 = FUN_140965660(param_1 + 0xbc);
    779:     if (cVar3 == '\0') {
    780:       if (*(longlong *)(param_1 + 0x60) == 0) {
    781:         iVar6 = FUN_1405a6570(&uStack_38,&LAB_140b08590,&uStack_38,0x800);
    782:         if (iVar6 < 0) goto LAB_140ac3cbf;
    783:         sVar5 = sVar5 + 2;
    784:       }

## FUN_140ac3ab0 */ — reconstrucao/src/decompiled_04.c:781
reconstrucao/src/decompiled_04.c:781:31: error: passing argument 1 of ‘FUN_1405a6570’ from incompatible pointer type [-Wincompatible-pointer-types]

    778:     cVar3 = FUN_140965660(param_1 + 0xbc);
    779:     if (cVar3 == '\0') {
    780:       if (*(longlong *)(param_1 + 0x60) == 0) {
    781:         iVar6 = FUN_1405a6570(&uStack_38,&LAB_140b08590,&uStack_38,0x800);
    782:         if (iVar6 < 0) goto LAB_140ac3cbf;
    783:         sVar5 = sVar5 + 2;
    784:       }

## FUN_140ac3ab0 */ — reconstrucao/src/decompiled_04.c:781
reconstrucao/src/decompiled_04.c:781:57: error: passing argument 3 of ‘FUN_1405a6570’ from incompatible pointer type [-Wincompatible-pointer-types]

    778:     cVar3 = FUN_140965660(param_1 + 0xbc);
    779:     if (cVar3 == '\0') {
    780:       if (*(longlong *)(param_1 + 0x60) == 0) {
    781:         iVar6 = FUN_1405a6570(&uStack_38,&LAB_140b08590,&uStack_38,0x800);
    782:         if (iVar6 < 0) goto LAB_140ac3cbf;
    783:         sVar5 = sVar5 + 2;
    784:       }

## FUN_140ac3ab0 */ — reconstrucao/src/decompiled_04.c:786
reconstrucao/src/decompiled_04.c:786:85: error: request for member ‘_2_2_’ in something not a structure or union

    783:         sVar5 = sVar5 + 2;
    784:       }
    785:       RtlTimeToTimeFields(param_1 + 0x70,&uStack_28);
    786:       iVar6 = FUN_140489994(&uStack_38,L",%02d/%02d/%04d,%u.%u.%u.%u",(int)uStack_28._2_2_,
    787:                             (int)uStack_28._4_2_,CONCAT44(uVar9,(int)(short)uStack_28),
    788:                             CONCAT44(uVar11,*(uint *)(param_1 + 0x7c) >> 0x10),
    789:                             *(undefined2 *)(param_1 + 0x7c),*(undefined2 *)(param_1 + 0x7a),

## FUN_140ac3ab0 */ — reconstrucao/src/decompiled_04.c:787
reconstrucao/src/decompiled_04.c:787:43: error: request for member ‘_4_2_’ in something not a structure or union

    784:       }
    785:       RtlTimeToTimeFields(param_1 + 0x70,&uStack_28);
    786:       iVar6 = FUN_140489994(&uStack_38,L",%02d/%02d/%04d,%u.%u.%u.%u",(int)uStack_28._2_2_,
    787:                             (int)uStack_28._4_2_,CONCAT44(uVar9,(int)(short)uStack_28),
    788:                             CONCAT44(uVar11,*(uint *)(param_1 + 0x7c) >> 0x10),
    789:                             *(undefined2 *)(param_1 + 0x7c),*(undefined2 *)(param_1 + 0x7a),
    790:                             *(undefined2 *)(param_1 + 0x78));

## FUN_140ac3ab0 */ — reconstrucao/src/decompiled_04.c:792
reconstrucao/src/decompiled_04.c:792:37: error: request for member ‘_2_2_’ in something not a structure or union

    789:                             *(undefined2 *)(param_1 + 0x7c),*(undefined2 *)(param_1 + 0x7a),
    790:                             *(undefined2 *)(param_1 + 0x78));
    791:       if (iVar6 < 0) goto LAB_140ac3cbf;
    792:       uStack_48 = CONCAT22(uStack_48._2_2_,sVar5 + (short)uStack_38);
    793:     }
    794:     *param_2 = uStack_48;
    795:     param_2[1] = uStack_44;

## FUN_140ac3ab0 */ — reconstrucao/src/decompiled_04.c:797
reconstrucao/src/decompiled_04.c:797:27: error: request for member ‘_4_4_’ in something not a structure or union

    794:     *param_2 = uStack_48;
    795:     param_2[1] = uStack_44;
    796:     param_2[2] = (undefined4)uStack_40;
    797:     param_2[3] = uStack_40._4_4_;
    798:     lVar4 = 0;
    799:   }
    800: LAB_140ac3cc3:

## FUN_140ac3d18 */ — reconstrucao/src/decompiled_04.c:821
reconstrucao/src/decompiled_04.c:821:14: error: ‘DAT_140f09690’ undeclared (first use in this function)

    818: void FUN_140ac3d18(undefined4 *param_1)
    819: 
    820: {
    821:   *param_1 = DAT_140f09690;
    822:   return;
    823: }
    824: 

## FUN_140ac3d30 */ — reconstrucao/src/decompiled_04.c:842
reconstrucao/src/decompiled_04.c:842:3: error: ‘_DAT_140e672dc’ undeclared (first use in this function)

    839:   puVar6 = auStack_28;
    840:   uVar5 = 0;
    841:   lVar4 = 0;
    842:   _DAT_140e672dc = _DAT_140e672dc + 1;
    843:   if (param_1 == (undefined *)0x0) {
    844:     param_1 = &DAT_140e66f70;
    845:     puVar6 = auStack_28;

## FUN_140ac3d30 */ — reconstrucao/src/decompiled_04.c:844
reconstrucao/src/decompiled_04.c:844:16: error: ‘DAT_140e66f70’ undeclared (first use in this function)

    841:   lVar4 = 0;
    842:   _DAT_140e672dc = _DAT_140e672dc + 1;
    843:   if (param_1 == (undefined *)0x0) {
    844:     param_1 = &DAT_140e66f70;
    845:     puVar6 = auStack_28;
    846: LAB_140ac3d98:
    847:     *(undefined8 *)(puVar6 + -8) = 0x140ac3da2;

## FUN_140ac3d30 */ — reconstrucao/src/decompiled_04.c:848
reconstrucao/src/decompiled_04.c:848:11: error: assignment to ‘longlong’ {aka ‘long int’} from ‘ulonglong *’ {aka ‘long unsigned int *’} makes integer from pointer without a cast [-Wint-conversion]

    845:     puVar6 = auStack_28;
    846: LAB_140ac3d98:
    847:     *(undefined8 *)(puVar6 + -8) = 0x140ac3da2;
    848:     lVar4 = FUN_1402f5ef0(param_1,0,0);
    849:     if (lVar4 != 0) {
    850:       *(undefined8 *)(puVar6 + -8) = 0x140ac3db2;
    851:       FUN_1402f4220(lVar4);

## FUN_140ac3d30 */ — reconstrucao/src/decompiled_04.c:851
reconstrucao/src/decompiled_04.c:851:21: error: passing argument 1 of ‘FUN_1402f4220’ makes pointer from integer without a cast [-Wint-conversion]

    848:     lVar4 = FUN_1402f5ef0(param_1,0,0);
    849:     if (lVar4 != 0) {
    850:       *(undefined8 *)(puVar6 + -8) = 0x140ac3db2;
    851:       FUN_1402f4220(lVar4);
    852:       goto LAB_140ac3db2;
    853:     }
    854:   }

## FUN_140ac3d30 */ — reconstrucao/src/decompiled_04.c:857
reconstrucao/src/decompiled_04.c:857:5: error: implicit declaration of function ‘LOCK’ [-Wimplicit-function-declaration]

    854:   }
    855:   else {
    856:     *(undefined4 *)(param_1 + 0x48) = 1;
    857:     LOCK();
    858:     *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + 1;
    859:     UNLOCK();
    860:     *(undefined4 *)(param_1 + 0x3c) = 0;

## FUN_140ac3d30 */ — reconstrucao/src/decompiled_04.c:859
reconstrucao/src/decompiled_04.c:859:5: error: implicit declaration of function ‘UNLOCK’ [-Wimplicit-function-declaration]

    856:     *(undefined4 *)(param_1 + 0x48) = 1;
    857:     LOCK();
    858:     *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + 1;
    859:     UNLOCK();
    860:     *(undefined4 *)(param_1 + 0x3c) = 0;
    861:     LOCK();
    862:     plVar1 = (longlong *)(param_1 + 0x78);

## FUN_140ac3d30 */ — reconstrucao/src/decompiled_04.c:867
reconstrucao/src/decompiled_04.c:867:24: error: implicit declaration of function ‘swi’ [-Wimplicit-function-declaration]

    864:     *plVar1 = *plVar1 + 1;
    865:     UNLOCK();
    866:     if (lVar2 + 1 < 2) {
    867:       pcVar3 = (code *)swi(0x29);
    868:       (*pcVar3)(0xe);
    869:       puVar6 = auStack_20;
    870:     }

## FUN_140ac3d30 */ — reconstrucao/src/decompiled_04.c:876
reconstrucao/src/decompiled_04.c:876:12: error: assignment to ‘undefined8’ {aka ‘long unsigned int’} from ‘void (*)()’ makes integer from pointer without a cast [-Wint-conversion]

    873:   uVar5 = 0xc000009a;
    874: LAB_140ac3db2:
    875:   param_3[1] = lVar4;
    876:   *param_3 = FUN_140ac9cd0;
    877:   return uVar5;
    878: }
    879: 

