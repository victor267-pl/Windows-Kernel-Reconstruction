# Contextos dos primeiros erros de compilação

Cada erro está associado ao marcador de função Ghidra mais próximo. O contexto serve para reconstrução orientada por evidência.

## FUN_140200008 */ — reconstrucao/src/decompiled_01.c:107
reconstrucao/src/decompiled_01.c:107:15: error: ‘DAT_140e0a740’ undeclared (first use in this function)

    104:   undefined8 uStack_20;
    105:   ulonglong uStack_18;
    106:   
    107:   uStack_18 = DAT_140e0a740 ^ (ulonglong)auStack_2f8;
    108:   uStack_28 = param_36;
    109:   uStack_38 = param_35;
    110:   puStack_58 = auStack_40;

## FUN_140200008 */ — reconstrucao/src/decompiled_01.c:201
reconstrucao/src/decompiled_01.c:201:18: error: ‘DAT_140e0a590’ undeclared (first use in this function)

    198:   uStack_280 = 4;
    199:   uStack_290 = 4;
    200:   uStack_2a0 = 8;
    201:   FUN_1403a0f70(&DAT_140e0a590,param_2,0,0);
    202:   return;
    203: }
    204: 

## FUN_140200008 */ — reconstrucao/src/decompiled_01.c:201
reconstrucao/src/decompiled_01.c:201:32: error: passing argument 2 of ‘FUN_1403a0f70’ makes pointer from integer without a cast [-Wint-conversion]

    198:   uStack_280 = 4;
    199:   uStack_290 = 4;
    200:   uStack_2a0 = 8;
    201:   FUN_1403a0f70(&DAT_140e0a590,param_2,0,0);
    202:   return;
    203: }
    204: 

## FUN_140200008 */ — reconstrucao/src/decompiled_01.c:201
reconstrucao/src/decompiled_01.c:201:3: error: too few arguments to function ‘FUN_1403a0f70’; expected 6, have 4

    198:   uStack_280 = 4;
    199:   uStack_290 = 4;
    200:   uStack_2a0 = 8;
    201:   FUN_1403a0f70(&DAT_140e0a590,param_2,0,0);
    202:   return;
    203: }
    204: 

## FUN_140200740 */ — reconstrucao/src/decompiled_01.c:336
reconstrucao/src/decompiled_01.c:336:7: error: ‘DAT_140fc7d20’ undeclared (first use in this function)

    333:   undefined8 auStackX_10 [3];
    334:   
    335:   auStackX_10[0] = 0;
    336:   if (DAT_140fc7d20 != 0) {
    337:     FUN_1404f6e6c(in_CR8,2);
    338:   }
    339:   FUN_1402007a8(param_1,auStackX_10);

## FUN_140200740 */ — reconstrucao/src/decompiled_01.c:339
reconstrucao/src/decompiled_01.c:339:25: error: passing argument 2 of ‘FUN_1402007a8’ makes integer from pointer without a cast [-Wint-conversion]

    336:   if (DAT_140fc7d20 != 0) {
    337:     FUN_1404f6e6c(in_CR8,2);
    338:   }
    339:   FUN_1402007a8(param_1,auStackX_10);
    340:   FUN_140271070(FiberData,auStackX_10);
    341:   return;
    342: }

## FUN_140200740 */ — reconstrucao/src/decompiled_01.c:340
reconstrucao/src/decompiled_01.c:340:17: error: ‘FiberData’ undeclared (first use in this function)

    337:     FUN_1404f6e6c(in_CR8,2);
    338:   }
    339:   FUN_1402007a8(param_1,auStackX_10);
    340:   FUN_140271070(FiberData,auStackX_10);
    341:   return;
    342: }
    343: 

## FUN_140200740 */ — reconstrucao/src/decompiled_01.c:340
reconstrucao/src/decompiled_01.c:340:3: error: too few arguments to function ‘FUN_140271070’; expected 3, have 2

    337:     FUN_1404f6e6c(in_CR8,2);
    338:   }
    339:   FUN_1402007a8(param_1,auStackX_10);
    340:   FUN_140271070(FiberData,auStackX_10);
    341:   return;
    342: }
    343: 

## FUN_1402007a8 */ — reconstrucao/src/decompiled_01.c:356
reconstrucao/src/decompiled_01.c:356:5: error: implicit declaration of function ‘LOCK’ [-Wimplicit-function-declaration]

    353:   
    354:   uVar4 = 0;
    355:   while( true ) {
    356:     LOCK();
    357:     puVar1 = (ulonglong *)(param_1 + 0x40);
    358:     uVar2 = *puVar1;
    359:     *puVar1 = *puVar1 | 1;

## FUN_1402007a8 */ — reconstrucao/src/decompiled_01.c:360
reconstrucao/src/decompiled_01.c:360:5: error: implicit declaration of function ‘UNLOCK’ [-Wimplicit-function-declaration]

    357:     puVar1 = (ulonglong *)(param_1 + 0x40);
    358:     uVar2 = *puVar1;
    359:     *puVar1 = *puVar1 | 1;
    360:     UNLOCK();
    361:     if ((uVar2 & 1) == 0) break;
    362:     do {
    363:       uVar4 = uVar4 + 1;

## FUN_1402007a8 */ — reconstrucao/src/decompiled_01.c:364
reconstrucao/src/decompiled_01.c:364:14: error: ‘DAT_140fc62ac’ undeclared (first use in this function)

    361:     if ((uVar2 & 1) == 0) break;
    362:     do {
    363:       uVar4 = uVar4 + 1;
    364:       if ((((DAT_140fc62ac & uVar4) == 0) && ((DAT_140fc7ab8 & 0x40) != 0)) &&
    365:          (cVar3 = FUN_14020cb70(), cVar3 != '\0')) {
    366:         FUN_14020cb40(uVar4);
    367:       }

## FUN_1402007a8 */ — reconstrucao/src/decompiled_01.c:364
reconstrucao/src/decompiled_01.c:364:48: error: ‘DAT_140fc7ab8’ undeclared (first use in this function); did you mean ‘FUN_1402c7ab8’?

    361:     if ((uVar2 & 1) == 0) break;
    362:     do {
    363:       uVar4 = uVar4 + 1;
    364:       if ((((DAT_140fc62ac & uVar4) == 0) && ((DAT_140fc7ab8 & 0x40) != 0)) &&
    365:          (cVar3 = FUN_14020cb70(), cVar3 != '\0')) {
    366:         FUN_14020cb40(uVar4);
    367:       }

## FUN_1402007a8 */ — reconstrucao/src/decompiled_01.c:370
reconstrucao/src/decompiled_01.c:370:3: error: too many arguments to function ‘FUN_140200820’; expected 1, have 2

    367:       }
    368:     } while (*(longlong *)(param_1 + 0x40) != 0);
    369:   }
    370:   FUN_140200820(param_1,param_2);
    371:   return;
    372: }
    373: 

## FUN_140200820 */ — reconstrucao/src/decompiled_01.c:396
reconstrucao/src/decompiled_01.c:396:21: error: passing argument 2 of ‘FUN_14020bfa0’ makes integer from pointer without a cast [-Wint-conversion]

    393:   uStack_48 = 0;
    394:   uStack_40 = 0;
    395:   if ((*(uint *)(param_1 + 0x74) & 8) == 0) {
    396:     FUN_14020bfa0(0,&uStackX_20,&uStackX_18,auStackX_8,&uStack_48);
    397:     cVar2 = FUN_14034f180(param_1);
    398:     iVar3 = *(int *)(param_1 + 0x24c);
    399:     FUN_14020a0c8(param_1,*(undefined8 *)(param_1 + 0x240));

## FUN_140200820 */ — reconstrucao/src/decompiled_01.c:396
reconstrucao/src/decompiled_01.c:396:5: error: too many arguments to function ‘FUN_14020bfa0’; expected 3, have 5

    393:   uStack_48 = 0;
    394:   uStack_40 = 0;
    395:   if ((*(uint *)(param_1 + 0x74) & 8) == 0) {
    396:     FUN_14020bfa0(0,&uStackX_20,&uStackX_18,auStackX_8,&uStack_48);
    397:     cVar2 = FUN_14034f180(param_1);
    398:     iVar3 = *(int *)(param_1 + 0x24c);
    399:     FUN_14020a0c8(param_1,*(undefined8 *)(param_1 + 0x240));

## FUN_140200820 */ — reconstrucao/src/decompiled_01.c:399
reconstrucao/src/decompiled_01.c:399:27: error: passing argument 2 of ‘FUN_14020a0c8’ makes pointer from integer without a cast [-Wint-conversion]

    396:     FUN_14020bfa0(0,&uStackX_20,&uStackX_18,auStackX_8,&uStack_48);
    397:     cVar2 = FUN_14034f180(param_1);
    398:     iVar3 = *(int *)(param_1 + 0x24c);
    399:     FUN_14020a0c8(param_1,*(undefined8 *)(param_1 + 0x240));
    400:   }
    401:   else {
    402:     *(undefined8 *)(param_1 + 0x40) = 0;

## FUN_140200820 */ — reconstrucao/src/decompiled_01.c:399
reconstrucao/src/decompiled_01.c:399:5: error: too few arguments to function ‘FUN_14020a0c8’; expected 9, have 2

    396:     FUN_14020bfa0(0,&uStackX_20,&uStackX_18,auStackX_8,&uStack_48);
    397:     cVar2 = FUN_14034f180(param_1);
    398:     iVar3 = *(int *)(param_1 + 0x24c);
    399:     FUN_14020a0c8(param_1,*(undefined8 *)(param_1 + 0x240));
    400:   }
    401:   else {
    402:     *(undefined8 *)(param_1 + 0x40) = 0;

## FUN_140200820 */ — reconstrucao/src/decompiled_01.c:405
reconstrucao/src/decompiled_01.c:405:15: error: ‘DAT_140fc7b04’ undeclared (first use in this function)

    402:     *(undefined8 *)(param_1 + 0x40) = 0;
    403:     iVar3 = iVar1;
    404:   }
    405:   if ((((uint)DAT_140fc7b04 & 0x1000) != 0) && (cVar2 != '\0')) {
    406:     FUN_1403c0604(param_1,*(undefined2 *)(param_1 + 0x248),
    407:                   CONCAT31((uint3)(*(uint *)(param_1 + 0x74) >> 0xb),
    408:                            (char)(*(uint *)(param_1 + 0x74) >> 3)) & 0xffffff01,0,

## FUN_140200820 */ — reconstrucao/src/decompiled_01.c:407
reconstrucao/src/decompiled_01.c:407:19: error: implicit declaration of function ‘CONCAT31’ [-Wimplicit-function-declaration]

    404:   }
    405:   if ((((uint)DAT_140fc7b04 & 0x1000) != 0) && (cVar2 != '\0')) {
    406:     FUN_1403c0604(param_1,*(undefined2 *)(param_1 + 0x248),
    407:                   CONCAT31((uint3)(*(uint *)(param_1 + 0x74) >> 0xb),
    408:                            (char)(*(uint *)(param_1 + 0x74) >> 3)) & 0xffffff01,0,
    409:                   *(undefined8 *)(param_1 + 0x240),0x536);
    410:   }

## FUN_140200820 */ — reconstrucao/src/decompiled_01.c:407
reconstrucao/src/decompiled_01.c:407:29: error: ‘uint3’ undeclared (first use in this function); did you mean ‘uint32’?

    404:   }
    405:   if ((((uint)DAT_140fc7b04 & 0x1000) != 0) && (cVar2 != '\0')) {
    406:     FUN_1403c0604(param_1,*(undefined2 *)(param_1 + 0x248),
    407:                   CONCAT31((uint3)(*(uint *)(param_1 + 0x74) >> 0xb),
    408:                            (char)(*(uint *)(param_1 + 0x74) >> 3)) & 0xffffff01,0,
    409:                   *(undefined8 *)(param_1 + 0x240),0x536);
    410:   }

## FUN_140200820 */ — reconstrucao/src/decompiled_01.c:409
reconstrucao/src/decompiled_01.c:409:19: error: passing argument 5 of ‘FUN_1403c0604’ makes pointer from integer without a cast [-Wint-conversion]

    406:     FUN_1403c0604(param_1,*(undefined2 *)(param_1 + 0x248),
    407:                   CONCAT31((uint3)(*(uint *)(param_1 + 0x74) >> 0xb),
    408:                            (char)(*(uint *)(param_1 + 0x74) >> 3)) & 0xffffff01,0,
    409:                   *(undefined8 *)(param_1 + 0x240),0x536);
    410:   }
    411:   if ((iVar1 != iVar3) && ((DAT_140fc7b10 & 0x8000000) != 0)) {
    412:     FUN_1403be528(param_1,0x546,iVar1,iVar3);

## FUN_140200820 */ — reconstrucao/src/decompiled_01.c:411
reconstrucao/src/decompiled_01.c:411:29: error: ‘DAT_140fc7b10’ undeclared (first use in this function)

    408:                            (char)(*(uint *)(param_1 + 0x74) >> 3)) & 0xffffff01,0,
    409:                   *(undefined8 *)(param_1 + 0x240),0x536);
    410:   }
    411:   if ((iVar1 != iVar3) && ((DAT_140fc7b10 & 0x8000000) != 0)) {
    412:     FUN_1403be528(param_1,0x546,iVar1,iVar3);
    413:   }
    414:   return;

## FUN_140200950 */ — reconstrucao/src/decompiled_01.c:429
reconstrucao/src/decompiled_01.c:429:7: error: ‘DAT_140fc7ad0’ undeclared (first use in this function)

    426:   ulonglong uVar5;
    427:   ulonglong uVar6;
    428:   
    429:   if (DAT_140fc7ad0 != (uint *)0x0) {
    430:     uVar2 = KeAcquireSpinLockRaiseToDpc(&DAT_140f0cf28);
    431:     uVar6 = 0;
    432:     if (*DAT_140fc7ad0 != 0) {

## FUN_140200950 */ — reconstrucao/src/decompiled_01.c:430
reconstrucao/src/decompiled_01.c:430:42: error: ‘DAT_140f0cf28’ undeclared (first use in this function)

    427:   ulonglong uVar6;
    428:   
    429:   if (DAT_140fc7ad0 != (uint *)0x0) {
    430:     uVar2 = KeAcquireSpinLockRaiseToDpc(&DAT_140f0cf28);
    431:     uVar6 = 0;
    432:     if (*DAT_140fc7ad0 != 0) {
    433:       do {

## FUN_140200950 */ — reconstrucao/src/decompiled_01.c:445
reconstrucao/src/decompiled_01.c:445:52: error: implicit declaration of function ‘CONCAT71’ [-Wimplicit-function-declaration]

    442:             uVar5 = uVar4;
    443:           } while (uVar3 < puVar1[uVar6 * 0x70 + 0x1b]);
    444:         }
    445:         FUN_140201790(puVar1 + uVar6 * 0x70 + 0x14,CONCAT71((int7)(uVar4 >> 8),4),1);
    446:         uVar3 = (int)uVar6 + 1;
    447:         uVar6 = (ulonglong)uVar3;
    448:       } while (uVar3 < *DAT_140fc7ad0);

## FUN_140200950 */ — reconstrucao/src/decompiled_01.c:445
reconstrucao/src/decompiled_01.c:445:62: error: ‘int7’ undeclared (first use in this function); did you mean ‘int’?

    442:             uVar5 = uVar4;
    443:           } while (uVar3 < puVar1[uVar6 * 0x70 + 0x1b]);
    444:         }
    445:         FUN_140201790(puVar1 + uVar6 * 0x70 + 0x14,CONCAT71((int7)(uVar4 >> 8),4),1);
    446:         uVar3 = (int)uVar6 + 1;
    447:         uVar6 = (ulonglong)uVar3;
    448:       } while (uVar3 < *DAT_140fc7ad0);

## FUN_140200950 */ — reconstrucao/src/decompiled_01.c:445
reconstrucao/src/decompiled_01.c:445:45: error: passing argument 1 of ‘FUN_140201790’ makes integer from pointer without a cast [-Wint-conversion]

    442:             uVar5 = uVar4;
    443:           } while (uVar3 < puVar1[uVar6 * 0x70 + 0x1b]);
    444:         }
    445:         FUN_140201790(puVar1 + uVar6 * 0x70 + 0x14,CONCAT71((int7)(uVar4 >> 8),4),1);
    446:         uVar3 = (int)uVar6 + 1;
    447:         uVar6 = (ulonglong)uVar3;
    448:       } while (uVar3 < *DAT_140fc7ad0);

## FUN_1402009ec */ — reconstrucao/src/decompiled_01.c:457
reconstrucao/src/decompiled_01.c:457:1: error: return type defaults to ‘int’ [-Wimplicit-int]

    454: 
    455: /* Ghidra label: FUN_1402009ec */
    456: /* Ghidra address: 1402009ec */
    457: FUN_1402009ec(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
    458:              undefined1 param_5)
    459: 
    460: {

## FUN_1402009ec */ — reconstrucao/src/decompiled_01.c:464
reconstrucao/src/decompiled_01.c:464:17: error: ‘DAT_140fc7c20’ undeclared (first use in this function)

    461:   undefined4 uVar1;
    462:   
    463:   param_5 = 0;
    464:   FUN_140200a58(DAT_140fc7c20,&param_5);
    465:   uVar1 = FUN_140201958(param_1,param_2,0,param_4,0);
    466:   FUN_1404f6c6c(DAT_140fc7c20,param_5);
    467:   return uVar1;

## FUN_1402009ec */ — reconstrucao/src/decompiled_01.c:465
reconstrucao/src/decompiled_01.c:465:33: error: passing argument 2 of ‘FUN_140201958’ makes pointer from integer without a cast [-Wint-conversion]

    462:   
    463:   param_5 = 0;
    464:   FUN_140200a58(DAT_140fc7c20,&param_5);
    465:   uVar1 = FUN_140201958(param_1,param_2,0,param_4,0);
    466:   FUN_1404f6c6c(DAT_140fc7c20,param_5);
    467:   return uVar1;
    468: }

## FUN_140200a58 */ — reconstrucao/src/decompiled_01.c:477
reconstrucao/src/decompiled_01.c:477:7: error: ‘DAT_140fc7d20’ undeclared (first use in this function)

    474: {
    475:   undefined1 in_CR8;
    476:   
    477:   if (DAT_140fc7d20 != 0) {
    478:     FUN_1404f6e6c(in_CR8,2);
    479:   }
    480:   *param_2 = in_CR8;

## FUN_140200a58 */ — reconstrucao/src/decompiled_01.c:481
reconstrucao/src/decompiled_01.c:481:39: error: passing argument 1 of ‘KeAcquireSpinLockAtDpcLevel’ makes pointer from integer without a cast [-Wint-conversion]

    478:     FUN_1404f6e6c(in_CR8,2);
    479:   }
    480:   *param_2 = in_CR8;
    481:   KeAcquireSpinLockAtDpcLevel(param_1 + 8);
    482:   return;
    483: }
    484: 

## KeSetSelectedCpuSetsThread */ — reconstrucao/src/decompiled_01.c:503
reconstrucao/src/decompiled_01.c:503:11: error: too few arguments to function ‘FUN_140201918’; expected 2, have 1

    500:   
    501:                     /* 0x200ab0  1461  KeSetSelectedCpuSetsThread */
    502:   auStackX_20[0] = 0;
    503:   uVar5 = FUN_140201918(param_3);
    504:   if (-1 < (int)uVar5) {
    505:     auStack_38[0] = 0;
    506:     plVar7 = (longlong *)(param_1 + 0x690);

## KeSetSelectedCpuSetsThread */ — reconstrucao/src/decompiled_01.c:513
reconstrucao/src/decompiled_01.c:513:15: error: ‘DAT_140fc6014’ undeclared (first use in this function)

    510:     }
    511:     else {
    512:       plVar7 = (longlong *)*plVar7;
    513:       uVar6 = DAT_140fc6014;
    514:     }
    515:     FUN_14037eee0(lVar3,auStackX_20);
    516:     uVar8 = 0;

## KeSetSelectedCpuSetsThread */ — reconstrucao/src/decompiled_01.c:526
reconstrucao/src/decompiled_01.c:526:16: error: ‘DAT_140fc62ac’ undeclared (first use in this function)

    523:       if ((uVar2 & 1) == 0) break;
    524:       do {
    525:         uVar8 = uVar8 + 1;
    526:         if ((((DAT_140fc62ac & uVar8) == 0) && ((DAT_140fc7ab8 & 0x40) != 0)) &&
    527:            (cVar4 = FUN_14020cb70(), cVar4 != '\0')) {
    528:           FUN_14020cb40(uVar8);
    529:         }

## KeSetSelectedCpuSetsThread */ — reconstrucao/src/decompiled_01.c:526
reconstrucao/src/decompiled_01.c:526:50: error: ‘DAT_140fc7ab8’ undeclared (first use in this function); did you mean ‘FUN_1402c7ab8’?

    523:       if ((uVar2 & 1) == 0) break;
    524:       do {
    525:         uVar8 = uVar8 + 1;
    526:         if ((((DAT_140fc62ac & uVar8) == 0) && ((DAT_140fc7ab8 & 0x40) != 0)) &&
    527:            (cVar4 = FUN_14020cb70(), cVar4 != '\0')) {
    528:           FUN_14020cb40(uVar8);
    529:         }

## KeSetSelectedCpuSetsThread */ — reconstrucao/src/decompiled_01.c:533
reconstrucao/src/decompiled_01.c:533:5: error: too many arguments to function ‘FUN_140200820’; expected 1, have 2

    530:       } while (*(longlong *)(param_1 + 0x40) != 0);
    531:     }
    532:     FUN_1404fbce4(plVar7,uVar6,param_3,param_2);
    533:     FUN_140200820(param_1,auStack_38);
    534:     ExReleaseSpinLockSharedFromDpcLevel(lVar3 + 0x40);
    535:     FUN_140271070(FiberData,auStack_38,auStackX_20[0]);
    536:     uVar5 = 0;

## KeSetSelectedCpuSetsThread */ — reconstrucao/src/decompiled_01.c:534
reconstrucao/src/decompiled_01.c:534:47: error: passing argument 1 of ‘ExReleaseSpinLockSharedFromDpcLevel’ makes pointer from integer without a cast [-Wint-conversion]

    531:     }
    532:     FUN_1404fbce4(plVar7,uVar6,param_3,param_2);
    533:     FUN_140200820(param_1,auStack_38);
    534:     ExReleaseSpinLockSharedFromDpcLevel(lVar3 + 0x40);
    535:     FUN_140271070(FiberData,auStack_38,auStackX_20[0]);
    536:     uVar5 = 0;
    537:   }

## KeSetSelectedCpuSetsThread */ — reconstrucao/src/decompiled_01.c:535
reconstrucao/src/decompiled_01.c:535:19: error: ‘FiberData’ undeclared (first use in this function)

    532:     FUN_1404fbce4(plVar7,uVar6,param_3,param_2);
    533:     FUN_140200820(param_1,auStack_38);
    534:     ExReleaseSpinLockSharedFromDpcLevel(lVar3 + 0x40);
    535:     FUN_140271070(FiberData,auStack_38,auStackX_20[0]);
    536:     uVar5 = 0;
    537:   }
    538:   return uVar5;

## FUN_140200bc0 */ — reconstrucao/src/decompiled_01.c:564
reconstrucao/src/decompiled_01.c:564:12: error: ‘FiberData’ undeclared (first use in this function)

    561:   undefined1 auStack_89 [89];
    562:   ulonglong uStack_30;
    563:   
    564:   pvVar1 = FiberData;
    565:   uStack_30 = DAT_140e0a740 ^ (ulonglong)auStack_128;
    566:   puStack_f8 = (undefined4 *)0x0;
    567:   uStack_f0 = uStack_f0 & 0xffffffff00000000;

## FUN_140200bc0 */ — reconstrucao/src/decompiled_01.c:565
reconstrucao/src/decompiled_01.c:565:15: error: ‘DAT_140e0a740’ undeclared (first use in this function)

    562:   ulonglong uStack_30;
    563:   
    564:   pvVar1 = FiberData;
    565:   uStack_30 = DAT_140e0a740 ^ (ulonglong)auStack_128;
    566:   puStack_f8 = (undefined4 *)0x0;
    567:   uStack_f0 = uStack_f0 & 0xffffffff00000000;
    568:   uVar6 = 0;

## FUN_140200bc0 */ — reconstrucao/src/decompiled_01.c:570
reconstrucao/src/decompiled_01.c:570:14: error: assignment to ‘undefined8’ {aka ‘long unsigned int’} from ‘void *’ makes integer from pointer without a cast [-Wint-conversion]

    567:   uStack_f0 = uStack_f0 & 0xffffffff00000000;
    568:   uVar6 = 0;
    569:   uStack_108 = 0;
    570:   uStack_100 = (void *)0x0;
    571:   if ((DAT_140fc7a90 & 8) == 0) {
    572:     uStack_108 = 4;
    573:     uVar2 = FUN_1402fd8a0();

## FUN_140200bc0 */ — reconstrucao/src/decompiled_01.c:571
reconstrucao/src/decompiled_01.c:571:8: error: ‘DAT_140fc7a90’ undeclared (first use in this function)

    568:   uVar6 = 0;
    569:   uStack_108 = 0;
    570:   uStack_100 = (void *)0x0;
    571:   if ((DAT_140fc7a90 & 8) == 0) {
    572:     uStack_108 = 4;
    573:     uVar2 = FUN_1402fd8a0();
    574:     uStack_100 = (void *)CONCAT71(uStack_100._1_7_,uVar2);

## FUN_140200bc0 */ — reconstrucao/src/decompiled_01.c:574
reconstrucao/src/decompiled_01.c:574:45: error: request for member ‘_1_7_’ in something not a structure or union

    571:   if ((DAT_140fc7a90 & 8) == 0) {
    572:     uStack_108 = 4;
    573:     uVar2 = FUN_1402fd8a0();
    574:     uStack_100 = (void *)CONCAT71(uStack_100._1_7_,uVar2);
    575:     uStack_100 = (void *)CONCAT44(1,(undefined4)uStack_100);
    576:     puVar5 = *(undefined4 **)((longlong)FiberData + 0x8c00);
    577:     uStack_f0 = *(ulonglong *)(puVar5 + 4);

## FUN_140200bc0 */ — reconstrucao/src/decompiled_01.c:575
reconstrucao/src/decompiled_01.c:575:26: error: implicit declaration of function ‘CONCAT44’ [-Wimplicit-function-declaration]

    572:     uStack_108 = 4;
    573:     uVar2 = FUN_1402fd8a0();
    574:     uStack_100 = (void *)CONCAT71(uStack_100._1_7_,uVar2);
    575:     uStack_100 = (void *)CONCAT44(1,(undefined4)uStack_100);
    576:     puVar5 = *(undefined4 **)((longlong)FiberData + 0x8c00);
    577:     uStack_f0 = *(ulonglong *)(puVar5 + 4);
    578:     uVar6 = (uint)uStack_108;

## FUN_140200bc0 */ — reconstrucao/src/decompiled_01.c:575
reconstrucao/src/decompiled_01.c:575:16: error: assignment to ‘undefined8’ {aka ‘long unsigned int’} from ‘void *’ makes integer from pointer without a cast [-Wint-conversion]

    572:     uStack_108 = 4;
    573:     uVar2 = FUN_1402fd8a0();
    574:     uStack_100 = (void *)CONCAT71(uStack_100._1_7_,uVar2);
    575:     uStack_100 = (void *)CONCAT44(1,(undefined4)uStack_100);
    576:     puVar5 = *(undefined4 **)((longlong)FiberData + 0x8c00);
    577:     uStack_f0 = *(ulonglong *)(puVar5 + 4);
    578:     uVar6 = (uint)uStack_108;

## FUN_140200bc0 */ — reconstrucao/src/decompiled_01.c:583
reconstrucao/src/decompiled_01.c:583:39: error: request for member ‘_4_4_’ in something not a structure or union

    580:   else {
    581:     puVar5 = (undefined4 *)ExpInterlockedPopEntrySList((longlong)FiberData + 0x8bc0);
    582:     if (puVar5 == (undefined4 *)0x0) {
    583:       uStack_108 = CONCAT44(uStack_108._4_4_,2);
    584:       uVar6 = 2;
    585:       puVar5 = (undefined4 *)((ulonglong)auStack_89 & 0xfffffffffffff000);
    586:       if ((((ulonglong)auStack_89 ^ (ulonglong)auStack_e0) & 0xfffffffffffff000) == 0) {

## FUN_140200bc0 */ — reconstrucao/src/decompiled_01.c:589
reconstrucao/src/decompiled_01.c:589:47: error: request for member ‘_1_7_’ in something not a structure or union

    586:       if ((((ulonglong)auStack_89 ^ (ulonglong)auStack_e0) & 0xfffffffffffff000) == 0) {
    587:         puVar5 = auStack_e0;
    588:       }
    589:       uStack_100 = (void *)CONCAT71(uStack_100._1_7_,(byte)in_CR8);
    590:       if (((byte)in_CR8 < 2) && (DAT_140fc7d20 != 0)) {
    591:         FUN_1404f6e6c(in_CR8,0xfffffffffffff002);
    592:       }

## FUN_140200bc0 */ — reconstrucao/src/decompiled_01.c:590
reconstrucao/src/decompiled_01.c:590:34: error: ‘DAT_140fc7d20’ undeclared (first use in this function)

    587:         puVar5 = auStack_e0;
    588:       }
    589:       uStack_100 = (void *)CONCAT71(uStack_100._1_7_,(byte)in_CR8);
    590:       if (((byte)in_CR8 < 2) && (DAT_140fc7d20 != 0)) {
    591:         FUN_1404f6e6c(in_CR8,0xfffffffffffff002);
    592:       }
    593:       uStack_f0 = MmGetPhysicalAddress(puVar5);

## FUN_140200bc0 */ — reconstrucao/src/decompiled_01.c:593
reconstrucao/src/decompiled_01.c:593:40: error: passing argument 1 of ‘MmGetPhysicalAddress’ makes integer from pointer without a cast [-Wint-conversion]

    590:       if (((byte)in_CR8 < 2) && (DAT_140fc7d20 != 0)) {
    591:         FUN_1404f6e6c(in_CR8,0xfffffffffffff002);
    592:       }
    593:       uStack_f0 = MmGetPhysicalAddress(puVar5);
    594:     }
    595:     else {
    596:       uStack_100 = pvVar1;

## FUN_140200bc0 */ — reconstrucao/src/decompiled_01.c:596
reconstrucao/src/decompiled_01.c:596:18: error: assignment to ‘undefined8’ {aka ‘long unsigned int’} from ‘void *’ makes integer from pointer without a cast [-Wint-conversion]

    593:       uStack_f0 = MmGetPhysicalAddress(puVar5);
    594:     }
    595:     else {
    596:       uStack_100 = pvVar1;
    597:       uStack_f0 = *(ulonglong *)(puVar5 + 4);
    598:       uStack_108 = CONCAT44(uStack_108._4_4_,1);
    599:       puStack_f8 = puVar5;

## FUN_140200bc0 */ — reconstrucao/src/decompiled_01.c:598
reconstrucao/src/decompiled_01.c:598:39: error: request for member ‘_4_4_’ in something not a structure or union

    595:     else {
    596:       uStack_100 = pvVar1;
    597:       uStack_f0 = *(ulonglong *)(puVar5 + 4);
    598:       uStack_108 = CONCAT44(uStack_108._4_4_,1);
    599:       puStack_f8 = puVar5;
    600:     }
    601:   }

## FUN_140200bc0 */ — reconstrucao/src/decompiled_01.c:603
reconstrucao/src/decompiled_01.c:603:25: error: passing argument 1 of ‘FUN_140203fd4’ makes pointer from integer without a cast [-Wint-conversion]

    600:     }
    601:   }
    602:   uVar7 = uStack_f0;
    603:   iVar4 = FUN_140203fd4(param_1,puVar5 + 2,(-(uint)((uVar6 & 2) != 0) & 0xfffff058) + 0xfe8);
    604:   if (iVar4 == -1) {
    605:     FUN_140210b60(&uStack_108);
    606:     puVar5 = (undefined4 *)FUN_14046f5e0(&uStack_108,1,0);

## FUN_140200bc0 */ — reconstrucao/src/decompiled_01.c:603
reconstrucao/src/decompiled_01.c:603:40: error: passing argument 2 of ‘FUN_140203fd4’ from incompatible pointer type [-Wincompatible-pointer-types]

    600:     }
    601:   }
    602:   uVar7 = uStack_f0;
    603:   iVar4 = FUN_140203fd4(param_1,puVar5 + 2,(-(uint)((uVar6 & 2) != 0) & 0xfffff058) + 0xfe8);
    604:   if (iVar4 == -1) {
    605:     FUN_140210b60(&uStack_108);
    606:     puVar5 = (undefined4 *)FUN_14046f5e0(&uStack_108,1,0);

## FUN_140200bc0 */ — reconstrucao/src/decompiled_01.c:605
reconstrucao/src/decompiled_01.c:605:19: error: passing argument 1 of ‘FUN_140210b60’ from incompatible pointer type [-Wincompatible-pointer-types]

    602:   uVar7 = uStack_f0;
    603:   iVar4 = FUN_140203fd4(param_1,puVar5 + 2,(-(uint)((uVar6 & 2) != 0) & 0xfffff058) + 0xfe8);
    604:   if (iVar4 == -1) {
    605:     FUN_140210b60(&uStack_108);
    606:     puVar5 = (undefined4 *)FUN_14046f5e0(&uStack_108,1,0);
    607:     iVar4 = FUN_140203fd4(param_1,puVar5 + 2,0xfe8);
    608:     uVar7 = uStack_f0;

## FUN_140200bc0 */ — reconstrucao/src/decompiled_01.c:606
reconstrucao/src/decompiled_01.c:606:42: error: passing argument 1 of ‘FUN_14046f5e0’ from incompatible pointer type [-Wincompatible-pointer-types]

    603:   iVar4 = FUN_140203fd4(param_1,puVar5 + 2,(-(uint)((uVar6 & 2) != 0) & 0xfffff058) + 0xfe8);
    604:   if (iVar4 == -1) {
    605:     FUN_140210b60(&uStack_108);
    606:     puVar5 = (undefined4 *)FUN_14046f5e0(&uStack_108,1,0);
    607:     iVar4 = FUN_140203fd4(param_1,puVar5 + 2,0xfe8);
    608:     uVar7 = uStack_f0;
    609:   }

## FUN_140200bc0 */ — reconstrucao/src/decompiled_01.c:606
reconstrucao/src/decompiled_01.c:606:28: error: too few arguments to function ‘FUN_14046f5e0’; expected 4, have 3

    603:   iVar4 = FUN_140203fd4(param_1,puVar5 + 2,(-(uint)((uVar6 & 2) != 0) & 0xfffff058) + 0xfe8);
    604:   if (iVar4 == -1) {
    605:     FUN_140210b60(&uStack_108);
    606:     puVar5 = (undefined4 *)FUN_14046f5e0(&uStack_108,1,0);
    607:     iVar4 = FUN_140203fd4(param_1,puVar5 + 2,0xfe8);
    608:     uVar7 = uStack_f0;
    609:   }

## FUN_140200bc0 */ — reconstrucao/src/decompiled_01.c:607
reconstrucao/src/decompiled_01.c:607:27: error: passing argument 1 of ‘FUN_140203fd4’ makes pointer from integer without a cast [-Wint-conversion]

    604:   if (iVar4 == -1) {
    605:     FUN_140210b60(&uStack_108);
    606:     puVar5 = (undefined4 *)FUN_14046f5e0(&uStack_108,1,0);
    607:     iVar4 = FUN_140203fd4(param_1,puVar5 + 2,0xfe8);
    608:     uVar7 = uStack_f0;
    609:   }
    610:   puVar5[1] = 0;

## FUN_140200bc0 */ — reconstrucao/src/decompiled_01.c:607
reconstrucao/src/decompiled_01.c:607:42: error: passing argument 2 of ‘FUN_140203fd4’ from incompatible pointer type [-Wincompatible-pointer-types]

    604:   if (iVar4 == -1) {
    605:     FUN_140210b60(&uStack_108);
    606:     puVar5 = (undefined4 *)FUN_14046f5e0(&uStack_108,1,0);
    607:     iVar4 = FUN_140203fd4(param_1,puVar5 + 2,0xfe8);
    608:     uVar7 = uStack_f0;
    609:   }
    610:   puVar5[1] = 0;

## FUN_140200bc0 */ — reconstrucao/src/decompiled_01.c:614
reconstrucao/src/decompiled_01.c:614:17: error: passing argument 1 of ‘FUN_140210b60’ from incompatible pointer type [-Wincompatible-pointer-types]

    611:   *puVar5 = param_2;
    612:   uStack_e8 = (ulonglong)(uint)((iVar4 + 7) * 0x4000) & 0xffffffff03fe0000 | 0x15;
    613:   sVar3 = HvlInvokeHypercall(uStack_e8,uVar7,0);
    614:   FUN_140210b60(&uStack_108);
    615:   return -(uint)(sVar3 != 0) & 0xc0000001;
    616: }
    617: 

## FUN_140200dcc */ — reconstrucao/src/decompiled_01.c:635
reconstrucao/src/decompiled_01.c:635:15: error: ‘DAT_140e0a740’ undeclared (first use in this function)

    632:   undefined4 uStack_1c;
    633:   ulonglong uStack_18;
    634:   
    635:   uStack_18 = DAT_140e0a740 ^ (ulonglong)auStack_68;
    636:   if (DAT_140e67941 != '\0') {
    637:     auStackX_8[0] = param_1;
    638:     cVar1 = EtwEventEnabled(DAT_140f0bb00,&DAT_140010400);

## FUN_140200dcc */ — reconstrucao/src/decompiled_01.c:636
reconstrucao/src/decompiled_01.c:636:7: error: ‘DAT_140e67941’ undeclared (first use in this function)

    633:   ulonglong uStack_18;
    634:   
    635:   uStack_18 = DAT_140e0a740 ^ (ulonglong)auStack_68;
    636:   if (DAT_140e67941 != '\0') {
    637:     auStackX_8[0] = param_1;
    638:     cVar1 = EtwEventEnabled(DAT_140f0bb00,&DAT_140010400);
    639:     if (cVar1 != '\0') {

## FUN_140200dcc */ — reconstrucao/src/decompiled_01.c:638
reconstrucao/src/decompiled_01.c:638:29: error: ‘DAT_140f0bb00’ undeclared (first use in this function)

    635:   uStack_18 = DAT_140e0a740 ^ (ulonglong)auStack_68;
    636:   if (DAT_140e67941 != '\0') {
    637:     auStackX_8[0] = param_1;
    638:     cVar1 = EtwEventEnabled(DAT_140f0bb00,&DAT_140010400);
    639:     if (cVar1 != '\0') {
    640:       uStack_1c = 0;
    641:       puStack_28 = auStackX_8;

## FUN_140200dcc */ — reconstrucao/src/decompiled_01.c:638
reconstrucao/src/decompiled_01.c:638:44: error: ‘DAT_140010400’ undeclared (first use in this function)

    635:   uStack_18 = DAT_140e0a740 ^ (ulonglong)auStack_68;
    636:   if (DAT_140e67941 != '\0') {
    637:     auStackX_8[0] = param_1;
    638:     cVar1 = EtwEventEnabled(DAT_140f0bb00,&DAT_140010400);
    639:     if (cVar1 != '\0') {
    640:       uStack_1c = 0;
    641:       puStack_28 = auStackX_8;

## FUN_140200dcc */ — reconstrucao/src/decompiled_01.c:647
reconstrucao/src/decompiled_01.c:647:7: error: too few arguments to function ‘EtwWriteEx’; expected 8, have 3

    644:       uStack_38 = 1;
    645:       uStack_40 = 0;
    646:       uStack_48 = 0;
    647:       EtwWriteEx(DAT_140f0bb00,&DAT_140010400,0);
    648:     }
    649:   }
    650:   return;

## FUN_140200e70 */ — reconstrucao/src/decompiled_01.c:660
reconstrucao/src/decompiled_01.c:660:3: error: unknown type name ‘code’

    657: {
    658:   ulonglong *puVar1;
    659:   ulonglong uVar2;
    660:   code *pcVar3;
    661:   char cVar4;
    662:   undefined8 *puVar5;
    663:   undefined8 *puVar6;

## FUN_140200e70 */ — reconstrucao/src/decompiled_01.c:674
reconstrucao/src/decompiled_01.c:674:32: error: ‘DAT_140f230b0’ undeclared (first use in this function)

    671:   undefined4 auStack_38 [8];
    672:   undefined8 auStack_18 [2];
    673:   
    674:   KeAcquireSpinLockAtDpcLevel(&DAT_140f230b0);
    675:   puVar9 = auStack_38;
    676:   puVar12 = &DAT_140f230a0;
    677:   puVar6 = DAT_140f230a0;

## FUN_140200e70 */ — reconstrucao/src/decompiled_01.c:676
reconstrucao/src/decompiled_01.c:676:14: error: ‘DAT_140f230a0’ undeclared (first use in this function); did you mean ‘FUN_1408230a0’?

    673:   
    674:   KeAcquireSpinLockAtDpcLevel(&DAT_140f230b0);
    675:   puVar9 = auStack_38;
    676:   puVar12 = &DAT_140f230a0;
    677:   puVar6 = DAT_140f230a0;
    678:   puVar8 = (undefined8 *)0x0;
    679:   while (puVar5 = puVar6, puVar5 != puVar12) {

## FUN_140200e70 */ — reconstrucao/src/decompiled_01.c:685
reconstrucao/src/decompiled_01.c:685:17: error: ‘code’ undeclared (first use in this function)

    682:     if (((undefined8 *)puVar11[1] != puVar5) || (puVar6 = puVar11, (undefined8 *)*puVar7 != puVar5))
    683:     {
    684:       puVar6 = (undefined8 *)0x3;
    685:       pcVar3 = (code *)swi(0x29);
    686:       puVar5 = (undefined8 *)(*pcVar3)();
    687:       puVar9 = puVar9 + 2;
    688:     }

## FUN_140200e70 */ — reconstrucao/src/decompiled_01.c:685
reconstrucao/src/decompiled_01.c:685:23: error: expected expression before ‘)’ token

    682:     if (((undefined8 *)puVar11[1] != puVar5) || (puVar6 = puVar11, (undefined8 *)*puVar7 != puVar5))
    683:     {
    684:       puVar6 = (undefined8 *)0x3;
    685:       pcVar3 = (code *)swi(0x29);
    686:       puVar5 = (undefined8 *)(*pcVar3)();
    687:       puVar9 = puVar9 + 2;
    688:     }

## FUN_140200e70 */ — reconstrucao/src/decompiled_01.c:686
reconstrucao/src/decompiled_01.c:686:31: error: called object is not a function or function pointer

    683:     {
    684:       puVar6 = (undefined8 *)0x3;
    685:       pcVar3 = (code *)swi(0x29);
    686:       puVar5 = (undefined8 *)(*pcVar3)();
    687:       puVar9 = puVar9 + 2;
    688:     }
    689:     *puVar7 = puVar11;

## FUN_140200e70 */ — reconstrucao/src/decompiled_01.c:689
reconstrucao/src/decompiled_01.c:689:13: error: assignment to ‘undefined8’ {aka ‘long unsigned int’} from ‘undefined8 *’ {aka ‘long unsigned int *’} makes integer from pointer without a cast [-Wint-conversion]

    686:       puVar5 = (undefined8 *)(*pcVar3)();
    687:       puVar9 = puVar9 + 2;
    688:     }
    689:     *puVar7 = puVar11;
    690:     puVar11[1] = puVar7;
    691:     *puVar5 = puVar8;
    692:     puVar5[1] = 0;

## FUN_140200e70 */ — reconstrucao/src/decompiled_01.c:690
reconstrucao/src/decompiled_01.c:690:16: error: assignment to ‘undefined8’ {aka ‘long unsigned int’} from ‘undefined8 *’ {aka ‘long unsigned int *’} makes integer from pointer without a cast [-Wint-conversion]

    687:       puVar9 = puVar9 + 2;
    688:     }
    689:     *puVar7 = puVar11;
    690:     puVar11[1] = puVar7;
    691:     *puVar5 = puVar8;
    692:     puVar5[1] = 0;
    693:     LOCK();

## FUN_140200e70 */ — reconstrucao/src/decompiled_01.c:691
reconstrucao/src/decompiled_01.c:691:13: error: assignment to ‘undefined8’ {aka ‘long unsigned int’} from ‘undefined8 *’ {aka ‘long unsigned int *’} makes integer from pointer without a cast [-Wint-conversion]

    688:     }
    689:     *puVar7 = puVar11;
    690:     puVar11[1] = puVar7;
    691:     *puVar5 = puVar8;
    692:     puVar5[1] = 0;
    693:     LOCK();
    694:     *(short *)((longlong)puVar5 + -0x8c) = *(short *)((longlong)puVar5 + -0x8c) + 1;

## FUN_140200e70 */ — reconstrucao/src/decompiled_01.c:717
reconstrucao/src/decompiled_01.c:717:15: error: ‘DAT_140fc62ac’ undeclared (first use in this function)

    714:       if ((uVar2 & 1) == 0) break;
    715:       do {
    716:         uVar10 = uVar10 + 1;
    717:         if (((DAT_140fc62ac & uVar10) == 0) && ((DAT_140fc7ab8 & 0x40) != 0)) {
    718:           *(undefined8 *)(puVar9 + -2) = 0x140200fa6;
    719:           cVar4 = FUN_14020cb70();
    720:           if (cVar4 != '\0') {

## FUN_140200e70 */ — reconstrucao/src/decompiled_01.c:717
reconstrucao/src/decompiled_01.c:717:50: error: ‘DAT_140fc7ab8’ undeclared (first use in this function); did you mean ‘FUN_1402c7ab8’?

    714:       if ((uVar2 & 1) == 0) break;
    715:       do {
    716:         uVar10 = uVar10 + 1;
    717:         if (((DAT_140fc62ac & uVar10) == 0) && ((DAT_140fc7ab8 & 0x40) != 0)) {
    718:           *(undefined8 *)(puVar9 + -2) = 0x140200fa6;
    719:           cVar4 = FUN_14020cb70();
    720:           if (cVar4 != '\0') {

## FUN_140200e70 */ — reconstrucao/src/decompiled_01.c:729
reconstrucao/src/decompiled_01.c:729:28: error: passing argument 1 of ‘FUN_140201280’ makes integer from pointer without a cast [-Wint-conversion]

    726:     }
    727:     if ((*(uint *)(puVar8 + -0x6f) & 0x400000) != 0) {
    728:       *(undefined8 *)(puVar9 + -2) = 0x140200edb;
    729:       FUN_140201280(puVar8 + -0x7e,puVar9 + 8,1);
    730:     }
    731:     puVar8[-0x76] = 0;
    732:     LOCK();

## FUN_140200e70 */ — reconstrucao/src/decompiled_01.c:729
reconstrucao/src/decompiled_01.c:729:43: error: passing argument 2 of ‘FUN_140201280’ makes integer from pointer without a cast [-Wint-conversion]

    726:     }
    727:     if ((*(uint *)(puVar8 + -0x6f) & 0x400000) != 0) {
    728:       *(undefined8 *)(puVar9 + -2) = 0x140200edb;
    729:       FUN_140201280(puVar8 + -0x7e,puVar9 + 8,1);
    730:     }
    731:     puVar8[-0x76] = 0;
    732:     LOCK();

## FUN_140200e70 */ — reconstrucao/src/decompiled_01.c:738
reconstrucao/src/decompiled_01.c:738:17: error: ‘FiberData’ undeclared (first use in this function)

    735:     puVar8 = puVar6;
    736:   }
    737:   *(undefined8 *)(puVar9 + -2) = 0x140200f06;
    738:   FUN_140271070(FiberData,puVar9 + 8,2);
    739:   return;
    740: }
    741: 

## FUN_140200e70 */ — reconstrucao/src/decompiled_01.c:738
reconstrucao/src/decompiled_01.c:738:34: error: passing argument 2 of ‘FUN_140271070’ from incompatible pointer type [-Wincompatible-pointer-types]

    735:     puVar8 = puVar6;
    736:   }
    737:   *(undefined8 *)(puVar9 + -2) = 0x140200f06;
    738:   FUN_140271070(FiberData,puVar9 + 8,2);
    739:   return;
    740: }
    741: 

## FUN_140200fc0 */ — reconstrucao/src/decompiled_01.c:747
reconstrucao/src/decompiled_01.c:747:3: error: too few arguments to function ‘FUN_140200fd8’; expected 3, have 0

    744: void FUN_140200fc0(void)
    745: 
    746: {
    747:   FUN_140200fd8();
    748:   return;
    749: }
    750: 

## FUN_140200fd8 */ — reconstrucao/src/decompiled_01.c:791
reconstrucao/src/decompiled_01.c:791:37: error: passing argument 1 of ‘KeSetActualBasePriorityThread’ makes integer from pointer without a cast [-Wint-conversion]

    788:       LOCK();
    789:       *param_1 = *param_1 | 0x400000;
    790:       UNLOCK();
    791:       KeSetActualBasePriorityThread(param_1,1);
    792:       return;
    793:     }
    794:     if ((param_1[0x1e] & 0x400000) == 0) {

## FUN_140200fd8 */ — reconstrucao/src/decompiled_01.c:797
reconstrucao/src/decompiled_01.c:797:19: error: passing argument 1 of ‘FUN_14034b620’ makes integer from pointer without a cast [-Wint-conversion]

    794:     if ((param_1[0x1e] & 0x400000) == 0) {
    795:       return;
    796:     }
    797:     FUN_14034b620(param_1,auStackX_18);
    798:     if (param_1[0x100] != 0x20) {
    799:       FUN_14034b6b4(param_1,&uStackX_20,(int)(char)param_1[0x100],1);
    800:       param_1[0x100] = 0x20;

## FUN_140200fd8 */ — reconstrucao/src/decompiled_01.c:799
reconstrucao/src/decompiled_01.c:799:21: error: passing argument 1 of ‘FUN_14034b6b4’ makes integer from pointer without a cast [-Wint-conversion]

    796:     }
    797:     FUN_14034b620(param_1,auStackX_18);
    798:     if (param_1[0x100] != 0x20) {
    799:       FUN_14034b6b4(param_1,&uStackX_20,(int)(char)param_1[0x100],1);
    800:       param_1[0x100] = 0x20;
    801:     }
    802:     uStack_48 = 0;

## FUN_140200fd8 */ — reconstrucao/src/decompiled_01.c:799
reconstrucao/src/decompiled_01.c:799:29: error: passing argument 2 of ‘FUN_14034b6b4’ makes integer from pointer without a cast [-Wint-conversion]

    796:     }
    797:     FUN_14034b620(param_1,auStackX_18);
    798:     if (param_1[0x100] != 0x20) {
    799:       FUN_14034b6b4(param_1,&uStackX_20,(int)(char)param_1[0x100],1);
    800:       param_1[0x100] = 0x20;
    801:     }
    802:     uStack_48 = 0;

## FUN_140200fd8 */ — reconstrucao/src/decompiled_01.c:804
reconstrucao/src/decompiled_01.c:804:27: error: passing argument 1 of ‘FUN_14020bfa0’ makes integer from pointer without a cast [-Wint-conversion]

    801:     }
    802:     uStack_48 = 0;
    803:     uStack_40 = 0;
    804:     uVar8 = FUN_14020bfa0(param_1,&pvStack_60,&uStack_68,&uStack_58,&uStack_48);
    805:     LOCK();
    806:     param_1[0x1e] = param_1[0x1e] & 0xffbfffff;
    807:     UNLOCK();

## FUN_140200fd8 */ — reconstrucao/src/decompiled_01.c:804
reconstrucao/src/decompiled_01.c:804:35: error: passing argument 2 of ‘FUN_14020bfa0’ makes integer from pointer without a cast [-Wint-conversion]

    801:     }
    802:     uStack_48 = 0;
    803:     uStack_40 = 0;
    804:     uVar8 = FUN_14020bfa0(param_1,&pvStack_60,&uStack_68,&uStack_58,&uStack_48);
    805:     LOCK();
    806:     param_1[0x1e] = param_1[0x1e] & 0xffbfffff;
    807:     UNLOCK();

## FUN_140200fd8 */ — reconstrucao/src/decompiled_01.c:804
reconstrucao/src/decompiled_01.c:804:13: error: too many arguments to function ‘FUN_14020bfa0’; expected 3, have 5

    801:     }
    802:     uStack_48 = 0;
    803:     uStack_40 = 0;
    804:     uVar8 = FUN_14020bfa0(param_1,&pvStack_60,&uStack_68,&uStack_58,&uStack_48);
    805:     LOCK();
    806:     param_1[0x1e] = param_1[0x1e] & 0xffbfffff;
    807:     UNLOCK();

## FUN_140200fd8 */ — reconstrucao/src/decompiled_01.c:813
reconstrucao/src/decompiled_01.c:813:25: error: passing argument 2 of ‘FUN_1402fd5d0’ makes integer from pointer without a cast [-Wint-conversion]

    810:     LOCK();
    811:     *param_1 = *param_1 & 0xffbfffff;
    812:     UNLOCK();
    813:     FUN_1402fd5d0(uVar8,pvStack_60,&uStack_68,uStack_58,&uStack_48);
    814:     param_1[0x10] = 0;
    815:     param_1[0x11] = 0;
    816:     FUN_140271070(FiberData,&uStackX_20,auStackX_18[0]);

## FUN_140200fd8 */ — reconstrucao/src/decompiled_01.c:813
reconstrucao/src/decompiled_01.c:813:47: error: passing argument 4 of ‘FUN_1402fd5d0’ makes pointer from integer without a cast [-Wint-conversion]

    810:     LOCK();
    811:     *param_1 = *param_1 & 0xffbfffff;
    812:     UNLOCK();
    813:     FUN_1402fd5d0(uVar8,pvStack_60,&uStack_68,uStack_58,&uStack_48);
    814:     param_1[0x10] = 0;
    815:     param_1[0x11] = 0;
    816:     FUN_140271070(FiberData,&uStackX_20,auStackX_18[0]);

## FUN_140200fd8 */ — reconstrucao/src/decompiled_01.c:816
reconstrucao/src/decompiled_01.c:816:19: error: ‘FiberData’ undeclared (first use in this function)

    813:     FUN_1402fd5d0(uVar8,pvStack_60,&uStack_68,uStack_58,&uStack_48);
    814:     param_1[0x10] = 0;
    815:     param_1[0x11] = 0;
    816:     FUN_140271070(FiberData,&uStackX_20,auStackX_18[0]);
    817:     KeSetPriorityThread(param_1,(int)*(char *)((longlong)param_1 + 0x233));
    818:     return;
    819:   }

## FUN_140200fd8 */ — reconstrucao/src/decompiled_01.c:817
reconstrucao/src/decompiled_01.c:817:25: error: passing argument 1 of ‘KeSetPriorityThread’ makes integer from pointer without a cast [-Wint-conversion]

    814:     param_1[0x10] = 0;
    815:     param_1[0x11] = 0;
    816:     FUN_140271070(FiberData,&uStackX_20,auStackX_18[0]);
    817:     KeSetPriorityThread(param_1,(int)*(char *)((longlong)param_1 + 0x233));
    818:     return;
    819:   }
    820:   if (param_3 != 1) {

## FUN_140200fd8 */ — reconstrucao/src/decompiled_01.c:822
reconstrucao/src/decompiled_01.c:822:12: error: ‘DAT_140fc7b14’ undeclared (first use in this function); did you mean ‘FUN_140ac7b14’?

    819:   }
    820:   if (param_3 != 1) {
    821:     if ((param_3 == 2) || (param_3 == 3)) {
    822:       if ((DAT_140fc7b14 & 0x20) != 0) {
    823:         FUN_1406597f4(param_1,param_3);
    824:       }
    825:       FUN_14034b620(param_1,auStackX_18);

## FUN_140200fd8 */ — reconstrucao/src/decompiled_01.c:823
reconstrucao/src/decompiled_01.c:823:23: error: passing argument 1 of ‘FUN_1406597f4’ makes integer from pointer without a cast [-Wint-conversion]

    820:   if (param_3 != 1) {
    821:     if ((param_3 == 2) || (param_3 == 3)) {
    822:       if ((DAT_140fc7b14 & 0x20) != 0) {
    823:         FUN_1406597f4(param_1,param_3);
    824:       }
    825:       FUN_14034b620(param_1,auStackX_18);
    826:     }

## FUN_140200fd8 */ — reconstrucao/src/decompiled_01.c:825
reconstrucao/src/decompiled_01.c:825:21: error: passing argument 1 of ‘FUN_14034b620’ makes integer from pointer without a cast [-Wint-conversion]

    822:       if ((DAT_140fc7b14 & 0x20) != 0) {
    823:         FUN_1406597f4(param_1,param_3);
    824:       }
    825:       FUN_14034b620(param_1,auStackX_18);
    826:     }
    827:     else {
    828:       if (param_3 != 4) {

## FUN_140200fd8 */ — reconstrucao/src/decompiled_01.c:831
reconstrucao/src/decompiled_01.c:831:21: error: passing argument 1 of ‘FUN_14034b620’ makes integer from pointer without a cast [-Wint-conversion]

    828:       if (param_3 != 4) {
    829:         return;
    830:       }
    831:       FUN_14034b620(param_1,auStackX_18);
    832:       lVar2 = *(longlong *)(param_1 + 0xf2);
    833:       if (lVar2 == 0) goto LAB_14020104d;
    834:       LOCK();

## FUN_140200fd8 */ — reconstrucao/src/decompiled_01.c:840
reconstrucao/src/decompiled_01.c:840:19: error: passing argument 1 of ‘FUN_140201280’ makes integer from pointer without a cast [-Wint-conversion]

    837:       if ((*(longlong *)(lVar2 + 0x28) == *(longlong *)(lVar2 + 0x30)) ||
    838:          ((char)param_1[0x61] != '\x01')) goto LAB_14020104d;
    839:     }
    840:     FUN_140201280(param_1,&uStackX_20,0);
    841: LAB_14020104d:
    842:     param_1[0x10] = 0;
    843:     param_1[0x11] = 0;

## FUN_140200fd8 */ — reconstrucao/src/decompiled_01.c:840
reconstrucao/src/decompiled_01.c:840:27: error: passing argument 2 of ‘FUN_140201280’ makes integer from pointer without a cast [-Wint-conversion]

    837:       if ((*(longlong *)(lVar2 + 0x28) == *(longlong *)(lVar2 + 0x30)) ||
    838:          ((char)param_1[0x61] != '\x01')) goto LAB_14020104d;
    839:     }
    840:     FUN_140201280(param_1,&uStackX_20,0);
    841: LAB_14020104d:
    842:     param_1[0x10] = 0;
    843:     param_1[0x11] = 0;

## FUN_140200fd8 */ — reconstrucao/src/decompiled_01.c:851
reconstrucao/src/decompiled_01.c:851:17: error: passing argument 1 of ‘FUN_14034b620’ makes integer from pointer without a cast [-Wint-conversion]

    848:   if (lVar2 == 0) {
    849:     return;
    850:   }
    851:   FUN_14034b620(param_1,auStackX_18);
    852:   pvVar4 = FiberData;
    853:   uVar5 = *(uint *)(lVar2 + 4);
    854:   if (6 < (int)uVar5) goto LAB_14020115f;

## FUN_140200fd8 */ — reconstrucao/src/decompiled_01.c:866
reconstrucao/src/decompiled_01.c:866:25: error: passing argument 1 of ‘FUN_14020c440’ makes integer from pointer without a cast [-Wint-conversion]

    863:   uStack_38 = 0;
    864:   uStack_30 = 0;
    865:   pvStack_60 = pvVar4;
    866:   uVar8 = FUN_14020c440(pvVar4,1,&uStack_68);
    867:   *(char *)(param_1 + 0x81) = (char)uVar5;
    868:   if (*(longlong *)((longlong)pvVar4 + 0x10) == 0) {
    869:     pvStack_50 = pvVar4;

## FUN_140200fd8 */ — reconstrucao/src/decompiled_01.c:866
reconstrucao/src/decompiled_01.c:866:9: error: invalid use of void expression

    863:   uStack_38 = 0;
    864:   uStack_30 = 0;
    865:   pvStack_60 = pvVar4;
    866:   uVar8 = FUN_14020c440(pvVar4,1,&uStack_68);
    867:   *(char *)(param_1 + 0x81) = (char)uVar5;
    868:   if (*(longlong *)((longlong)pvVar4 + 0x10) == 0) {
    869:     pvStack_50 = pvVar4;

## FUN_140200fd8 */ — reconstrucao/src/decompiled_01.c:880
reconstrucao/src/decompiled_01.c:880:17: error: too few arguments to function ‘FUN_14027835c’; expected 1, have 0

    877:         bVar1 = *(byte *)(*(longlong *)((longlong)*ppvVar6 + 0x38) + 0x40);
    878:         *(byte *)(*(longlong *)((longlong)*ppvVar6 + 0x38) + 0x40) =
    879:              (bVar1 ^ (byte)param_1[0x81]) & 7 ^ bVar1;
    880:         uVar8 = FUN_14027835c();
    881:         ppvVar6 = ppvVar6 + 1;
    882:         uVar7 = uVar7 - 1;
    883:       } while (uVar7 != 0);

## FUN_140200fd8 */ — reconstrucao/src/decompiled_01.c:892
reconstrucao/src/decompiled_01.c:892:23: error: passing argument 2 of ‘FUN_1402fd5d0’ makes integer from pointer without a cast [-Wint-conversion]

    889:       if (bVar1 != 0) goto LAB_140201119;
    890:     }
    891:   }
    892:   FUN_1402fd5d0(uVar8,pvVar4,&uStack_68,0,&uStack_38);
    893: LAB_14020115f:
    894:   param_1[0x10] = 0;
    895:   param_1[0x11] = 0;

## FUN_140200fd8 */ — reconstrucao/src/decompiled_01.c:896
reconstrucao/src/decompiled_01.c:896:17: error: passing argument 1 of ‘FUN_140295160’ makes integer from pointer without a cast [-Wint-conversion]

    893: LAB_14020115f:
    894:   param_1[0x10] = 0;
    895:   param_1[0x11] = 0;
    896:   FUN_140295160(pvVar4,param_1);
    897:   if (DAT_140fc7d20 != 0) {
    898:     FUN_1404f6e08(in_CR8,auStackX_18[0]);
    899:   }

## FUN_140200fd8 */ — reconstrucao/src/decompiled_01.c:896
reconstrucao/src/decompiled_01.c:896:24: error: passing argument 2 of ‘FUN_140295160’ makes integer from pointer without a cast [-Wint-conversion]

    893: LAB_14020115f:
    894:   param_1[0x10] = 0;
    895:   param_1[0x11] = 0;
    896:   FUN_140295160(pvVar4,param_1);
    897:   if (DAT_140fc7d20 != 0) {
    898:     FUN_1404f6e08(in_CR8,auStackX_18[0]);
    899:   }

## FUN_140200fd8 */ — reconstrucao/src/decompiled_01.c:897
reconstrucao/src/decompiled_01.c:897:7: error: ‘DAT_140fc7d20’ undeclared (first use in this function)

    894:   param_1[0x10] = 0;
    895:   param_1[0x11] = 0;
    896:   FUN_140295160(pvVar4,param_1);
    897:   if (DAT_140fc7d20 != 0) {
    898:     FUN_1404f6e08(in_CR8,auStackX_18[0]);
    899:   }
    900:   return;

## FUN_140201280 */ — reconstrucao/src/decompiled_01.c:946
reconstrucao/src/decompiled_01.c:946:7: error: too few arguments to function ‘KeBugCheckEx’; expected 6, have 5

    943:     cVar3 = *(char *)(lVar7 + 0x338 + param_1);
    944:     if (cVar3 == -1) {
    945:                     /* WARNING: Subroutine does not return */
    946:       KeBugCheckEx(0x157,param_1,lVar7,1,0);
    947:     }
    948:     *(char *)(lVar7 + 0x338 + param_1) = cVar3 + '\x01';
    949:     *(uint *)(param_1 + 0x358) = *(uint *)(param_1 + 0x358) | 1 << ((int)(char)iVar5 & 0x1fU);

## FUN_140201280 */ — reconstrucao/src/decompiled_01.c:955
reconstrucao/src/decompiled_01.c:955:9: error: too few arguments to function ‘KeBugCheckEx’; expected 6, have 5

    952:       cVar3 = *(char *)(lVar7 + 0x338 + param_1);
    953:       if (cVar3 == '\0') {
    954:                     /* WARNING: Subroutine does not return */
    955:         KeBugCheckEx(0x157,param_1,lVar7,2,0);
    956:       }
    957:       cVar3 = cVar3 + -1;
    958:       *(char *)(lVar7 + 0x338 + param_1) = cVar3;

## FUN_140201280 */ — reconstrucao/src/decompiled_01.c:970
reconstrucao/src/decompiled_01.c:970:9: error: invalid use of void expression

    967:     *(undefined1 *)(param_1 + 0x366) = 0;
    968:     *(ushort *)(param_1 + 0x206) = *(ushort *)(param_1 + 0x206) & 0xf00f;
    969:   }
    970:   iVar6 = FUN_1403c1fa4(param_1,0,0);
    971:   if (iVar6 != iVar9) {
    972:     FUN_140306b38(param_1,param_2,iVar6);
    973:   }

## FUN_140201280 */ — reconstrucao/src/decompiled_01.c:985
reconstrucao/src/decompiled_01.c:985:35: error: passing argument 2 of ‘FUN_14020bfa0’ makes integer from pointer without a cast [-Wint-conversion]

    982:     uStack_68 = 0;
    983:     alStack_50[1] = 0;
    984:     alStack_50[2] = 0;
    985:     cVar4 = FUN_14020bfa0(param_1,&lStack_88,&uStack_68,&uStack_70,alStack_50 + 1);
    986:     lVar7 = lStack_88;
    987:     *(char *)(param_1 + 0x204) = cVar3;
    988:     uVar11 = extraout_XMM0_Da;

## FUN_140201280 */ — reconstrucao/src/decompiled_01.c:985
reconstrucao/src/decompiled_01.c:985:13: error: too many arguments to function ‘FUN_14020bfa0’; expected 3, have 5

    982:     uStack_68 = 0;
    983:     alStack_50[1] = 0;
    984:     alStack_50[2] = 0;
    985:     cVar4 = FUN_14020bfa0(param_1,&lStack_88,&uStack_68,&uStack_70,alStack_50 + 1);
    986:     lVar7 = lStack_88;
    987:     *(char *)(param_1 + 0x204) = cVar3;
    988:     uVar11 = extraout_XMM0_Da;

## FUN_140201280 */ — reconstrucao/src/decompiled_01.c:994
reconstrucao/src/decompiled_01.c:994:78: error: passing argument 3 of ‘FUN_1403fce40’ from incompatible pointer type [-Wincompatible-pointer-types]

    991:         alStack_50[0] = lStack_88;
    992:         plStack_78 = (longlong *)0x0;
    993:         auStackX_20[0] = 0;
    994:         uVar11 = FUN_1403fce40(alStack_50,*(uint *)(param_1 + 0x78) >> 1 & 1,&plStack_78,auStackX_20
    995:                               );
    996:         if (auStackX_20[0] != 0) {
    997:           uVar8 = (ulonglong)auStackX_20[0];

## FUN_140201280 */ — reconstrucao/src/decompiled_01.c:994
reconstrucao/src/decompiled_01.c:994:16: error: invalid use of void expression

    991:         alStack_50[0] = lStack_88;
    992:         plStack_78 = (longlong *)0x0;
    993:         auStackX_20[0] = 0;
    994:         uVar11 = FUN_1403fce40(alStack_50,*(uint *)(param_1 + 0x78) >> 1 & 1,&plStack_78,auStackX_20
    995:                               );
    996:         if (auStackX_20[0] != 0) {
    997:           uVar8 = (ulonglong)auStackX_20[0];

## FUN_140201280 */ — reconstrucao/src/decompiled_01.c:1003
reconstrucao/src/decompiled_01.c:1003:22: error: too few arguments to function ‘FUN_14027835c’; expected 1, have 0

    1000:             bVar1 = *(byte *)(*(longlong *)(*plVar10 + 0x38) + 0x40);
    1001:             *(byte *)(*(longlong *)(*plVar10 + 0x38) + 0x40) =
    1002:                  bVar1 ^ (bVar1 ^ *(byte *)(param_1 + 0x204)) & 7;
    1003:             uVar11 = FUN_14027835c();
    1004:             plVar10 = plVar10 + 1;
    1005:             uVar8 = uVar8 - 1;
    1006:           } while (uVar8 != 0);

## FUN_140201280 */ — reconstrucao/src/decompiled_01.c:1014
reconstrucao/src/decompiled_01.c:1014:76: error: passing argument 3 of ‘FUN_1403fce40’ from incompatible pointer type [-Wincompatible-pointer-types]

    1011:       lStack_58 = lStack_88;
    1012:       plStack_80 = (longlong *)0x0;
    1013:       auStackX_8[0] = 0;
    1014:       uVar11 = FUN_1403fce40(&lStack_58,*(uint *)(param_1 + 0x78) >> 1 & 1,&plStack_80,auStackX_8);
    1015:       if (auStackX_8[0] != 0) {
    1016:         uVar8 = (ulonglong)auStackX_8[0];
    1017:         plVar10 = plStack_80;

## FUN_140201280 */ — reconstrucao/src/decompiled_01.c:1014
reconstrucao/src/decompiled_01.c:1014:14: error: invalid use of void expression

    1011:       lStack_58 = lStack_88;
    1012:       plStack_80 = (longlong *)0x0;
    1013:       auStackX_8[0] = 0;
    1014:       uVar11 = FUN_1403fce40(&lStack_58,*(uint *)(param_1 + 0x78) >> 1 & 1,&plStack_80,auStackX_8);
    1015:       if (auStackX_8[0] != 0) {
    1016:         uVar8 = (ulonglong)auStackX_8[0];
    1017:         plVar10 = plStack_80;

## FUN_140201280 */ — reconstrucao/src/decompiled_01.c:1022
reconstrucao/src/decompiled_01.c:1022:20: error: too few arguments to function ‘FUN_14027835c’; expected 1, have 0

    1019:           bVar1 = *(byte *)(*(longlong *)(*plVar10 + 0x38) + 0x40);
    1020:           *(byte *)(*(longlong *)(*plVar10 + 0x38) + 0x40) =
    1021:                bVar1 ^ (bVar1 ^ *(byte *)(param_1 + 0x204)) & 7;
    1022:           uVar11 = FUN_14027835c();
    1023:           plVar10 = plVar10 + 1;
    1024:           uVar8 = uVar8 - 1;
    1025:         } while (uVar8 != 0);

## FUN_140201280 */ — reconstrucao/src/decompiled_01.c:1028
reconstrucao/src/decompiled_01.c:1028:43: error: passing argument 4 of ‘FUN_1402fd5d0’ makes pointer from integer without a cast [-Wint-conversion]

    1025:         } while (uVar8 != 0);
    1026:       }
    1027:     }
    1028:     FUN_1402fd5d0(uVar11,lVar7,&uStack_68,uStack_70,alStack_50 + 1);
    1029:   }
    1030:   if ((*(uint *)(param_1 + 0x78) & 0x400000) != 0) {
    1031:     LOCK();

## FUN_140201280 */ — reconstrucao/src/decompiled_01.c:1035
reconstrucao/src/decompiled_01.c:1035:29: error: ‘DAT_140fc7b14’ undeclared (first use in this function); did you mean ‘FUN_140ac7b14’?

    1032:     **(uint **)(param_1 + 0x3c8) = **(uint **)(param_1 + 0x3c8) & 0xffefffff;
    1033:     UNLOCK();
    1034:   }
    1035:   if ((iVar9 != iVar6) && ((DAT_140fc7b14 & 0x20) != 0)) {
    1036:     FUN_1404d0da8(param_1,iVar9,iVar5,iVar6,&uStack_60);
    1037:   }
    1038:   return;

## FUN_140201280 */ — reconstrucao/src/decompiled_01.c:1036
reconstrucao/src/decompiled_01.c:1036:45: error: passing argument 5 of ‘FUN_1404d0da8’ from incompatible pointer type [-Wincompatible-pointer-types]

    1033:     UNLOCK();
    1034:   }
    1035:   if ((iVar9 != iVar6) && ((DAT_140fc7b14 & 0x20) != 0)) {
    1036:     FUN_1404d0da8(param_1,iVar9,iVar5,iVar6,&uStack_60);
    1037:   }
    1038:   return;
    1039: }

## FUN_140531850 */ — reconstrucao/src/decompiled_02.c:14
reconstrucao/src/decompiled_02.c:14:3: error: unknown type name ‘unkint9’; did you mean ‘uint’?

    11:   ulonglong uVar1;
    12:   ulonglong uVar2;
    13:   ulonglong uVar3;
    14:   unkint9 Var4;
    15:   unkint9 Var5;
    16:   ulonglong uVar6;
    17:   ulonglong uVar7;

## FUN_140531850 */ — reconstrucao/src/decompiled_02.c:15
reconstrucao/src/decompiled_02.c:15:3: error: unknown type name ‘unkint9’; did you mean ‘uint’?

    12:   ulonglong uVar2;
    13:   ulonglong uVar3;
    14:   unkint9 Var4;
    15:   unkint9 Var5;
    16:   ulonglong uVar6;
    17:   ulonglong uVar7;
    18:   ulonglong uVar8;

## FUN_140531850 */ — reconstrucao/src/decompiled_02.c:22
reconstrucao/src/decompiled_02.c:22:24: error: ‘unkuint9’ undeclared (first use in this function)

    19:   ulonglong uVar9;
    20:   ulonglong uVar10;
    21:   
    22:   uVar1 = (ulonglong)((unkuint9)*param_2 + (unkuint9)*param_3);
    23:   Var4 = (unkuint9)param_2[1] + (unkuint9)param_3[1] +
    24:          (unkuint9)((char)((unkuint9)*param_2 + (unkuint9)*param_3 >> 0x40) != '\0');
    25:   uVar2 = (ulonglong)Var4;

## FUN_140531850 */ — reconstrucao/src/decompiled_02.c:23
reconstrucao/src/decompiled_02.c:23:20: error: expected ‘;’ before ‘param_2’

    20:   ulonglong uVar10;
    21:   
    22:   uVar1 = (ulonglong)((unkuint9)*param_2 + (unkuint9)*param_3);
    23:   Var4 = (unkuint9)param_2[1] + (unkuint9)param_3[1] +
    24:          (unkuint9)((char)((unkuint9)*param_2 + (unkuint9)*param_3 >> 0x40) != '\0');
    25:   uVar2 = (ulonglong)Var4;
    26:   Var4 = (unkuint9)param_2[2] + (unkuint9)param_3[2] +

## FUN_140531850 */ — reconstrucao/src/decompiled_02.c:26
reconstrucao/src/decompiled_02.c:26:20: error: expected ‘;’ before ‘param_2’

    23:   Var4 = (unkuint9)param_2[1] + (unkuint9)param_3[1] +
    24:          (unkuint9)((char)((unkuint9)*param_2 + (unkuint9)*param_3 >> 0x40) != '\0');
    25:   uVar2 = (ulonglong)Var4;
    26:   Var4 = (unkuint9)param_2[2] + (unkuint9)param_3[2] +
    27:          (unkuint9)((char)((unkuint9)Var4 >> 0x40) != '\0');
    28:   uVar3 = (ulonglong)Var4;
    29:   Var4 = (unkuint9)param_2[3] + (unkuint9)param_3[3] +

## FUN_140531850 */ — reconstrucao/src/decompiled_02.c:29
reconstrucao/src/decompiled_02.c:29:20: error: expected ‘;’ before ‘param_2’

    26:   Var4 = (unkuint9)param_2[2] + (unkuint9)param_3[2] +
    27:          (unkuint9)((char)((unkuint9)Var4 >> 0x40) != '\0');
    28:   uVar3 = (ulonglong)Var4;
    29:   Var4 = (unkuint9)param_2[3] + (unkuint9)param_3[3] +
    30:          (unkuint9)((char)((unkuint9)Var4 >> 0x40) != '\0');
    31:   uVar10 = (ulonglong)Var4;
    32:   Var5 = (unkuint9)*(ulonglong *)(param_1 + 0x100) + (unkuint9)uVar1;

## FUN_140531850 */ — reconstrucao/src/decompiled_02.c:32
reconstrucao/src/decompiled_02.c:32:64: error: expected ‘;’ before ‘uVar1’

    29:   Var4 = (unkuint9)param_2[3] + (unkuint9)param_3[3] +
    30:          (unkuint9)((char)((unkuint9)Var4 >> 0x40) != '\0');
    31:   uVar10 = (ulonglong)Var4;
    32:   Var5 = (unkuint9)*(ulonglong *)(param_1 + 0x100) + (unkuint9)uVar1;
    33:   uVar6 = (ulonglong)Var5;
    34:   Var5 = (unkuint9)*(ulonglong *)(param_1 + 0x108) + (unkuint9)uVar2 +
    35:          (unkuint9)((char)((unkuint9)Var5 >> 0x40) != '\0');

## FUN_140531850 */ — reconstrucao/src/decompiled_02.c:34
reconstrucao/src/decompiled_02.c:34:64: error: expected ‘;’ before ‘uVar2’

    31:   uVar10 = (ulonglong)Var4;
    32:   Var5 = (unkuint9)*(ulonglong *)(param_1 + 0x100) + (unkuint9)uVar1;
    33:   uVar6 = (ulonglong)Var5;
    34:   Var5 = (unkuint9)*(ulonglong *)(param_1 + 0x108) + (unkuint9)uVar2 +
    35:          (unkuint9)((char)((unkuint9)Var5 >> 0x40) != '\0');
    36:   uVar7 = (ulonglong)Var5;
    37:   Var5 = (unkuint9)*(ulonglong *)(param_1 + 0x110) + (unkuint9)uVar3 +

## FUN_140531850 */ — reconstrucao/src/decompiled_02.c:37
reconstrucao/src/decompiled_02.c:37:64: error: expected ‘;’ before ‘uVar3’

    34:   Var5 = (unkuint9)*(ulonglong *)(param_1 + 0x108) + (unkuint9)uVar2 +
    35:          (unkuint9)((char)((unkuint9)Var5 >> 0x40) != '\0');
    36:   uVar7 = (ulonglong)Var5;
    37:   Var5 = (unkuint9)*(ulonglong *)(param_1 + 0x110) + (unkuint9)uVar3 +
    38:          (unkuint9)((char)((unkuint9)Var5 >> 0x40) != '\0');
    39:   uVar8 = (ulonglong)Var5;
    40:   Var5 = (unkuint9)*(ulonglong *)(param_1 + 0x118) + (unkuint9)uVar10 +

## FUN_140531850 */ — reconstrucao/src/decompiled_02.c:40
reconstrucao/src/decompiled_02.c:40:64: error: expected ‘;’ before ‘uVar10’

    37:   Var5 = (unkuint9)*(ulonglong *)(param_1 + 0x110) + (unkuint9)uVar3 +
    38:          (unkuint9)((char)((unkuint9)Var5 >> 0x40) != '\0');
    39:   uVar8 = (ulonglong)Var5;
    40:   Var5 = (unkuint9)*(ulonglong *)(param_1 + 0x118) + (unkuint9)uVar10 +
    41:          (unkuint9)((char)((unkuint9)Var5 >> 0x40) != '\0');
    42:   uVar9 = (ulonglong)Var5;
    43:   if ((char)((unkuint9)Var4 >> 0x40) != '\0') {

## FUN_140531850 */ — reconstrucao/src/decompiled_02.c:43
reconstrucao/src/decompiled_02.c:43:24: error: expected ‘)’ before ‘Var4’

    40:   Var5 = (unkuint9)*(ulonglong *)(param_1 + 0x118) + (unkuint9)uVar10 +
    41:          (unkuint9)((char)((unkuint9)Var5 >> 0x40) != '\0');
    42:   uVar9 = (ulonglong)Var5;
    43:   if ((char)((unkuint9)Var4 >> 0x40) != '\0') {
    44:     uVar10 = uVar9;
    45:     uVar3 = uVar8;
    46:     uVar2 = uVar7;

## FUN_140531850 */ — reconstrucao/src/decompiled_02.c:49
reconstrucao/src/decompiled_02.c:49:24: error: expected ‘)’ before ‘Var5’

    46:     uVar2 = uVar7;
    47:     uVar1 = uVar6;
    48:   }
    49:   if ((char)((unkuint9)Var5 >> 0x40) != '\0') {
    50:     uVar10 = uVar9;
    51:     uVar3 = uVar8;
    52:     uVar2 = uVar7;

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:72
reconstrucao/src/decompiled_02.c:72:3: error: unknown type name ‘unkint9’; did you mean ‘uint’?

    69:   ulonglong uVar3;
    70:   ulonglong uVar4;
    71:   ulonglong uVar5;
    72:   unkint9 Var6;
    73:   ulonglong uVar7;
    74:   ulonglong uVar8;
    75:   ulonglong uVar9;

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:76
reconstrucao/src/decompiled_02.c:76:3: error: unknown type name ‘unkint9’; did you mean ‘uint’?

    73:   ulonglong uVar7;
    74:   ulonglong uVar8;
    75:   ulonglong uVar9;
    76:   unkint9 Var10;
    77:   ulonglong uVar11;
    78:   unkint9 Var12;
    79:   unkint9 Var13;

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:78
reconstrucao/src/decompiled_02.c:78:3: error: unknown type name ‘unkint9’; did you mean ‘uint’?

    75:   ulonglong uVar9;
    76:   unkint9 Var10;
    77:   ulonglong uVar11;
    78:   unkint9 Var12;
    79:   unkint9 Var13;
    80:   unkint9 Var14;
    81:   unkint9 Var15;

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:79
reconstrucao/src/decompiled_02.c:79:3: error: unknown type name ‘unkint9’; did you mean ‘uint’?

    76:   unkint9 Var10;
    77:   ulonglong uVar11;
    78:   unkint9 Var12;
    79:   unkint9 Var13;
    80:   unkint9 Var14;
    81:   unkint9 Var15;
    82:   undefined1 auVar16 [16];

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:80
reconstrucao/src/decompiled_02.c:80:3: error: unknown type name ‘unkint9’; did you mean ‘uint’?

    77:   ulonglong uVar11;
    78:   unkint9 Var12;
    79:   unkint9 Var13;
    80:   unkint9 Var14;
    81:   unkint9 Var15;
    82:   undefined1 auVar16 [16];
    83:   undefined1 auVar17 [16];

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:81
reconstrucao/src/decompiled_02.c:81:3: error: unknown type name ‘unkint9’; did you mean ‘uint’?

    78:   unkint9 Var12;
    79:   unkint9 Var13;
    80:   unkint9 Var14;
    81:   unkint9 Var15;
    82:   undefined1 auVar16 [16];
    83:   undefined1 auVar17 [16];
    84:   undefined1 auVar18 [16];

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:155
reconstrucao/src/decompiled_02.c:155:10: error: request for member ‘_8_8_’ in something not a structure or union

    152:   ulonglong uVar86;
    153:   
    154:   uVar1 = *param_2;
    155:   auVar16._8_8_ = 0;
    156:   auVar16._0_8_ = uVar1;
    157:   auVar48._8_8_ = 0;
    158:   auVar48._0_8_ = *param_3;

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:156
reconstrucao/src/decompiled_02.c:156:10: error: request for member ‘_0_8_’ in something not a structure or union

    153:   
    154:   uVar1 = *param_2;
    155:   auVar16._8_8_ = 0;
    156:   auVar16._0_8_ = uVar1;
    157:   auVar48._8_8_ = 0;
    158:   auVar48._0_8_ = *param_3;
    159:   uVar4 = SUB168(auVar16 * auVar48,0);

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:157
reconstrucao/src/decompiled_02.c:157:10: error: request for member ‘_8_8_’ in something not a structure or union

    154:   uVar1 = *param_2;
    155:   auVar16._8_8_ = 0;
    156:   auVar16._0_8_ = uVar1;
    157:   auVar48._8_8_ = 0;
    158:   auVar48._0_8_ = *param_3;
    159:   uVar4 = SUB168(auVar16 * auVar48,0);
    160:   uVar83 = SUB168(auVar16 * auVar48,8);

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:158
reconstrucao/src/decompiled_02.c:158:10: error: request for member ‘_0_8_’ in something not a structure or union

    155:   auVar16._8_8_ = 0;
    156:   auVar16._0_8_ = uVar1;
    157:   auVar48._8_8_ = 0;
    158:   auVar48._0_8_ = *param_3;
    159:   uVar4 = SUB168(auVar16 * auVar48,0);
    160:   uVar83 = SUB168(auVar16 * auVar48,8);
    161:   auVar17._8_8_ = 0;

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:159
reconstrucao/src/decompiled_02.c:159:11: error: implicit declaration of function ‘SUB168’ [-Wimplicit-function-declaration]

    156:   auVar16._0_8_ = uVar1;
    157:   auVar48._8_8_ = 0;
    158:   auVar48._0_8_ = *param_3;
    159:   uVar4 = SUB168(auVar16 * auVar48,0);
    160:   uVar83 = SUB168(auVar16 * auVar48,8);
    161:   auVar17._8_8_ = 0;
    162:   auVar17._0_8_ = uVar1;

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:159
reconstrucao/src/decompiled_02.c:159:26: error: invalid operands to binary * (have ‘undefined1 *’ {aka ‘unsigned char *’} and ‘undefined1 *’ {aka ‘unsigned char *’})

    156:   auVar16._0_8_ = uVar1;
    157:   auVar48._8_8_ = 0;
    158:   auVar48._0_8_ = *param_3;
    159:   uVar4 = SUB168(auVar16 * auVar48,0);
    160:   uVar83 = SUB168(auVar16 * auVar48,8);
    161:   auVar17._8_8_ = 0;
    162:   auVar17._0_8_ = uVar1;

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:160
reconstrucao/src/decompiled_02.c:160:27: error: invalid operands to binary * (have ‘undefined1 *’ {aka ‘unsigned char *’} and ‘undefined1 *’ {aka ‘unsigned char *’})

    157:   auVar48._8_8_ = 0;
    158:   auVar48._0_8_ = *param_3;
    159:   uVar4 = SUB168(auVar16 * auVar48,0);
    160:   uVar83 = SUB168(auVar16 * auVar48,8);
    161:   auVar17._8_8_ = 0;
    162:   auVar17._0_8_ = uVar1;
    163:   auVar49._8_8_ = 0;

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:161
reconstrucao/src/decompiled_02.c:161:10: error: request for member ‘_8_8_’ in something not a structure or union

    158:   auVar48._0_8_ = *param_3;
    159:   uVar4 = SUB168(auVar16 * auVar48,0);
    160:   uVar83 = SUB168(auVar16 * auVar48,8);
    161:   auVar17._8_8_ = 0;
    162:   auVar17._0_8_ = uVar1;
    163:   auVar49._8_8_ = 0;
    164:   auVar49._0_8_ = param_3[1];

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:162
reconstrucao/src/decompiled_02.c:162:10: error: request for member ‘_0_8_’ in something not a structure or union

    159:   uVar4 = SUB168(auVar16 * auVar48,0);
    160:   uVar83 = SUB168(auVar16 * auVar48,8);
    161:   auVar17._8_8_ = 0;
    162:   auVar17._0_8_ = uVar1;
    163:   auVar49._8_8_ = 0;
    164:   auVar49._0_8_ = param_3[1];
    165:   uVar7 = SUB168(auVar17 * auVar49,0);

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:163
reconstrucao/src/decompiled_02.c:163:10: error: request for member ‘_8_8_’ in something not a structure or union

    160:   uVar83 = SUB168(auVar16 * auVar48,8);
    161:   auVar17._8_8_ = 0;
    162:   auVar17._0_8_ = uVar1;
    163:   auVar49._8_8_ = 0;
    164:   auVar49._0_8_ = param_3[1];
    165:   uVar7 = SUB168(auVar17 * auVar49,0);
    166:   uVar82 = SUB168(auVar17 * auVar49,8);

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:164
reconstrucao/src/decompiled_02.c:164:10: error: request for member ‘_0_8_’ in something not a structure or union

    161:   auVar17._8_8_ = 0;
    162:   auVar17._0_8_ = uVar1;
    163:   auVar49._8_8_ = 0;
    164:   auVar49._0_8_ = param_3[1];
    165:   uVar7 = SUB168(auVar17 * auVar49,0);
    166:   uVar82 = SUB168(auVar17 * auVar49,8);
    167:   auVar18._8_8_ = 0;

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:165
reconstrucao/src/decompiled_02.c:165:26: error: invalid operands to binary * (have ‘undefined1 *’ {aka ‘unsigned char *’} and ‘undefined1 *’ {aka ‘unsigned char *’})

    162:   auVar17._0_8_ = uVar1;
    163:   auVar49._8_8_ = 0;
    164:   auVar49._0_8_ = param_3[1];
    165:   uVar7 = SUB168(auVar17 * auVar49,0);
    166:   uVar82 = SUB168(auVar17 * auVar49,8);
    167:   auVar18._8_8_ = 0;
    168:   auVar18._0_8_ = uVar1;

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:166
reconstrucao/src/decompiled_02.c:166:27: error: invalid operands to binary * (have ‘undefined1 *’ {aka ‘unsigned char *’} and ‘undefined1 *’ {aka ‘unsigned char *’})

    163:   auVar49._8_8_ = 0;
    164:   auVar49._0_8_ = param_3[1];
    165:   uVar7 = SUB168(auVar17 * auVar49,0);
    166:   uVar82 = SUB168(auVar17 * auVar49,8);
    167:   auVar18._8_8_ = 0;
    168:   auVar18._0_8_ = uVar1;
    169:   auVar50._8_8_ = 0;

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:167
reconstrucao/src/decompiled_02.c:167:10: error: request for member ‘_8_8_’ in something not a structure or union

    164:   auVar49._0_8_ = param_3[1];
    165:   uVar7 = SUB168(auVar17 * auVar49,0);
    166:   uVar82 = SUB168(auVar17 * auVar49,8);
    167:   auVar18._8_8_ = 0;
    168:   auVar18._0_8_ = uVar1;
    169:   auVar50._8_8_ = 0;
    170:   auVar50._0_8_ = param_3[2];

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:168
reconstrucao/src/decompiled_02.c:168:10: error: request for member ‘_0_8_’ in something not a structure or union

    165:   uVar7 = SUB168(auVar17 * auVar49,0);
    166:   uVar82 = SUB168(auVar17 * auVar49,8);
    167:   auVar18._8_8_ = 0;
    168:   auVar18._0_8_ = uVar1;
    169:   auVar50._8_8_ = 0;
    170:   auVar50._0_8_ = param_3[2];
    171:   uVar2 = SUB168(auVar18 * auVar50,0);

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:169
reconstrucao/src/decompiled_02.c:169:10: error: request for member ‘_8_8_’ in something not a structure or union

    166:   uVar82 = SUB168(auVar17 * auVar49,8);
    167:   auVar18._8_8_ = 0;
    168:   auVar18._0_8_ = uVar1;
    169:   auVar50._8_8_ = 0;
    170:   auVar50._0_8_ = param_3[2];
    171:   uVar2 = SUB168(auVar18 * auVar50,0);
    172:   uVar81 = SUB168(auVar18 * auVar50,8);

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:170
reconstrucao/src/decompiled_02.c:170:10: error: request for member ‘_0_8_’ in something not a structure or union

    167:   auVar18._8_8_ = 0;
    168:   auVar18._0_8_ = uVar1;
    169:   auVar50._8_8_ = 0;
    170:   auVar50._0_8_ = param_3[2];
    171:   uVar2 = SUB168(auVar18 * auVar50,0);
    172:   uVar81 = SUB168(auVar18 * auVar50,8);
    173:   uVar86 = (ulonglong)CARRY8(uVar83,uVar7);

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:171
reconstrucao/src/decompiled_02.c:171:26: error: invalid operands to binary * (have ‘undefined1 *’ {aka ‘unsigned char *’} and ‘undefined1 *’ {aka ‘unsigned char *’})

    168:   auVar18._0_8_ = uVar1;
    169:   auVar50._8_8_ = 0;
    170:   auVar50._0_8_ = param_3[2];
    171:   uVar2 = SUB168(auVar18 * auVar50,0);
    172:   uVar81 = SUB168(auVar18 * auVar50,8);
    173:   uVar86 = (ulonglong)CARRY8(uVar83,uVar7);
    174:   uVar3 = uVar82 + uVar2;

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:172
reconstrucao/src/decompiled_02.c:172:27: error: invalid operands to binary * (have ‘undefined1 *’ {aka ‘unsigned char *’} and ‘undefined1 *’ {aka ‘unsigned char *’})

    169:   auVar50._8_8_ = 0;
    170:   auVar50._0_8_ = param_3[2];
    171:   uVar2 = SUB168(auVar18 * auVar50,0);
    172:   uVar81 = SUB168(auVar18 * auVar50,8);
    173:   uVar86 = (ulonglong)CARRY8(uVar83,uVar7);
    174:   uVar3 = uVar82 + uVar2;
    175:   auVar19._8_8_ = 0;

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:173
reconstrucao/src/decompiled_02.c:173:23: error: implicit declaration of function ‘CARRY8’ [-Wimplicit-function-declaration]

    170:   auVar50._0_8_ = param_3[2];
    171:   uVar2 = SUB168(auVar18 * auVar50,0);
    172:   uVar81 = SUB168(auVar18 * auVar50,8);
    173:   uVar86 = (ulonglong)CARRY8(uVar83,uVar7);
    174:   uVar3 = uVar82 + uVar2;
    175:   auVar19._8_8_ = 0;
    176:   auVar19._0_8_ = uVar1;

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:175
reconstrucao/src/decompiled_02.c:175:10: error: request for member ‘_8_8_’ in something not a structure or union

    172:   uVar81 = SUB168(auVar18 * auVar50,8);
    173:   uVar86 = (ulonglong)CARRY8(uVar83,uVar7);
    174:   uVar3 = uVar82 + uVar2;
    175:   auVar19._8_8_ = 0;
    176:   auVar19._0_8_ = uVar1;
    177:   auVar51._8_8_ = 0;
    178:   auVar51._0_8_ = param_3[3];

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:176
reconstrucao/src/decompiled_02.c:176:10: error: request for member ‘_0_8_’ in something not a structure or union

    173:   uVar86 = (ulonglong)CARRY8(uVar83,uVar7);
    174:   uVar3 = uVar82 + uVar2;
    175:   auVar19._8_8_ = 0;
    176:   auVar19._0_8_ = uVar1;
    177:   auVar51._8_8_ = 0;
    178:   auVar51._0_8_ = param_3[3];
    179:   uVar5 = SUB168(auVar19 * auVar51,0);

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:177
reconstrucao/src/decompiled_02.c:177:10: error: request for member ‘_8_8_’ in something not a structure or union

    174:   uVar3 = uVar82 + uVar2;
    175:   auVar19._8_8_ = 0;
    176:   auVar19._0_8_ = uVar1;
    177:   auVar51._8_8_ = 0;
    178:   auVar51._0_8_ = param_3[3];
    179:   uVar5 = SUB168(auVar19 * auVar51,0);
    180:   uVar2 = (ulonglong)(CARRY8(uVar82,uVar2) || CARRY8(uVar3,uVar86));

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:178
reconstrucao/src/decompiled_02.c:178:10: error: request for member ‘_0_8_’ in something not a structure or union

    175:   auVar19._8_8_ = 0;
    176:   auVar19._0_8_ = uVar1;
    177:   auVar51._8_8_ = 0;
    178:   auVar51._0_8_ = param_3[3];
    179:   uVar5 = SUB168(auVar19 * auVar51,0);
    180:   uVar2 = (ulonglong)(CARRY8(uVar82,uVar2) || CARRY8(uVar3,uVar86));
    181:   uVar82 = uVar81 + uVar5;

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:179
reconstrucao/src/decompiled_02.c:179:26: error: invalid operands to binary * (have ‘undefined1 *’ {aka ‘unsigned char *’} and ‘undefined1 *’ {aka ‘unsigned char *’})

    176:   auVar19._0_8_ = uVar1;
    177:   auVar51._8_8_ = 0;
    178:   auVar51._0_8_ = param_3[3];
    179:   uVar5 = SUB168(auVar19 * auVar51,0);
    180:   uVar2 = (ulonglong)(CARRY8(uVar82,uVar2) || CARRY8(uVar3,uVar86));
    181:   uVar82 = uVar81 + uVar5;
    182:   uVar85 = uVar4 * *(longlong *)(param_1 + 0x18);

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:185
reconstrucao/src/decompiled_02.c:185:10: error: request for member ‘_8_8_’ in something not a structure or union

    182:   uVar85 = uVar4 * *(longlong *)(param_1 + 0x18);
    183:   puVar80 = (ulonglong *)(param_1 + 0x80);
    184:   uVar1 = param_2[1];
    185:   auVar20._8_8_ = 0;
    186:   auVar20._0_8_ = uVar1;
    187:   auVar52._8_8_ = 0;
    188:   auVar52._0_8_ = *param_3;

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:186
reconstrucao/src/decompiled_02.c:186:10: error: request for member ‘_0_8_’ in something not a structure or union

    183:   puVar80 = (ulonglong *)(param_1 + 0x80);
    184:   uVar1 = param_2[1];
    185:   auVar20._8_8_ = 0;
    186:   auVar20._0_8_ = uVar1;
    187:   auVar52._8_8_ = 0;
    188:   auVar52._0_8_ = *param_3;
    189:   Var10 = (unkuint9)(uVar83 + uVar7) + (unkuint9)SUB168(auVar20 * auVar52,0);

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:187
reconstrucao/src/decompiled_02.c:187:10: error: request for member ‘_8_8_’ in something not a structure or union

    184:   uVar1 = param_2[1];
    185:   auVar20._8_8_ = 0;
    186:   auVar20._0_8_ = uVar1;
    187:   auVar52._8_8_ = 0;
    188:   auVar52._0_8_ = *param_3;
    189:   Var10 = (unkuint9)(uVar83 + uVar7) + (unkuint9)SUB168(auVar20 * auVar52,0);
    190:   Var6 = (unkuint9)(uVar3 + uVar86) + (unkuint9)SUB168(auVar20 * auVar52,8);

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:188
reconstrucao/src/decompiled_02.c:188:10: error: request for member ‘_0_8_’ in something not a structure or union

    185:   auVar20._8_8_ = 0;
    186:   auVar20._0_8_ = uVar1;
    187:   auVar52._8_8_ = 0;
    188:   auVar52._0_8_ = *param_3;
    189:   Var10 = (unkuint9)(uVar83 + uVar7) + (unkuint9)SUB168(auVar20 * auVar52,0);
    190:   Var6 = (unkuint9)(uVar3 + uVar86) + (unkuint9)SUB168(auVar20 * auVar52,8);
    191:   auVar21._8_8_ = 0;

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:189
reconstrucao/src/decompiled_02.c:189:12: error: ‘unkuint9’ undeclared (first use in this function)

    186:   auVar20._0_8_ = uVar1;
    187:   auVar52._8_8_ = 0;
    188:   auVar52._0_8_ = *param_3;
    189:   Var10 = (unkuint9)(uVar83 + uVar7) + (unkuint9)SUB168(auVar20 * auVar52,0);
    190:   Var6 = (unkuint9)(uVar3 + uVar86) + (unkuint9)SUB168(auVar20 * auVar52,8);
    191:   auVar21._8_8_ = 0;
    192:   auVar21._0_8_ = uVar1;

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:189
reconstrucao/src/decompiled_02.c:189:50: error: expected ‘;’ before ‘SUB168’

    186:   auVar20._0_8_ = uVar1;
    187:   auVar52._8_8_ = 0;
    188:   auVar52._0_8_ = *param_3;
    189:   Var10 = (unkuint9)(uVar83 + uVar7) + (unkuint9)SUB168(auVar20 * auVar52,0);
    190:   Var6 = (unkuint9)(uVar3 + uVar86) + (unkuint9)SUB168(auVar20 * auVar52,8);
    191:   auVar21._8_8_ = 0;
    192:   auVar21._0_8_ = uVar1;

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:190
reconstrucao/src/decompiled_02.c:190:49: error: expected ‘;’ before ‘SUB168’

    187:   auVar52._8_8_ = 0;
    188:   auVar52._0_8_ = *param_3;
    189:   Var10 = (unkuint9)(uVar83 + uVar7) + (unkuint9)SUB168(auVar20 * auVar52,0);
    190:   Var6 = (unkuint9)(uVar3 + uVar86) + (unkuint9)SUB168(auVar20 * auVar52,8);
    191:   auVar21._8_8_ = 0;
    192:   auVar21._0_8_ = uVar1;
    193:   auVar53._8_8_ = 0;

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:191
reconstrucao/src/decompiled_02.c:191:10: error: request for member ‘_8_8_’ in something not a structure or union

    188:   auVar52._0_8_ = *param_3;
    189:   Var10 = (unkuint9)(uVar83 + uVar7) + (unkuint9)SUB168(auVar20 * auVar52,0);
    190:   Var6 = (unkuint9)(uVar3 + uVar86) + (unkuint9)SUB168(auVar20 * auVar52,8);
    191:   auVar21._8_8_ = 0;
    192:   auVar21._0_8_ = uVar1;
    193:   auVar53._8_8_ = 0;
    194:   auVar53._0_8_ = param_3[1];

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:192
reconstrucao/src/decompiled_02.c:192:10: error: request for member ‘_0_8_’ in something not a structure or union

    189:   Var10 = (unkuint9)(uVar83 + uVar7) + (unkuint9)SUB168(auVar20 * auVar52,0);
    190:   Var6 = (unkuint9)(uVar3 + uVar86) + (unkuint9)SUB168(auVar20 * auVar52,8);
    191:   auVar21._8_8_ = 0;
    192:   auVar21._0_8_ = uVar1;
    193:   auVar53._8_8_ = 0;
    194:   auVar53._0_8_ = param_3[1];
    195:   Var12 = (unkuint9)(ulonglong)Var6 + (unkuint9)SUB168(auVar21 * auVar53,0) +

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:193
reconstrucao/src/decompiled_02.c:193:10: error: request for member ‘_8_8_’ in something not a structure or union

    190:   Var6 = (unkuint9)(uVar3 + uVar86) + (unkuint9)SUB168(auVar20 * auVar52,8);
    191:   auVar21._8_8_ = 0;
    192:   auVar21._0_8_ = uVar1;
    193:   auVar53._8_8_ = 0;
    194:   auVar53._0_8_ = param_3[1];
    195:   Var12 = (unkuint9)(ulonglong)Var6 + (unkuint9)SUB168(auVar21 * auVar53,0) +
    196:           (unkuint9)((char)((unkuint9)Var10 >> 0x40) != '\0');

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:194
reconstrucao/src/decompiled_02.c:194:10: error: request for member ‘_0_8_’ in something not a structure or union

    191:   auVar21._8_8_ = 0;
    192:   auVar21._0_8_ = uVar1;
    193:   auVar53._8_8_ = 0;
    194:   auVar53._0_8_ = param_3[1];
    195:   Var12 = (unkuint9)(ulonglong)Var6 + (unkuint9)SUB168(auVar21 * auVar53,0) +
    196:           (unkuint9)((char)((unkuint9)Var10 >> 0x40) != '\0');
    197:   Var6 = (unkuint9)(uVar82 + uVar2) + (unkuint9)SUB168(auVar21 * auVar53,8) +

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:195
reconstrucao/src/decompiled_02.c:195:22: error: expected expression before ‘ulonglong’

    192:   auVar21._0_8_ = uVar1;
    193:   auVar53._8_8_ = 0;
    194:   auVar53._0_8_ = param_3[1];
    195:   Var12 = (unkuint9)(ulonglong)Var6 + (unkuint9)SUB168(auVar21 * auVar53,0) +
    196:           (unkuint9)((char)((unkuint9)Var10 >> 0x40) != '\0');
    197:   Var6 = (unkuint9)(uVar82 + uVar2) + (unkuint9)SUB168(auVar21 * auVar53,8) +
    198:          (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:195
reconstrucao/src/decompiled_02.c:195:32: error: expected ‘;’ before ‘Var6’

    192:   auVar21._0_8_ = uVar1;
    193:   auVar53._8_8_ = 0;
    194:   auVar53._0_8_ = param_3[1];
    195:   Var12 = (unkuint9)(ulonglong)Var6 + (unkuint9)SUB168(auVar21 * auVar53,0) +
    196:           (unkuint9)((char)((unkuint9)Var10 >> 0x40) != '\0');
    197:   Var6 = (unkuint9)(uVar82 + uVar2) + (unkuint9)SUB168(auVar21 * auVar53,8) +
    198:          (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:197
reconstrucao/src/decompiled_02.c:197:49: error: expected ‘;’ before ‘SUB168’

    194:   auVar53._0_8_ = param_3[1];
    195:   Var12 = (unkuint9)(ulonglong)Var6 + (unkuint9)SUB168(auVar21 * auVar53,0) +
    196:           (unkuint9)((char)((unkuint9)Var10 >> 0x40) != '\0');
    197:   Var6 = (unkuint9)(uVar82 + uVar2) + (unkuint9)SUB168(auVar21 * auVar53,8) +
    198:          (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
    199:   auVar22._8_8_ = 0;
    200:   auVar22._0_8_ = uVar1;

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:199
reconstrucao/src/decompiled_02.c:199:10: error: request for member ‘_8_8_’ in something not a structure or union

    196:           (unkuint9)((char)((unkuint9)Var10 >> 0x40) != '\0');
    197:   Var6 = (unkuint9)(uVar82 + uVar2) + (unkuint9)SUB168(auVar21 * auVar53,8) +
    198:          (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
    199:   auVar22._8_8_ = 0;
    200:   auVar22._0_8_ = uVar1;
    201:   auVar54._8_8_ = 0;
    202:   auVar54._0_8_ = param_3[2];

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:200
reconstrucao/src/decompiled_02.c:200:10: error: request for member ‘_0_8_’ in something not a structure or union

    197:   Var6 = (unkuint9)(uVar82 + uVar2) + (unkuint9)SUB168(auVar21 * auVar53,8) +
    198:          (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
    199:   auVar22._8_8_ = 0;
    200:   auVar22._0_8_ = uVar1;
    201:   auVar54._8_8_ = 0;
    202:   auVar54._0_8_ = param_3[2];
    203:   Var13 = (unkuint9)(ulonglong)Var6 + (unkuint9)SUB168(auVar22 * auVar54,0) +

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:201
reconstrucao/src/decompiled_02.c:201:10: error: request for member ‘_8_8_’ in something not a structure or union

    198:          (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
    199:   auVar22._8_8_ = 0;
    200:   auVar22._0_8_ = uVar1;
    201:   auVar54._8_8_ = 0;
    202:   auVar54._0_8_ = param_3[2];
    203:   Var13 = (unkuint9)(ulonglong)Var6 + (unkuint9)SUB168(auVar22 * auVar54,0) +
    204:           (unkuint9)((char)((unkuint9)Var12 >> 0x40) != '\0');

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:202
reconstrucao/src/decompiled_02.c:202:10: error: request for member ‘_0_8_’ in something not a structure or union

    199:   auVar22._8_8_ = 0;
    200:   auVar22._0_8_ = uVar1;
    201:   auVar54._8_8_ = 0;
    202:   auVar54._0_8_ = param_3[2];
    203:   Var13 = (unkuint9)(ulonglong)Var6 + (unkuint9)SUB168(auVar22 * auVar54,0) +
    204:           (unkuint9)((char)((unkuint9)Var12 >> 0x40) != '\0');
    205:   Var6 = (unkuint9)

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:203
reconstrucao/src/decompiled_02.c:203:22: error: expected expression before ‘ulonglong’

    200:   auVar22._0_8_ = uVar1;
    201:   auVar54._8_8_ = 0;
    202:   auVar54._0_8_ = param_3[2];
    203:   Var13 = (unkuint9)(ulonglong)Var6 + (unkuint9)SUB168(auVar22 * auVar54,0) +
    204:           (unkuint9)((char)((unkuint9)Var12 >> 0x40) != '\0');
    205:   Var6 = (unkuint9)
    206:          (SUB168(auVar19 * auVar51,8) + (ulonglong)(CARRY8(uVar81,uVar5) || CARRY8(uVar82,uVar2))) +

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:203
reconstrucao/src/decompiled_02.c:203:32: error: expected ‘;’ before ‘Var6’

    200:   auVar22._0_8_ = uVar1;
    201:   auVar54._8_8_ = 0;
    202:   auVar54._0_8_ = param_3[2];
    203:   Var13 = (unkuint9)(ulonglong)Var6 + (unkuint9)SUB168(auVar22 * auVar54,0) +
    204:           (unkuint9)((char)((unkuint9)Var12 >> 0x40) != '\0');
    205:   Var6 = (unkuint9)
    206:          (SUB168(auVar19 * auVar51,8) + (ulonglong)(CARRY8(uVar81,uVar5) || CARRY8(uVar82,uVar2))) +

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:206
reconstrucao/src/decompiled_02.c:206:26: error: invalid operands to binary * (have ‘undefined1 *’ {aka ‘unsigned char *’} and ‘undefined1 *’ {aka ‘unsigned char *’})

    203:   Var13 = (unkuint9)(ulonglong)Var6 + (unkuint9)SUB168(auVar22 * auVar54,0) +
    204:           (unkuint9)((char)((unkuint9)Var12 >> 0x40) != '\0');
    205:   Var6 = (unkuint9)
    206:          (SUB168(auVar19 * auVar51,8) + (ulonglong)(CARRY8(uVar81,uVar5) || CARRY8(uVar82,uVar2))) +
    207:          (unkuint9)SUB168(auVar22 * auVar54,8) + (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
    208:   auVar23._8_8_ = 0;
    209:   auVar23._0_8_ = uVar1;

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:207
reconstrucao/src/decompiled_02.c:207:20: error: expected ‘;’ before ‘SUB168’

    204:           (unkuint9)((char)((unkuint9)Var12 >> 0x40) != '\0');
    205:   Var6 = (unkuint9)
    206:          (SUB168(auVar19 * auVar51,8) + (ulonglong)(CARRY8(uVar81,uVar5) || CARRY8(uVar82,uVar2))) +
    207:          (unkuint9)SUB168(auVar22 * auVar54,8) + (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
    208:   auVar23._8_8_ = 0;
    209:   auVar23._0_8_ = uVar1;
    210:   auVar55._8_8_ = 0;

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:208
reconstrucao/src/decompiled_02.c:208:10: error: request for member ‘_8_8_’ in something not a structure or union

    205:   Var6 = (unkuint9)
    206:          (SUB168(auVar19 * auVar51,8) + (ulonglong)(CARRY8(uVar81,uVar5) || CARRY8(uVar82,uVar2))) +
    207:          (unkuint9)SUB168(auVar22 * auVar54,8) + (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
    208:   auVar23._8_8_ = 0;
    209:   auVar23._0_8_ = uVar1;
    210:   auVar55._8_8_ = 0;
    211:   auVar55._0_8_ = param_3[3];

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:209
reconstrucao/src/decompiled_02.c:209:10: error: request for member ‘_0_8_’ in something not a structure or union

    206:          (SUB168(auVar19 * auVar51,8) + (ulonglong)(CARRY8(uVar81,uVar5) || CARRY8(uVar82,uVar2))) +
    207:          (unkuint9)SUB168(auVar22 * auVar54,8) + (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
    208:   auVar23._8_8_ = 0;
    209:   auVar23._0_8_ = uVar1;
    210:   auVar55._8_8_ = 0;
    211:   auVar55._0_8_ = param_3[3];
    212:   Var14 = (unkuint9)(ulonglong)Var6 + (unkuint9)SUB168(auVar23 * auVar55,0) +

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:210
reconstrucao/src/decompiled_02.c:210:10: error: request for member ‘_8_8_’ in something not a structure or union

    207:          (unkuint9)SUB168(auVar22 * auVar54,8) + (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
    208:   auVar23._8_8_ = 0;
    209:   auVar23._0_8_ = uVar1;
    210:   auVar55._8_8_ = 0;
    211:   auVar55._0_8_ = param_3[3];
    212:   Var14 = (unkuint9)(ulonglong)Var6 + (unkuint9)SUB168(auVar23 * auVar55,0) +
    213:           (unkuint9)((char)((unkuint9)Var13 >> 0x40) != '\0');

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:211
reconstrucao/src/decompiled_02.c:211:10: error: request for member ‘_0_8_’ in something not a structure or union

    208:   auVar23._8_8_ = 0;
    209:   auVar23._0_8_ = uVar1;
    210:   auVar55._8_8_ = 0;
    211:   auVar55._0_8_ = param_3[3];
    212:   Var14 = (unkuint9)(ulonglong)Var6 + (unkuint9)SUB168(auVar23 * auVar55,0) +
    213:           (unkuint9)((char)((unkuint9)Var13 >> 0x40) != '\0');
    214:   uVar3 = SUB168(auVar23 * auVar55,8) + (ulonglong)((char)((unkuint9)Var6 >> 0x40) != '\0');

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:212
reconstrucao/src/decompiled_02.c:212:22: error: expected expression before ‘ulonglong’

    209:   auVar23._0_8_ = uVar1;
    210:   auVar55._8_8_ = 0;
    211:   auVar55._0_8_ = param_3[3];
    212:   Var14 = (unkuint9)(ulonglong)Var6 + (unkuint9)SUB168(auVar23 * auVar55,0) +
    213:           (unkuint9)((char)((unkuint9)Var13 >> 0x40) != '\0');
    214:   uVar3 = SUB168(auVar23 * auVar55,8) + (ulonglong)((char)((unkuint9)Var6 >> 0x40) != '\0');
    215:   auVar24._8_8_ = 0;

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:212
reconstrucao/src/decompiled_02.c:212:32: error: expected ‘;’ before ‘Var6’

    209:   auVar23._0_8_ = uVar1;
    210:   auVar55._8_8_ = 0;
    211:   auVar55._0_8_ = param_3[3];
    212:   Var14 = (unkuint9)(ulonglong)Var6 + (unkuint9)SUB168(auVar23 * auVar55,0) +
    213:           (unkuint9)((char)((unkuint9)Var13 >> 0x40) != '\0');
    214:   uVar3 = SUB168(auVar23 * auVar55,8) + (ulonglong)((char)((unkuint9)Var6 >> 0x40) != '\0');
    215:   auVar24._8_8_ = 0;

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:214
reconstrucao/src/decompiled_02.c:214:26: error: invalid operands to binary * (have ‘undefined1 *’ {aka ‘unsigned char *’} and ‘undefined1 *’ {aka ‘unsigned char *’})

    211:   auVar55._0_8_ = param_3[3];
    212:   Var14 = (unkuint9)(ulonglong)Var6 + (unkuint9)SUB168(auVar23 * auVar55,0) +
    213:           (unkuint9)((char)((unkuint9)Var13 >> 0x40) != '\0');
    214:   uVar3 = SUB168(auVar23 * auVar55,8) + (ulonglong)((char)((unkuint9)Var6 >> 0x40) != '\0');
    215:   auVar24._8_8_ = 0;
    216:   auVar24._0_8_ = uVar85;
    217:   auVar56._8_8_ = 0;

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:214
reconstrucao/src/decompiled_02.c:214:70: error: expected ‘)’ before ‘Var6’

    211:   auVar55._0_8_ = param_3[3];
    212:   Var14 = (unkuint9)(ulonglong)Var6 + (unkuint9)SUB168(auVar23 * auVar55,0) +
    213:           (unkuint9)((char)((unkuint9)Var13 >> 0x40) != '\0');
    214:   uVar3 = SUB168(auVar23 * auVar55,8) + (ulonglong)((char)((unkuint9)Var6 >> 0x40) != '\0');
    215:   auVar24._8_8_ = 0;
    216:   auVar24._0_8_ = uVar85;
    217:   auVar56._8_8_ = 0;

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:215
reconstrucao/src/decompiled_02.c:215:10: error: request for member ‘_8_8_’ in something not a structure or union

    212:   Var14 = (unkuint9)(ulonglong)Var6 + (unkuint9)SUB168(auVar23 * auVar55,0) +
    213:           (unkuint9)((char)((unkuint9)Var13 >> 0x40) != '\0');
    214:   uVar3 = SUB168(auVar23 * auVar55,8) + (ulonglong)((char)((unkuint9)Var6 >> 0x40) != '\0');
    215:   auVar24._8_8_ = 0;
    216:   auVar24._0_8_ = uVar85;
    217:   auVar56._8_8_ = 0;
    218:   auVar56._0_8_ = *puVar80;

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:216
reconstrucao/src/decompiled_02.c:216:10: error: request for member ‘_0_8_’ in something not a structure or union

    213:           (unkuint9)((char)((unkuint9)Var13 >> 0x40) != '\0');
    214:   uVar3 = SUB168(auVar23 * auVar55,8) + (ulonglong)((char)((unkuint9)Var6 >> 0x40) != '\0');
    215:   auVar24._8_8_ = 0;
    216:   auVar24._0_8_ = uVar85;
    217:   auVar56._8_8_ = 0;
    218:   auVar56._0_8_ = *puVar80;
    219:   Var6 = (unkuint9)uVar4 + (unkuint9)SUB168(auVar24 * auVar56,0);

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:217
reconstrucao/src/decompiled_02.c:217:10: error: request for member ‘_8_8_’ in something not a structure or union

    214:   uVar3 = SUB168(auVar23 * auVar55,8) + (ulonglong)((char)((unkuint9)Var6 >> 0x40) != '\0');
    215:   auVar24._8_8_ = 0;
    216:   auVar24._0_8_ = uVar85;
    217:   auVar56._8_8_ = 0;
    218:   auVar56._0_8_ = *puVar80;
    219:   Var6 = (unkuint9)uVar4 + (unkuint9)SUB168(auVar24 * auVar56,0);
    220:   uVar82 = (ulonglong)Var6;

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:218
reconstrucao/src/decompiled_02.c:218:10: error: request for member ‘_0_8_’ in something not a structure or union

    215:   auVar24._8_8_ = 0;
    216:   auVar24._0_8_ = uVar85;
    217:   auVar56._8_8_ = 0;
    218:   auVar56._0_8_ = *puVar80;
    219:   Var6 = (unkuint9)uVar4 + (unkuint9)SUB168(auVar24 * auVar56,0);
    220:   uVar82 = (ulonglong)Var6;
    221:   Var10 = (unkuint9)(ulonglong)Var10 + (unkuint9)SUB168(auVar24 * auVar56,8);

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:219
reconstrucao/src/decompiled_02.c:219:20: error: expected ‘;’ before ‘uVar4’

    216:   auVar24._0_8_ = uVar85;
    217:   auVar56._8_8_ = 0;
    218:   auVar56._0_8_ = *puVar80;
    219:   Var6 = (unkuint9)uVar4 + (unkuint9)SUB168(auVar24 * auVar56,0);
    220:   uVar82 = (ulonglong)Var6;
    221:   Var10 = (unkuint9)(ulonglong)Var10 + (unkuint9)SUB168(auVar24 * auVar56,8);
    222:   auVar25._8_8_ = 0;

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:221
reconstrucao/src/decompiled_02.c:221:22: error: expected expression before ‘ulonglong’

    218:   auVar56._0_8_ = *puVar80;
    219:   Var6 = (unkuint9)uVar4 + (unkuint9)SUB168(auVar24 * auVar56,0);
    220:   uVar82 = (ulonglong)Var6;
    221:   Var10 = (unkuint9)(ulonglong)Var10 + (unkuint9)SUB168(auVar24 * auVar56,8);
    222:   auVar25._8_8_ = 0;
    223:   auVar25._0_8_ = uVar85;
    224:   auVar57._8_8_ = 0;

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:221
reconstrucao/src/decompiled_02.c:221:32: error: expected ‘;’ before ‘Var10’

    218:   auVar56._0_8_ = *puVar80;
    219:   Var6 = (unkuint9)uVar4 + (unkuint9)SUB168(auVar24 * auVar56,0);
    220:   uVar82 = (ulonglong)Var6;
    221:   Var10 = (unkuint9)(ulonglong)Var10 + (unkuint9)SUB168(auVar24 * auVar56,8);
    222:   auVar25._8_8_ = 0;
    223:   auVar25._0_8_ = uVar85;
    224:   auVar57._8_8_ = 0;

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:222
reconstrucao/src/decompiled_02.c:222:10: error: request for member ‘_8_8_’ in something not a structure or union

    219:   Var6 = (unkuint9)uVar4 + (unkuint9)SUB168(auVar24 * auVar56,0);
    220:   uVar82 = (ulonglong)Var6;
    221:   Var10 = (unkuint9)(ulonglong)Var10 + (unkuint9)SUB168(auVar24 * auVar56,8);
    222:   auVar25._8_8_ = 0;
    223:   auVar25._0_8_ = uVar85;
    224:   auVar57._8_8_ = 0;
    225:   auVar57._0_8_ = *(ulonglong *)(param_1 + 0x88);

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:223
reconstrucao/src/decompiled_02.c:223:10: error: request for member ‘_0_8_’ in something not a structure or union

    220:   uVar82 = (ulonglong)Var6;
    221:   Var10 = (unkuint9)(ulonglong)Var10 + (unkuint9)SUB168(auVar24 * auVar56,8);
    222:   auVar25._8_8_ = 0;
    223:   auVar25._0_8_ = uVar85;
    224:   auVar57._8_8_ = 0;
    225:   auVar57._0_8_ = *(ulonglong *)(param_1 + 0x88);
    226:   Var6 = (unkuint9)(ulonglong)Var10 + (unkuint9)SUB168(auVar25 * auVar57,0) +

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:224
reconstrucao/src/decompiled_02.c:224:10: error: request for member ‘_8_8_’ in something not a structure or union

    221:   Var10 = (unkuint9)(ulonglong)Var10 + (unkuint9)SUB168(auVar24 * auVar56,8);
    222:   auVar25._8_8_ = 0;
    223:   auVar25._0_8_ = uVar85;
    224:   auVar57._8_8_ = 0;
    225:   auVar57._0_8_ = *(ulonglong *)(param_1 + 0x88);
    226:   Var6 = (unkuint9)(ulonglong)Var10 + (unkuint9)SUB168(auVar25 * auVar57,0) +
    227:          (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:225
reconstrucao/src/decompiled_02.c:225:10: error: request for member ‘_0_8_’ in something not a structure or union

    222:   auVar25._8_8_ = 0;
    223:   auVar25._0_8_ = uVar85;
    224:   auVar57._8_8_ = 0;
    225:   auVar57._0_8_ = *(ulonglong *)(param_1 + 0x88);
    226:   Var6 = (unkuint9)(ulonglong)Var10 + (unkuint9)SUB168(auVar25 * auVar57,0) +
    227:          (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
    228:   uVar4 = (ulonglong)Var6;

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:226
reconstrucao/src/decompiled_02.c:226:21: error: expected expression before ‘ulonglong’

    223:   auVar25._0_8_ = uVar85;
    224:   auVar57._8_8_ = 0;
    225:   auVar57._0_8_ = *(ulonglong *)(param_1 + 0x88);
    226:   Var6 = (unkuint9)(ulonglong)Var10 + (unkuint9)SUB168(auVar25 * auVar57,0) +
    227:          (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
    228:   uVar4 = (ulonglong)Var6;
    229:   Var10 = (unkuint9)(ulonglong)Var12 + (unkuint9)SUB168(auVar25 * auVar57,8) +

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:226
reconstrucao/src/decompiled_02.c:226:31: error: expected ‘;’ before ‘Var10’

    223:   auVar25._0_8_ = uVar85;
    224:   auVar57._8_8_ = 0;
    225:   auVar57._0_8_ = *(ulonglong *)(param_1 + 0x88);
    226:   Var6 = (unkuint9)(ulonglong)Var10 + (unkuint9)SUB168(auVar25 * auVar57,0) +
    227:          (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
    228:   uVar4 = (ulonglong)Var6;
    229:   Var10 = (unkuint9)(ulonglong)Var12 + (unkuint9)SUB168(auVar25 * auVar57,8) +

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:229
reconstrucao/src/decompiled_02.c:229:22: error: expected expression before ‘ulonglong’

    226:   Var6 = (unkuint9)(ulonglong)Var10 + (unkuint9)SUB168(auVar25 * auVar57,0) +
    227:          (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
    228:   uVar4 = (ulonglong)Var6;
    229:   Var10 = (unkuint9)(ulonglong)Var12 + (unkuint9)SUB168(auVar25 * auVar57,8) +
    230:           (unkuint9)((char)((unkuint9)Var10 >> 0x40) != '\0');
    231:   auVar26._8_8_ = 0;
    232:   auVar26._0_8_ = uVar85;

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:229
reconstrucao/src/decompiled_02.c:229:32: error: expected ‘;’ before ‘Var12’

    226:   Var6 = (unkuint9)(ulonglong)Var10 + (unkuint9)SUB168(auVar25 * auVar57,0) +
    227:          (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
    228:   uVar4 = (ulonglong)Var6;
    229:   Var10 = (unkuint9)(ulonglong)Var12 + (unkuint9)SUB168(auVar25 * auVar57,8) +
    230:           (unkuint9)((char)((unkuint9)Var10 >> 0x40) != '\0');
    231:   auVar26._8_8_ = 0;
    232:   auVar26._0_8_ = uVar85;

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:231
reconstrucao/src/decompiled_02.c:231:10: error: request for member ‘_8_8_’ in something not a structure or union

    228:   uVar4 = (ulonglong)Var6;
    229:   Var10 = (unkuint9)(ulonglong)Var12 + (unkuint9)SUB168(auVar25 * auVar57,8) +
    230:           (unkuint9)((char)((unkuint9)Var10 >> 0x40) != '\0');
    231:   auVar26._8_8_ = 0;
    232:   auVar26._0_8_ = uVar85;
    233:   auVar58._8_8_ = 0;
    234:   auVar58._0_8_ = *(ulonglong *)(param_1 + 0x90);

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:232
reconstrucao/src/decompiled_02.c:232:10: error: request for member ‘_0_8_’ in something not a structure or union

    229:   Var10 = (unkuint9)(ulonglong)Var12 + (unkuint9)SUB168(auVar25 * auVar57,8) +
    230:           (unkuint9)((char)((unkuint9)Var10 >> 0x40) != '\0');
    231:   auVar26._8_8_ = 0;
    232:   auVar26._0_8_ = uVar85;
    233:   auVar58._8_8_ = 0;
    234:   auVar58._0_8_ = *(ulonglong *)(param_1 + 0x90);
    235:   Var6 = (unkuint9)(ulonglong)Var10 + (unkuint9)SUB168(auVar26 * auVar58,0) +

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:233
reconstrucao/src/decompiled_02.c:233:10: error: request for member ‘_8_8_’ in something not a structure or union

    230:           (unkuint9)((char)((unkuint9)Var10 >> 0x40) != '\0');
    231:   auVar26._8_8_ = 0;
    232:   auVar26._0_8_ = uVar85;
    233:   auVar58._8_8_ = 0;
    234:   auVar58._0_8_ = *(ulonglong *)(param_1 + 0x90);
    235:   Var6 = (unkuint9)(ulonglong)Var10 + (unkuint9)SUB168(auVar26 * auVar58,0) +
    236:          (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:234
reconstrucao/src/decompiled_02.c:234:10: error: request for member ‘_0_8_’ in something not a structure or union

    231:   auVar26._8_8_ = 0;
    232:   auVar26._0_8_ = uVar85;
    233:   auVar58._8_8_ = 0;
    234:   auVar58._0_8_ = *(ulonglong *)(param_1 + 0x90);
    235:   Var6 = (unkuint9)(ulonglong)Var10 + (unkuint9)SUB168(auVar26 * auVar58,0) +
    236:          (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
    237:   Var12 = (unkuint9)(ulonglong)Var13 + (unkuint9)SUB168(auVar26 * auVar58,8) +

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:235
reconstrucao/src/decompiled_02.c:235:21: error: expected expression before ‘ulonglong’

    232:   auVar26._0_8_ = uVar85;
    233:   auVar58._8_8_ = 0;
    234:   auVar58._0_8_ = *(ulonglong *)(param_1 + 0x90);
    235:   Var6 = (unkuint9)(ulonglong)Var10 + (unkuint9)SUB168(auVar26 * auVar58,0) +
    236:          (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
    237:   Var12 = (unkuint9)(ulonglong)Var13 + (unkuint9)SUB168(auVar26 * auVar58,8) +
    238:           (unkuint9)((char)((unkuint9)Var10 >> 0x40) != '\0');

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:235
reconstrucao/src/decompiled_02.c:235:31: error: expected ‘;’ before ‘Var10’

    232:   auVar26._0_8_ = uVar85;
    233:   auVar58._8_8_ = 0;
    234:   auVar58._0_8_ = *(ulonglong *)(param_1 + 0x90);
    235:   Var6 = (unkuint9)(ulonglong)Var10 + (unkuint9)SUB168(auVar26 * auVar58,0) +
    236:          (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
    237:   Var12 = (unkuint9)(ulonglong)Var13 + (unkuint9)SUB168(auVar26 * auVar58,8) +
    238:           (unkuint9)((char)((unkuint9)Var10 >> 0x40) != '\0');

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:237
reconstrucao/src/decompiled_02.c:237:22: error: expected expression before ‘ulonglong’

    234:   auVar58._0_8_ = *(ulonglong *)(param_1 + 0x90);
    235:   Var6 = (unkuint9)(ulonglong)Var10 + (unkuint9)SUB168(auVar26 * auVar58,0) +
    236:          (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
    237:   Var12 = (unkuint9)(ulonglong)Var13 + (unkuint9)SUB168(auVar26 * auVar58,8) +
    238:           (unkuint9)((char)((unkuint9)Var10 >> 0x40) != '\0');
    239:   auVar27._8_8_ = 0;
    240:   auVar27._0_8_ = uVar85;

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:237
reconstrucao/src/decompiled_02.c:237:32: error: expected ‘;’ before ‘Var13’

    234:   auVar58._0_8_ = *(ulonglong *)(param_1 + 0x90);
    235:   Var6 = (unkuint9)(ulonglong)Var10 + (unkuint9)SUB168(auVar26 * auVar58,0) +
    236:          (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
    237:   Var12 = (unkuint9)(ulonglong)Var13 + (unkuint9)SUB168(auVar26 * auVar58,8) +
    238:           (unkuint9)((char)((unkuint9)Var10 >> 0x40) != '\0');
    239:   auVar27._8_8_ = 0;
    240:   auVar27._0_8_ = uVar85;

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:239
reconstrucao/src/decompiled_02.c:239:10: error: request for member ‘_8_8_’ in something not a structure or union

    236:          (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
    237:   Var12 = (unkuint9)(ulonglong)Var13 + (unkuint9)SUB168(auVar26 * auVar58,8) +
    238:           (unkuint9)((char)((unkuint9)Var10 >> 0x40) != '\0');
    239:   auVar27._8_8_ = 0;
    240:   auVar27._0_8_ = uVar85;
    241:   auVar59._8_8_ = 0;
    242:   auVar59._0_8_ = *(ulonglong *)(param_1 + 0x98);

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:240
reconstrucao/src/decompiled_02.c:240:10: error: request for member ‘_0_8_’ in something not a structure or union

    237:   Var12 = (unkuint9)(ulonglong)Var13 + (unkuint9)SUB168(auVar26 * auVar58,8) +
    238:           (unkuint9)((char)((unkuint9)Var10 >> 0x40) != '\0');
    239:   auVar27._8_8_ = 0;
    240:   auVar27._0_8_ = uVar85;
    241:   auVar59._8_8_ = 0;
    242:   auVar59._0_8_ = *(ulonglong *)(param_1 + 0x98);
    243:   Var10 = (unkuint9)(ulonglong)Var12 + (unkuint9)SUB168(auVar27 * auVar59,0) +

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:241
reconstrucao/src/decompiled_02.c:241:10: error: request for member ‘_8_8_’ in something not a structure or union

    238:           (unkuint9)((char)((unkuint9)Var10 >> 0x40) != '\0');
    239:   auVar27._8_8_ = 0;
    240:   auVar27._0_8_ = uVar85;
    241:   auVar59._8_8_ = 0;
    242:   auVar59._0_8_ = *(ulonglong *)(param_1 + 0x98);
    243:   Var10 = (unkuint9)(ulonglong)Var12 + (unkuint9)SUB168(auVar27 * auVar59,0) +
    244:           (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:242
reconstrucao/src/decompiled_02.c:242:10: error: request for member ‘_0_8_’ in something not a structure or union

    239:   auVar27._8_8_ = 0;
    240:   auVar27._0_8_ = uVar85;
    241:   auVar59._8_8_ = 0;
    242:   auVar59._0_8_ = *(ulonglong *)(param_1 + 0x98);
    243:   Var10 = (unkuint9)(ulonglong)Var12 + (unkuint9)SUB168(auVar27 * auVar59,0) +
    244:           (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
    245:   Var13 = (unkuint9)(ulonglong)Var14 + (unkuint9)SUB168(auVar27 * auVar59,8) +

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:243
reconstrucao/src/decompiled_02.c:243:22: error: expected expression before ‘ulonglong’

    240:   auVar27._0_8_ = uVar85;
    241:   auVar59._8_8_ = 0;
    242:   auVar59._0_8_ = *(ulonglong *)(param_1 + 0x98);
    243:   Var10 = (unkuint9)(ulonglong)Var12 + (unkuint9)SUB168(auVar27 * auVar59,0) +
    244:           (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
    245:   Var13 = (unkuint9)(ulonglong)Var14 + (unkuint9)SUB168(auVar27 * auVar59,8) +
    246:           (unkuint9)((char)((unkuint9)Var12 >> 0x40) != '\0');

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:243
reconstrucao/src/decompiled_02.c:243:32: error: expected ‘;’ before ‘Var12’

    240:   auVar27._0_8_ = uVar85;
    241:   auVar59._8_8_ = 0;
    242:   auVar59._0_8_ = *(ulonglong *)(param_1 + 0x98);
    243:   Var10 = (unkuint9)(ulonglong)Var12 + (unkuint9)SUB168(auVar27 * auVar59,0) +
    244:           (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
    245:   Var13 = (unkuint9)(ulonglong)Var14 + (unkuint9)SUB168(auVar27 * auVar59,8) +
    246:           (unkuint9)((char)((unkuint9)Var12 >> 0x40) != '\0');

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:245
reconstrucao/src/decompiled_02.c:245:22: error: expected expression before ‘ulonglong’

    242:   auVar59._0_8_ = *(ulonglong *)(param_1 + 0x98);
    243:   Var10 = (unkuint9)(ulonglong)Var12 + (unkuint9)SUB168(auVar27 * auVar59,0) +
    244:           (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
    245:   Var13 = (unkuint9)(ulonglong)Var14 + (unkuint9)SUB168(auVar27 * auVar59,8) +
    246:           (unkuint9)((char)((unkuint9)Var12 >> 0x40) != '\0');
    247:   Var12 = (unkuint9)(ulonglong)Var13 + (unkuint9)uVar82 +
    248:           (unkuint9)((char)((unkuint9)Var10 >> 0x40) != '\0');

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:245
reconstrucao/src/decompiled_02.c:245:32: error: expected ‘;’ before ‘Var14’

    242:   auVar59._0_8_ = *(ulonglong *)(param_1 + 0x98);
    243:   Var10 = (unkuint9)(ulonglong)Var12 + (unkuint9)SUB168(auVar27 * auVar59,0) +
    244:           (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
    245:   Var13 = (unkuint9)(ulonglong)Var14 + (unkuint9)SUB168(auVar27 * auVar59,8) +
    246:           (unkuint9)((char)((unkuint9)Var12 >> 0x40) != '\0');
    247:   Var12 = (unkuint9)(ulonglong)Var13 + (unkuint9)uVar82 +
    248:           (unkuint9)((char)((unkuint9)Var10 >> 0x40) != '\0');

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:247
reconstrucao/src/decompiled_02.c:247:22: error: expected expression before ‘ulonglong’

    244:           (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
    245:   Var13 = (unkuint9)(ulonglong)Var14 + (unkuint9)SUB168(auVar27 * auVar59,8) +
    246:           (unkuint9)((char)((unkuint9)Var12 >> 0x40) != '\0');
    247:   Var12 = (unkuint9)(ulonglong)Var13 + (unkuint9)uVar82 +
    248:           (unkuint9)((char)((unkuint9)Var10 >> 0x40) != '\0');
    249:   uVar81 = ((char)((unkuint9)Var14 >> 0x40) != '\0') + uVar82 +
    250:            (ulonglong)((char)((unkuint9)Var13 >> 0x40) != '\0');

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:247
reconstrucao/src/decompiled_02.c:247:32: error: expected ‘;’ before ‘Var13’

    244:           (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
    245:   Var13 = (unkuint9)(ulonglong)Var14 + (unkuint9)SUB168(auVar27 * auVar59,8) +
    246:           (unkuint9)((char)((unkuint9)Var12 >> 0x40) != '\0');
    247:   Var12 = (unkuint9)(ulonglong)Var13 + (unkuint9)uVar82 +
    248:           (unkuint9)((char)((unkuint9)Var10 >> 0x40) != '\0');
    249:   uVar81 = ((char)((unkuint9)Var14 >> 0x40) != '\0') + uVar82 +
    250:            (ulonglong)((char)((unkuint9)Var13 >> 0x40) != '\0');

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:249
reconstrucao/src/decompiled_02.c:249:30: error: expected ‘)’ before ‘Var14’

    246:           (unkuint9)((char)((unkuint9)Var12 >> 0x40) != '\0');
    247:   Var12 = (unkuint9)(ulonglong)Var13 + (unkuint9)uVar82 +
    248:           (unkuint9)((char)((unkuint9)Var10 >> 0x40) != '\0');
    249:   uVar81 = ((char)((unkuint9)Var14 >> 0x40) != '\0') + uVar82 +
    250:            (ulonglong)((char)((unkuint9)Var13 >> 0x40) != '\0');
    251:   uVar86 = (ulonglong)((char)((unkuint9)Var12 >> 0x40) != '\0');
    252:   uVar2 = uVar81 + uVar3;

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:250
reconstrucao/src/decompiled_02.c:250:41: error: expected ‘)’ before ‘Var13’

    247:   Var12 = (unkuint9)(ulonglong)Var13 + (unkuint9)uVar82 +
    248:           (unkuint9)((char)((unkuint9)Var10 >> 0x40) != '\0');
    249:   uVar81 = ((char)((unkuint9)Var14 >> 0x40) != '\0') + uVar82 +
    250:            (ulonglong)((char)((unkuint9)Var13 >> 0x40) != '\0');
    251:   uVar86 = (ulonglong)((char)((unkuint9)Var12 >> 0x40) != '\0');
    252:   uVar2 = uVar81 + uVar3;
    253:   uVar83 = uVar4 * *(longlong *)(param_1 + 0x18);

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:251
reconstrucao/src/decompiled_02.c:251:41: error: expected ‘)’ before ‘Var12’

    248:           (unkuint9)((char)((unkuint9)Var10 >> 0x40) != '\0');
    249:   uVar81 = ((char)((unkuint9)Var14 >> 0x40) != '\0') + uVar82 +
    250:            (ulonglong)((char)((unkuint9)Var13 >> 0x40) != '\0');
    251:   uVar86 = (ulonglong)((char)((unkuint9)Var12 >> 0x40) != '\0');
    252:   uVar2 = uVar81 + uVar3;
    253:   uVar83 = uVar4 * *(longlong *)(param_1 + 0x18);
    254:   uVar1 = param_2[2];

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:255
reconstrucao/src/decompiled_02.c:255:10: error: request for member ‘_8_8_’ in something not a structure or union

    252:   uVar2 = uVar81 + uVar3;
    253:   uVar83 = uVar4 * *(longlong *)(param_1 + 0x18);
    254:   uVar1 = param_2[2];
    255:   auVar28._8_8_ = 0;
    256:   auVar28._0_8_ = uVar1;
    257:   auVar60._8_8_ = 0;
    258:   auVar60._0_8_ = *param_3;

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:256
reconstrucao/src/decompiled_02.c:256:10: error: request for member ‘_0_8_’ in something not a structure or union

    253:   uVar83 = uVar4 * *(longlong *)(param_1 + 0x18);
    254:   uVar1 = param_2[2];
    255:   auVar28._8_8_ = 0;
    256:   auVar28._0_8_ = uVar1;
    257:   auVar60._8_8_ = 0;
    258:   auVar60._0_8_ = *param_3;
    259:   Var13 = (unkuint9)(ulonglong)Var6 + (unkuint9)SUB168(auVar28 * auVar60,0);

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:257
reconstrucao/src/decompiled_02.c:257:10: error: request for member ‘_8_8_’ in something not a structure or union

    254:   uVar1 = param_2[2];
    255:   auVar28._8_8_ = 0;
    256:   auVar28._0_8_ = uVar1;
    257:   auVar60._8_8_ = 0;
    258:   auVar60._0_8_ = *param_3;
    259:   Var13 = (unkuint9)(ulonglong)Var6 + (unkuint9)SUB168(auVar28 * auVar60,0);
    260:   Var6 = (unkuint9)(ulonglong)Var10 + (unkuint9)SUB168(auVar28 * auVar60,8);

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:258
reconstrucao/src/decompiled_02.c:258:10: error: request for member ‘_0_8_’ in something not a structure or union

    255:   auVar28._8_8_ = 0;
    256:   auVar28._0_8_ = uVar1;
    257:   auVar60._8_8_ = 0;
    258:   auVar60._0_8_ = *param_3;
    259:   Var13 = (unkuint9)(ulonglong)Var6 + (unkuint9)SUB168(auVar28 * auVar60,0);
    260:   Var6 = (unkuint9)(ulonglong)Var10 + (unkuint9)SUB168(auVar28 * auVar60,8);
    261:   auVar29._8_8_ = 0;

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:259
reconstrucao/src/decompiled_02.c:259:22: error: expected expression before ‘ulonglong’

    256:   auVar28._0_8_ = uVar1;
    257:   auVar60._8_8_ = 0;
    258:   auVar60._0_8_ = *param_3;
    259:   Var13 = (unkuint9)(ulonglong)Var6 + (unkuint9)SUB168(auVar28 * auVar60,0);
    260:   Var6 = (unkuint9)(ulonglong)Var10 + (unkuint9)SUB168(auVar28 * auVar60,8);
    261:   auVar29._8_8_ = 0;
    262:   auVar29._0_8_ = uVar1;

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:259
reconstrucao/src/decompiled_02.c:259:32: error: expected ‘;’ before ‘Var6’

    256:   auVar28._0_8_ = uVar1;
    257:   auVar60._8_8_ = 0;
    258:   auVar60._0_8_ = *param_3;
    259:   Var13 = (unkuint9)(ulonglong)Var6 + (unkuint9)SUB168(auVar28 * auVar60,0);
    260:   Var6 = (unkuint9)(ulonglong)Var10 + (unkuint9)SUB168(auVar28 * auVar60,8);
    261:   auVar29._8_8_ = 0;
    262:   auVar29._0_8_ = uVar1;

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:260
reconstrucao/src/decompiled_02.c:260:21: error: expected expression before ‘ulonglong’

    257:   auVar60._8_8_ = 0;
    258:   auVar60._0_8_ = *param_3;
    259:   Var13 = (unkuint9)(ulonglong)Var6 + (unkuint9)SUB168(auVar28 * auVar60,0);
    260:   Var6 = (unkuint9)(ulonglong)Var10 + (unkuint9)SUB168(auVar28 * auVar60,8);
    261:   auVar29._8_8_ = 0;
    262:   auVar29._0_8_ = uVar1;
    263:   auVar61._8_8_ = 0;

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:260
reconstrucao/src/decompiled_02.c:260:31: error: expected ‘;’ before ‘Var10’

    257:   auVar60._8_8_ = 0;
    258:   auVar60._0_8_ = *param_3;
    259:   Var13 = (unkuint9)(ulonglong)Var6 + (unkuint9)SUB168(auVar28 * auVar60,0);
    260:   Var6 = (unkuint9)(ulonglong)Var10 + (unkuint9)SUB168(auVar28 * auVar60,8);
    261:   auVar29._8_8_ = 0;
    262:   auVar29._0_8_ = uVar1;
    263:   auVar61._8_8_ = 0;

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:261
reconstrucao/src/decompiled_02.c:261:10: error: request for member ‘_8_8_’ in something not a structure or union

    258:   auVar60._0_8_ = *param_3;
    259:   Var13 = (unkuint9)(ulonglong)Var6 + (unkuint9)SUB168(auVar28 * auVar60,0);
    260:   Var6 = (unkuint9)(ulonglong)Var10 + (unkuint9)SUB168(auVar28 * auVar60,8);
    261:   auVar29._8_8_ = 0;
    262:   auVar29._0_8_ = uVar1;
    263:   auVar61._8_8_ = 0;
    264:   auVar61._0_8_ = param_3[1];

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:262
reconstrucao/src/decompiled_02.c:262:10: error: request for member ‘_0_8_’ in something not a structure or union

    259:   Var13 = (unkuint9)(ulonglong)Var6 + (unkuint9)SUB168(auVar28 * auVar60,0);
    260:   Var6 = (unkuint9)(ulonglong)Var10 + (unkuint9)SUB168(auVar28 * auVar60,8);
    261:   auVar29._8_8_ = 0;
    262:   auVar29._0_8_ = uVar1;
    263:   auVar61._8_8_ = 0;
    264:   auVar61._0_8_ = param_3[1];
    265:   Var14 = (unkuint9)(ulonglong)Var6 + (unkuint9)SUB168(auVar29 * auVar61,0) +

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:263
reconstrucao/src/decompiled_02.c:263:10: error: request for member ‘_8_8_’ in something not a structure or union

    260:   Var6 = (unkuint9)(ulonglong)Var10 + (unkuint9)SUB168(auVar28 * auVar60,8);
    261:   auVar29._8_8_ = 0;
    262:   auVar29._0_8_ = uVar1;
    263:   auVar61._8_8_ = 0;
    264:   auVar61._0_8_ = param_3[1];
    265:   Var14 = (unkuint9)(ulonglong)Var6 + (unkuint9)SUB168(auVar29 * auVar61,0) +
    266:           (unkuint9)((char)((unkuint9)Var13 >> 0x40) != '\0');

## FUN_14077f3e0 */ — reconstrucao/src/decompiled_03.c:45
reconstrucao/src/decompiled_03.c:45:88: error: passing argument 4 of ‘FUN_140a33084’ from incompatible pointer type [-Wincompatible-pointer-types]

    42:       *(undefined4 *)((longlong)plVar6 + 0x1c) = uVar4;
    43:       *(undefined4 *)(plVar6 + 5) = 0xcccc;
    44:       *(undefined1 *)(plVar6 + 0xb) = 1;
    45:       iVar5 = FUN_140a33084(param_3,auStackX_20,*(undefined4 *)(param_1 + 0x18),plVar6 + 6);
    46:       if ((-1 < iVar5) &&
    47:          (iVar5 = FUN_140a33348(param_3,*(undefined4 *)(param_1 + 0x18),plVar6 + 9), -1 < iVar5)) {
    48:         *param_5 = (longlong)plVar6;

## FUN_14077f4f8 */ — reconstrucao/src/decompiled_03.c:77
reconstrucao/src/decompiled_03.c:77:16: error: ‘DAT_14001bcb8’ undeclared (first use in this function)

    74: void FUN_14077f4f8(void)
    75: 
    76: {
    77:   EtwRegister(&DAT_14001bcb8,FUN_140a94cf0,0,&DAT_140f07240);
    78:   return;
    79: }
    80: 

## FUN_14077f4f8 */ — reconstrucao/src/decompiled_03.c:77
reconstrucao/src/decompiled_03.c:77:47: error: ‘DAT_140f07240’ undeclared (first use in this function)

    74: void FUN_14077f4f8(void)
    75: 
    76: {
    77:   EtwRegister(&DAT_14001bcb8,FUN_140a94cf0,0,&DAT_140f07240);
    78:   return;
    79: }
    80: 

## FUN_14077f4f8 */ — reconstrucao/src/decompiled_03.c:77
reconstrucao/src/decompiled_03.c:77:30: error: passing argument 2 of ‘EtwRegister’ makes integer from pointer without a cast [-Wint-conversion]

    74: void FUN_14077f4f8(void)
    75: 
    76: {
    77:   EtwRegister(&DAT_14001bcb8,FUN_140a94cf0,0,&DAT_140f07240);
    78:   return;
    79: }
    80: 

## FUN_14077f528 */ — reconstrucao/src/decompiled_03.c:86
reconstrucao/src/decompiled_03.c:86:3: error: implicit declaration of function ‘PoRegisterPowerSettingCallback’; did you mean ‘PoUnregisterPowerSettingCallback’? [-Wimplicit-function-declaration]

    83: void FUN_14077f528(void)
    84: 
    85: {
    86:   PoRegisterPowerSettingCallback(0,&DAT_14001a0b8,FUN_140aa9060,0,&DAT_140f06d38);
    87:   return;
    88: }
    89: 

## FUN_14077f528 */ — reconstrucao/src/decompiled_03.c:86
reconstrucao/src/decompiled_03.c:86:37: error: ‘DAT_14001a0b8’ undeclared (first use in this function); did you mean ‘FUN_14071a0b8’?

    83: void FUN_14077f528(void)
    84: 
    85: {
    86:   PoRegisterPowerSettingCallback(0,&DAT_14001a0b8,FUN_140aa9060,0,&DAT_140f06d38);
    87:   return;
    88: }
    89: 

## FUN_14077f528 */ — reconstrucao/src/decompiled_03.c:86
reconstrucao/src/decompiled_03.c:86:68: error: ‘DAT_140f06d38’ undeclared (first use in this function)

    83: void FUN_14077f528(void)
    84: 
    85: {
    86:   PoRegisterPowerSettingCallback(0,&DAT_14001a0b8,FUN_140aa9060,0,&DAT_140f06d38);
    87:   return;
    88: }
    89: 

## FUN_14077f55c */ — reconstrucao/src/decompiled_03.c:95
reconstrucao/src/decompiled_03.c:95:36: error: ‘DAT_140f06d38’ undeclared (first use in this function)

    92: void FUN_14077f55c(void)
    93: 
    94: {
    95:   PoUnregisterPowerSettingCallback(DAT_140f06d38);
    96:   return;
    97: }
    98: 

## FUN_14077f580 */ — reconstrucao/src/decompiled_03.c:106
reconstrucao/src/decompiled_03.c:106:3: error: unknown type name ‘undefined’; did you mean ‘undefined8’?

    103: 
    104: {
    105:   int iVar1;
    106:   undefined *puVar2;
    107:   longlong lVar3;
    108:   undefined *puStackX_8;
    109:   longlong lStack_48;

## FUN_14077f580 */ — reconstrucao/src/decompiled_03.c:108
reconstrucao/src/decompiled_03.c:108:3: error: unknown type name ‘undefined’; did you mean ‘undefined8’?

    105:   int iVar1;
    106:   undefined *puVar2;
    107:   longlong lVar3;
    108:   undefined *puStackX_8;
    109:   longlong lStack_48;
    110:   undefined4 uStack_40;
    111:   undefined4 uStack_3c;

## FUN_14077f580 */ — reconstrucao/src/decompiled_03.c:119
reconstrucao/src/decompiled_03.c:119:13: error: ‘undefined’ undeclared (first use in this function); did you mean ‘undefined8’?

    116:   undefined4 uStack_28;
    117:   undefined4 uStack_24;
    118:   
    119:   puVar2 = (undefined *)0x0;
    120:   lVar3 = 0;
    121:   puStackX_8 = (undefined *)0x0;
    122:   lStack_48 = 0;

## FUN_14077f580 */ — reconstrucao/src/decompiled_03.c:119
reconstrucao/src/decompiled_03.c:119:24: error: expected expression before ‘)’ token

    116:   undefined4 uStack_28;
    117:   undefined4 uStack_24;
    118:   
    119:   puVar2 = (undefined *)0x0;
    120:   lVar3 = 0;
    121:   puStackX_8 = (undefined *)0x0;
    122:   lStack_48 = 0;

## FUN_14077f580 */ — reconstrucao/src/decompiled_03.c:121
reconstrucao/src/decompiled_03.c:121:28: error: expected expression before ‘)’ token

    118:   
    119:   puVar2 = (undefined *)0x0;
    120:   lVar3 = 0;
    121:   puStackX_8 = (undefined *)0x0;
    122:   lStack_48 = 0;
    123:   if (((param_1 == 0) || (param_4 == 0)) || (param_5 == (undefined8 *)0x0)) {
    124:     iVar1 = -0x3ffffff3;

## FUN_14077f580 */ — reconstrucao/src/decompiled_03.c:138
reconstrucao/src/decompiled_03.c:138:29: error: passing argument 1 of ‘FUN_140a329d0’ makes pointer from integer without a cast [-Wint-conversion]

    135:     iVar1 = FUN_1403dcb90(uStack_30,&uStack_30,&uStack_40,param_4,0,&lStack_48);
    136:     lVar3 = lStack_48;
    137:     if (-1 < iVar1) {
    138:       iVar1 = FUN_140a329d0(lStack_48,&puStackX_8);
    139:       if (-1 < iVar1) goto LAB_14077f637;
    140:       puVar2 = puStackX_8;
    141:     }

## FUN_14077f580 */ — reconstrucao/src/decompiled_03.c:138
reconstrucao/src/decompiled_03.c:138:39: error: passing argument 2 of ‘FUN_140a329d0’ from incompatible pointer type [-Wincompatible-pointer-types]

    135:     iVar1 = FUN_1403dcb90(uStack_30,&uStack_30,&uStack_40,param_4,0,&lStack_48);
    136:     lVar3 = lStack_48;
    137:     if (-1 < iVar1) {
    138:       iVar1 = FUN_140a329d0(lStack_48,&puStackX_8);
    139:       if (-1 < iVar1) goto LAB_14077f637;
    140:       puVar2 = puStackX_8;
    141:     }

## FUN_14077f580 */ — reconstrucao/src/decompiled_03.c:144
reconstrucao/src/decompiled_03.c:144:19: error: passing argument 1 of ‘FUN_140a32d80’ makes pointer from integer without a cast [-Wint-conversion]

    141:     }
    142:   }
    143:   if (lVar3 != 0) {
    144:     FUN_140a32d80(lVar3);
    145:   }
    146:   if (puVar2 != (undefined *)0x0) {
    147:     FUN_140485460(puVar2);

## FUN_14077f580 */ — reconstrucao/src/decompiled_03.c:146
reconstrucao/src/decompiled_03.c:146:29: error: expected expression before ‘)’ token

    143:   if (lVar3 != 0) {
    144:     FUN_140a32d80(lVar3);
    145:   }
    146:   if (puVar2 != (undefined *)0x0) {
    147:     FUN_140485460(puVar2);
    148:   }
    149:   if (iVar1 != -0x3fffff45) {

## FUN_14077f580 */ — reconstrucao/src/decompiled_03.c:147
reconstrucao/src/decompiled_03.c:147:19: error: passing argument 1 of ‘FUN_140485460’ makes integer from pointer without a cast [-Wint-conversion]

    144:     FUN_140a32d80(lVar3);
    145:   }
    146:   if (puVar2 != (undefined *)0x0) {
    147:     FUN_140485460(puVar2);
    148:   }
    149:   if (iVar1 != -0x3fffff45) {
    150:     return iVar1;

## FUN_14077f580 */ — reconstrucao/src/decompiled_03.c:152
reconstrucao/src/decompiled_03.c:152:17: error: ‘DAT_140f06d48’ undeclared (first use in this function)

    149:   if (iVar1 != -0x3fffff45) {
    150:     return iVar1;
    151:   }
    152:   puStackX_8 = &DAT_140f06d48;
    153:   iVar1 = 0;
    154: LAB_14077f637:
    155:   *param_5 = puStackX_8;

## FUN_14077f580 */ — reconstrucao/src/decompiled_03.c:155
reconstrucao/src/decompiled_03.c:155:12: error: assignment to ‘undefined8’ {aka ‘long unsigned int’} from ‘int *’ makes integer from pointer without a cast [-Wint-conversion]

    152:   puStackX_8 = &DAT_140f06d48;
    153:   iVar1 = 0;
    154: LAB_14077f637:
    155:   *param_5 = puStackX_8;
    156:   return iVar1;
    157: }
    158: 

## FUN_14077f660 */ — reconstrucao/src/decompiled_03.c:165
reconstrucao/src/decompiled_03.c:165:3: error: unknown type name ‘undefined’; did you mean ‘undefined8’?

    162: 
    163: {
    164:   int iVar1;
    165:   undefined *puVar2;
    166:   longlong lVar3;
    167:   undefined *puStackX_8;
    168:   longlong lStack_28;

## FUN_14077f660 */ — reconstrucao/src/decompiled_03.c:167
reconstrucao/src/decompiled_03.c:167:3: error: unknown type name ‘undefined’; did you mean ‘undefined8’?

    164:   int iVar1;
    165:   undefined *puVar2;
    166:   longlong lVar3;
    167:   undefined *puStackX_8;
    168:   longlong lStack_28;
    169:   undefined4 uStack_20;
    170:   undefined4 uStack_1c;

## FUN_14077f660 */ — reconstrucao/src/decompiled_03.c:174
reconstrucao/src/decompiled_03.c:174:13: error: ‘undefined’ undeclared (first use in this function); did you mean ‘undefined8’?

    171:   undefined4 uStack_18;
    172:   undefined4 uStack_14;
    173:   
    174:   puVar2 = (undefined *)0x0;
    175:   lVar3 = 0;
    176:   puStackX_8 = (undefined *)0x0;
    177:   lStack_28 = 0;

## FUN_14077f660 */ — reconstrucao/src/decompiled_03.c:174
reconstrucao/src/decompiled_03.c:174:24: error: expected expression before ‘)’ token

    171:   undefined4 uStack_18;
    172:   undefined4 uStack_14;
    173:   
    174:   puVar2 = (undefined *)0x0;
    175:   lVar3 = 0;
    176:   puStackX_8 = (undefined *)0x0;
    177:   lStack_28 = 0;

## FUN_14077f660 */ — reconstrucao/src/decompiled_03.c:176
reconstrucao/src/decompiled_03.c:176:28: error: expected expression before ‘)’ token

    173:   
    174:   puVar2 = (undefined *)0x0;
    175:   lVar3 = 0;
    176:   puStackX_8 = (undefined *)0x0;
    177:   lStack_28 = 0;
    178:   if (((param_1 == 0) || (param_3 == 0)) || (param_4 == (undefined8 *)0x0)) {
    179:     iVar1 = -0x3ffffff3;

## FUN_14077f660 */ — reconstrucao/src/decompiled_03.c:189
reconstrucao/src/decompiled_03.c:189:29: error: passing argument 1 of ‘FUN_140a329d0’ makes pointer from integer without a cast [-Wint-conversion]

    186:     iVar1 = FUN_140a324f0(uStack_20,&uStack_20,param_3,&lStack_28);
    187:     lVar3 = lStack_28;
    188:     if (-1 < iVar1) {
    189:       iVar1 = FUN_140a329d0(lStack_28,&puStackX_8);
    190:       if (-1 < iVar1) goto LAB_14077f704;
    191:       puVar2 = puStackX_8;
    192:     }

## FUN_14077f660 */ — reconstrucao/src/decompiled_03.c:189
reconstrucao/src/decompiled_03.c:189:39: error: passing argument 2 of ‘FUN_140a329d0’ from incompatible pointer type [-Wincompatible-pointer-types]

    186:     iVar1 = FUN_140a324f0(uStack_20,&uStack_20,param_3,&lStack_28);
    187:     lVar3 = lStack_28;
    188:     if (-1 < iVar1) {
    189:       iVar1 = FUN_140a329d0(lStack_28,&puStackX_8);
    190:       if (-1 < iVar1) goto LAB_14077f704;
    191:       puVar2 = puStackX_8;
    192:     }

## FUN_14077f660 */ — reconstrucao/src/decompiled_03.c:195
reconstrucao/src/decompiled_03.c:195:19: error: passing argument 1 of ‘FUN_140a32d80’ makes pointer from integer without a cast [-Wint-conversion]

    192:     }
    193:   }
    194:   if (lVar3 != 0) {
    195:     FUN_140a32d80(lVar3);
    196:   }
    197:   if (puVar2 != (undefined *)0x0) {
    198:     FUN_140485460(puVar2);

## FUN_14077f660 */ — reconstrucao/src/decompiled_03.c:197
reconstrucao/src/decompiled_03.c:197:29: error: expected expression before ‘)’ token

    194:   if (lVar3 != 0) {
    195:     FUN_140a32d80(lVar3);
    196:   }
    197:   if (puVar2 != (undefined *)0x0) {
    198:     FUN_140485460(puVar2);
    199:   }
    200:   if (iVar1 != -0x3fffff45) {

## FUN_14077f660 */ — reconstrucao/src/decompiled_03.c:198
reconstrucao/src/decompiled_03.c:198:19: error: passing argument 1 of ‘FUN_140485460’ makes integer from pointer without a cast [-Wint-conversion]

    195:     FUN_140a32d80(lVar3);
    196:   }
    197:   if (puVar2 != (undefined *)0x0) {
    198:     FUN_140485460(puVar2);
    199:   }
    200:   if (iVar1 != -0x3fffff45) {
    201:     return iVar1;

## FUN_14077f660 */ — reconstrucao/src/decompiled_03.c:203
reconstrucao/src/decompiled_03.c:203:17: error: ‘DAT_140f06d48’ undeclared (first use in this function)

    200:   if (iVar1 != -0x3fffff45) {
    201:     return iVar1;
    202:   }
    203:   puStackX_8 = &DAT_140f06d48;
    204:   iVar1 = 0;
    205: LAB_14077f704:
    206:   *param_4 = puStackX_8;

## FUN_14077f660 */ — reconstrucao/src/decompiled_03.c:206
reconstrucao/src/decompiled_03.c:206:12: error: assignment to ‘undefined8’ {aka ‘long unsigned int’} from ‘int *’ makes integer from pointer without a cast [-Wint-conversion]

    203:   puStackX_8 = &DAT_140f06d48;
    204:   iVar1 = 0;
    205: LAB_14077f704:
    206:   *param_4 = puStackX_8;
    207:   return iVar1;
    208: }
    209: 

## FUN_14077f730 */ — reconstrucao/src/decompiled_03.c:216
reconstrucao/src/decompiled_03.c:216:3: error: unknown type name ‘undefined’; did you mean ‘undefined8’?

    213: 
    214: {
    215:   int iVar1;
    216:   undefined *puVar2;
    217:   longlong lVar3;
    218:   undefined *puStackX_8;
    219:   longlong alStack_38 [4];

## FUN_14077f730 */ — reconstrucao/src/decompiled_03.c:218
reconstrucao/src/decompiled_03.c:218:3: error: unknown type name ‘undefined’; did you mean ‘undefined8’?

    215:   int iVar1;
    216:   undefined *puVar2;
    217:   longlong lVar3;
    218:   undefined *puStackX_8;
    219:   longlong alStack_38 [4];
    220:   
    221:   puVar2 = (undefined *)0x0;

## FUN_14077f730 */ — reconstrucao/src/decompiled_03.c:221
reconstrucao/src/decompiled_03.c:221:13: error: ‘undefined’ undeclared (first use in this function); did you mean ‘undefined8’?

    218:   undefined *puStackX_8;
    219:   longlong alStack_38 [4];
    220:   
    221:   puVar2 = (undefined *)0x0;
    222:   lVar3 = 0;
    223:   puStackX_8 = (undefined *)0x0;
    224:   alStack_38[0] = 0;

## FUN_14077f730 */ — reconstrucao/src/decompiled_03.c:221
reconstrucao/src/decompiled_03.c:221:24: error: expected expression before ‘)’ token

    218:   undefined *puStackX_8;
    219:   longlong alStack_38 [4];
    220:   
    221:   puVar2 = (undefined *)0x0;
    222:   lVar3 = 0;
    223:   puStackX_8 = (undefined *)0x0;
    224:   alStack_38[0] = 0;

## FUN_14077f730 */ — reconstrucao/src/decompiled_03.c:223
reconstrucao/src/decompiled_03.c:223:28: error: expected expression before ‘)’ token

    220:   
    221:   puVar2 = (undefined *)0x0;
    222:   lVar3 = 0;
    223:   puStackX_8 = (undefined *)0x0;
    224:   alStack_38[0] = 0;
    225:   alStack_38[1] = 0;
    226:   alStack_38[2] = 0;

## FUN_14077f730 */ — reconstrucao/src/decompiled_03.c:231
reconstrucao/src/decompiled_03.c:231:21: error: passing argument 1 of ‘FUN_140a32d80’ makes pointer from integer without a cast [-Wint-conversion]

    228:     iVar1 = -0x3ffffff3;
    229: LAB_14077f7d4:
    230:     if (lVar3 != 0) {
    231:       FUN_140a32d80(lVar3);
    232:     }
    233:     if (puVar2 != (undefined *)0x0) {
    234:       FUN_140485460(puVar2);

## FUN_14077f730 */ — reconstrucao/src/decompiled_03.c:233
reconstrucao/src/decompiled_03.c:233:31: error: expected expression before ‘)’ token

    230:     if (lVar3 != 0) {
    231:       FUN_140a32d80(lVar3);
    232:     }
    233:     if (puVar2 != (undefined *)0x0) {
    234:       FUN_140485460(puVar2);
    235:     }
    236:   }

## FUN_14077f730 */ — reconstrucao/src/decompiled_03.c:234
reconstrucao/src/decompiled_03.c:234:21: error: passing argument 1 of ‘FUN_140485460’ makes integer from pointer without a cast [-Wint-conversion]

    231:       FUN_140a32d80(lVar3);
    232:     }
    233:     if (puVar2 != (undefined *)0x0) {
    234:       FUN_140485460(puVar2);
    235:     }
    236:   }
    237:   else {

## FUN_14077f730 */ — reconstrucao/src/decompiled_03.c:240
reconstrucao/src/decompiled_03.c:240:48: error: passing argument 2 of ‘FUN_140a324f0’ from incompatible pointer type [-Wincompatible-pointer-types]

    237:   else {
    238:     iVar1 = FUN_140a7cc30(param_2,alStack_38 + 1);
    239:     if (-1 < iVar1) {
    240:       iVar1 = FUN_140a324f0(param_1,alStack_38 + 1,param_3,alStack_38);
    241:       lVar3 = alStack_38[0];
    242:       if (-1 < iVar1) {
    243:         iVar1 = FUN_140a329d0(alStack_38[0],&puStackX_8);

## FUN_14077f730 */ — reconstrucao/src/decompiled_03.c:243
reconstrucao/src/decompiled_03.c:243:41: error: passing argument 1 of ‘FUN_140a329d0’ makes pointer from integer without a cast [-Wint-conversion]

    240:       iVar1 = FUN_140a324f0(param_1,alStack_38 + 1,param_3,alStack_38);
    241:       lVar3 = alStack_38[0];
    242:       if (-1 < iVar1) {
    243:         iVar1 = FUN_140a329d0(alStack_38[0],&puStackX_8);
    244:         if (-1 < iVar1) goto LAB_14077f7ff;
    245:         puVar2 = puStackX_8;
    246:       }

## FUN_14077f730 */ — reconstrucao/src/decompiled_03.c:243
reconstrucao/src/decompiled_03.c:243:45: error: passing argument 2 of ‘FUN_140a329d0’ from incompatible pointer type [-Wincompatible-pointer-types]

    240:       iVar1 = FUN_140a324f0(param_1,alStack_38 + 1,param_3,alStack_38);
    241:       lVar3 = alStack_38[0];
    242:       if (-1 < iVar1) {
    243:         iVar1 = FUN_140a329d0(alStack_38[0],&puStackX_8);
    244:         if (-1 < iVar1) goto LAB_14077f7ff;
    245:         puVar2 = puStackX_8;
    246:       }

## FUN_14077f730 */ — reconstrucao/src/decompiled_03.c:253
reconstrucao/src/decompiled_03.c:253:17: error: ‘DAT_140f06d48’ undeclared (first use in this function)

    250:   if (iVar1 != -0x3fffff45) {
    251:     return iVar1;
    252:   }
    253:   puStackX_8 = &DAT_140f06d48;
    254:   iVar1 = 0;
    255: LAB_14077f7ff:
    256:   *param_4 = puStackX_8;

## FUN_14077f730 */ — reconstrucao/src/decompiled_03.c:256
reconstrucao/src/decompiled_03.c:256:12: error: assignment to ‘undefined8’ {aka ‘long unsigned int’} from ‘int *’ makes integer from pointer without a cast [-Wint-conversion]

    253:   puStackX_8 = &DAT_140f06d48;
    254:   iVar1 = 0;
    255: LAB_14077f7ff:
    256:   *param_4 = puStackX_8;
    257:   return iVar1;
    258: }
    259: 

## FUN_14077f830 */ — reconstrucao/src/decompiled_03.c:266
reconstrucao/src/decompiled_03.c:266:3: error: unknown type name ‘undefined’; did you mean ‘undefined8’?

    263: 
    264: {
    265:   int iVar1;
    266:   undefined *puVar2;
    267:   longlong lVar3;
    268:   undefined *puStackX_8;
    269:   longlong lStack_28;

## FUN_14077f830 */ — reconstrucao/src/decompiled_03.c:268
reconstrucao/src/decompiled_03.c:268:3: error: unknown type name ‘undefined’; did you mean ‘undefined8’?

    265:   int iVar1;
    266:   undefined *puVar2;
    267:   longlong lVar3;
    268:   undefined *puStackX_8;
    269:   longlong lStack_28;
    270:   longlong alStack_20 [3];
    271:   

## FUN_14077f830 */ — reconstrucao/src/decompiled_03.c:272
reconstrucao/src/decompiled_03.c:272:13: error: ‘undefined’ undeclared (first use in this function); did you mean ‘undefined8’?

    269:   longlong lStack_28;
    270:   longlong alStack_20 [3];
    271:   
    272:   puVar2 = (undefined *)0x0;
    273:   lVar3 = 0;
    274:   puStackX_8 = (undefined *)0x0;
    275:   lStack_28 = 0;

## FUN_14077f830 */ — reconstrucao/src/decompiled_03.c:272
reconstrucao/src/decompiled_03.c:272:24: error: expected expression before ‘)’ token

    269:   longlong lStack_28;
    270:   longlong alStack_20 [3];
    271:   
    272:   puVar2 = (undefined *)0x0;
    273:   lVar3 = 0;
    274:   puStackX_8 = (undefined *)0x0;
    275:   lStack_28 = 0;

## FUN_14077f830 */ — reconstrucao/src/decompiled_03.c:274
reconstrucao/src/decompiled_03.c:274:28: error: expected expression before ‘)’ token

    271:   
    272:   puVar2 = (undefined *)0x0;
    273:   lVar3 = 0;
    274:   puStackX_8 = (undefined *)0x0;
    275:   lStack_28 = 0;
    276:   if ((((param_1 == 0) || (param_2 == 0)) || (param_3 == 0)) || (param_4 == (undefined8 *)0x0)) {
    277:     iVar1 = -0x3ffffff3;

## FUN_14077f830 */ — reconstrucao/src/decompiled_03.c:282
reconstrucao/src/decompiled_03.c:282:35: error: passing argument 2 of ‘FUN_140a324f0’ from incompatible pointer type [-Wincompatible-pointer-types]

    279:   else {
    280:     alStack_20[1] = 0;
    281:     alStack_20[0] = param_2;
    282:     iVar1 = FUN_140a324f0(param_1,alStack_20,param_3,&lStack_28);
    283:     lVar3 = lStack_28;
    284:     if (-1 < iVar1) {
    285:       iVar1 = FUN_140a329d0(lStack_28,&puStackX_8);

## FUN_14077f830 */ — reconstrucao/src/decompiled_03.c:285
reconstrucao/src/decompiled_03.c:285:29: error: passing argument 1 of ‘FUN_140a329d0’ makes pointer from integer without a cast [-Wint-conversion]

    282:     iVar1 = FUN_140a324f0(param_1,alStack_20,param_3,&lStack_28);
    283:     lVar3 = lStack_28;
    284:     if (-1 < iVar1) {
    285:       iVar1 = FUN_140a329d0(lStack_28,&puStackX_8);
    286:       if (-1 < iVar1) goto LAB_14077f8d9;
    287:       puVar2 = puStackX_8;
    288:     }

## FUN_14077f830 */ — reconstrucao/src/decompiled_03.c:285
reconstrucao/src/decompiled_03.c:285:39: error: passing argument 2 of ‘FUN_140a329d0’ from incompatible pointer type [-Wincompatible-pointer-types]

    282:     iVar1 = FUN_140a324f0(param_1,alStack_20,param_3,&lStack_28);
    283:     lVar3 = lStack_28;
    284:     if (-1 < iVar1) {
    285:       iVar1 = FUN_140a329d0(lStack_28,&puStackX_8);
    286:       if (-1 < iVar1) goto LAB_14077f8d9;
    287:       puVar2 = puStackX_8;
    288:     }

## FUN_14077f830 */ — reconstrucao/src/decompiled_03.c:291
reconstrucao/src/decompiled_03.c:291:19: error: passing argument 1 of ‘FUN_140a32d80’ makes pointer from integer without a cast [-Wint-conversion]

    288:     }
    289:   }
    290:   if (lVar3 != 0) {
    291:     FUN_140a32d80(lVar3);
    292:   }
    293:   if (puVar2 != (undefined *)0x0) {
    294:     FUN_140485460(puVar2);

## FUN_14077f830 */ — reconstrucao/src/decompiled_03.c:293
reconstrucao/src/decompiled_03.c:293:29: error: expected expression before ‘)’ token

    290:   if (lVar3 != 0) {
    291:     FUN_140a32d80(lVar3);
    292:   }
    293:   if (puVar2 != (undefined *)0x0) {
    294:     FUN_140485460(puVar2);
    295:   }
    296:   if (iVar1 != -0x3fffff45) {

## FUN_14077f830 */ — reconstrucao/src/decompiled_03.c:294
reconstrucao/src/decompiled_03.c:294:19: error: passing argument 1 of ‘FUN_140485460’ makes integer from pointer without a cast [-Wint-conversion]

    291:     FUN_140a32d80(lVar3);
    292:   }
    293:   if (puVar2 != (undefined *)0x0) {
    294:     FUN_140485460(puVar2);
    295:   }
    296:   if (iVar1 != -0x3fffff45) {
    297:     return iVar1;

## FUN_14077f830 */ — reconstrucao/src/decompiled_03.c:299
reconstrucao/src/decompiled_03.c:299:17: error: ‘DAT_140f06d48’ undeclared (first use in this function)

    296:   if (iVar1 != -0x3fffff45) {
    297:     return iVar1;
    298:   }
    299:   puStackX_8 = &DAT_140f06d48;
    300:   iVar1 = 0;
    301: LAB_14077f8d9:
    302:   *param_4 = puStackX_8;

## FUN_14077f830 */ — reconstrucao/src/decompiled_03.c:302
reconstrucao/src/decompiled_03.c:302:12: error: assignment to ‘undefined8’ {aka ‘long unsigned int’} from ‘int *’ makes integer from pointer without a cast [-Wint-conversion]

    299:   puStackX_8 = &DAT_140f06d48;
    300:   iVar1 = 0;
    301: LAB_14077f8d9:
    302:   *param_4 = puStackX_8;
    303:   return iVar1;
    304: }
    305: 

## FUN_14077f900 */ — reconstrucao/src/decompiled_03.c:311
reconstrucao/src/decompiled_03.c:311:3: error: implicit declaration of function ‘FUN_14077f250’; did you mean ‘FUN_14077f220’? [-Wimplicit-function-declaration]

    308: void FUN_14077f900(void)
    309: 
    310: {
    311:   FUN_14077f250();
    312:   return;
    313: }
    314: 

## FUN_14077f918 */ — reconstrucao/src/decompiled_03.c:325
reconstrucao/src/decompiled_03.c:325:26: error: ‘DAT_140f06ba8’ undeclared (first use in this function); did you mean ‘FUN_140206ba8’?

    322:   undefined8 uStack_18;
    323:   undefined8 uStack_10;
    324:   
    325:   lVar2 = FUN_1402f5ef0(&DAT_140f06ba8,0,0);
    326:   LOCK();
    327:   uVar1 = DAT_140f06ba8 & 1;
    328:   DAT_140f06ba8 = DAT_140f06ba8 | 1;

## FUN_14077f918 */ — reconstrucao/src/decompiled_03.c:325
reconstrucao/src/decompiled_03.c:325:11: error: too many arguments to function ‘FUN_1402f5ef0’; expected 2, have 3

    322:   undefined8 uStack_18;
    323:   undefined8 uStack_10;
    324:   
    325:   lVar2 = FUN_1402f5ef0(&DAT_140f06ba8,0,0);
    326:   LOCK();
    327:   uVar1 = DAT_140f06ba8 & 1;
    328:   DAT_140f06ba8 = DAT_140f06ba8 | 1;

## FUN_14077f918 */ — reconstrucao/src/decompiled_03.c:326
reconstrucao/src/decompiled_03.c:326:3: error: implicit declaration of function ‘LOCK’ [-Wimplicit-function-declaration]

    323:   undefined8 uStack_10;
    324:   
    325:   lVar2 = FUN_1402f5ef0(&DAT_140f06ba8,0,0);
    326:   LOCK();
    327:   uVar1 = DAT_140f06ba8 & 1;
    328:   DAT_140f06ba8 = DAT_140f06ba8 | 1;
    329:   UNLOCK();

## FUN_14077f918 */ — reconstrucao/src/decompiled_03.c:329
reconstrucao/src/decompiled_03.c:329:3: error: implicit declaration of function ‘UNLOCK’ [-Wimplicit-function-declaration]

    326:   LOCK();
    327:   uVar1 = DAT_140f06ba8 & 1;
    328:   DAT_140f06ba8 = DAT_140f06ba8 | 1;
    329:   UNLOCK();
    330:   if (uVar1 != 0) {
    331:     FUN_1402f5950(&DAT_140f06ba8,lVar2,&DAT_140f06ba8);
    332:   }

## FUN_14077f918 */ — reconstrucao/src/decompiled_03.c:331
reconstrucao/src/decompiled_03.c:331:34: error: passing argument 2 of ‘FUN_1402f5950’ makes pointer from integer without a cast [-Wint-conversion]

    328:   DAT_140f06ba8 = DAT_140f06ba8 | 1;
    329:   UNLOCK();
    330:   if (uVar1 != 0) {
    331:     FUN_1402f5950(&DAT_140f06ba8,lVar2,&DAT_140f06ba8);
    332:   }
    333:   if (lVar2 != 0) {
    334:     *(undefined1 *)(lVar2 + 10) = 1;

## FUN_14077f918 */ — reconstrucao/src/decompiled_03.c:336
reconstrucao/src/decompiled_03.c:336:3: error: ‘DAT_140f06bb8’ undeclared (first use in this function)

    333:   if (lVar2 != 0) {
    334:     *(undefined1 *)(lVar2 + 10) = 1;
    335:   }
    336:   DAT_140f06bb8 = DAT_140f06bb8 + -1;
    337:   if (DAT_140f06bb8 == 0) {
    338:     uStack_18 = 0;
    339:     uStack_10 = 0xffffffffffffffff;

## FUN_14077f918 */ — reconstrucao/src/decompiled_03.c:340
reconstrucao/src/decompiled_03.c:340:18: error: ‘DAT_140f06bc0’ undeclared (first use in this function)

    337:   if (DAT_140f06bb8 == 0) {
    338:     uStack_18 = 0;
    339:     uStack_10 = 0xffffffffffffffff;
    340:     KeSetTimer2(&DAT_140f06bc0,0xfffffffffd050f80,0,&uStack_18);
    341:   }
    342:   FUN_1404935fc(&DAT_140f06ba8);
    343:   return;

## FUN_14077f918 */ — reconstrucao/src/decompiled_03.c:340
reconstrucao/src/decompiled_03.c:340:53: error: passing argument 4 of ‘KeSetTimer2’ makes integer from pointer without a cast [-Wint-conversion]

    337:   if (DAT_140f06bb8 == 0) {
    338:     uStack_18 = 0;
    339:     uStack_10 = 0xffffffffffffffff;
    340:     KeSetTimer2(&DAT_140f06bc0,0xfffffffffd050f80,0,&uStack_18);
    341:   }
    342:   FUN_1404935fc(&DAT_140f06ba8);
    343:   return;

## FUN_14077f9b0 */ — reconstrucao/src/decompiled_03.c:365
reconstrucao/src/decompiled_03.c:365:21: error: passing argument 1 of ‘FUN_1406d1200’ makes pointer from integer without a cast [-Wint-conversion]

    362:   if (lVar2 != 0) {
    363:     lVar3 = ExAllocatePool2(0x100,0x40,0x70687373);
    364:     if (lVar3 != 0) {
    365:       FUN_1406d1200(lVar2,0,0xa0);
    366:       FUN_1406d1200(lVar3,0,0x40);
    367:       AlpcInitializeMessageAttribute(0x20000000,lVar2,0xa0,auStack_10);
    368:       while( true ) {

## FUN_14077f9b0 */ — reconstrucao/src/decompiled_03.c:365
reconstrucao/src/decompiled_03.c:365:29: error: passing argument 3 of ‘FUN_1406d1200’ makes pointer from integer without a cast [-Wint-conversion]

    362:   if (lVar2 != 0) {
    363:     lVar3 = ExAllocatePool2(0x100,0x40,0x70687373);
    364:     if (lVar3 != 0) {
    365:       FUN_1406d1200(lVar2,0,0xa0);
    366:       FUN_1406d1200(lVar3,0,0x40);
    367:       AlpcInitializeMessageAttribute(0x20000000,lVar2,0xa0,auStack_10);
    368:       while( true ) {

## FUN_14077f9b0 */ — reconstrucao/src/decompiled_03.c:366
reconstrucao/src/decompiled_03.c:366:21: error: passing argument 1 of ‘FUN_1406d1200’ makes pointer from integer without a cast [-Wint-conversion]

    363:     lVar3 = ExAllocatePool2(0x100,0x40,0x70687373);
    364:     if (lVar3 != 0) {
    365:       FUN_1406d1200(lVar2,0,0xa0);
    366:       FUN_1406d1200(lVar3,0,0x40);
    367:       AlpcInitializeMessageAttribute(0x20000000,lVar2,0xa0,auStack_10);
    368:       while( true ) {
    369:         uStackX_20 = 0x40;

## FUN_14077f9b0 */ — reconstrucao/src/decompiled_03.c:366
reconstrucao/src/decompiled_03.c:366:29: error: passing argument 3 of ‘FUN_1406d1200’ makes pointer from integer without a cast [-Wint-conversion]

    363:     lVar3 = ExAllocatePool2(0x100,0x40,0x70687373);
    364:     if (lVar3 != 0) {
    365:       FUN_1406d1200(lVar2,0,0xa0);
    366:       FUN_1406d1200(lVar3,0,0x40);
    367:       AlpcInitializeMessageAttribute(0x20000000,lVar2,0xa0,auStack_10);
    368:       while( true ) {
    369:         uStackX_20 = 0x40;

## FUN_14077f9b0 */ — reconstrucao/src/decompiled_03.c:367
reconstrucao/src/decompiled_03.c:367:7: error: implicit declaration of function ‘AlpcInitializeMessageAttribute’; did you mean ‘AlpcGetMessageAttribute’? [-Wimplicit-function-declaration]

    364:     if (lVar3 != 0) {
    365:       FUN_1406d1200(lVar2,0,0xa0);
    366:       FUN_1406d1200(lVar3,0,0x40);
    367:       AlpcInitializeMessageAttribute(0x20000000,lVar2,0xa0,auStack_10);
    368:       while( true ) {
    369:         uStackX_20 = 0x40;
    370:         iVar1 = ZwAlpcSendWaitReceivePort(DAT_140f06ba0,0,0,0,lVar3,&uStackX_20,lVar2,&uStack_18);

## FUN_14077f9b0 */ — reconstrucao/src/decompiled_03.c:370
reconstrucao/src/decompiled_03.c:370:43: error: ‘DAT_140f06ba0’ undeclared (first use in this function)

    367:       AlpcInitializeMessageAttribute(0x20000000,lVar2,0xa0,auStack_10);
    368:       while( true ) {
    369:         uStackX_20 = 0x40;
    370:         iVar1 = ZwAlpcSendWaitReceivePort(DAT_140f06ba0,0,0,0,lVar3,&uStackX_20,lVar2,&uStack_18);
    371:         if (iVar1 != 0) break;
    372:         uVar4 = AlpcGetMessageAttribute(lVar2,0x20000000);
    373:         FUN_14077fb9c(lVar3,uVar4);

## FUN_14077f9b0 */ — reconstrucao/src/decompiled_03.c:370
reconstrucao/src/decompiled_03.c:370:17: error: too many arguments to function ‘ZwAlpcSendWaitReceivePort’; expected 0, have 8

    367:       AlpcInitializeMessageAttribute(0x20000000,lVar2,0xa0,auStack_10);
    368:       while( true ) {
    369:         uStackX_20 = 0x40;
    370:         iVar1 = ZwAlpcSendWaitReceivePort(DAT_140f06ba0,0,0,0,lVar3,&uStackX_20,lVar2,&uStack_18);
    371:         if (iVar1 != 0) break;
    372:         uVar4 = AlpcGetMessageAttribute(lVar2,0x20000000);
    373:         FUN_14077fb9c(lVar3,uVar4);

## FUN_14077f9b0 */ — reconstrucao/src/decompiled_03.c:370
reconstrucao/src/decompiled_03.c:370:15: error: invalid use of void expression

    367:       AlpcInitializeMessageAttribute(0x20000000,lVar2,0xa0,auStack_10);
    368:       while( true ) {
    369:         uStackX_20 = 0x40;
    370:         iVar1 = ZwAlpcSendWaitReceivePort(DAT_140f06ba0,0,0,0,lVar3,&uStackX_20,lVar2,&uStack_18);
    371:         if (iVar1 != 0) break;
    372:         uVar4 = AlpcGetMessageAttribute(lVar2,0x20000000);
    373:         FUN_14077fb9c(lVar3,uVar4);

## FUN_14077f9b0 */ — reconstrucao/src/decompiled_03.c:372
reconstrucao/src/decompiled_03.c:372:41: error: passing argument 1 of ‘AlpcGetMessageAttribute’ makes pointer from integer without a cast [-Wint-conversion]

    369:         uStackX_20 = 0x40;
    370:         iVar1 = ZwAlpcSendWaitReceivePort(DAT_140f06ba0,0,0,0,lVar3,&uStackX_20,lVar2,&uStack_18);
    371:         if (iVar1 != 0) break;
    372:         uVar4 = AlpcGetMessageAttribute(lVar2,0x20000000);
    373:         FUN_14077fb9c(lVar3,uVar4);
    374:         AlpcInitializeMessageAttribute(0x20000000);
    375:         uStack_18 = 0;

## FUN_14077f9b0 */ — reconstrucao/src/decompiled_03.c:373
reconstrucao/src/decompiled_03.c:373:9: error: too many arguments to function ‘FUN_14077fb9c’; expected 1, have 2

    370:         iVar1 = ZwAlpcSendWaitReceivePort(DAT_140f06ba0,0,0,0,lVar3,&uStackX_20,lVar2,&uStack_18);
    371:         if (iVar1 != 0) break;
    372:         uVar4 = AlpcGetMessageAttribute(lVar2,0x20000000);
    373:         FUN_14077fb9c(lVar3,uVar4);
    374:         AlpcInitializeMessageAttribute(0x20000000);
    375:         uStack_18 = 0;
    376:       }

## FUN_14077f9b0 */ — reconstrucao/src/decompiled_03.c:377
reconstrucao/src/decompiled_03.c:377:7: error: too many arguments to function ‘FUN_140447c40’; expected 0, have 2

    374:         AlpcInitializeMessageAttribute(0x20000000);
    375:         uStack_18 = 0;
    376:       }
    377:       FUN_140447c40(lVar3,0x70687373);
    378:     }
    379:     FUN_140447c40(lVar2,0x70687373);
    380:   }

## FUN_14077f9b0 */ — reconstrucao/src/decompiled_03.c:379
reconstrucao/src/decompiled_03.c:379:5: error: too many arguments to function ‘FUN_140447c40’; expected 0, have 2

    376:       }
    377:       FUN_140447c40(lVar3,0x70687373);
    378:     }
    379:     FUN_140447c40(lVar2,0x70687373);
    380:   }
    381:   return;
    382: }

## FUN_14077faf0 */ — reconstrucao/src/decompiled_03.c:392
reconstrucao/src/decompiled_03.c:392:26: error: ‘DAT_140f06ba8’ undeclared (first use in this function); did you mean ‘FUN_140206ba8’?

    389:   ulonglong uVar1;
    390:   longlong lVar2;
    391:   
    392:   lVar2 = FUN_1402f5ef0(&DAT_140f06ba8,0,0);
    393:   LOCK();
    394:   uVar1 = DAT_140f06ba8 & 1;
    395:   DAT_140f06ba8 = DAT_140f06ba8 | 1;

## FUN_14077faf0 */ — reconstrucao/src/decompiled_03.c:392
reconstrucao/src/decompiled_03.c:392:11: error: too many arguments to function ‘FUN_1402f5ef0’; expected 2, have 3

    389:   ulonglong uVar1;
    390:   longlong lVar2;
    391:   
    392:   lVar2 = FUN_1402f5ef0(&DAT_140f06ba8,0,0);
    393:   LOCK();
    394:   uVar1 = DAT_140f06ba8 & 1;
    395:   DAT_140f06ba8 = DAT_140f06ba8 | 1;

## FUN_14077faf0 */ — reconstrucao/src/decompiled_03.c:398
reconstrucao/src/decompiled_03.c:398:34: error: passing argument 2 of ‘FUN_1402f5950’ makes pointer from integer without a cast [-Wint-conversion]

    395:   DAT_140f06ba8 = DAT_140f06ba8 | 1;
    396:   UNLOCK();
    397:   if (uVar1 != 0) {
    398:     FUN_1402f5950(&DAT_140f06ba8,lVar2,&DAT_140f06ba8);
    399:   }
    400:   if (lVar2 != 0) {
    401:     *(undefined1 *)(lVar2 + 10) = 1;

## FUN_14077faf0 */ — reconstrucao/src/decompiled_03.c:404
reconstrucao/src/decompiled_03.c:404:10: error: ‘DAT_140f06bbc’ undeclared (first use in this function)

    401:     *(undefined1 *)(lVar2 + 10) = 1;
    402:   }
    403:   lVar2 = (longlong)param_1 * 0xc0;
    404:   if (((&DAT_140f06bbc)[lVar2] != '\0') && ((&DAT_140f06bb8)[(longlong)param_1 * 0x30] == 0)) {
    405:     FUN_14077ff18();
    406:     (&DAT_140f06bbc)[lVar2] = 0;
    407:   }

## FUN_14077faf0 */ — reconstrucao/src/decompiled_03.c:404
reconstrucao/src/decompiled_03.c:404:47: error: ‘DAT_140f06bb8’ undeclared (first use in this function)

    401:     *(undefined1 *)(lVar2 + 10) = 1;
    402:   }
    403:   lVar2 = (longlong)param_1 * 0xc0;
    404:   if (((&DAT_140f06bbc)[lVar2] != '\0') && ((&DAT_140f06bb8)[(longlong)param_1 * 0x30] == 0)) {
    405:     FUN_14077ff18();
    406:     (&DAT_140f06bbc)[lVar2] = 0;
    407:   }

## FUN_14077faf0 */ — reconstrucao/src/decompiled_03.c:405
reconstrucao/src/decompiled_03.c:405:5: error: too few arguments to function ‘FUN_14077ff18’; expected 5, have 0

    402:   }
    403:   lVar2 = (longlong)param_1 * 0xc0;
    404:   if (((&DAT_140f06bbc)[lVar2] != '\0') && ((&DAT_140f06bb8)[(longlong)param_1 * 0x30] == 0)) {
    405:     FUN_14077ff18();
    406:     (&DAT_140f06bbc)[lVar2] = 0;
    407:   }
    408:   FUN_1404935fc(&DAT_140f06ba8);

## FUN_14077fb9c */ — reconstrucao/src/decompiled_03.c:441
reconstrucao/src/decompiled_03.c:441:15: error: ‘DAT_140e0a740’ undeclared (first use in this function)

    438:   undefined8 uStack_68;
    439:   ulonglong uStack_28;
    440:   
    441:   uStack_28 = DAT_140e0a740 ^ (ulonglong)auStack_108;
    442:   uStack_ac = 0;
    443:   uStack_94 = 0;
    444:   uVar5 = *(ushort *)(param_1 + 4) & 0xff;

## FUN_14077fb9c */ — reconstrucao/src/decompiled_03.c:448
reconstrucao/src/decompiled_03.c:448:32: error: ‘DAT_140f06ba8’ undeclared (first use in this function); did you mean ‘FUN_140206ba8’?

    445:   if (uVar5 != 1) {
    446:     if ((uVar5 != 2) && (uVar5 != 3)) {
    447:       if ((uVar5 == 5) || (uVar5 == 6)) {
    448:         lVar4 = FUN_1402f5ef0(&DAT_140f06ba8,0,0);
    449:         LOCK();
    450:         uVar1 = DAT_140f06ba8 & 1;
    451:         DAT_140f06ba8 = DAT_140f06ba8 | 1;

## FUN_14077fb9c */ — reconstrucao/src/decompiled_03.c:448
reconstrucao/src/decompiled_03.c:448:17: error: too many arguments to function ‘FUN_1402f5ef0’; expected 2, have 3

    445:   if (uVar5 != 1) {
    446:     if ((uVar5 != 2) && (uVar5 != 3)) {
    447:       if ((uVar5 == 5) || (uVar5 == 6)) {
    448:         lVar4 = FUN_1402f5ef0(&DAT_140f06ba8,0,0);
    449:         LOCK();
    450:         uVar1 = DAT_140f06ba8 & 1;
    451:         DAT_140f06ba8 = DAT_140f06ba8 | 1;

## FUN_14077fb9c */ — reconstrucao/src/decompiled_03.c:454
reconstrucao/src/decompiled_03.c:454:40: error: passing argument 2 of ‘FUN_1402f5950’ makes pointer from integer without a cast [-Wint-conversion]

    451:         DAT_140f06ba8 = DAT_140f06ba8 | 1;
    452:         UNLOCK();
    453:         if (uVar1 != 0) {
    454:           FUN_1402f5950(&DAT_140f06ba8,lVar4,&DAT_140f06ba8);
    455:         }
    456:         if (lVar4 != 0) {
    457:           *(undefined1 *)(lVar4 + 10) = 1;

## FUN_14077fb9c */ — reconstrucao/src/decompiled_03.c:459
reconstrucao/src/decompiled_03.c:459:17: error: ‘DAT_140f06bb0’ undeclared (first use in this function)

    456:         if (lVar4 != 0) {
    457:           *(undefined1 *)(lVar4 + 10) = 1;
    458:         }
    459:         lVar4 = DAT_140f06bb0;
    460:         DAT_140f06bb0 = 0;
    461:         FUN_1404935fc(&DAT_140f06ba8);
    462:         ZwClose(lVar4);

## FUN_14077fb9c */ — reconstrucao/src/decompiled_03.c:462
reconstrucao/src/decompiled_03.c:462:9: error: too many arguments to function ‘ZwClose’; expected 0, have 1

    459:         lVar4 = DAT_140f06bb0;
    460:         DAT_140f06bb0 = 0;
    461:         FUN_1404935fc(&DAT_140f06ba8);
    462:         ZwClose(lVar4);
    463:         return 0;
    464:       }
    465:       if (uVar5 != 10) {

## FUN_14077fb9c */ — reconstrucao/src/decompiled_03.c:474
reconstrucao/src/decompiled_03.c:474:21: error: passing argument 1 of ‘FUN_1406d1200’ from incompatible pointer type [-Wincompatible-pointer-types]

    471:       uStack_a0 = 0;
    472:       uStack_90 = 0;
    473:       uStack_88 = 0;
    474:       FUN_1406d1200(auStack_78,0,0x48);
    475:       uStack_68 = 0x40;
    476:       lVar4 = FUN_1402f5ef0(&DAT_140f06ba8,0,0);
    477:       LOCK();

## FUN_14077fb9c */ — reconstrucao/src/decompiled_03.c:474
reconstrucao/src/decompiled_03.c:474:34: error: passing argument 3 of ‘FUN_1406d1200’ makes pointer from integer without a cast [-Wint-conversion]

    471:       uStack_a0 = 0;
    472:       uStack_90 = 0;
    473:       uStack_88 = 0;
    474:       FUN_1406d1200(auStack_78,0,0x48);
    475:       uStack_68 = 0x40;
    476:       lVar4 = FUN_1402f5ef0(&DAT_140f06ba8,0,0);
    477:       LOCK();

## FUN_14077fb9c */ — reconstrucao/src/decompiled_03.c:476
reconstrucao/src/decompiled_03.c:476:15: error: too many arguments to function ‘FUN_1402f5ef0’; expected 2, have 3

    473:       uStack_88 = 0;
    474:       FUN_1406d1200(auStack_78,0,0x48);
    475:       uStack_68 = 0x40;
    476:       lVar4 = FUN_1402f5ef0(&DAT_140f06ba8,0,0);
    477:       LOCK();
    478:       uVar1 = DAT_140f06ba8 & 1;
    479:       DAT_140f06ba8 = DAT_140f06ba8 | 1;

## FUN_14077fb9c */ — reconstrucao/src/decompiled_03.c:482
reconstrucao/src/decompiled_03.c:482:38: error: passing argument 2 of ‘FUN_1402f5950’ makes pointer from integer without a cast [-Wint-conversion]

    479:       DAT_140f06ba8 = DAT_140f06ba8 | 1;
    480:       UNLOCK();
    481:       if (uVar1 != 0) {
    482:         FUN_1402f5950(&DAT_140f06ba8,lVar4,&DAT_140f06ba8);
    483:       }
    484:       if (lVar4 != 0) {
    485:         *(undefined1 *)(lVar4 + 10) = 1;

## FUN_14077fb9c */ — reconstrucao/src/decompiled_03.c:492
reconstrucao/src/decompiled_03.c:492:54: error: ‘DAT_140f06ba0’ undeclared (first use in this function)

    489:       uStack_d0 = 0;
    490:       uStack_e0 = 0;
    491:       lStack_d8 = param_1;
    492:       iVar2 = ZwAlpcAcceptConnectPort(&DAT_140f06bb0,DAT_140f06ba0,0,&uStack_b0);
    493:       if (iVar2 < 0) {
    494:         puStack_e8 = auStack_78;
    495:         uStack_c8 = 0;

## FUN_14077fb9c */ — reconstrucao/src/decompiled_03.c:492
reconstrucao/src/decompiled_03.c:492:15: error: too many arguments to function ‘ZwAlpcAcceptConnectPort’; expected 0, have 4

    489:       uStack_d0 = 0;
    490:       uStack_e0 = 0;
    491:       lStack_d8 = param_1;
    492:       iVar2 = ZwAlpcAcceptConnectPort(&DAT_140f06bb0,DAT_140f06ba0,0,&uStack_b0);
    493:       if (iVar2 < 0) {
    494:         puStack_e8 = auStack_78;
    495:         uStack_c8 = 0;

## FUN_14077fb9c */ — reconstrucao/src/decompiled_03.c:492
reconstrucao/src/decompiled_03.c:492:13: error: invalid use of void expression

    489:       uStack_d0 = 0;
    490:       uStack_e0 = 0;
    491:       lStack_d8 = param_1;
    492:       iVar2 = ZwAlpcAcceptConnectPort(&DAT_140f06bb0,DAT_140f06ba0,0,&uStack_b0);
    493:       if (iVar2 < 0) {
    494:         puStack_e8 = auStack_78;
    495:         uStack_c8 = 0;

## FUN_14077fb9c */ — reconstrucao/src/decompiled_03.c:499
reconstrucao/src/decompiled_03.c:499:9: error: too many arguments to function ‘ZwAlpcAcceptConnectPort’; expected 0, have 4

    496:         uStack_d0 = 0;
    497:         uStack_e0 = 0;
    498:         lStack_d8 = param_1;
    499:         ZwAlpcAcceptConnectPort(&DAT_140f06bb0,DAT_140f06ba0,0,&uStack_b0);
    500:       }
    501:       else {
    502:         uStack_b8 = (ulonglong)DAT_140fc4ac0;

## FUN_14077fb9c */ — reconstrucao/src/decompiled_03.c:502
reconstrucao/src/decompiled_03.c:502:32: error: ‘DAT_140fc4ac0’ undeclared (first use in this function)

    499:         ZwAlpcAcceptConnectPort(&DAT_140f06bb0,DAT_140f06ba0,0,&uStack_b0);
    500:       }
    501:       else {
    502:         uStack_b8 = (ulonglong)DAT_140fc4ac0;
    503:         if ((DAT_140fc4ac0 & 0x10) == 0) {
    504:           uStack_b8 = (ulonglong)(DAT_140fc4ac0 | 1);
    505:           FUN_14053fd44(&PTR_DAT_1400dd860,uStack_b8,3,1);

## FUN_14077fb9c */ — reconstrucao/src/decompiled_03.c:505
reconstrucao/src/decompiled_03.c:505:26: error: ‘PTR_DAT_1400dd860’ undeclared (first use in this function)

    502:         uStack_b8 = (ulonglong)DAT_140fc4ac0;
    503:         if ((DAT_140fc4ac0 & 0x10) == 0) {
    504:           uStack_b8 = (ulonglong)(DAT_140fc4ac0 | 1);
    505:           FUN_14053fd44(&PTR_DAT_1400dd860,uStack_b8,3,1);
    506:           FUN_14053fdd4(uStack_b8,3,&PTR_DAT_1400dd860);
    507:         }
    508:       }

## FUN_14077fb9c */ — reconstrucao/src/decompiled_03.c:513
reconstrucao/src/decompiled_03.c:513:15: error: too many arguments to function ‘ZwAlpcCancelMessage’; expected 0, have 2

    510:       return 0;
    511:     }
    512:     if ((*(ushort *)(param_1 + 4) >> 0xd & 1) != 0) {
    513:       uVar3 = ZwAlpcCancelMessage(DAT_140f06ba0,0);
    514:       return uVar3;
    515:     }
    516:   }

## FUN_14077fb9c */ — reconstrucao/src/decompiled_03.c:513
reconstrucao/src/decompiled_03.c:513:13: error: invalid use of void expression

    510:       return 0;
    511:     }
    512:     if ((*(ushort *)(param_1 + 4) >> 0xd & 1) != 0) {
    513:       uVar3 = ZwAlpcCancelMessage(DAT_140f06ba0,0);
    514:       return uVar3;
    515:     }
    516:   }

## FUN_14077fdf8 */ — reconstrucao/src/decompiled_03.c:530
reconstrucao/src/decompiled_03.c:530:10: error: ‘DAT_140fc4ac0’ undeclared (first use in this function)

    527:   uint uVar2;
    528:   
    529:   if (*(int *)(param_1 + 0x28) == 0) {
    530:     if ((DAT_140fc4ac0 & 0x10) == 0) {
    531:       uVar2 = DAT_140fc4ac0 | 1;
    532:       FUN_14053fd44(&PTR_DAT_1400dd860,uVar2,3);
    533:       FUN_14053fdd4(uVar2,3,&PTR_DAT_1400dd860);

## FUN_14077fdf8 */ — reconstrucao/src/decompiled_03.c:532
reconstrucao/src/decompiled_03.c:532:22: error: ‘PTR_DAT_1400dd860’ undeclared (first use in this function)

    529:   if (*(int *)(param_1 + 0x28) == 0) {
    530:     if ((DAT_140fc4ac0 & 0x10) == 0) {
    531:       uVar2 = DAT_140fc4ac0 | 1;
    532:       FUN_14053fd44(&PTR_DAT_1400dd860,uVar2,3);
    533:       FUN_14053fdd4(uVar2,3,&PTR_DAT_1400dd860);
    534:     }
    535:   }

## FUN_14077fdf8 */ — reconstrucao/src/decompiled_03.c:532
reconstrucao/src/decompiled_03.c:532:7: error: too few arguments to function ‘FUN_14053fd44’; expected 4, have 3

    529:   if (*(int *)(param_1 + 0x28) == 0) {
    530:     if ((DAT_140fc4ac0 & 0x10) == 0) {
    531:       uVar2 = DAT_140fc4ac0 | 1;
    532:       FUN_14053fd44(&PTR_DAT_1400dd860,uVar2,3);
    533:       FUN_14053fdd4(uVar2,3,&PTR_DAT_1400dd860);
    534:     }
    535:   }

## FUN_14077fdf8 */ — reconstrucao/src/decompiled_03.c:542
reconstrucao/src/decompiled_03.c:542:13: error: too many arguments to function ‘FUN_14077eff0’; expected 0, have 1

    539:       FUN_14053fd44(&PTR_DAT_1400dd860,uVar2,3,1);
    540:       FUN_14053fdd4(uVar2,3,&PTR_DAT_1400dd860);
    541:     }
    542:     uVar1 = FUN_14077eff0(*(undefined8 *)(param_1 + 0x30));
    543:     *(undefined4 *)(param_1 + 0x30) = uVar1;
    544:     ZwAlpcSendWaitReceivePort(DAT_140f06bb0,0x10000,param_1,0,0,0,0,0);
    545:     return 0;

## FUN_14077fdf8 */ — reconstrucao/src/decompiled_03.c:544
reconstrucao/src/decompiled_03.c:544:31: error: ‘DAT_140f06bb0’ undeclared (first use in this function)

    541:     }
    542:     uVar1 = FUN_14077eff0(*(undefined8 *)(param_1 + 0x30));
    543:     *(undefined4 *)(param_1 + 0x30) = uVar1;
    544:     ZwAlpcSendWaitReceivePort(DAT_140f06bb0,0x10000,param_1,0,0,0,0,0);
    545:     return 0;
    546:   }
    547:   return 0xc00000bb;

## FUN_14077fdf8 */ — reconstrucao/src/decompiled_03.c:544
reconstrucao/src/decompiled_03.c:544:5: error: too many arguments to function ‘ZwAlpcSendWaitReceivePort’; expected 0, have 8

    541:     }
    542:     uVar1 = FUN_14077eff0(*(undefined8 *)(param_1 + 0x30));
    543:     *(undefined4 *)(param_1 + 0x30) = uVar1;
    544:     ZwAlpcSendWaitReceivePort(DAT_140f06bb0,0x10000,param_1,0,0,0,0,0);
    545:     return 0;
    546:   }
    547:   return 0xc00000bb;

## FUN_14077ff18 */ — reconstrucao/src/decompiled_03.c:574
reconstrucao/src/decompiled_03.c:574:11: error: ‘DAT_140f06bb0’ undeclared (first use in this function)

    571:   undefined1 auStack_c8 [160];
    572:   ulonglong uStack_28;
    573:   
    574:   lVar1 = DAT_140f06bb0;
    575:   uStack_28 = DAT_140e0a740 ^ (ulonglong)auStack_158;
    576:   if (DAT_140f06bb0 != 0) {
    577:     uStack_e8 = 0;

## FUN_14077ff18 */ — reconstrucao/src/decompiled_03.c:575
reconstrucao/src/decompiled_03.c:575:15: error: ‘DAT_140e0a740’ undeclared (first use in this function)

    572:   ulonglong uStack_28;
    573:   
    574:   lVar1 = DAT_140f06bb0;
    575:   uStack_28 = DAT_140e0a740 ^ (ulonglong)auStack_158;
    576:   if (DAT_140f06bb0 != 0) {
    577:     uStack_e8 = 0;
    578:     uStack_e0 = (ulonglong)param_2;

## FUN_14077ff18 */ — reconstrucao/src/decompiled_03.c:593
reconstrucao/src/decompiled_03.c:593:21: error: passing argument 1 of ‘FUN_1406d1200’ from incompatible pointer type [-Wincompatible-pointer-types]

    590:       puStack_138 = (undefined8 *)0x0;
    591:     }
    592:     else {
    593:       FUN_1406d1200(auStack_c8,0,0xa0);
    594:       puStack_120 = &uStack_118;
    595:       uStack_110 = 0x38;
    596:       uVar2 = 0x20000;

## FUN_14077ff18 */ — reconstrucao/src/decompiled_03.c:593
reconstrucao/src/decompiled_03.c:593:34: error: passing argument 3 of ‘FUN_1406d1200’ makes pointer from integer without a cast [-Wint-conversion]

    590:       puStack_138 = (undefined8 *)0x0;
    591:     }
    592:     else {
    593:       FUN_1406d1200(auStack_c8,0,0xa0);
    594:       puStack_120 = &uStack_118;
    595:       uStack_110 = 0x38;
    596:       uVar2 = 0x20000;

## FUN_14077ff18 */ — reconstrucao/src/decompiled_03.c:602
reconstrucao/src/decompiled_03.c:602:5: error: too many arguments to function ‘ZwAlpcSendWaitReceivePort’; expected 0, have 4

    599:       puStack_130 = &uStack_110;
    600:       puStack_138 = &uStack_108;
    601:     }
    602:     ZwAlpcSendWaitReceivePort(lVar1,uVar2,&uStack_108,0);
    603:   }
    604:   return;
    605: }

## TtmNotifyDeviceArrival */ — reconstrucao/src/decompiled_03.c:609
reconstrucao/src/decompiled_03.c:609:1: error: expected identifier or ‘(’ before ‘if’

    606: 
    607: /* Ghidra label: TtmNotifyDeviceArrival */
    608: /* Ghidra address: 140780020 */
    609: if (param_3 == (longlong *)0x0) {
    610:     iVar4 = -0x3ffffff3;
    611:     uVar9 = 0x182;
    612: LAB_14078029b:

## TtmNotifyDeviceDeparture */ — reconstrucao/src/decompiled_03.c:631
reconstrucao/src/decompiled_03.c:631:25: error: passing argument 1 of ‘FUN_140781b40’ makes integer from pointer without a cast [-Wint-conversion]

    628:   uStackX_18 = 0;
    629:   lStackX_20 = 0;
    630:   cVar1 = '\0';
    631:   iVar2 = FUN_140781b40(&uStackX_18);
    632:   if (iVar2 < 0) {
    633:     FUN_1409a24bc("TtmNotifyDeviceDeparture",0x26f,iVar2,iVar2);
    634:   }

## TtmNotifyDeviceDeparture */ — reconstrucao/src/decompiled_03.c:633
reconstrucao/src/decompiled_03.c:633:19: error: passing argument 1 of ‘FUN_1409a24bc’ makes integer from pointer without a cast [-Wint-conversion]

    630:   cVar1 = '\0';
    631:   iVar2 = FUN_140781b40(&uStackX_18);
    632:   if (iVar2 < 0) {
    633:     FUN_1409a24bc("TtmNotifyDeviceDeparture",0x26f,iVar2,iVar2);
    634:   }
    635:   else {
    636:     cVar1 = FUN_140781098(uStackX_18,param_1,param_2,&lStackX_20);

## TtmNotifyDeviceDeparture */ — reconstrucao/src/decompiled_03.c:643
reconstrucao/src/decompiled_03.c:643:28: error: ‘DAT_140f06b20’ undeclared (first use in this function)

    640:         FUN_140781cb4(uStackX_18,1);
    641:       }
    642:     }
    643:     ExReleaseResourceLite(&DAT_140f06b20);
    644:     KeLeaveCriticalRegion();
    645:   }
    646:   FUN_140784338(param_1,param_2,cVar1);

## TtmNotifyDeviceInput */ — reconstrucao/src/decompiled_03.c:673
reconstrucao/src/decompiled_03.c:673:25: error: passing argument 1 of ‘FUN_140781b40’ makes integer from pointer without a cast [-Wint-conversion]

    670:   uStack_30 = 0;
    671:   uVar2 = 0;
    672:   uVar6 = 0;
    673:   iVar3 = FUN_140781b40(&lStackX_20);
    674:   lVar7 = lStackX_20;
    675:   if (iVar3 < 0) {
    676:     FUN_1409a24bc("TtmNotifyDeviceInput",0x2f8,iVar3,0xffffffff);

## TtmNotifyDeviceInput */ — reconstrucao/src/decompiled_03.c:676
reconstrucao/src/decompiled_03.c:676:19: error: passing argument 1 of ‘FUN_1409a24bc’ makes integer from pointer without a cast [-Wint-conversion]

    673:   iVar3 = FUN_140781b40(&lStackX_20);
    674:   lVar7 = lStackX_20;
    675:   if (iVar3 < 0) {
    676:     FUN_1409a24bc("TtmNotifyDeviceInput",0x2f8,iVar3,0xffffffff);
    677: LAB_140780444:
    678:     lVar5 = lStackX_20;
    679:   }

## FUN_140ac2d20 */ — reconstrucao/src/decompiled_04.c:24
reconstrucao/src/decompiled_04.c:24:34: error: passing argument 3 of ‘FUN_14090ef10’ from incompatible pointer type [-Wincompatible-pointer-types]

    21:   uStack_40 = 0x500;
    22:   uStack_38 = *(undefined8 *)(param_1 + 0x30);
    23:   uStack_28 = (ulonglong)*(uint *)(param_1 + 0x40);
    24:   FUN_14090ef10(param_1 + 0x48,0,&uStack_40,param_4,0x38);
    25:   return 0;
    26: }
    27: 

## FUN_140ac2d20 */ — reconstrucao/src/decompiled_04.c:24
reconstrucao/src/decompiled_04.c:24:3: error: too many arguments to function ‘FUN_14090ef10’; expected 3, have 5

    21:   uStack_40 = 0x500;
    22:   uStack_38 = *(undefined8 *)(param_1 + 0x30);
    23:   uStack_28 = (ulonglong)*(uint *)(param_1 + 0x40);
    24:   FUN_14090ef10(param_1 + 0x48,0,&uStack_40,param_4,0x38);
    25:   return 0;
    26: }
    27: 

## FUN_140ac2d78 */ — reconstrucao/src/decompiled_04.c:37
reconstrucao/src/decompiled_04.c:37:9: error: invalid use of void expression

    34:   longlong lVar2;
    35:   longlong lVar3;
    36:   
    37:   lVar2 = FUN_14041b0bc(param_1,8);
    38:   lVar1 = *(longlong *)(lVar2 + 8);
    39:   do {
    40:     lVar3 = lVar1;

## FUN_140ac2d78 */ — reconstrucao/src/decompiled_04.c:43
reconstrucao/src/decompiled_04.c:43:21: error: passing argument 1 of ‘FUN_14031db18’ makes pointer from integer without a cast [-Wint-conversion]

    40:     lVar3 = lVar1;
    41:     if (*(int *)(lVar1 + 0xb0) == 1) {
    42: LAB_140ac2dd5:
    43:       FUN_14031db18(lVar3,0,0);
    44:       return lVar3;
    45:     }
    46:     lVar3 = FUN_14031d8f0(0,0);

## FUN_140ac2d78 */ — reconstrucao/src/decompiled_04.c:46
reconstrucao/src/decompiled_04.c:46:11: error: assignment to ‘longlong’ {aka ‘long int’} from ‘longlong *’ {aka ‘long int *’} makes integer from pointer without a cast [-Wint-conversion]

    43:       FUN_14031db18(lVar3,0,0);
    44:       return lVar3;
    45:     }
    46:     lVar3 = FUN_14031d8f0(0,0);
    47:     if (lVar3 != 0) {
    48:       FUN_14033e740(lVar1);
    49:       *(longlong *)(lVar2 + 8) = lVar3;

## FUN_140ac2d78 */ — reconstrucao/src/decompiled_04.c:48
reconstrucao/src/decompiled_04.c:48:21: error: passing argument 1 of ‘FUN_14033e740’ makes pointer from integer without a cast [-Wint-conversion]

    45:     }
    46:     lVar3 = FUN_14031d8f0(0,0);
    47:     if (lVar3 != 0) {
    48:       FUN_14033e740(lVar1);
    49:       *(longlong *)(lVar2 + 8) = lVar3;
    50:       goto LAB_140ac2dd5;
    51:     }

## FUN_140ac2d78 */ — reconstrucao/src/decompiled_04.c:52
reconstrucao/src/decompiled_04.c:52:5: error: too few arguments to function ‘KeDelayExecutionThread’; expected 3, have 1

    49:       *(longlong *)(lVar2 + 8) = lVar3;
    50:       goto LAB_140ac2dd5;
    51:     }
    52:     KeDelayExecutionThread(0);
    53:   } while( true );
    54: }
    55: 

## FUN_140ac2e00 */ — reconstrucao/src/decompiled_04.c:159
reconstrucao/src/decompiled_04.c:159:15: error: ‘DAT_140e0a740’ undeclared (first use in this function)

    156:   undefined4 uStack_b0;
    157:   ulonglong uStack_58;
    158:   
    159:   uStack_58 = DAT_140e0a740 ^ (ulonglong)auStack_388;
    160:   pwStack_360 = (wchar_t *)0x0;
    161:   iStack_2d4 = 1;
    162:   lStack_2e0 = 0;

## FUN_140ac2e00 */ — reconstrucao/src/decompiled_04.c:206
reconstrucao/src/decompiled_04.c:206:11: error: too few arguments to function ‘FUN_1408dfac0’; expected 6, have 4

    203:   plStack_308 = param_4;
    204:   lStack_280 = param_3;
    205:   lStack_218 = param_1;
    206:   iVar5 = FUN_1408dfac0(param_2,param_3,0,0x20019);
    207:   if (iVar5 < 0) goto LAB_140ac33b1;
    208:   FUN_1406d1200(auStack_1e8,0,0x188);
    209:   uStack_120 = 0x4000000;

## FUN_140ac2e00 */ — reconstrucao/src/decompiled_04.c:208
reconstrucao/src/decompiled_04.c:208:17: error: passing argument 1 of ‘FUN_1406d1200’ from incompatible pointer type [-Wincompatible-pointer-types]

    205:   lStack_218 = param_1;
    206:   iVar5 = FUN_1408dfac0(param_2,param_3,0,0x20019);
    207:   if (iVar5 < 0) goto LAB_140ac33b1;
    208:   FUN_1406d1200(auStack_1e8,0,0x188);
    209:   uStack_120 = 0x4000000;
    210:   uStack_1e0 = 0x130;
    211:   uStack_1c8 = 0x7000000;

## FUN_140ac2e00 */ — reconstrucao/src/decompiled_04.c:208
reconstrucao/src/decompiled_04.c:208:31: error: passing argument 3 of ‘FUN_1406d1200’ makes pointer from integer without a cast [-Wint-conversion]

    205:   lStack_218 = param_1;
    206:   iVar5 = FUN_1408dfac0(param_2,param_3,0,0x20019);
    207:   if (iVar5 < 0) goto LAB_140ac33b1;
    208:   FUN_1406d1200(auStack_1e8,0,0x188);
    209:   uStack_120 = 0x4000000;
    210:   uStack_1e0 = 0x130;
    211:   uStack_1c8 = 0x7000000;

## FUN_140ac2e00 */ — reconstrucao/src/decompiled_04.c:233
reconstrucao/src/decompiled_04.c:233:28: error: implicit declaration of function ‘CONCAT71’ [-Wimplicit-function-declaration]

    230:   uStack_e8 = 0x1000000;
    231:   uStack_c8 = 0x120;
    232:   uStack_b0 = 0x1000000;
    233:   pwStack_360 = (wchar_t *)CONCAT71(pwStack_360._1_7_,1);
    234:   iVar5 = FUN_14093ded0(0xc0000000,lStack_2e0,auStack_1e8,0);
    235:   if (iVar5 < 0) goto LAB_140ac33b1;
    236:   if ((lStack_2b0 != 0) && ((ushort)uStack_2b8 < 3)) {

## FUN_140ac2e00 */ — reconstrucao/src/decompiled_04.c:233
reconstrucao/src/decompiled_04.c:233:48: error: request for member ‘_1_7_’ in something not a structure or union

    230:   uStack_e8 = 0x1000000;
    231:   uStack_c8 = 0x120;
    232:   uStack_b0 = 0x1000000;
    233:   pwStack_360 = (wchar_t *)CONCAT71(pwStack_360._1_7_,1);
    234:   iVar5 = FUN_14093ded0(0xc0000000,lStack_2e0,auStack_1e8,0);
    235:   if (iVar5 < 0) goto LAB_140ac33b1;
    236:   if ((lStack_2b0 != 0) && ((ushort)uStack_2b8 < 3)) {

## FUN_140ac2e00 */ — reconstrucao/src/decompiled_04.c:234
reconstrucao/src/decompiled_04.c:234:47: error: passing argument 3 of ‘FUN_14093ded0’ from incompatible pointer type [-Wincompatible-pointer-types]

    231:   uStack_c8 = 0x120;
    232:   uStack_b0 = 0x1000000;
    233:   pwStack_360 = (wchar_t *)CONCAT71(pwStack_360._1_7_,1);
    234:   iVar5 = FUN_14093ded0(0xc0000000,lStack_2e0,auStack_1e8,0);
    235:   if (iVar5 < 0) goto LAB_140ac33b1;
    236:   if ((lStack_2b0 != 0) && ((ushort)uStack_2b8 < 3)) {
    237:     RtlFreeAnsiString(&uStack_2b8);

## FUN_140ac2e00 */ — reconstrucao/src/decompiled_04.c:234
reconstrucao/src/decompiled_04.c:234:11: error: too few arguments to function ‘FUN_14093ded0’; expected 6, have 4

    231:   uStack_c8 = 0x120;
    232:   uStack_b0 = 0x1000000;
    233:   pwStack_360 = (wchar_t *)CONCAT71(pwStack_360._1_7_,1);
    234:   iVar5 = FUN_14093ded0(0xc0000000,lStack_2e0,auStack_1e8,0);
    235:   if (iVar5 < 0) goto LAB_140ac33b1;
    236:   if ((lStack_2b0 != 0) && ((ushort)uStack_2b8 < 3)) {
    237:     RtlFreeAnsiString(&uStack_2b8);

## FUN_140ac2e00 */ — reconstrucao/src/decompiled_04.c:251
reconstrucao/src/decompiled_04.c:251:57: error: passing argument 1 of ‘RtlGUIDFromString’ from incompatible pointer type [-Wincompatible-pointer-types]

    248:     if ((ushort)uStack_298 < 2) {
    249:       RtlFreeAnsiString(&uStack_298);
    250:     }
    251:     if ((lStack_290 == 0) || (iVar6 = RtlGUIDFromString(&uStack_298), iVar6 < 0))
    252:     goto LAB_140ac309a;
    253:   }
    254:   if ((puStack_258 != (uint *)0x0) && ((ushort)uStack_260 < 2)) {

## FUN_140ac2e00 */ — reconstrucao/src/decompiled_04.c:251
reconstrucao/src/decompiled_04.c:251:39: error: too few arguments to function ‘RtlGUIDFromString’; expected 2, have 1

    248:     if ((ushort)uStack_298 < 2) {
    249:       RtlFreeAnsiString(&uStack_298);
    250:     }
    251:     if ((lStack_290 == 0) || (iVar6 = RtlGUIDFromString(&uStack_298), iVar6 < 0))
    252:     goto LAB_140ac309a;
    253:   }
    254:   if ((puStack_258 != (uint *)0x0) && ((ushort)uStack_260 < 2)) {

## FUN_140ac2e00 */ — reconstrucao/src/decompiled_04.c:269
reconstrucao/src/decompiled_04.c:269:20: error: ‘DAT_140f8c958’ undeclared (first use in this function)

    266:   plStack_208 = plStack_2a0;
    267:   uStack_220 = 2;
    268:   uStack_21c = 3;
    269:   for (; lVar11 != DAT_140f8c958; lVar11 = *(longlong *)(lVar11 + 0x10)) {
    270:     if (*(longlong *)(*(longlong *)(lVar11 + 0x20) + 8) == DAT_140f8adc0) {
    271:       RtlInitUnicodeString(auStack_240,L"SWD\\");
    272:       cVar4 = RtlPrefixUnicodeString(auStack_240,lVar11 + 0x28);

## FUN_140ac2e00 */ — reconstrucao/src/decompiled_04.c:270
reconstrucao/src/decompiled_04.c:270:60: error: ‘DAT_140f8adc0’ undeclared (first use in this function)

    267:   uStack_220 = 2;
    268:   uStack_21c = 3;
    269:   for (; lVar11 != DAT_140f8c958; lVar11 = *(longlong *)(lVar11 + 0x10)) {
    270:     if (*(longlong *)(*(longlong *)(lVar11 + 0x20) + 8) == DAT_140f8adc0) {
    271:       RtlInitUnicodeString(auStack_240,L"SWD\\");
    272:       cVar4 = RtlPrefixUnicodeString(auStack_240,lVar11 + 0x28);
    273:       if (cVar4 != '\0') {

## FUN_140ac2e00 */ — reconstrucao/src/decompiled_04.c:271
reconstrucao/src/decompiled_04.c:271:28: error: passing argument 1 of ‘RtlInitUnicodeString’ from incompatible pointer type [-Wincompatible-pointer-types]

    268:   uStack_21c = 3;
    269:   for (; lVar11 != DAT_140f8c958; lVar11 = *(longlong *)(lVar11 + 0x10)) {
    270:     if (*(longlong *)(*(longlong *)(lVar11 + 0x20) + 8) == DAT_140f8adc0) {
    271:       RtlInitUnicodeString(auStack_240,L"SWD\\");
    272:       cVar4 = RtlPrefixUnicodeString(auStack_240,lVar11 + 0x28);
    273:       if (cVar4 != '\0') {
    274:         RtlInitUnicodeString

## FUN_140ac2e00 */ — reconstrucao/src/decompiled_04.c:272
reconstrucao/src/decompiled_04.c:272:38: error: passing argument 1 of ‘RtlPrefixUnicodeString’ from incompatible pointer type [-Wincompatible-pointer-types]

    269:   for (; lVar11 != DAT_140f8c958; lVar11 = *(longlong *)(lVar11 + 0x10)) {
    270:     if (*(longlong *)(*(longlong *)(lVar11 + 0x20) + 8) == DAT_140f8adc0) {
    271:       RtlInitUnicodeString(auStack_240,L"SWD\\");
    272:       cVar4 = RtlPrefixUnicodeString(auStack_240,lVar11 + 0x28);
    273:       if (cVar4 != '\0') {
    274:         RtlInitUnicodeString
    275:                   (&uStack_270,*(longlong *)(lVar11 + 0x30) + (auStack_240[0] >> 1 & 0x7fff) * 2);

## FUN_140ac2e00 */ — reconstrucao/src/decompiled_04.c:272
reconstrucao/src/decompiled_04.c:272:57: error: passing argument 2 of ‘RtlPrefixUnicodeString’ makes pointer from integer without a cast [-Wint-conversion]

    269:   for (; lVar11 != DAT_140f8c958; lVar11 = *(longlong *)(lVar11 + 0x10)) {
    270:     if (*(longlong *)(*(longlong *)(lVar11 + 0x20) + 8) == DAT_140f8adc0) {
    271:       RtlInitUnicodeString(auStack_240,L"SWD\\");
    272:       cVar4 = RtlPrefixUnicodeString(auStack_240,lVar11 + 0x28);
    273:       if (cVar4 != '\0') {
    274:         RtlInitUnicodeString
    275:                   (&uStack_270,*(longlong *)(lVar11 + 0x30) + (auStack_240[0] >> 1 & 0x7fff) * 2);

## FUN_140ac2e00 */ — reconstrucao/src/decompiled_04.c:272
reconstrucao/src/decompiled_04.c:272:15: error: too few arguments to function ‘RtlPrefixUnicodeString’; expected 3, have 2

    269:   for (; lVar11 != DAT_140f8c958; lVar11 = *(longlong *)(lVar11 + 0x10)) {
    270:     if (*(longlong *)(*(longlong *)(lVar11 + 0x20) + 8) == DAT_140f8adc0) {
    271:       RtlInitUnicodeString(auStack_240,L"SWD\\");
    272:       cVar4 = RtlPrefixUnicodeString(auStack_240,lVar11 + 0x28);
    273:       if (cVar4 != '\0') {
    274:         RtlInitUnicodeString
    275:                   (&uStack_270,*(longlong *)(lVar11 + 0x30) + (auStack_240[0] >> 1 & 0x7fff) * 2);

## FUN_140ac2e00 */ — reconstrucao/src/decompiled_04.c:275
reconstrucao/src/decompiled_04.c:275:20: error: passing argument 1 of ‘RtlInitUnicodeString’ from incompatible pointer type [-Wincompatible-pointer-types]

    272:       cVar4 = RtlPrefixUnicodeString(auStack_240,lVar11 + 0x28);
    273:       if (cVar4 != '\0') {
    274:         RtlInitUnicodeString
    275:                   (&uStack_270,*(longlong *)(lVar11 + 0x30) + (auStack_240[0] >> 1 & 0x7fff) * 2);
    276:         RtlInitUnicodeString(auStack_240,L"DRIVERENUM");
    277:         cVar4 = RtlPrefixUnicodeString(auStack_240);
    278:         if (cVar4 != '\0') {

## FUN_140ac2e00 */ — reconstrucao/src/decompiled_04.c:275
reconstrucao/src/decompiled_04.c:275:61: error: passing argument 2 of ‘RtlInitUnicodeString’ makes pointer from integer without a cast [-Wint-conversion]

    272:       cVar4 = RtlPrefixUnicodeString(auStack_240,lVar11 + 0x28);
    273:       if (cVar4 != '\0') {
    274:         RtlInitUnicodeString
    275:                   (&uStack_270,*(longlong *)(lVar11 + 0x30) + (auStack_240[0] >> 1 & 0x7fff) * 2);
    276:         RtlInitUnicodeString(auStack_240,L"DRIVERENUM");
    277:         cVar4 = RtlPrefixUnicodeString(auStack_240);
    278:         if (cVar4 != '\0') {

## FUN_140ac2e00 */ — reconstrucao/src/decompiled_04.c:276
reconstrucao/src/decompiled_04.c:276:30: error: passing argument 1 of ‘RtlInitUnicodeString’ from incompatible pointer type [-Wincompatible-pointer-types]

    273:       if (cVar4 != '\0') {
    274:         RtlInitUnicodeString
    275:                   (&uStack_270,*(longlong *)(lVar11 + 0x30) + (auStack_240[0] >> 1 & 0x7fff) * 2);
    276:         RtlInitUnicodeString(auStack_240,L"DRIVERENUM");
    277:         cVar4 = RtlPrefixUnicodeString(auStack_240);
    278:         if (cVar4 != '\0') {
    279:           if (*(short *)(lStack_268 + (auStack_240[0] >> 1 & 0x7fff) * 2) == 0x5c) {

## FUN_140ac2e00 */ — reconstrucao/src/decompiled_04.c:277
reconstrucao/src/decompiled_04.c:277:40: error: passing argument 1 of ‘RtlPrefixUnicodeString’ from incompatible pointer type [-Wincompatible-pointer-types]

    274:         RtlInitUnicodeString
    275:                   (&uStack_270,*(longlong *)(lVar11 + 0x30) + (auStack_240[0] >> 1 & 0x7fff) * 2);
    276:         RtlInitUnicodeString(auStack_240,L"DRIVERENUM");
    277:         cVar4 = RtlPrefixUnicodeString(auStack_240);
    278:         if (cVar4 != '\0') {
    279:           if (*(short *)(lStack_268 + (auStack_240[0] >> 1 & 0x7fff) * 2) == 0x5c) {
    280:             if (iVar16 == 0) {

## FUN_140ac2e00 */ — reconstrucao/src/decompiled_04.c:277
reconstrucao/src/decompiled_04.c:277:17: error: too few arguments to function ‘RtlPrefixUnicodeString’; expected 3, have 1

    274:         RtlInitUnicodeString
    275:                   (&uStack_270,*(longlong *)(lVar11 + 0x30) + (auStack_240[0] >> 1 & 0x7fff) * 2);
    276:         RtlInitUnicodeString(auStack_240,L"DRIVERENUM");
    277:         cVar4 = RtlPrefixUnicodeString(auStack_240);
    278:         if (cVar4 != '\0') {
    279:           if (*(short *)(lStack_268 + (auStack_240[0] >> 1 & 0x7fff) * 2) == 0x5c) {
    280:             if (iVar16 == 0) {

## FUN_140ac2e00 */ — reconstrucao/src/decompiled_04.c:281
reconstrucao/src/decompiled_04.c:281:48: error: passing argument 2 of ‘FUN_140a3034c’ makes integer from pointer without a cast [-Wint-conversion]

    278:         if (cVar4 != '\0') {
    279:           if (*(short *)(lStack_268 + (auStack_240[0] >> 1 & 0x7fff) * 2) == 0x5c) {
    280:             if (iVar16 == 0) {
    281:               iVar5 = FUN_140a3034c(lStack_2b0,plStack_2a0);
    282:               if (iVar5 < 0) goto LAB_140ac33a4;
    283:               if ((auStack_2f0[0] & 8) == 0) {
    284:                 RtlInitUnicodeString(&uStack_270,&DAT_140019790);

## FUN_140ac2e00 */ — reconstrucao/src/decompiled_04.c:281
reconstrucao/src/decompiled_04.c:281:23: error: too few arguments to function ‘FUN_140a3034c’; expected 3, have 2

    278:         if (cVar4 != '\0') {
    279:           if (*(short *)(lStack_268 + (auStack_240[0] >> 1 & 0x7fff) * 2) == 0x5c) {
    280:             if (iVar16 == 0) {
    281:               iVar5 = FUN_140a3034c(lStack_2b0,plStack_2a0);
    282:               if (iVar5 < 0) goto LAB_140ac33a4;
    283:               if ((auStack_2f0[0] & 8) == 0) {
    284:                 RtlInitUnicodeString(&uStack_270,&DAT_140019790);

## FUN_140ac2e00 */ — reconstrucao/src/decompiled_04.c:284
reconstrucao/src/decompiled_04.c:284:51: error: ‘DAT_140019790’ undeclared (first use in this function)

    281:               iVar5 = FUN_140a3034c(lStack_2b0,plStack_2a0);
    282:               if (iVar5 < 0) goto LAB_140ac33a4;
    283:               if ((auStack_2f0[0] & 8) == 0) {
    284:                 RtlInitUnicodeString(&uStack_270,&DAT_140019790);
    285:                 iVar5 = RtlHashUnicodeString(&uStack_270,1,0,&iStack_2f8);
    286:                 if (iVar5 < 0) goto LAB_140ac33a4;
    287:                 iVar16 = iStack_2f4 + iStack_2f8;

## FUN_140ac2e00 */ — reconstrucao/src/decompiled_04.c:284
reconstrucao/src/decompiled_04.c:284:38: error: passing argument 1 of ‘RtlInitUnicodeString’ from incompatible pointer type [-Wincompatible-pointer-types]

    281:               iVar5 = FUN_140a3034c(lStack_2b0,plStack_2a0);
    282:               if (iVar5 < 0) goto LAB_140ac33a4;
    283:               if ((auStack_2f0[0] & 8) == 0) {
    284:                 RtlInitUnicodeString(&uStack_270,&DAT_140019790);
    285:                 iVar5 = RtlHashUnicodeString(&uStack_270,1,0,&iStack_2f8);
    286:                 if (iVar5 < 0) goto LAB_140ac33a4;
    287:                 iVar16 = iStack_2f4 + iStack_2f8;

## FUN_140ac2e00 */ — reconstrucao/src/decompiled_04.c:285
reconstrucao/src/decompiled_04.c:285:46: error: passing argument 1 of ‘RtlHashUnicodeString’ from incompatible pointer type [-Wincompatible-pointer-types]

    282:               if (iVar5 < 0) goto LAB_140ac33a4;
    283:               if ((auStack_2f0[0] & 8) == 0) {
    284:                 RtlInitUnicodeString(&uStack_270,&DAT_140019790);
    285:                 iVar5 = RtlHashUnicodeString(&uStack_270,1,0,&iStack_2f8);
    286:                 if (iVar5 < 0) goto LAB_140ac33a4;
    287:                 iVar16 = iStack_2f4 + iStack_2f8;
    288:               }

## FUN_140ac2e00 */ — reconstrucao/src/decompiled_04.c:292
reconstrucao/src/decompiled_04.c:292:49: error: ‘DAT_140019778’ undeclared (first use in this function); did you mean ‘FUN_140b19778’?

    289:               else {
    290:                 iVar16 = iStack_2f4;
    291:               }
    292:               RtlInitUnicodeString(&uStack_270,&DAT_140019778);
    293:               iVar5 = RtlHashUnicodeString(&uStack_270,1,0,&iStack_2f8);
    294:               if (iVar5 < 0) goto LAB_140ac33a4;
    295:               iVar16 = iVar16 + iStack_2f8;

## FUN_140ac2e00 */ — reconstrucao/src/decompiled_04.c:292
reconstrucao/src/decompiled_04.c:292:36: error: passing argument 1 of ‘RtlInitUnicodeString’ from incompatible pointer type [-Wincompatible-pointer-types]

    289:               else {
    290:                 iVar16 = iStack_2f4;
    291:               }
    292:               RtlInitUnicodeString(&uStack_270,&DAT_140019778);
    293:               iVar5 = RtlHashUnicodeString(&uStack_270,1,0,&iStack_2f8);
    294:               if (iVar5 < 0) goto LAB_140ac33a4;
    295:               iVar16 = iVar16 + iStack_2f8;

## FUN_140ac2e00 */ — reconstrucao/src/decompiled_04.c:293
reconstrucao/src/decompiled_04.c:293:44: error: passing argument 1 of ‘RtlHashUnicodeString’ from incompatible pointer type [-Wincompatible-pointer-types]

    290:                 iVar16 = iStack_2f4;
    291:               }
    292:               RtlInitUnicodeString(&uStack_270,&DAT_140019778);
    293:               iVar5 = RtlHashUnicodeString(&uStack_270,1,0,&iStack_2f8);
    294:               if (iVar5 < 0) goto LAB_140ac33a4;
    295:               iVar16 = iVar16 + iStack_2f8;
    296:               iStack_2f4 = iVar16;

## FUN_140ac2e00 */ — reconstrucao/src/decompiled_04.c:302
reconstrucao/src/decompiled_04.c:302:37: error: too few arguments to function ‘ExAllocatePool2’; expected 3, have 1

    299:             if (*(int *)(lVar11 + 0x2ac) == iVar16) {
    300:               if (pwVar7 == (wchar_t *)0x0) {
    301:                 uStack_2d8 = 0x800;
    302:                 pwVar7 = (wchar_t *)ExAllocatePool2(0x100);
    303:                 if (pwVar7 == (wchar_t *)0x0) goto LAB_140ac339f;
    304:               }
    305:               uVar3 = uStack_2d8;

## FUN_140ac2e00 */ — reconstrucao/src/decompiled_04.c:316
reconstrucao/src/decompiled_04.c:316:39: error: ‘DAT_140e66448’ undeclared (first use in this function)

    313:                 plStack_368 = (longlong *)&iStack_2d4;
    314:                 auStack_318[0] = uVar3;
    315:                 pwStack_360 = pwVar7;
    316:                 iVar5 = FUN_1408ddb20(DAT_140e66448,*(undefined8 *)(lVar11 + 0x30),0,*puStack_288);
    317:                 if (((iVar5 < 0) || (iStack_2d4 != 7)) || (auStack_318[0] < 2)) {
    318:                   *pwVar7 = L'\0';
    319:                   iVar5 = 0;

## FUN_140ac2e00 */ — reconstrucao/src/decompiled_04.c:316
reconstrucao/src/decompiled_04.c:316:25: error: too few arguments to function ‘FUN_1408ddb20’; expected 8, have 4

    313:                 plStack_368 = (longlong *)&iStack_2d4;
    314:                 auStack_318[0] = uVar3;
    315:                 pwStack_360 = pwVar7;
    316:                 iVar5 = FUN_1408ddb20(DAT_140e66448,*(undefined8 *)(lVar11 + 0x30),0,*puStack_288);
    317:                 if (((iVar5 < 0) || (iStack_2d4 != 7)) || (auStack_318[0] < 2)) {
    318:                   *pwVar7 = L'\0';
    319:                   iVar5 = 0;

## FUN_140ac2e00 */ — reconstrucao/src/decompiled_04.c:340
reconstrucao/src/decompiled_04.c:340:27: error: too few arguments to function ‘FUN_1407473cc’; expected 3, have 0

    337:                   if (*pwVar7 != L'\0') break;
    338:                 }
    339:                 else {
    340:                   cVar4 = FUN_1407473cc();
    341:                   if (cVar4 == '\0') break;
    342:                 }
    343:                 puStack_288 = puVar14 + 1;

