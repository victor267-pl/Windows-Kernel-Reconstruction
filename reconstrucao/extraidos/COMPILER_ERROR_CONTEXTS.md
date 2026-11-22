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

## FUN_140200820 */ — reconstrucao/src/decompiled_01.c:408
reconstrucao/src/decompiled_01.c:408:29: error: ‘uint3’ undeclared (first use in this function); did you mean ‘uint32’?

    405:   }
    406:   if ((((uint)DAT_140fc7b04 & 0x1000) != 0) && (cVar2 != '\0')) {
    407:     FUN_1403c0604(param_1,*(undefined2 *)(param_1 + 0x248),
    408:                   CONCAT31((uint3)(*(uint *)(param_1 + 0x74) >> 0xb),
    409:                            (char)(*(uint *)(param_1 + 0x74) >> 3)) & 0xffffff01,0,
    410:                   *(undefined8 *)(param_1 + 0x240),0x536);
    411:   }

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
reconstrucao/src/decompiled_01.c:431:13: error: implicit declaration of function ‘KeAcquireSpinLockRaiseToDpc’; did you mean ‘KeAcquireSpinLockRaiseToSynch’? [-Wimplicit-function-declaration]

    428:   ulonglong uVar6;
    429:   
    430:   if (DAT_140fc7ad0 != (uint *)0x0) {
    431:     uVar2 = KeAcquireSpinLockRaiseToDpc(&DAT_140f0cf28);
    432:     uVar6 = 0;
    433:     if (*DAT_140fc7ad0 != 0) {
    434:       do {

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
reconstrucao/src/decompiled_01.c:446:62: error: ‘int7’ undeclared (first use in this function); did you mean ‘int’?

    443:             uVar5 = uVar4;
    444:           } while (uVar3 < puVar1[uVar6 * 0x70 + 0x1b]);
    445:         }
    446:         FUN_140201790(puVar1 + uVar6 * 0x70 + 0x14,CONCAT71((int7)(uVar4 >> 8),4),1);
    447:         uVar3 = (int)uVar6 + 1;
    448:         uVar6 = (ulonglong)uVar3;
    449:       } while (uVar3 < *DAT_140fc7ad0);

## FUN_140200950 */ — reconstrucao/src/decompiled_01.c:446
reconstrucao/src/decompiled_01.c:446:45: error: passing argument 1 of ‘FUN_140201790’ makes integer from pointer without a cast [-Wint-conversion]

    443:             uVar5 = uVar4;
    444:           } while (uVar3 < puVar1[uVar6 * 0x70 + 0x1b]);
    445:         }
    446:         FUN_140201790(puVar1 + uVar6 * 0x70 + 0x14,CONCAT71((int7)(uVar4 >> 8),4),1);
    447:         uVar3 = (int)uVar6 + 1;
    448:         uVar6 = (ulonglong)uVar3;
    449:       } while (uVar3 < *DAT_140fc7ad0);

## FUN_140200950 */ — reconstrucao/src/decompiled_01.c:451
reconstrucao/src/decompiled_01.c:451:5: error: implicit declaration of function ‘KeReleaseSpinLock’; did you mean ‘IoReleaseVpbSpinLock’? [-Wimplicit-function-declaration]

    448:         uVar6 = (ulonglong)uVar3;
    449:       } while (uVar3 < *DAT_140fc7ad0);
    450:     }
    451:     KeReleaseSpinLock(&DAT_140f0cf28,uVar2);
    452:   }
    453:   return;
    454: }

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

## FUN_140200a58 */ — reconstrucao/src/decompiled_01.c:482
reconstrucao/src/decompiled_01.c:482:3: error: implicit declaration of function ‘KeAcquireSpinLockAtDpcLevel’; did you mean ‘KeTryToAcquireSpinLockAtDpcLevel’? [-Wimplicit-function-declaration]

    479:     FUN_1404f6e6c(in_CR8,2);
    480:   }
    481:   *param_2 = in_CR8;
    482:   KeAcquireSpinLockAtDpcLevel(param_1 + 8);
    483:   return;
    484: }
    485: 

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

## KeSetSelectedCpuSetsThread */ — reconstrucao/src/decompiled_01.c:535
reconstrucao/src/decompiled_01.c:535:5: error: implicit declaration of function ‘ExReleaseSpinLockSharedFromDpcLevel’; did you mean ‘KeReleaseSpinLockFromDpcLevel’? [-Wimplicit-function-declaration]

    532:     }
    533:     FUN_1404fbce4(plVar7,uVar6,param_3,param_2);
    534:     FUN_140200820(param_1,auStack_38);
    535:     ExReleaseSpinLockSharedFromDpcLevel(lVar3 + 0x40);
    536:     FUN_140271070(FiberData,auStack_38,auStackX_20[0]);
    537:     uVar5 = 0;
    538:   }

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

## FUN_140200bc0 */ — reconstrucao/src/decompiled_01.c:582
reconstrucao/src/decompiled_01.c:582:28: error: implicit declaration of function ‘ExpInterlockedPopEntrySList’; did you mean ‘ExInterlockedPopEntryList’? [-Wimplicit-function-declaration]

    579:     uVar6 = (uint)uStack_108;
    580:   }
    581:   else {
    582:     puVar5 = (undefined4 *)ExpInterlockedPopEntrySList((longlong)FiberData + 0x8bc0);
    583:     if (puVar5 == (undefined4 *)0x0) {
    584:       uStack_108 = CONCAT44(uStack_108._4_4_,2);
    585:       uVar6 = 2;

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

## FUN_140200bc0 */ — reconstrucao/src/decompiled_01.c:594
reconstrucao/src/decompiled_01.c:594:19: error: implicit declaration of function ‘MmGetPhysicalAddress’ [-Wimplicit-function-declaration]

    591:       if (((byte)in_CR8 < 2) && (DAT_140fc7d20 != 0)) {
    592:         FUN_1404f6e6c(in_CR8,0xfffffffffffff002);
    593:       }
    594:       uStack_f0 = MmGetPhysicalAddress(puVar5);
    595:     }
    596:     else {
    597:       uStack_100 = pvVar1;

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

## FUN_140200bc0 */ — reconstrucao/src/decompiled_01.c:614
reconstrucao/src/decompiled_01.c:614:11: error: implicit declaration of function ‘HvlInvokeHypercall’ [-Wimplicit-function-declaration]

    611:   puVar5[1] = 0;
    612:   *puVar5 = param_2;
    613:   uStack_e8 = (ulonglong)(uint)((iVar4 + 7) * 0x4000) & 0xffffffff03fe0000 | 0x15;
    614:   sVar3 = HvlInvokeHypercall(uStack_e8,uVar7,0);
    615:   FUN_140210b60(&uStack_108);
    616:   return -(uint)(sVar3 != 0) & 0xc0000001;
    617: }

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
reconstrucao/src/decompiled_01.c:639:13: error: implicit declaration of function ‘EtwEventEnabled’ [-Wimplicit-function-declaration]

    636:   uStack_18 = DAT_140e0a740 ^ (ulonglong)auStack_68;
    637:   if (DAT_140e67941 != '\0') {
    638:     auStackX_8[0] = param_1;
    639:     cVar1 = EtwEventEnabled(DAT_140f0bb00,&DAT_140010400);
    640:     if (cVar1 != '\0') {
    641:       uStack_1c = 0;
    642:       puStack_28 = auStackX_8;

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

## FUN_140200dcc */ — reconstrucao/src/decompiled_01.c:648
reconstrucao/src/decompiled_01.c:648:7: error: implicit declaration of function ‘EtwWriteEx’ [-Wimplicit-function-declaration]

    645:       uStack_38 = 1;
    646:       uStack_40 = 0;
    647:       uStack_48 = 0;
    648:       EtwWriteEx(DAT_140f0bb00,&DAT_140010400,0);
    649:     }
    650:   }
    651:   return;

## FUN_140200e70 */ — reconstrucao/src/decompiled_01.c:661
reconstrucao/src/decompiled_01.c:661:3: error: unknown type name ‘code’

    658: {
    659:   ulonglong *puVar1;
    660:   ulonglong uVar2;
    661:   code *pcVar3;
    662:   char cVar4;
    663:   undefined8 *puVar5;
    664:   undefined8 *puVar6;

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
reconstrucao/src/decompiled_01.c:686:17: error: ‘code’ undeclared (first use in this function)

    683:     if (((undefined8 *)puVar11[1] != puVar5) || (puVar6 = puVar11, (undefined8 *)*puVar7 != puVar5))
    684:     {
    685:       puVar6 = (undefined8 *)0x3;
    686:       pcVar3 = (code *)swi(0x29);
    687:       puVar5 = (undefined8 *)(*pcVar3)();
    688:       puVar9 = puVar9 + 2;
    689:     }

## FUN_140200e70 */ — reconstrucao/src/decompiled_01.c:686
reconstrucao/src/decompiled_01.c:686:23: error: expected expression before ‘)’ token

    683:     if (((undefined8 *)puVar11[1] != puVar5) || (puVar6 = puVar11, (undefined8 *)*puVar7 != puVar5))
    684:     {
    685:       puVar6 = (undefined8 *)0x3;
    686:       pcVar3 = (code *)swi(0x29);
    687:       puVar5 = (undefined8 *)(*pcVar3)();
    688:       puVar9 = puVar9 + 2;
    689:     }

## FUN_140200e70 */ — reconstrucao/src/decompiled_01.c:687
reconstrucao/src/decompiled_01.c:687:31: error: called object is not a function or function pointer

    684:     {
    685:       puVar6 = (undefined8 *)0x3;
    686:       pcVar3 = (code *)swi(0x29);
    687:       puVar5 = (undefined8 *)(*pcVar3)();
    688:       puVar9 = puVar9 + 2;
    689:     }
    690:     *puVar7 = puVar11;

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

## FUN_140200fd8 */ — reconstrucao/src/decompiled_01.c:792
reconstrucao/src/decompiled_01.c:792:7: error: implicit declaration of function ‘KeSetActualBasePriorityThread’; did you mean ‘KeSetBasePriorityThread’? [-Wimplicit-function-declaration]

    789:       LOCK();
    790:       *param_1 = *param_1 | 0x400000;
    791:       UNLOCK();
    792:       KeSetActualBasePriorityThread(param_1,1);
    793:       return;
    794:     }
    795:     if ((param_1[0x1e] & 0x400000) == 0) {

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

## FUN_140201280 */ — reconstrucao/src/decompiled_01.c:947
reconstrucao/src/decompiled_01.c:947:7: error: implicit declaration of function ‘KeBugCheckEx’ [-Wimplicit-function-declaration]

    944:     cVar3 = *(char *)(lVar7 + 0x338 + param_1);
    945:     if (cVar3 == -1) {
    946:                     /* WARNING: Subroutine does not return */
    947:       KeBugCheckEx(0x157,param_1,lVar7,1,0);
    948:     }
    949:     *(char *)(lVar7 + 0x338 + param_1) = cVar3 + '\x01';
    950:     *(uint *)(param_1 + 0x358) = *(uint *)(param_1 + 0x358) | 1 << ((int)(char)iVar5 & 0x1fU);

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

## FUN_140201708 */ — reconstrucao/src/decompiled_01.c:1119
reconstrucao/src/decompiled_01.c:1119:69: error: ‘int7’ undeclared (first use in this function); did you mean ‘int’?

    1116:     uVar1 = KeAcquireSpinLockRaiseToDpc(&DAT_140f0cf28);
    1117:     if (*DAT_140fc7ad0 != 0) {
    1118:       do {
    1119:         FUN_140201790(DAT_140fc7ad0 + uVar3 * 0x70 + 0x14,CONCAT71((int7)(uVar3 >> 8),2),
    1120:                       CONCAT71((int7)(uVar3 * 0x1c0 >> 8),param_1));
    1121:         uVar2 = (int)uVar3 + 1;
    1122:         uVar3 = (ulonglong)uVar2;

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
reconstrucao/src/decompiled_01.c:1219:13: error: implicit declaration of function ‘KeQueryPerformanceCounter’ [-Wimplicit-function-declaration]

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
reconstrucao/src/decompiled_01.c:1275:17: error: implicit declaration of function ‘KeIsSubsetAffinityEx’; did you mean ‘KeSubtractAffinityEx’? [-Wimplicit-function-declaration]

    1272:   uVar3 = FUN_140201918(param_2,param_1);
    1273:   if (-1 < (int)uVar3) {
    1274:     if ((param_3 == (ushort *)0x0) ||
    1275:        (iVar2 = KeIsSubsetAffinityEx(param_3,&DAT_140fc8120), iVar2 != 0)) {
    1276:       uVar12 = 0x20;
    1277:       if (param_1 < 0x20) {
    1278:         uVar12 = param_1;

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

## FUN_140531850 */ — reconstrucao/src/decompiled_02.c:15
reconstrucao/src/decompiled_02.c:15:3: error: unknown type name ‘unkint9’; did you mean ‘uint’?

    12:   ulonglong uVar1;
    13:   ulonglong uVar2;
    14:   ulonglong uVar3;
    15:   unkint9 Var4;
    16:   unkint9 Var5;
    17:   ulonglong uVar6;
    18:   ulonglong uVar7;

## FUN_140531850 */ — reconstrucao/src/decompiled_02.c:16
reconstrucao/src/decompiled_02.c:16:3: error: unknown type name ‘unkint9’; did you mean ‘uint’?

    13:   ulonglong uVar2;
    14:   ulonglong uVar3;
    15:   unkint9 Var4;
    16:   unkint9 Var5;
    17:   ulonglong uVar6;
    18:   ulonglong uVar7;
    19:   ulonglong uVar8;

## FUN_140531850 */ — reconstrucao/src/decompiled_02.c:23
reconstrucao/src/decompiled_02.c:23:24: error: ‘unkuint9’ undeclared (first use in this function)

    20:   ulonglong uVar9;
    21:   ulonglong uVar10;
    22:   
    23:   uVar1 = (ulonglong)((unkuint9)*param_2 + (unkuint9)*param_3);
    24:   Var4 = (unkuint9)param_2[1] + (unkuint9)param_3[1] +
    25:          (unkuint9)((char)((unkuint9)*param_2 + (unkuint9)*param_3 >> 0x40) != '\0');
    26:   uVar2 = (ulonglong)Var4;

## FUN_140531850 */ — reconstrucao/src/decompiled_02.c:24
reconstrucao/src/decompiled_02.c:24:20: error: expected ‘;’ before ‘param_2’

    21:   ulonglong uVar10;
    22:   
    23:   uVar1 = (ulonglong)((unkuint9)*param_2 + (unkuint9)*param_3);
    24:   Var4 = (unkuint9)param_2[1] + (unkuint9)param_3[1] +
    25:          (unkuint9)((char)((unkuint9)*param_2 + (unkuint9)*param_3 >> 0x40) != '\0');
    26:   uVar2 = (ulonglong)Var4;
    27:   Var4 = (unkuint9)param_2[2] + (unkuint9)param_3[2] +

## FUN_140531850 */ — reconstrucao/src/decompiled_02.c:27
reconstrucao/src/decompiled_02.c:27:20: error: expected ‘;’ before ‘param_2’

    24:   Var4 = (unkuint9)param_2[1] + (unkuint9)param_3[1] +
    25:          (unkuint9)((char)((unkuint9)*param_2 + (unkuint9)*param_3 >> 0x40) != '\0');
    26:   uVar2 = (ulonglong)Var4;
    27:   Var4 = (unkuint9)param_2[2] + (unkuint9)param_3[2] +
    28:          (unkuint9)((char)((unkuint9)Var4 >> 0x40) != '\0');
    29:   uVar3 = (ulonglong)Var4;
    30:   Var4 = (unkuint9)param_2[3] + (unkuint9)param_3[3] +

## FUN_140531850 */ — reconstrucao/src/decompiled_02.c:30
reconstrucao/src/decompiled_02.c:30:20: error: expected ‘;’ before ‘param_2’

    27:   Var4 = (unkuint9)param_2[2] + (unkuint9)param_3[2] +
    28:          (unkuint9)((char)((unkuint9)Var4 >> 0x40) != '\0');
    29:   uVar3 = (ulonglong)Var4;
    30:   Var4 = (unkuint9)param_2[3] + (unkuint9)param_3[3] +
    31:          (unkuint9)((char)((unkuint9)Var4 >> 0x40) != '\0');
    32:   uVar10 = (ulonglong)Var4;
    33:   Var5 = (unkuint9)*(ulonglong *)(param_1 + 0x100) + (unkuint9)uVar1;

## FUN_140531850 */ — reconstrucao/src/decompiled_02.c:33
reconstrucao/src/decompiled_02.c:33:64: error: expected ‘;’ before ‘uVar1’

    30:   Var4 = (unkuint9)param_2[3] + (unkuint9)param_3[3] +
    31:          (unkuint9)((char)((unkuint9)Var4 >> 0x40) != '\0');
    32:   uVar10 = (ulonglong)Var4;
    33:   Var5 = (unkuint9)*(ulonglong *)(param_1 + 0x100) + (unkuint9)uVar1;
    34:   uVar6 = (ulonglong)Var5;
    35:   Var5 = (unkuint9)*(ulonglong *)(param_1 + 0x108) + (unkuint9)uVar2 +
    36:          (unkuint9)((char)((unkuint9)Var5 >> 0x40) != '\0');

## FUN_140531850 */ — reconstrucao/src/decompiled_02.c:35
reconstrucao/src/decompiled_02.c:35:64: error: expected ‘;’ before ‘uVar2’

    32:   uVar10 = (ulonglong)Var4;
    33:   Var5 = (unkuint9)*(ulonglong *)(param_1 + 0x100) + (unkuint9)uVar1;
    34:   uVar6 = (ulonglong)Var5;
    35:   Var5 = (unkuint9)*(ulonglong *)(param_1 + 0x108) + (unkuint9)uVar2 +
    36:          (unkuint9)((char)((unkuint9)Var5 >> 0x40) != '\0');
    37:   uVar7 = (ulonglong)Var5;
    38:   Var5 = (unkuint9)*(ulonglong *)(param_1 + 0x110) + (unkuint9)uVar3 +

## FUN_140531850 */ — reconstrucao/src/decompiled_02.c:38
reconstrucao/src/decompiled_02.c:38:64: error: expected ‘;’ before ‘uVar3’

    35:   Var5 = (unkuint9)*(ulonglong *)(param_1 + 0x108) + (unkuint9)uVar2 +
    36:          (unkuint9)((char)((unkuint9)Var5 >> 0x40) != '\0');
    37:   uVar7 = (ulonglong)Var5;
    38:   Var5 = (unkuint9)*(ulonglong *)(param_1 + 0x110) + (unkuint9)uVar3 +
    39:          (unkuint9)((char)((unkuint9)Var5 >> 0x40) != '\0');
    40:   uVar8 = (ulonglong)Var5;
    41:   Var5 = (unkuint9)*(ulonglong *)(param_1 + 0x118) + (unkuint9)uVar10 +

## FUN_140531850 */ — reconstrucao/src/decompiled_02.c:41
reconstrucao/src/decompiled_02.c:41:64: error: expected ‘;’ before ‘uVar10’

    38:   Var5 = (unkuint9)*(ulonglong *)(param_1 + 0x110) + (unkuint9)uVar3 +
    39:          (unkuint9)((char)((unkuint9)Var5 >> 0x40) != '\0');
    40:   uVar8 = (ulonglong)Var5;
    41:   Var5 = (unkuint9)*(ulonglong *)(param_1 + 0x118) + (unkuint9)uVar10 +
    42:          (unkuint9)((char)((unkuint9)Var5 >> 0x40) != '\0');
    43:   uVar9 = (ulonglong)Var5;
    44:   if ((char)((unkuint9)Var4 >> 0x40) != '\0') {

## FUN_140531850 */ — reconstrucao/src/decompiled_02.c:44
reconstrucao/src/decompiled_02.c:44:24: error: expected ‘)’ before ‘Var4’

    41:   Var5 = (unkuint9)*(ulonglong *)(param_1 + 0x118) + (unkuint9)uVar10 +
    42:          (unkuint9)((char)((unkuint9)Var5 >> 0x40) != '\0');
    43:   uVar9 = (ulonglong)Var5;
    44:   if ((char)((unkuint9)Var4 >> 0x40) != '\0') {
    45:     uVar10 = uVar9;
    46:     uVar3 = uVar8;
    47:     uVar2 = uVar7;

## FUN_140531850 */ — reconstrucao/src/decompiled_02.c:50
reconstrucao/src/decompiled_02.c:50:24: error: expected ‘)’ before ‘Var5’

    47:     uVar2 = uVar7;
    48:     uVar1 = uVar6;
    49:   }
    50:   if ((char)((unkuint9)Var5 >> 0x40) != '\0') {
    51:     uVar10 = uVar9;
    52:     uVar3 = uVar8;
    53:     uVar2 = uVar7;

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:73
reconstrucao/src/decompiled_02.c:73:3: error: unknown type name ‘unkint9’; did you mean ‘uint’?

    70:   ulonglong uVar3;
    71:   ulonglong uVar4;
    72:   ulonglong uVar5;
    73:   unkint9 Var6;
    74:   ulonglong uVar7;
    75:   ulonglong uVar8;
    76:   ulonglong uVar9;

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:77
reconstrucao/src/decompiled_02.c:77:3: error: unknown type name ‘unkint9’; did you mean ‘uint’?

    74:   ulonglong uVar7;
    75:   ulonglong uVar8;
    76:   ulonglong uVar9;
    77:   unkint9 Var10;
    78:   ulonglong uVar11;
    79:   unkint9 Var12;
    80:   unkint9 Var13;

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:79
reconstrucao/src/decompiled_02.c:79:3: error: unknown type name ‘unkint9’; did you mean ‘uint’?

    76:   ulonglong uVar9;
    77:   unkint9 Var10;
    78:   ulonglong uVar11;
    79:   unkint9 Var12;
    80:   unkint9 Var13;
    81:   unkint9 Var14;
    82:   unkint9 Var15;

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:80
reconstrucao/src/decompiled_02.c:80:3: error: unknown type name ‘unkint9’; did you mean ‘uint’?

    77:   unkint9 Var10;
    78:   ulonglong uVar11;
    79:   unkint9 Var12;
    80:   unkint9 Var13;
    81:   unkint9 Var14;
    82:   unkint9 Var15;
    83:   undefined1 auVar16 [16];

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:81
reconstrucao/src/decompiled_02.c:81:3: error: unknown type name ‘unkint9’; did you mean ‘uint’?

    78:   ulonglong uVar11;
    79:   unkint9 Var12;
    80:   unkint9 Var13;
    81:   unkint9 Var14;
    82:   unkint9 Var15;
    83:   undefined1 auVar16 [16];
    84:   undefined1 auVar17 [16];

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:82
reconstrucao/src/decompiled_02.c:82:3: error: unknown type name ‘unkint9’; did you mean ‘uint’?

    79:   unkint9 Var12;
    80:   unkint9 Var13;
    81:   unkint9 Var14;
    82:   unkint9 Var15;
    83:   undefined1 auVar16 [16];
    84:   undefined1 auVar17 [16];
    85:   undefined1 auVar18 [16];

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
reconstrucao/src/decompiled_02.c:190:12: error: ‘unkuint9’ undeclared (first use in this function)

    187:   auVar20._0_8_ = uVar1;
    188:   auVar52._8_8_ = 0;
    189:   auVar52._0_8_ = *param_3;
    190:   Var10 = (unkuint9)(uVar83 + uVar7) + (unkuint9)SUB168(auVar20 * auVar52,0);
    191:   Var6 = (unkuint9)(uVar3 + uVar86) + (unkuint9)SUB168(auVar20 * auVar52,8);
    192:   auVar21._8_8_ = 0;
    193:   auVar21._0_8_ = uVar1;

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:190
reconstrucao/src/decompiled_02.c:190:50: error: expected ‘;’ before ‘SUB168’

    187:   auVar20._0_8_ = uVar1;
    188:   auVar52._8_8_ = 0;
    189:   auVar52._0_8_ = *param_3;
    190:   Var10 = (unkuint9)(uVar83 + uVar7) + (unkuint9)SUB168(auVar20 * auVar52,0);
    191:   Var6 = (unkuint9)(uVar3 + uVar86) + (unkuint9)SUB168(auVar20 * auVar52,8);
    192:   auVar21._8_8_ = 0;
    193:   auVar21._0_8_ = uVar1;

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:191
reconstrucao/src/decompiled_02.c:191:49: error: expected ‘;’ before ‘SUB168’

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
reconstrucao/src/decompiled_02.c:196:22: error: expected expression before ‘ulonglong’

    193:   auVar21._0_8_ = uVar1;
    194:   auVar53._8_8_ = 0;
    195:   auVar53._0_8_ = param_3[1];
    196:   Var12 = (unkuint9)(ulonglong)Var6 + (unkuint9)SUB168(auVar21 * auVar53,0) +
    197:           (unkuint9)((char)((unkuint9)Var10 >> 0x40) != '\0');
    198:   Var6 = (unkuint9)(uVar82 + uVar2) + (unkuint9)SUB168(auVar21 * auVar53,8) +
    199:          (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:196
reconstrucao/src/decompiled_02.c:196:32: error: expected ‘;’ before ‘Var6’

    193:   auVar21._0_8_ = uVar1;
    194:   auVar53._8_8_ = 0;
    195:   auVar53._0_8_ = param_3[1];
    196:   Var12 = (unkuint9)(ulonglong)Var6 + (unkuint9)SUB168(auVar21 * auVar53,0) +
    197:           (unkuint9)((char)((unkuint9)Var10 >> 0x40) != '\0');
    198:   Var6 = (unkuint9)(uVar82 + uVar2) + (unkuint9)SUB168(auVar21 * auVar53,8) +
    199:          (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:198
reconstrucao/src/decompiled_02.c:198:49: error: expected ‘;’ before ‘SUB168’

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
reconstrucao/src/decompiled_02.c:204:22: error: expected expression before ‘ulonglong’

    201:   auVar22._0_8_ = uVar1;
    202:   auVar54._8_8_ = 0;
    203:   auVar54._0_8_ = param_3[2];
    204:   Var13 = (unkuint9)(ulonglong)Var6 + (unkuint9)SUB168(auVar22 * auVar54,0) +
    205:           (unkuint9)((char)((unkuint9)Var12 >> 0x40) != '\0');
    206:   Var6 = (unkuint9)
    207:          (SUB168(auVar19 * auVar51,8) + (ulonglong)(CARRY8(uVar81,uVar5) || CARRY8(uVar82,uVar2))) +

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:204
reconstrucao/src/decompiled_02.c:204:32: error: expected ‘;’ before ‘Var6’

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
reconstrucao/src/decompiled_02.c:208:20: error: expected ‘;’ before ‘SUB168’

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
reconstrucao/src/decompiled_02.c:213:22: error: expected expression before ‘ulonglong’

    210:   auVar23._0_8_ = uVar1;
    211:   auVar55._8_8_ = 0;
    212:   auVar55._0_8_ = param_3[3];
    213:   Var14 = (unkuint9)(ulonglong)Var6 + (unkuint9)SUB168(auVar23 * auVar55,0) +
    214:           (unkuint9)((char)((unkuint9)Var13 >> 0x40) != '\0');
    215:   uVar3 = SUB168(auVar23 * auVar55,8) + (ulonglong)((char)((unkuint9)Var6 >> 0x40) != '\0');
    216:   auVar24._8_8_ = 0;

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:213
reconstrucao/src/decompiled_02.c:213:32: error: expected ‘;’ before ‘Var6’

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

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:215
reconstrucao/src/decompiled_02.c:215:70: error: expected ‘)’ before ‘Var6’

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
reconstrucao/src/decompiled_02.c:220:20: error: expected ‘;’ before ‘uVar4’

    217:   auVar24._0_8_ = uVar85;
    218:   auVar56._8_8_ = 0;
    219:   auVar56._0_8_ = *puVar80;
    220:   Var6 = (unkuint9)uVar4 + (unkuint9)SUB168(auVar24 * auVar56,0);
    221:   uVar82 = (ulonglong)Var6;
    222:   Var10 = (unkuint9)(ulonglong)Var10 + (unkuint9)SUB168(auVar24 * auVar56,8);
    223:   auVar25._8_8_ = 0;

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:222
reconstrucao/src/decompiled_02.c:222:22: error: expected expression before ‘ulonglong’

    219:   auVar56._0_8_ = *puVar80;
    220:   Var6 = (unkuint9)uVar4 + (unkuint9)SUB168(auVar24 * auVar56,0);
    221:   uVar82 = (ulonglong)Var6;
    222:   Var10 = (unkuint9)(ulonglong)Var10 + (unkuint9)SUB168(auVar24 * auVar56,8);
    223:   auVar25._8_8_ = 0;
    224:   auVar25._0_8_ = uVar85;
    225:   auVar57._8_8_ = 0;

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:222
reconstrucao/src/decompiled_02.c:222:32: error: expected ‘;’ before ‘Var10’

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
reconstrucao/src/decompiled_02.c:227:21: error: expected expression before ‘ulonglong’

    224:   auVar25._0_8_ = uVar85;
    225:   auVar57._8_8_ = 0;
    226:   auVar57._0_8_ = *(ulonglong *)(param_1 + 0x88);
    227:   Var6 = (unkuint9)(ulonglong)Var10 + (unkuint9)SUB168(auVar25 * auVar57,0) +
    228:          (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
    229:   uVar4 = (ulonglong)Var6;
    230:   Var10 = (unkuint9)(ulonglong)Var12 + (unkuint9)SUB168(auVar25 * auVar57,8) +

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:227
reconstrucao/src/decompiled_02.c:227:31: error: expected ‘;’ before ‘Var10’

    224:   auVar25._0_8_ = uVar85;
    225:   auVar57._8_8_ = 0;
    226:   auVar57._0_8_ = *(ulonglong *)(param_1 + 0x88);
    227:   Var6 = (unkuint9)(ulonglong)Var10 + (unkuint9)SUB168(auVar25 * auVar57,0) +
    228:          (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
    229:   uVar4 = (ulonglong)Var6;
    230:   Var10 = (unkuint9)(ulonglong)Var12 + (unkuint9)SUB168(auVar25 * auVar57,8) +

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:230
reconstrucao/src/decompiled_02.c:230:22: error: expected expression before ‘ulonglong’

    227:   Var6 = (unkuint9)(ulonglong)Var10 + (unkuint9)SUB168(auVar25 * auVar57,0) +
    228:          (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
    229:   uVar4 = (ulonglong)Var6;
    230:   Var10 = (unkuint9)(ulonglong)Var12 + (unkuint9)SUB168(auVar25 * auVar57,8) +
    231:           (unkuint9)((char)((unkuint9)Var10 >> 0x40) != '\0');
    232:   auVar26._8_8_ = 0;
    233:   auVar26._0_8_ = uVar85;

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:230
reconstrucao/src/decompiled_02.c:230:32: error: expected ‘;’ before ‘Var12’

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
reconstrucao/src/decompiled_02.c:236:21: error: expected expression before ‘ulonglong’

    233:   auVar26._0_8_ = uVar85;
    234:   auVar58._8_8_ = 0;
    235:   auVar58._0_8_ = *(ulonglong *)(param_1 + 0x90);
    236:   Var6 = (unkuint9)(ulonglong)Var10 + (unkuint9)SUB168(auVar26 * auVar58,0) +
    237:          (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
    238:   Var12 = (unkuint9)(ulonglong)Var13 + (unkuint9)SUB168(auVar26 * auVar58,8) +
    239:           (unkuint9)((char)((unkuint9)Var10 >> 0x40) != '\0');

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:236
reconstrucao/src/decompiled_02.c:236:31: error: expected ‘;’ before ‘Var10’

    233:   auVar26._0_8_ = uVar85;
    234:   auVar58._8_8_ = 0;
    235:   auVar58._0_8_ = *(ulonglong *)(param_1 + 0x90);
    236:   Var6 = (unkuint9)(ulonglong)Var10 + (unkuint9)SUB168(auVar26 * auVar58,0) +
    237:          (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
    238:   Var12 = (unkuint9)(ulonglong)Var13 + (unkuint9)SUB168(auVar26 * auVar58,8) +
    239:           (unkuint9)((char)((unkuint9)Var10 >> 0x40) != '\0');

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:238
reconstrucao/src/decompiled_02.c:238:22: error: expected expression before ‘ulonglong’

    235:   auVar58._0_8_ = *(ulonglong *)(param_1 + 0x90);
    236:   Var6 = (unkuint9)(ulonglong)Var10 + (unkuint9)SUB168(auVar26 * auVar58,0) +
    237:          (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
    238:   Var12 = (unkuint9)(ulonglong)Var13 + (unkuint9)SUB168(auVar26 * auVar58,8) +
    239:           (unkuint9)((char)((unkuint9)Var10 >> 0x40) != '\0');
    240:   auVar27._8_8_ = 0;
    241:   auVar27._0_8_ = uVar85;

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:238
reconstrucao/src/decompiled_02.c:238:32: error: expected ‘;’ before ‘Var13’

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
reconstrucao/src/decompiled_02.c:244:22: error: expected expression before ‘ulonglong’

    241:   auVar27._0_8_ = uVar85;
    242:   auVar59._8_8_ = 0;
    243:   auVar59._0_8_ = *(ulonglong *)(param_1 + 0x98);
    244:   Var10 = (unkuint9)(ulonglong)Var12 + (unkuint9)SUB168(auVar27 * auVar59,0) +
    245:           (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
    246:   Var13 = (unkuint9)(ulonglong)Var14 + (unkuint9)SUB168(auVar27 * auVar59,8) +
    247:           (unkuint9)((char)((unkuint9)Var12 >> 0x40) != '\0');

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:244
reconstrucao/src/decompiled_02.c:244:32: error: expected ‘;’ before ‘Var12’

    241:   auVar27._0_8_ = uVar85;
    242:   auVar59._8_8_ = 0;
    243:   auVar59._0_8_ = *(ulonglong *)(param_1 + 0x98);
    244:   Var10 = (unkuint9)(ulonglong)Var12 + (unkuint9)SUB168(auVar27 * auVar59,0) +
    245:           (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
    246:   Var13 = (unkuint9)(ulonglong)Var14 + (unkuint9)SUB168(auVar27 * auVar59,8) +
    247:           (unkuint9)((char)((unkuint9)Var12 >> 0x40) != '\0');

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:246
reconstrucao/src/decompiled_02.c:246:22: error: expected expression before ‘ulonglong’

    243:   auVar59._0_8_ = *(ulonglong *)(param_1 + 0x98);
    244:   Var10 = (unkuint9)(ulonglong)Var12 + (unkuint9)SUB168(auVar27 * auVar59,0) +
    245:           (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
    246:   Var13 = (unkuint9)(ulonglong)Var14 + (unkuint9)SUB168(auVar27 * auVar59,8) +
    247:           (unkuint9)((char)((unkuint9)Var12 >> 0x40) != '\0');
    248:   Var12 = (unkuint9)(ulonglong)Var13 + (unkuint9)uVar82 +
    249:           (unkuint9)((char)((unkuint9)Var10 >> 0x40) != '\0');

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:246
reconstrucao/src/decompiled_02.c:246:32: error: expected ‘;’ before ‘Var14’

    243:   auVar59._0_8_ = *(ulonglong *)(param_1 + 0x98);
    244:   Var10 = (unkuint9)(ulonglong)Var12 + (unkuint9)SUB168(auVar27 * auVar59,0) +
    245:           (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
    246:   Var13 = (unkuint9)(ulonglong)Var14 + (unkuint9)SUB168(auVar27 * auVar59,8) +
    247:           (unkuint9)((char)((unkuint9)Var12 >> 0x40) != '\0');
    248:   Var12 = (unkuint9)(ulonglong)Var13 + (unkuint9)uVar82 +
    249:           (unkuint9)((char)((unkuint9)Var10 >> 0x40) != '\0');

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:248
reconstrucao/src/decompiled_02.c:248:22: error: expected expression before ‘ulonglong’

    245:           (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
    246:   Var13 = (unkuint9)(ulonglong)Var14 + (unkuint9)SUB168(auVar27 * auVar59,8) +
    247:           (unkuint9)((char)((unkuint9)Var12 >> 0x40) != '\0');
    248:   Var12 = (unkuint9)(ulonglong)Var13 + (unkuint9)uVar82 +
    249:           (unkuint9)((char)((unkuint9)Var10 >> 0x40) != '\0');
    250:   uVar81 = ((char)((unkuint9)Var14 >> 0x40) != '\0') + uVar82 +
    251:            (ulonglong)((char)((unkuint9)Var13 >> 0x40) != '\0');

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:248
reconstrucao/src/decompiled_02.c:248:32: error: expected ‘;’ before ‘Var13’

    245:           (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
    246:   Var13 = (unkuint9)(ulonglong)Var14 + (unkuint9)SUB168(auVar27 * auVar59,8) +
    247:           (unkuint9)((char)((unkuint9)Var12 >> 0x40) != '\0');
    248:   Var12 = (unkuint9)(ulonglong)Var13 + (unkuint9)uVar82 +
    249:           (unkuint9)((char)((unkuint9)Var10 >> 0x40) != '\0');
    250:   uVar81 = ((char)((unkuint9)Var14 >> 0x40) != '\0') + uVar82 +
    251:            (ulonglong)((char)((unkuint9)Var13 >> 0x40) != '\0');

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:250
reconstrucao/src/decompiled_02.c:250:30: error: expected ‘)’ before ‘Var14’

    247:           (unkuint9)((char)((unkuint9)Var12 >> 0x40) != '\0');
    248:   Var12 = (unkuint9)(ulonglong)Var13 + (unkuint9)uVar82 +
    249:           (unkuint9)((char)((unkuint9)Var10 >> 0x40) != '\0');
    250:   uVar81 = ((char)((unkuint9)Var14 >> 0x40) != '\0') + uVar82 +
    251:            (ulonglong)((char)((unkuint9)Var13 >> 0x40) != '\0');
    252:   uVar86 = (ulonglong)((char)((unkuint9)Var12 >> 0x40) != '\0');
    253:   uVar2 = uVar81 + uVar3;

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:251
reconstrucao/src/decompiled_02.c:251:41: error: expected ‘)’ before ‘Var13’

    248:   Var12 = (unkuint9)(ulonglong)Var13 + (unkuint9)uVar82 +
    249:           (unkuint9)((char)((unkuint9)Var10 >> 0x40) != '\0');
    250:   uVar81 = ((char)((unkuint9)Var14 >> 0x40) != '\0') + uVar82 +
    251:            (ulonglong)((char)((unkuint9)Var13 >> 0x40) != '\0');
    252:   uVar86 = (ulonglong)((char)((unkuint9)Var12 >> 0x40) != '\0');
    253:   uVar2 = uVar81 + uVar3;
    254:   uVar83 = uVar4 * *(longlong *)(param_1 + 0x18);

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:252
reconstrucao/src/decompiled_02.c:252:41: error: expected ‘)’ before ‘Var12’

    249:           (unkuint9)((char)((unkuint9)Var10 >> 0x40) != '\0');
    250:   uVar81 = ((char)((unkuint9)Var14 >> 0x40) != '\0') + uVar82 +
    251:            (ulonglong)((char)((unkuint9)Var13 >> 0x40) != '\0');
    252:   uVar86 = (ulonglong)((char)((unkuint9)Var12 >> 0x40) != '\0');
    253:   uVar2 = uVar81 + uVar3;
    254:   uVar83 = uVar4 * *(longlong *)(param_1 + 0x18);
    255:   uVar1 = param_2[2];

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
reconstrucao/src/decompiled_02.c:260:22: error: expected expression before ‘ulonglong’

    257:   auVar28._0_8_ = uVar1;
    258:   auVar60._8_8_ = 0;
    259:   auVar60._0_8_ = *param_3;
    260:   Var13 = (unkuint9)(ulonglong)Var6 + (unkuint9)SUB168(auVar28 * auVar60,0);
    261:   Var6 = (unkuint9)(ulonglong)Var10 + (unkuint9)SUB168(auVar28 * auVar60,8);
    262:   auVar29._8_8_ = 0;
    263:   auVar29._0_8_ = uVar1;

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:260
reconstrucao/src/decompiled_02.c:260:32: error: expected ‘;’ before ‘Var6’

    257:   auVar28._0_8_ = uVar1;
    258:   auVar60._8_8_ = 0;
    259:   auVar60._0_8_ = *param_3;
    260:   Var13 = (unkuint9)(ulonglong)Var6 + (unkuint9)SUB168(auVar28 * auVar60,0);
    261:   Var6 = (unkuint9)(ulonglong)Var10 + (unkuint9)SUB168(auVar28 * auVar60,8);
    262:   auVar29._8_8_ = 0;
    263:   auVar29._0_8_ = uVar1;

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:261
reconstrucao/src/decompiled_02.c:261:21: error: expected expression before ‘ulonglong’

    258:   auVar60._8_8_ = 0;
    259:   auVar60._0_8_ = *param_3;
    260:   Var13 = (unkuint9)(ulonglong)Var6 + (unkuint9)SUB168(auVar28 * auVar60,0);
    261:   Var6 = (unkuint9)(ulonglong)Var10 + (unkuint9)SUB168(auVar28 * auVar60,8);
    262:   auVar29._8_8_ = 0;
    263:   auVar29._0_8_ = uVar1;
    264:   auVar61._8_8_ = 0;

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:261
reconstrucao/src/decompiled_02.c:261:31: error: expected ‘;’ before ‘Var10’

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

## FUN_14077f3e0 */ — reconstrucao/src/decompiled_03.c:27
reconstrucao/src/decompiled_03.c:27:26: error: implicit declaration of function ‘ExAllocatePool2’; did you mean ‘ExAllocatePool’? [-Wimplicit-function-declaration]

    24:   }
    25:   else {
    26:     auStackX_20[0] = param_4;
    27:     plVar6 = (longlong *)ExAllocatePool2(0x100,0x60,*(undefined4 *)(param_1 + 0x18));
    28:     if (plVar6 == (longlong *)0x0) {
    29:       iVar5 = -0x3fffff66;
    30:     }

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
reconstrucao/src/decompiled_03.c:78:3: error: implicit declaration of function ‘EtwRegister’ [-Wimplicit-function-declaration]

    75: void FUN_14077f4f8(void)
    76: 
    77: {
    78:   EtwRegister(&DAT_14001bcb8,FUN_140a94cf0,0,&DAT_140f07240);
    79:   return;
    80: }
    81: 

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
reconstrucao/src/decompiled_03.c:87:3: error: implicit declaration of function ‘PoRegisterPowerSettingCallback’; did you mean ‘PoUnregisterCoalescingCallback’? [-Wimplicit-function-declaration]

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
reconstrucao/src/decompiled_03.c:96:3: error: implicit declaration of function ‘PoUnregisterPowerSettingCallback’; did you mean ‘PoUnregisterCoalescingCallback’? [-Wimplicit-function-declaration]

    93: void FUN_14077f55c(void)
    94: 
    95: {
    96:   PoUnregisterPowerSettingCallback(DAT_140f06d38);
    97:   return;
    98: }
    99: 

## FUN_14077f55c */ — reconstrucao/src/decompiled_03.c:96
reconstrucao/src/decompiled_03.c:96:36: error: ‘DAT_140f06d38’ undeclared (first use in this function)

    93: void FUN_14077f55c(void)
    94: 
    95: {
    96:   PoUnregisterPowerSettingCallback(DAT_140f06d38);
    97:   return;
    98: }
    99: 

## FUN_14077f580 */ — reconstrucao/src/decompiled_03.c:107
reconstrucao/src/decompiled_03.c:107:3: error: unknown type name ‘undefined’; did you mean ‘undefined8’?

    104: 
    105: {
    106:   int iVar1;
    107:   undefined *puVar2;
    108:   longlong lVar3;
    109:   undefined *puStackX_8;
    110:   longlong lStack_48;

## FUN_14077f580 */ — reconstrucao/src/decompiled_03.c:109
reconstrucao/src/decompiled_03.c:109:3: error: unknown type name ‘undefined’; did you mean ‘undefined8’?

    106:   int iVar1;
    107:   undefined *puVar2;
    108:   longlong lVar3;
    109:   undefined *puStackX_8;
    110:   longlong lStack_48;
    111:   undefined4 uStack_40;
    112:   undefined4 uStack_3c;

## FUN_14077f580 */ — reconstrucao/src/decompiled_03.c:120
reconstrucao/src/decompiled_03.c:120:13: error: ‘undefined’ undeclared (first use in this function); did you mean ‘undefined8’?

    117:   undefined4 uStack_28;
    118:   undefined4 uStack_24;
    119:   
    120:   puVar2 = (undefined *)0x0;
    121:   lVar3 = 0;
    122:   puStackX_8 = (undefined *)0x0;
    123:   lStack_48 = 0;

## FUN_14077f580 */ — reconstrucao/src/decompiled_03.c:120
reconstrucao/src/decompiled_03.c:120:24: error: expected expression before ‘)’ token

    117:   undefined4 uStack_28;
    118:   undefined4 uStack_24;
    119:   
    120:   puVar2 = (undefined *)0x0;
    121:   lVar3 = 0;
    122:   puStackX_8 = (undefined *)0x0;
    123:   lStack_48 = 0;

## FUN_14077f580 */ — reconstrucao/src/decompiled_03.c:122
reconstrucao/src/decompiled_03.c:122:28: error: expected expression before ‘)’ token

    119:   
    120:   puVar2 = (undefined *)0x0;
    121:   lVar3 = 0;
    122:   puStackX_8 = (undefined *)0x0;
    123:   lStack_48 = 0;
    124:   if (((param_1 == 0) || (param_4 == 0)) || (param_5 == (undefined8 *)0x0)) {
    125:     iVar1 = -0x3ffffff3;

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

## FUN_14077f580 */ — reconstrucao/src/decompiled_03.c:147
reconstrucao/src/decompiled_03.c:147:29: error: expected expression before ‘)’ token

    144:   if (lVar3 != 0) {
    145:     FUN_140a32d80(lVar3);
    146:   }
    147:   if (puVar2 != (undefined *)0x0) {
    148:     FUN_140485460(puVar2);
    149:   }
    150:   if (iVar1 != -0x3fffff45) {

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
reconstrucao/src/decompiled_03.c:156:12: error: assignment to ‘undefined8’ {aka ‘long unsigned int’} from ‘int *’ makes integer from pointer without a cast [-Wint-conversion]

    153:   puStackX_8 = &DAT_140f06d48;
    154:   iVar1 = 0;
    155: LAB_14077f637:
    156:   *param_5 = puStackX_8;
    157:   return iVar1;
    158: }
    159: 

## FUN_14077f660 */ — reconstrucao/src/decompiled_03.c:166
reconstrucao/src/decompiled_03.c:166:3: error: unknown type name ‘undefined’; did you mean ‘undefined8’?

    163: 
    164: {
    165:   int iVar1;
    166:   undefined *puVar2;
    167:   longlong lVar3;
    168:   undefined *puStackX_8;
    169:   longlong lStack_28;

## FUN_14077f660 */ — reconstrucao/src/decompiled_03.c:168
reconstrucao/src/decompiled_03.c:168:3: error: unknown type name ‘undefined’; did you mean ‘undefined8’?

    165:   int iVar1;
    166:   undefined *puVar2;
    167:   longlong lVar3;
    168:   undefined *puStackX_8;
    169:   longlong lStack_28;
    170:   undefined4 uStack_20;
    171:   undefined4 uStack_1c;

## FUN_14077f660 */ — reconstrucao/src/decompiled_03.c:175
reconstrucao/src/decompiled_03.c:175:13: error: ‘undefined’ undeclared (first use in this function); did you mean ‘undefined8’?

    172:   undefined4 uStack_18;
    173:   undefined4 uStack_14;
    174:   
    175:   puVar2 = (undefined *)0x0;
    176:   lVar3 = 0;
    177:   puStackX_8 = (undefined *)0x0;
    178:   lStack_28 = 0;

## FUN_14077f660 */ — reconstrucao/src/decompiled_03.c:175
reconstrucao/src/decompiled_03.c:175:24: error: expected expression before ‘)’ token

    172:   undefined4 uStack_18;
    173:   undefined4 uStack_14;
    174:   
    175:   puVar2 = (undefined *)0x0;
    176:   lVar3 = 0;
    177:   puStackX_8 = (undefined *)0x0;
    178:   lStack_28 = 0;

## FUN_14077f660 */ — reconstrucao/src/decompiled_03.c:177
reconstrucao/src/decompiled_03.c:177:28: error: expected expression before ‘)’ token

    174:   
    175:   puVar2 = (undefined *)0x0;
    176:   lVar3 = 0;
    177:   puStackX_8 = (undefined *)0x0;
    178:   lStack_28 = 0;
    179:   if (((param_1 == 0) || (param_3 == 0)) || (param_4 == (undefined8 *)0x0)) {
    180:     iVar1 = -0x3ffffff3;

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

## FUN_14077f660 */ — reconstrucao/src/decompiled_03.c:198
reconstrucao/src/decompiled_03.c:198:29: error: expected expression before ‘)’ token

    195:   if (lVar3 != 0) {
    196:     FUN_140a32d80(lVar3);
    197:   }
    198:   if (puVar2 != (undefined *)0x0) {
    199:     FUN_140485460(puVar2);
    200:   }
    201:   if (iVar1 != -0x3fffff45) {

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
reconstrucao/src/decompiled_03.c:207:12: error: assignment to ‘undefined8’ {aka ‘long unsigned int’} from ‘int *’ makes integer from pointer without a cast [-Wint-conversion]

    204:   puStackX_8 = &DAT_140f06d48;
    205:   iVar1 = 0;
    206: LAB_14077f704:
    207:   *param_4 = puStackX_8;
    208:   return iVar1;
    209: }
    210: 

## FUN_14077f730 */ — reconstrucao/src/decompiled_03.c:217
reconstrucao/src/decompiled_03.c:217:3: error: unknown type name ‘undefined’; did you mean ‘undefined8’?

    214: 
    215: {
    216:   int iVar1;
    217:   undefined *puVar2;
    218:   longlong lVar3;
    219:   undefined *puStackX_8;
    220:   longlong alStack_38 [4];

## FUN_14077f730 */ — reconstrucao/src/decompiled_03.c:219
reconstrucao/src/decompiled_03.c:219:3: error: unknown type name ‘undefined’; did you mean ‘undefined8’?

    216:   int iVar1;
    217:   undefined *puVar2;
    218:   longlong lVar3;
    219:   undefined *puStackX_8;
    220:   longlong alStack_38 [4];
    221:   
    222:   puVar2 = (undefined *)0x0;

## FUN_14077f730 */ — reconstrucao/src/decompiled_03.c:222
reconstrucao/src/decompiled_03.c:222:13: error: ‘undefined’ undeclared (first use in this function); did you mean ‘undefined8’?

    219:   undefined *puStackX_8;
    220:   longlong alStack_38 [4];
    221:   
    222:   puVar2 = (undefined *)0x0;
    223:   lVar3 = 0;
    224:   puStackX_8 = (undefined *)0x0;
    225:   alStack_38[0] = 0;

## FUN_14077f730 */ — reconstrucao/src/decompiled_03.c:222
reconstrucao/src/decompiled_03.c:222:24: error: expected expression before ‘)’ token

    219:   undefined *puStackX_8;
    220:   longlong alStack_38 [4];
    221:   
    222:   puVar2 = (undefined *)0x0;
    223:   lVar3 = 0;
    224:   puStackX_8 = (undefined *)0x0;
    225:   alStack_38[0] = 0;

## FUN_14077f730 */ — reconstrucao/src/decompiled_03.c:224
reconstrucao/src/decompiled_03.c:224:28: error: expected expression before ‘)’ token

    221:   
    222:   puVar2 = (undefined *)0x0;
    223:   lVar3 = 0;
    224:   puStackX_8 = (undefined *)0x0;
    225:   alStack_38[0] = 0;
    226:   alStack_38[1] = 0;
    227:   alStack_38[2] = 0;

## FUN_14077f730 */ — reconstrucao/src/decompiled_03.c:232
reconstrucao/src/decompiled_03.c:232:21: error: passing argument 1 of ‘FUN_140a32d80’ makes pointer from integer without a cast [-Wint-conversion]

    229:     iVar1 = -0x3ffffff3;
    230: LAB_14077f7d4:
    231:     if (lVar3 != 0) {
    232:       FUN_140a32d80(lVar3);
    233:     }
    234:     if (puVar2 != (undefined *)0x0) {
    235:       FUN_140485460(puVar2);

## FUN_14077f730 */ — reconstrucao/src/decompiled_03.c:234
reconstrucao/src/decompiled_03.c:234:31: error: expected expression before ‘)’ token

    231:     if (lVar3 != 0) {
    232:       FUN_140a32d80(lVar3);
    233:     }
    234:     if (puVar2 != (undefined *)0x0) {
    235:       FUN_140485460(puVar2);
    236:     }
    237:   }

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
reconstrucao/src/decompiled_03.c:257:12: error: assignment to ‘undefined8’ {aka ‘long unsigned int’} from ‘int *’ makes integer from pointer without a cast [-Wint-conversion]

    254:   puStackX_8 = &DAT_140f06d48;
    255:   iVar1 = 0;
    256: LAB_14077f7ff:
    257:   *param_4 = puStackX_8;
    258:   return iVar1;
    259: }
    260: 

## FUN_14077f830 */ — reconstrucao/src/decompiled_03.c:267
reconstrucao/src/decompiled_03.c:267:3: error: unknown type name ‘undefined’; did you mean ‘undefined8’?

    264: 
    265: {
    266:   int iVar1;
    267:   undefined *puVar2;
    268:   longlong lVar3;
    269:   undefined *puStackX_8;
    270:   longlong lStack_28;

## FUN_14077f830 */ — reconstrucao/src/decompiled_03.c:269
reconstrucao/src/decompiled_03.c:269:3: error: unknown type name ‘undefined’; did you mean ‘undefined8’?

    266:   int iVar1;
    267:   undefined *puVar2;
    268:   longlong lVar3;
    269:   undefined *puStackX_8;
    270:   longlong lStack_28;
    271:   longlong alStack_20 [3];
    272:   

## FUN_14077f830 */ — reconstrucao/src/decompiled_03.c:273
reconstrucao/src/decompiled_03.c:273:13: error: ‘undefined’ undeclared (first use in this function); did you mean ‘undefined8’?

    270:   longlong lStack_28;
    271:   longlong alStack_20 [3];
    272:   
    273:   puVar2 = (undefined *)0x0;
    274:   lVar3 = 0;
    275:   puStackX_8 = (undefined *)0x0;
    276:   lStack_28 = 0;

## FUN_14077f830 */ — reconstrucao/src/decompiled_03.c:273
reconstrucao/src/decompiled_03.c:273:24: error: expected expression before ‘)’ token

    270:   longlong lStack_28;
    271:   longlong alStack_20 [3];
    272:   
    273:   puVar2 = (undefined *)0x0;
    274:   lVar3 = 0;
    275:   puStackX_8 = (undefined *)0x0;
    276:   lStack_28 = 0;

## FUN_14077f830 */ — reconstrucao/src/decompiled_03.c:275
reconstrucao/src/decompiled_03.c:275:28: error: expected expression before ‘)’ token

    272:   
    273:   puVar2 = (undefined *)0x0;
    274:   lVar3 = 0;
    275:   puStackX_8 = (undefined *)0x0;
    276:   lStack_28 = 0;
    277:   if ((((param_1 == 0) || (param_2 == 0)) || (param_3 == 0)) || (param_4 == (undefined8 *)0x0)) {
    278:     iVar1 = -0x3ffffff3;

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

## FUN_14077f830 */ — reconstrucao/src/decompiled_03.c:294
reconstrucao/src/decompiled_03.c:294:29: error: expected expression before ‘)’ token

    291:   if (lVar3 != 0) {
    292:     FUN_140a32d80(lVar3);
    293:   }
    294:   if (puVar2 != (undefined *)0x0) {
    295:     FUN_140485460(puVar2);
    296:   }
    297:   if (iVar1 != -0x3fffff45) {

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
reconstrucao/src/decompiled_03.c:303:12: error: assignment to ‘undefined8’ {aka ‘long unsigned int’} from ‘int *’ makes integer from pointer without a cast [-Wint-conversion]

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
reconstrucao/src/decompiled_03.c:341:5: error: implicit declaration of function ‘KeSetTimer2’; did you mean ‘KeSetTimer’? [-Wimplicit-function-declaration]

    338:   if (DAT_140f06bb8 == 0) {
    339:     uStack_18 = 0;
    340:     uStack_10 = 0xffffffffffffffff;
    341:     KeSetTimer2(&DAT_140f06bc0,0xfffffffffd050f80,0,&uStack_18);
    342:   }
    343:   FUN_1404935fc(&DAT_140f06ba8);
    344:   return;

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
reconstrucao/src/decompiled_03.c:371:17: error: implicit declaration of function ‘ZwAlpcSendWaitReceivePort’ [-Wimplicit-function-declaration]

    368:       AlpcInitializeMessageAttribute(0x20000000,lVar2,0xa0,auStack_10);
    369:       while( true ) {
    370:         uStackX_20 = 0x40;
    371:         iVar1 = ZwAlpcSendWaitReceivePort(DAT_140f06ba0,0,0,0,lVar3,&uStackX_20,lVar2,&uStack_18);
    372:         if (iVar1 != 0) break;
    373:         uVar4 = AlpcGetMessageAttribute(lVar2,0x20000000);
    374:         FUN_14077fb9c(lVar3,uVar4);

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

## FUN_14077fb9c */ — reconstrucao/src/decompiled_03.c:463
reconstrucao/src/decompiled_03.c:463:9: error: implicit declaration of function ‘ZwClose’ [-Wimplicit-function-declaration]

    460:         lVar4 = DAT_140f06bb0;
    461:         DAT_140f06bb0 = 0;
    462:         FUN_1404935fc(&DAT_140f06ba8);
    463:         ZwClose(lVar4);
    464:         return 0;
    465:       }
    466:       if (uVar5 != 10) {

## FUN_14077fb9c */ — reconstrucao/src/decompiled_03.c:493
reconstrucao/src/decompiled_03.c:493:15: error: implicit declaration of function ‘ZwAlpcAcceptConnectPort’ [-Wimplicit-function-declaration]

    490:       uStack_d0 = 0;
    491:       uStack_e0 = 0;
    492:       lStack_d8 = param_1;
    493:       iVar2 = ZwAlpcAcceptConnectPort(&DAT_140f06bb0,DAT_140f06ba0,0,&uStack_b0);
    494:       if (iVar2 < 0) {
    495:         puStack_e8 = auStack_78;
    496:         uStack_c8 = 0;

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

## FUN_14077fb9c */ — reconstrucao/src/decompiled_03.c:514
reconstrucao/src/decompiled_03.c:514:15: error: implicit declaration of function ‘ZwAlpcCancelMessage’ [-Wimplicit-function-declaration]

    511:       return 0;
    512:     }
    513:     if ((*(ushort *)(param_1 + 4) >> 0xd & 1) != 0) {
    514:       uVar3 = ZwAlpcCancelMessage(DAT_140f06ba0,0);
    515:       return uVar3;
    516:     }
    517:   }

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
reconstrucao/src/decompiled_03.c:644:5: error: implicit declaration of function ‘ExReleaseResourceLite’ [-Wimplicit-function-declaration]

    641:         FUN_140781cb4(uStackX_18,1);
    642:       }
    643:     }
    644:     ExReleaseResourceLite(&DAT_140f06b20);
    645:     KeLeaveCriticalRegion();
    646:   }
    647:   FUN_140784338(param_1,param_2,cVar1);

## TtmNotifyDeviceDeparture */ — reconstrucao/src/decompiled_03.c:644
reconstrucao/src/decompiled_03.c:644:28: error: ‘DAT_140f06b20’ undeclared (first use in this function)

    641:         FUN_140781cb4(uStackX_18,1);
    642:       }
    643:     }
    644:     ExReleaseResourceLite(&DAT_140f06b20);
    645:     KeLeaveCriticalRegion();
    646:   }
    647:   FUN_140784338(param_1,param_2,cVar1);

## TtmNotifyDeviceDeparture */ — reconstrucao/src/decompiled_03.c:645
reconstrucao/src/decompiled_03.c:645:5: error: implicit declaration of function ‘KeLeaveCriticalRegion’; did you mean ‘KeEnterCriticalRegion’? [-Wimplicit-function-declaration]

    642:       }
    643:     }
    644:     ExReleaseResourceLite(&DAT_140f06b20);
    645:     KeLeaveCriticalRegion();
    646:   }
    647:   FUN_140784338(param_1,param_2,cVar1);
    648:   return;

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

## FUN_1407807d0 */ — reconstrucao/src/decompiled_03.c:835
reconstrucao/src/decompiled_03.c:835:3: error: unknown type name ‘code’

    832: {
    833:   uint uVar1;
    834:   longlong lVar2;
    835:   code *pcVar3;
    836:   char cVar4;
    837:   longlong *plVar5;
    838:   longlong *plVar6;

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
reconstrucao/src/decompiled_03.c:906:19: error: ‘code’ undeclared (first use in this function)

    903:       lVar2 = *plVar6;
    904:       plVar5 = (longlong *)plVar6[1];
    905:       if ((*(longlong **)(lVar2 + 8) != plVar6) || ((longlong *)*plVar5 != plVar6)) {
    906:         pcVar3 = (code *)swi(0x29);
    907:         (*pcVar3)(3);
    908:         pcVar3 = (code *)swi(3);
    909:         (*pcVar3)();

## FUN_1407807d0 */ — reconstrucao/src/decompiled_03.c:906
reconstrucao/src/decompiled_03.c:906:25: error: expected expression before ‘)’ token

    903:       lVar2 = *plVar6;
    904:       plVar5 = (longlong *)plVar6[1];
    905:       if ((*(longlong **)(lVar2 + 8) != plVar6) || ((longlong *)*plVar5 != plVar6)) {
    906:         pcVar3 = (code *)swi(0x29);
    907:         (*pcVar3)(3);
    908:         pcVar3 = (code *)swi(3);
    909:         (*pcVar3)();

## FUN_1407807d0 */ — reconstrucao/src/decompiled_03.c:907
reconstrucao/src/decompiled_03.c:907:10: error: called object is not a function or function pointer

    904:       plVar5 = (longlong *)plVar6[1];
    905:       if ((*(longlong **)(lVar2 + 8) != plVar6) || ((longlong *)*plVar5 != plVar6)) {
    906:         pcVar3 = (code *)swi(0x29);
    907:         (*pcVar3)(3);
    908:         pcVar3 = (code *)swi(3);
    909:         (*pcVar3)();
    910:         return;

## FUN_1407807d0 */ — reconstrucao/src/decompiled_03.c:908
reconstrucao/src/decompiled_03.c:908:25: error: expected expression before ‘)’ token

    905:       if ((*(longlong **)(lVar2 + 8) != plVar6) || ((longlong *)*plVar5 != plVar6)) {
    906:         pcVar3 = (code *)swi(0x29);
    907:         (*pcVar3)(3);
    908:         pcVar3 = (code *)swi(3);
    909:         (*pcVar3)();
    910:         return;
    911:       }

## FUN_1407807d0 */ — reconstrucao/src/decompiled_03.c:909
reconstrucao/src/decompiled_03.c:909:10: error: called object is not a function or function pointer

    906:         pcVar3 = (code *)swi(0x29);
    907:         (*pcVar3)(3);
    908:         pcVar3 = (code *)swi(3);
    909:         (*pcVar3)();
    910:         return;
    911:       }
    912:       *plVar5 = lVar2;

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

## FUN_140ac2d78 */ — reconstrucao/src/decompiled_04.c:53
reconstrucao/src/decompiled_04.c:53:5: error: implicit declaration of function ‘KeDelayExecutionThread’ [-Wimplicit-function-declaration]

    50:       *(longlong *)(lVar2 + 8) = lVar3;
    51:       goto LAB_140ac2dd5;
    52:     }
    53:     KeDelayExecutionThread(0);
    54:   } while( true );
    55: }
    56: 

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

## FUN_140ac2e00 */ — reconstrucao/src/decompiled_04.c:238
reconstrucao/src/decompiled_04.c:238:5: error: implicit declaration of function ‘RtlFreeAnsiString’; did you mean ‘RtlFreeOemString’? [-Wimplicit-function-declaration]

    235:   iVar5 = FUN_14093ded0(0xc0000000,lStack_2e0,auStack_1e8,0);
    236:   if (iVar5 < 0) goto LAB_140ac33b1;
    237:   if ((lStack_2b0 != 0) && ((ushort)uStack_2b8 < 3)) {
    238:     RtlFreeAnsiString(&uStack_2b8);
    239:   }
    240:   if ((plStack_2a0 != (longlong *)0x0) && ((ushort)uStack_2a8 < 3)) {
    241:     RtlFreeAnsiString(&uStack_2a8);

## FUN_140ac2e00 */ — reconstrucao/src/decompiled_04.c:252
reconstrucao/src/decompiled_04.c:252:39: error: implicit declaration of function ‘RtlGUIDFromString’; did you mean ‘RtlUpperString’? [-Wimplicit-function-declaration]

    249:     if ((ushort)uStack_298 < 2) {
    250:       RtlFreeAnsiString(&uStack_298);
    251:     }
    252:     if ((lStack_290 == 0) || (iVar6 = RtlGUIDFromString(&uStack_298), iVar6 < 0))
    253:     goto LAB_140ac309a;
    254:   }
    255:   if ((puStack_258 != (uint *)0x0) && ((ushort)uStack_260 < 2)) {

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

## FUN_140ac2e00 */ — reconstrucao/src/decompiled_04.c:272
reconstrucao/src/decompiled_04.c:272:7: error: implicit declaration of function ‘RtlInitUnicodeString’; did you mean ‘RtlHashUnicodeString’? [-Wimplicit-function-declaration]

    269:   uStack_21c = 3;
    270:   for (; lVar11 != DAT_140f8c958; lVar11 = *(longlong *)(lVar11 + 0x10)) {
    271:     if (*(longlong *)(*(longlong *)(lVar11 + 0x20) + 8) == DAT_140f8adc0) {
    272:       RtlInitUnicodeString(auStack_240,L"SWD\\");
    273:       cVar4 = RtlPrefixUnicodeString(auStack_240,lVar11 + 0x28);
    274:       if (cVar4 != '\0') {
    275:         RtlInitUnicodeString

## FUN_140ac2e00 */ — reconstrucao/src/decompiled_04.c:273
reconstrucao/src/decompiled_04.c:273:15: error: implicit declaration of function ‘RtlPrefixUnicodeString’; did you mean ‘RtlSuffixUnicodeString’? [-Wimplicit-function-declaration]

    270:   for (; lVar11 != DAT_140f8c958; lVar11 = *(longlong *)(lVar11 + 0x10)) {
    271:     if (*(longlong *)(*(longlong *)(lVar11 + 0x20) + 8) == DAT_140f8adc0) {
    272:       RtlInitUnicodeString(auStack_240,L"SWD\\");
    273:       cVar4 = RtlPrefixUnicodeString(auStack_240,lVar11 + 0x28);
    274:       if (cVar4 != '\0') {
    275:         RtlInitUnicodeString
    276:                   (&uStack_270,*(longlong *)(lVar11 + 0x30) + (auStack_240[0] >> 1 & 0x7fff) * 2);

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

## FUN_140ac2e00 */ — reconstrucao/src/decompiled_04.c:303
reconstrucao/src/decompiled_04.c:303:37: error: implicit declaration of function ‘ExAllocatePool2’; did you mean ‘ExAllocatePool’? [-Wimplicit-function-declaration]

    300:             if (*(int *)(lVar11 + 0x2ac) == iVar16) {
    301:               if (pwVar7 == (wchar_t *)0x0) {
    302:                 uStack_2d8 = 0x800;
    303:                 pwVar7 = (wchar_t *)ExAllocatePool2(0x100);
    304:                 if (pwVar7 == (wchar_t *)0x0) goto LAB_140ac339f;
    305:               }
    306:               uVar3 = uStack_2d8;

## FUN_140ac2e00 */ — reconstrucao/src/decompiled_04.c:317
reconstrucao/src/decompiled_04.c:317:39: error: ‘DAT_140e66448’ undeclared (first use in this function)

    314:                 plStack_368 = (longlong *)&iStack_2d4;
    315:                 auStack_318[0] = uVar3;
    316:                 pwStack_360 = pwVar7;
    317:                 iVar5 = FUN_1408ddb20(DAT_140e66448,*(undefined8 *)(lVar11 + 0x30),0,*puStack_288);
    318:                 if (((iVar5 < 0) || (iStack_2d4 != 7)) || (auStack_318[0] < 2)) {
    319:                   *pwVar7 = L'\0';
    320:                   iVar5 = 0;

## FUN_140ac2e00 */ — reconstrucao/src/decompiled_04.c:378
reconstrucao/src/decompiled_04.c:378:15: error: implicit declaration of function ‘RtlCreateUnicodeString’; did you mean ‘RtlCompareUnicodeString’? [-Wimplicit-function-declaration]

    375:     lStack_278 = (ulonglong)*(uint *)(lStack_300 + 8) + lStack_300;
    376: LAB_140ac352a:
    377:     if (*plStack_308 == DAT_140f8c958) {
    378:       cVar4 = RtlCreateUnicodeString(&uStack_230,lStack_280);
    379:       if (cVar4 != '\0') {
    380: LAB_140ac35e6:
    381:         lVar11 = lStack_218;

## FUN_140ac2e00 */ — reconstrucao/src/decompiled_04.c:385
reconstrucao/src/decompiled_04.c:385:56: error: request for member ‘_4_4_’ in something not a structure or union

    382:         uVar18 = (ulonglong)uStack_2c8;
    383:         do {
    384:           puStack_358 = auStack_318;
    385:           pwStack_360 = (wchar_t *)CONCAT44(pwStack_360._4_4_,(uint)uVar18);
    386:           plStack_368 = plVar10;
    387:           iVar5 = FUN_1409a9498(lVar11,lStack_2e0,0,0);
    388:           uVar3 = auStack_318[0];

## FUN_140ac2e00 */ — reconstrucao/src/decompiled_04.c:408
reconstrucao/src/decompiled_04.c:408:13: error: implicit declaration of function ‘ExFreePoolWithTag’ [-Wimplicit-function-declaration]

    405:             goto LAB_140ac37bb;
    406:           }
    407:           if (plVar10 != (longlong *)0x0) {
    408:             ExFreePoolWithTag(plVar10,0);
    409:           }
    410:           uVar18 = (ulonglong)auStack_318[0];
    411:           plVar10 = (longlong *)ExAllocatePool2(0x100,uVar18 * 0x14);

## FUN_140ac2e00 */ — reconstrucao/src/decompiled_04.c:433
reconstrucao/src/decompiled_04.c:433:19: error: request for member ‘_0_4_’ in something not a structure or union

    430:         do {
    431:           lVar20 = lVar20 + 1;
    432:         } while (*(short *)(lStack_310 + lVar20 * 2) != 0);
    433:         uStack_230._0_4_ = CONCAT22(((short)lVar13 + 3 + (short)lVar20) * 2,(undefined2)uStack_230);
    434:         lStack_228 = ExAllocatePool2(0x100,(lVar12 + lVar20) * 2 + 4U & 0xffff,0x67727453);
    435:         if (lStack_228 == 0) {
    436:           iVar5 = -0x3fffff66;

## FUN_140ac2e00 */ — reconstrucao/src/decompiled_04.c:449
reconstrucao/src/decompiled_04.c:449:5: error: implicit declaration of function ‘ExFreePool’; did you mean ‘ExFreePool2’? [-Wimplicit-function-declaration]

    446:   lVar8 = lStack_310;
    447: LAB_140ac33b1:
    448:   if (lStack_228 != 0) {
    449:     ExFreePool();
    450:   }
    451:   if (lVar8 != 0) {
    452:     ExFreePoolWithTag(lVar8,0);

## FUN_140ac2e00 */ — reconstrucao/src/decompiled_04.c:486
reconstrucao/src/decompiled_04.c:486:5: error: implicit declaration of function ‘ZwClose’ [-Wimplicit-function-declaration]

    483:     ExFreePoolWithTag(pwVar7,0);
    484:   }
    485:   if (lStack_2e0 != 0) {
    486:     ZwClose();
    487:   }
    488:   if ((iVar5 < 0) && ((DAT_140ef02c4 & 4) != 0)) {
    489:     pwStack_360 = (wchar_t *)CONCAT44(pwStack_360._4_4_,iVar5);

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
reconstrucao/src/decompiled_04.c:655:13: error: implicit declaration of function ‘EtwEventEnabled’ [-Wimplicit-function-declaration]

    652:   uint auStackX_8 [2];
    653:   
    654:   if (DAT_140e67b01 != '\0') {
    655:     cVar4 = EtwEventEnabled(DAT_140f085e0,&DAT_14001e1b8);
    656:     puVar3 = DAT_140fc7ad0;
    657:     if (cVar4 != '\0') {
    658:       if (DAT_140fc7ad0 == (uint *)0x0) {

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

## FUN_140ac393c */ — reconstrucao/src/decompiled_04.c:699
reconstrucao/src/decompiled_04.c:699:9: error: implicit declaration of function ‘EtwWrite’ [-Wimplicit-function-declaration]

    696:             *(undefined4 *)((longlong)plVar5 + uVar7 * 0x10 + 0xc) = 0;
    697:           } while (uVar9 < auStackX_8[0]);
    698:         }
    699:         EtwWrite(DAT_140f085e0,&DAT_14001e1b8,0,uVar1,plVar5);
    700:         ExFreePoolWithTag(plVar5,0x654d5050);
    701:       }
    702:     }

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

## FUN_140ac3ab0 */ — reconstrucao/src/decompiled_04.c:785
reconstrucao/src/decompiled_04.c:785:7: error: implicit declaration of function ‘RtlTimeToTimeFields’; did you mean ‘RtlTimeToElapsedTimeFields’? [-Wimplicit-function-declaration]

    782:         if (iVar6 < 0) goto LAB_140ac3cbf;
    783:         sVar5 = sVar5 + 2;
    784:       }
    785:       RtlTimeToTimeFields(param_1 + 0x70,&uStack_28);
    786:       iVar6 = FUN_140489994(&uStack_38,L",%02d/%02d/%04d,%u.%u.%u.%u",(int)uStack_28._2_2_,
    787:                             (int)uStack_28._4_2_,CONCAT44(uVar9,(int)(short)uStack_28),
    788:                             CONCAT44(uVar11,*(uint *)(param_1 + 0x7c) >> 0x10),

