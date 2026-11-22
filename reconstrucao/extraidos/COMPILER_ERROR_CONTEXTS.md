# Contextos dos primeiros erros de compilação

Cada erro está associado ao marcador de função Ghidra mais próximo. O contexto serve para reconstrução orientada por evidência.

## FUN_140200008 */ — reconstrucao/src/decompiled_01.c:106
reconstrucao/src/decompiled_01.c:106:15: error: ‘DAT_140e0a740’ undeclared (first use in this function)

    103:   undefined8 uStack_20;
    104:   ulonglong uStack_18;
    105:   
    106:   uStack_18 = DAT_140e0a740 ^ (ulonglong)auStack_2f8;
    107:   uStack_28 = param_36;
    108:   uStack_38 = param_35;
    109:   puStack_58 = auStack_40;

## FUN_140200008 */ — reconstrucao/src/decompiled_01.c:200
reconstrucao/src/decompiled_01.c:200:3: error: implicit declaration of function ‘FUN_1403a0f70’ [-Wimplicit-function-declaration]

    197:   uStack_280 = 4;
    198:   uStack_290 = 4;
    199:   uStack_2a0 = 8;
    200:   FUN_1403a0f70(&DAT_140e0a590,param_2,0,0);
    201:   return;
    202: }
    203: 

## FUN_140200008 */ — reconstrucao/src/decompiled_01.c:200
reconstrucao/src/decompiled_01.c:200:18: error: ‘DAT_140e0a590’ undeclared (first use in this function)

    197:   uStack_280 = 4;
    198:   uStack_290 = 4;
    199:   uStack_2a0 = 8;
    200:   FUN_1403a0f70(&DAT_140e0a590,param_2,0,0);
    201:   return;
    202: }
    203: 

## FUN_140200740 */ — reconstrucao/src/decompiled_01.c:335
reconstrucao/src/decompiled_01.c:335:7: error: ‘DAT_140fc7d20’ undeclared (first use in this function)

    332:   undefined8 auStackX_10 [3];
    333:   
    334:   auStackX_10[0] = 0;
    335:   if (DAT_140fc7d20 != 0) {
    336:     FUN_1404f6e6c(in_CR8,2);
    337:   }
    338:   FUN_1402007a8(param_1,auStackX_10);

## FUN_140200740 */ — reconstrucao/src/decompiled_01.c:336
reconstrucao/src/decompiled_01.c:336:5: error: implicit declaration of function ‘FUN_1404f6e6c’ [-Wimplicit-function-declaration]

    333:   
    334:   auStackX_10[0] = 0;
    335:   if (DAT_140fc7d20 != 0) {
    336:     FUN_1404f6e6c(in_CR8,2);
    337:   }
    338:   FUN_1402007a8(param_1,auStackX_10);
    339:   FUN_140271070(FiberData,auStackX_10);

## FUN_140200740 */ — reconstrucao/src/decompiled_01.c:338
reconstrucao/src/decompiled_01.c:338:3: error: implicit declaration of function ‘FUN_1402007a8’; did you mean ‘FUN_140200740’? [-Wimplicit-function-declaration]

    335:   if (DAT_140fc7d20 != 0) {
    336:     FUN_1404f6e6c(in_CR8,2);
    337:   }
    338:   FUN_1402007a8(param_1,auStackX_10);
    339:   FUN_140271070(FiberData,auStackX_10);
    340:   return;
    341: }

## FUN_140200740 */ — reconstrucao/src/decompiled_01.c:339
reconstrucao/src/decompiled_01.c:339:3: error: implicit declaration of function ‘FUN_140271070’; did you mean ‘FUN_140200740’? [-Wimplicit-function-declaration]

    336:     FUN_1404f6e6c(in_CR8,2);
    337:   }
    338:   FUN_1402007a8(param_1,auStackX_10);
    339:   FUN_140271070(FiberData,auStackX_10);
    340:   return;
    341: }
    342: 

## FUN_140200740 */ — reconstrucao/src/decompiled_01.c:339
reconstrucao/src/decompiled_01.c:339:17: error: ‘FiberData’ undeclared (first use in this function)

    336:     FUN_1404f6e6c(in_CR8,2);
    337:   }
    338:   FUN_1402007a8(param_1,auStackX_10);
    339:   FUN_140271070(FiberData,auStackX_10);
    340:   return;
    341: }
    342: 

## FUN_1402007a8 */ — reconstrucao/src/decompiled_01.c:355
reconstrucao/src/decompiled_01.c:355:5: error: implicit declaration of function ‘LOCK’ [-Wimplicit-function-declaration]

    352:   
    353:   uVar4 = 0;
    354:   while( true ) {
    355:     LOCK();
    356:     puVar1 = (ulonglong *)(param_1 + 0x40);
    357:     uVar2 = *puVar1;
    358:     *puVar1 = *puVar1 | 1;

## FUN_1402007a8 */ — reconstrucao/src/decompiled_01.c:359
reconstrucao/src/decompiled_01.c:359:5: error: implicit declaration of function ‘UNLOCK’ [-Wimplicit-function-declaration]

    356:     puVar1 = (ulonglong *)(param_1 + 0x40);
    357:     uVar2 = *puVar1;
    358:     *puVar1 = *puVar1 | 1;
    359:     UNLOCK();
    360:     if ((uVar2 & 1) == 0) break;
    361:     do {
    362:       uVar4 = uVar4 + 1;

## FUN_1402007a8 */ — reconstrucao/src/decompiled_01.c:363
reconstrucao/src/decompiled_01.c:363:14: error: ‘DAT_140fc62ac’ undeclared (first use in this function)

    360:     if ((uVar2 & 1) == 0) break;
    361:     do {
    362:       uVar4 = uVar4 + 1;
    363:       if ((((DAT_140fc62ac & uVar4) == 0) && ((DAT_140fc7ab8 & 0x40) != 0)) &&
    364:          (cVar3 = FUN_14020cb70(), cVar3 != '\0')) {
    365:         FUN_14020cb40(uVar4);
    366:       }

## FUN_1402007a8 */ — reconstrucao/src/decompiled_01.c:363
reconstrucao/src/decompiled_01.c:363:48: error: ‘DAT_140fc7ab8’ undeclared (first use in this function)

    360:     if ((uVar2 & 1) == 0) break;
    361:     do {
    362:       uVar4 = uVar4 + 1;
    363:       if ((((DAT_140fc62ac & uVar4) == 0) && ((DAT_140fc7ab8 & 0x40) != 0)) &&
    364:          (cVar3 = FUN_14020cb70(), cVar3 != '\0')) {
    365:         FUN_14020cb40(uVar4);
    366:       }

## FUN_1402007a8 */ — reconstrucao/src/decompiled_01.c:364
reconstrucao/src/decompiled_01.c:364:19: error: implicit declaration of function ‘FUN_14020cb70’; did you mean ‘FUN_140200740’? [-Wimplicit-function-declaration]

    361:     do {
    362:       uVar4 = uVar4 + 1;
    363:       if ((((DAT_140fc62ac & uVar4) == 0) && ((DAT_140fc7ab8 & 0x40) != 0)) &&
    364:          (cVar3 = FUN_14020cb70(), cVar3 != '\0')) {
    365:         FUN_14020cb40(uVar4);
    366:       }
    367:     } while (*(longlong *)(param_1 + 0x40) != 0);

## FUN_1402007a8 */ — reconstrucao/src/decompiled_01.c:365
reconstrucao/src/decompiled_01.c:365:9: error: implicit declaration of function ‘FUN_14020cb40’; did you mean ‘FUN_140200740’? [-Wimplicit-function-declaration]

    362:       uVar4 = uVar4 + 1;
    363:       if ((((DAT_140fc62ac & uVar4) == 0) && ((DAT_140fc7ab8 & 0x40) != 0)) &&
    364:          (cVar3 = FUN_14020cb70(), cVar3 != '\0')) {
    365:         FUN_14020cb40(uVar4);
    366:       }
    367:     } while (*(longlong *)(param_1 + 0x40) != 0);
    368:   }

## FUN_1402007a8 */ — reconstrucao/src/decompiled_01.c:369
reconstrucao/src/decompiled_01.c:369:3: error: implicit declaration of function ‘FUN_140200820’; did you mean ‘FUN_140200740’? [-Wimplicit-function-declaration]

    366:       }
    367:     } while (*(longlong *)(param_1 + 0x40) != 0);
    368:   }
    369:   FUN_140200820(param_1,param_2);
    370:   return;
    371: }
    372: 

## FUN_140200820 */ — reconstrucao/src/decompiled_01.c:395
reconstrucao/src/decompiled_01.c:395:5: error: implicit declaration of function ‘FUN_14020bfa0’; did you mean ‘FUN_140200820’? [-Wimplicit-function-declaration]

    392:   uStack_48 = 0;
    393:   uStack_40 = 0;
    394:   if ((*(uint *)(param_1 + 0x74) & 8) == 0) {
    395:     FUN_14020bfa0(0,&uStackX_20,&uStackX_18,auStackX_8,&uStack_48);
    396:     cVar2 = FUN_14034f180(param_1);
    397:     iVar3 = *(int *)(param_1 + 0x24c);
    398:     FUN_14020a0c8(param_1,*(undefined8 *)(param_1 + 0x240));

## FUN_140200820 */ — reconstrucao/src/decompiled_01.c:396
reconstrucao/src/decompiled_01.c:396:13: error: implicit declaration of function ‘FUN_14034f180’ [-Wimplicit-function-declaration]

    393:   uStack_40 = 0;
    394:   if ((*(uint *)(param_1 + 0x74) & 8) == 0) {
    395:     FUN_14020bfa0(0,&uStackX_20,&uStackX_18,auStackX_8,&uStack_48);
    396:     cVar2 = FUN_14034f180(param_1);
    397:     iVar3 = *(int *)(param_1 + 0x24c);
    398:     FUN_14020a0c8(param_1,*(undefined8 *)(param_1 + 0x240));
    399:   }

## FUN_140200820 */ — reconstrucao/src/decompiled_01.c:398
reconstrucao/src/decompiled_01.c:398:5: error: implicit declaration of function ‘FUN_14020a0c8’; did you mean ‘FUN_140200008’? [-Wimplicit-function-declaration]

    395:     FUN_14020bfa0(0,&uStackX_20,&uStackX_18,auStackX_8,&uStack_48);
    396:     cVar2 = FUN_14034f180(param_1);
    397:     iVar3 = *(int *)(param_1 + 0x24c);
    398:     FUN_14020a0c8(param_1,*(undefined8 *)(param_1 + 0x240));
    399:   }
    400:   else {
    401:     *(undefined8 *)(param_1 + 0x40) = 0;

## FUN_140200820 */ — reconstrucao/src/decompiled_01.c:404
reconstrucao/src/decompiled_01.c:404:15: error: ‘DAT_140fc7b04’ undeclared (first use in this function)

    401:     *(undefined8 *)(param_1 + 0x40) = 0;
    402:     iVar3 = iVar1;
    403:   }
    404:   if ((((uint)DAT_140fc7b04 & 0x1000) != 0) && (cVar2 != '\0')) {
    405:     FUN_1403c0604(param_1,*(undefined2 *)(param_1 + 0x248),
    406:                   CONCAT31((uint3)(*(uint *)(param_1 + 0x74) >> 0xb),
    407:                            (char)(*(uint *)(param_1 + 0x74) >> 3)) & 0xffffff01,0,

## FUN_140200820 */ — reconstrucao/src/decompiled_01.c:405
reconstrucao/src/decompiled_01.c:405:5: error: implicit declaration of function ‘FUN_1403c0604’; did you mean ‘FUN_140200740’? [-Wimplicit-function-declaration]

    402:     iVar3 = iVar1;
    403:   }
    404:   if ((((uint)DAT_140fc7b04 & 0x1000) != 0) && (cVar2 != '\0')) {
    405:     FUN_1403c0604(param_1,*(undefined2 *)(param_1 + 0x248),
    406:                   CONCAT31((uint3)(*(uint *)(param_1 + 0x74) >> 0xb),
    407:                            (char)(*(uint *)(param_1 + 0x74) >> 3)) & 0xffffff01,0,
    408:                   *(undefined8 *)(param_1 + 0x240),0x536);

## FUN_140200820 */ — reconstrucao/src/decompiled_01.c:406
reconstrucao/src/decompiled_01.c:406:19: error: implicit declaration of function ‘CONCAT31’ [-Wimplicit-function-declaration]

    403:   }
    404:   if ((((uint)DAT_140fc7b04 & 0x1000) != 0) && (cVar2 != '\0')) {
    405:     FUN_1403c0604(param_1,*(undefined2 *)(param_1 + 0x248),
    406:                   CONCAT31((uint3)(*(uint *)(param_1 + 0x74) >> 0xb),
    407:                            (char)(*(uint *)(param_1 + 0x74) >> 3)) & 0xffffff01,0,
    408:                   *(undefined8 *)(param_1 + 0x240),0x536);
    409:   }

## FUN_140200820 */ — reconstrucao/src/decompiled_01.c:406
reconstrucao/src/decompiled_01.c:406:29: error: ‘uint3’ undeclared (first use in this function); did you mean ‘uint32’?

    403:   }
    404:   if ((((uint)DAT_140fc7b04 & 0x1000) != 0) && (cVar2 != '\0')) {
    405:     FUN_1403c0604(param_1,*(undefined2 *)(param_1 + 0x248),
    406:                   CONCAT31((uint3)(*(uint *)(param_1 + 0x74) >> 0xb),
    407:                            (char)(*(uint *)(param_1 + 0x74) >> 3)) & 0xffffff01,0,
    408:                   *(undefined8 *)(param_1 + 0x240),0x536);
    409:   }

## FUN_140200820 */ — reconstrucao/src/decompiled_01.c:410
reconstrucao/src/decompiled_01.c:410:29: error: ‘DAT_140fc7b10’ undeclared (first use in this function)

    407:                            (char)(*(uint *)(param_1 + 0x74) >> 3)) & 0xffffff01,0,
    408:                   *(undefined8 *)(param_1 + 0x240),0x536);
    409:   }
    410:   if ((iVar1 != iVar3) && ((DAT_140fc7b10 & 0x8000000) != 0)) {
    411:     FUN_1403be528(param_1,0x546,iVar1,iVar3);
    412:   }
    413:   return;

## FUN_140200820 */ — reconstrucao/src/decompiled_01.c:411
reconstrucao/src/decompiled_01.c:411:5: error: implicit declaration of function ‘FUN_1403be528’ [-Wimplicit-function-declaration]

    408:                   *(undefined8 *)(param_1 + 0x240),0x536);
    409:   }
    410:   if ((iVar1 != iVar3) && ((DAT_140fc7b10 & 0x8000000) != 0)) {
    411:     FUN_1403be528(param_1,0x546,iVar1,iVar3);
    412:   }
    413:   return;
    414: }

## FUN_140200950 */ — reconstrucao/src/decompiled_01.c:428
reconstrucao/src/decompiled_01.c:428:7: error: ‘DAT_140fc7ad0’ undeclared (first use in this function)

    425:   ulonglong uVar5;
    426:   ulonglong uVar6;
    427:   
    428:   if (DAT_140fc7ad0 != (uint *)0x0) {
    429:     uVar2 = KeAcquireSpinLockRaiseToDpc(&DAT_140f0cf28);
    430:     uVar6 = 0;
    431:     if (*DAT_140fc7ad0 != 0) {

## FUN_140200950 */ — reconstrucao/src/decompiled_01.c:429
reconstrucao/src/decompiled_01.c:429:13: error: implicit declaration of function ‘KeAcquireSpinLockRaiseToDpc’ [-Wimplicit-function-declaration]

    426:   ulonglong uVar6;
    427:   
    428:   if (DAT_140fc7ad0 != (uint *)0x0) {
    429:     uVar2 = KeAcquireSpinLockRaiseToDpc(&DAT_140f0cf28);
    430:     uVar6 = 0;
    431:     if (*DAT_140fc7ad0 != 0) {
    432:       do {

## FUN_140200950 */ — reconstrucao/src/decompiled_01.c:429
reconstrucao/src/decompiled_01.c:429:42: error: ‘DAT_140f0cf28’ undeclared (first use in this function)

    426:   ulonglong uVar6;
    427:   
    428:   if (DAT_140fc7ad0 != (uint *)0x0) {
    429:     uVar2 = KeAcquireSpinLockRaiseToDpc(&DAT_140f0cf28);
    430:     uVar6 = 0;
    431:     if (*DAT_140fc7ad0 != 0) {
    432:       do {

## FUN_140200950 */ — reconstrucao/src/decompiled_01.c:444
reconstrucao/src/decompiled_01.c:444:9: error: implicit declaration of function ‘FUN_140201790’; did you mean ‘FUN_140200740’? [-Wimplicit-function-declaration]

    441:             uVar5 = uVar4;
    442:           } while (uVar3 < puVar1[uVar6 * 0x70 + 0x1b]);
    443:         }
    444:         FUN_140201790(puVar1 + uVar6 * 0x70 + 0x14,CONCAT71((int7)(uVar4 >> 8),4),1);
    445:         uVar3 = (int)uVar6 + 1;
    446:         uVar6 = (ulonglong)uVar3;
    447:       } while (uVar3 < *DAT_140fc7ad0);

## FUN_140200950 */ — reconstrucao/src/decompiled_01.c:444
reconstrucao/src/decompiled_01.c:444:52: error: implicit declaration of function ‘CONCAT71’ [-Wimplicit-function-declaration]

    441:             uVar5 = uVar4;
    442:           } while (uVar3 < puVar1[uVar6 * 0x70 + 0x1b]);
    443:         }
    444:         FUN_140201790(puVar1 + uVar6 * 0x70 + 0x14,CONCAT71((int7)(uVar4 >> 8),4),1);
    445:         uVar3 = (int)uVar6 + 1;
    446:         uVar6 = (ulonglong)uVar3;
    447:       } while (uVar3 < *DAT_140fc7ad0);

## FUN_140200950 */ — reconstrucao/src/decompiled_01.c:444
reconstrucao/src/decompiled_01.c:444:62: error: ‘int7’ undeclared (first use in this function); did you mean ‘int’?

    441:             uVar5 = uVar4;
    442:           } while (uVar3 < puVar1[uVar6 * 0x70 + 0x1b]);
    443:         }
    444:         FUN_140201790(puVar1 + uVar6 * 0x70 + 0x14,CONCAT71((int7)(uVar4 >> 8),4),1);
    445:         uVar3 = (int)uVar6 + 1;
    446:         uVar6 = (ulonglong)uVar3;
    447:       } while (uVar3 < *DAT_140fc7ad0);

## FUN_140200950 */ — reconstrucao/src/decompiled_01.c:449
reconstrucao/src/decompiled_01.c:449:5: error: implicit declaration of function ‘KeReleaseSpinLock’ [-Wimplicit-function-declaration]

    446:         uVar6 = (ulonglong)uVar3;
    447:       } while (uVar3 < *DAT_140fc7ad0);
    448:     }
    449:     KeReleaseSpinLock(&DAT_140f0cf28,uVar2);
    450:   }
    451:   return;
    452: }

## FUN_1402009ec */ — reconstrucao/src/decompiled_01.c:456
reconstrucao/src/decompiled_01.c:456:1: error: return type defaults to ‘int’ [-Wimplicit-int]

    453: 
    454: /* Ghidra label: FUN_1402009ec */
    455: /* Ghidra address: 1402009ec */
    456: FUN_1402009ec(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
    457:              undefined1 param_5)
    458: 
    459: {

## FUN_1402009ec */ — reconstrucao/src/decompiled_01.c:463
reconstrucao/src/decompiled_01.c:463:3: error: implicit declaration of function ‘FUN_140200a58’; did you mean ‘FUN_140200950’? [-Wimplicit-function-declaration]

    460:   undefined4 uVar1;
    461:   
    462:   param_5 = 0;
    463:   FUN_140200a58(DAT_140fc7c20,&param_5);
    464:   uVar1 = FUN_140201958(param_1,param_2,0,param_4,0);
    465:   FUN_1404f6c6c(DAT_140fc7c20,param_5);
    466:   return uVar1;

## FUN_1402009ec */ — reconstrucao/src/decompiled_01.c:463
reconstrucao/src/decompiled_01.c:463:17: error: ‘DAT_140fc7c20’ undeclared (first use in this function)

    460:   undefined4 uVar1;
    461:   
    462:   param_5 = 0;
    463:   FUN_140200a58(DAT_140fc7c20,&param_5);
    464:   uVar1 = FUN_140201958(param_1,param_2,0,param_4,0);
    465:   FUN_1404f6c6c(DAT_140fc7c20,param_5);
    466:   return uVar1;

## FUN_1402009ec */ — reconstrucao/src/decompiled_01.c:464
reconstrucao/src/decompiled_01.c:464:11: error: implicit declaration of function ‘FUN_140201958’; did you mean ‘FUN_140200950’? [-Wimplicit-function-declaration]

    461:   
    462:   param_5 = 0;
    463:   FUN_140200a58(DAT_140fc7c20,&param_5);
    464:   uVar1 = FUN_140201958(param_1,param_2,0,param_4,0);
    465:   FUN_1404f6c6c(DAT_140fc7c20,param_5);
    466:   return uVar1;
    467: }

## FUN_1402009ec */ — reconstrucao/src/decompiled_01.c:465
reconstrucao/src/decompiled_01.c:465:3: error: implicit declaration of function ‘FUN_1404f6c6c’ [-Wimplicit-function-declaration]

    462:   param_5 = 0;
    463:   FUN_140200a58(DAT_140fc7c20,&param_5);
    464:   uVar1 = FUN_140201958(param_1,param_2,0,param_4,0);
    465:   FUN_1404f6c6c(DAT_140fc7c20,param_5);
    466:   return uVar1;
    467: }
    468: 

## FUN_140200a58 */ — reconstrucao/src/decompiled_01.c:476
reconstrucao/src/decompiled_01.c:476:7: error: ‘DAT_140fc7d20’ undeclared (first use in this function)

    473: {
    474:   undefined1 in_CR8;
    475:   
    476:   if (DAT_140fc7d20 != 0) {
    477:     FUN_1404f6e6c(in_CR8,2);
    478:   }
    479:   *param_2 = in_CR8;

## FUN_140200a58 */ — reconstrucao/src/decompiled_01.c:480
reconstrucao/src/decompiled_01.c:480:3: error: implicit declaration of function ‘KeAcquireSpinLockAtDpcLevel’ [-Wimplicit-function-declaration]

    477:     FUN_1404f6e6c(in_CR8,2);
    478:   }
    479:   *param_2 = in_CR8;
    480:   KeAcquireSpinLockAtDpcLevel(param_1 + 8);
    481:   return;
    482: }
    483: 

## KeSetSelectedCpuSetsThread */ — reconstrucao/src/decompiled_01.c:502
reconstrucao/src/decompiled_01.c:502:11: error: implicit declaration of function ‘FUN_140201918’; did you mean ‘FUN_140200a58’? [-Wimplicit-function-declaration]

    499:   
    500:                     /* 0x200ab0  1461  KeSetSelectedCpuSetsThread */
    501:   auStackX_20[0] = 0;
    502:   uVar5 = FUN_140201918(param_3);
    503:   if (-1 < (int)uVar5) {
    504:     auStack_38[0] = 0;
    505:     plVar7 = (longlong *)(param_1 + 0x690);

## KeSetSelectedCpuSetsThread */ — reconstrucao/src/decompiled_01.c:512
reconstrucao/src/decompiled_01.c:512:15: error: ‘DAT_140fc6014’ undeclared (first use in this function)

    509:     }
    510:     else {
    511:       plVar7 = (longlong *)*plVar7;
    512:       uVar6 = DAT_140fc6014;
    513:     }
    514:     FUN_14037eee0(lVar3,auStackX_20);
    515:     uVar8 = 0;

## KeSetSelectedCpuSetsThread */ — reconstrucao/src/decompiled_01.c:514
reconstrucao/src/decompiled_01.c:514:5: error: implicit declaration of function ‘FUN_14037eee0’ [-Wimplicit-function-declaration]

    511:       plVar7 = (longlong *)*plVar7;
    512:       uVar6 = DAT_140fc6014;
    513:     }
    514:     FUN_14037eee0(lVar3,auStackX_20);
    515:     uVar8 = 0;
    516:     while( true ) {
    517:       LOCK();

## KeSetSelectedCpuSetsThread */ — reconstrucao/src/decompiled_01.c:525
reconstrucao/src/decompiled_01.c:525:16: error: ‘DAT_140fc62ac’ undeclared (first use in this function)

    522:       if ((uVar2 & 1) == 0) break;
    523:       do {
    524:         uVar8 = uVar8 + 1;
    525:         if ((((DAT_140fc62ac & uVar8) == 0) && ((DAT_140fc7ab8 & 0x40) != 0)) &&
    526:            (cVar4 = FUN_14020cb70(), cVar4 != '\0')) {
    527:           FUN_14020cb40(uVar8);
    528:         }

## KeSetSelectedCpuSetsThread */ — reconstrucao/src/decompiled_01.c:525
reconstrucao/src/decompiled_01.c:525:50: error: ‘DAT_140fc7ab8’ undeclared (first use in this function)

    522:       if ((uVar2 & 1) == 0) break;
    523:       do {
    524:         uVar8 = uVar8 + 1;
    525:         if ((((DAT_140fc62ac & uVar8) == 0) && ((DAT_140fc7ab8 & 0x40) != 0)) &&
    526:            (cVar4 = FUN_14020cb70(), cVar4 != '\0')) {
    527:           FUN_14020cb40(uVar8);
    528:         }

## KeSetSelectedCpuSetsThread */ — reconstrucao/src/decompiled_01.c:531
reconstrucao/src/decompiled_01.c:531:5: error: implicit declaration of function ‘FUN_1404fbce4’ [-Wimplicit-function-declaration]

    528:         }
    529:       } while (*(longlong *)(param_1 + 0x40) != 0);
    530:     }
    531:     FUN_1404fbce4(plVar7,uVar6,param_3,param_2);
    532:     FUN_140200820(param_1,auStack_38);
    533:     ExReleaseSpinLockSharedFromDpcLevel(lVar3 + 0x40);
    534:     FUN_140271070(FiberData,auStack_38,auStackX_20[0]);

## KeSetSelectedCpuSetsThread */ — reconstrucao/src/decompiled_01.c:532
reconstrucao/src/decompiled_01.c:532:5: error: too many arguments to function ‘FUN_140200820’; expected 1, have 2

    529:       } while (*(longlong *)(param_1 + 0x40) != 0);
    530:     }
    531:     FUN_1404fbce4(plVar7,uVar6,param_3,param_2);
    532:     FUN_140200820(param_1,auStack_38);
    533:     ExReleaseSpinLockSharedFromDpcLevel(lVar3 + 0x40);
    534:     FUN_140271070(FiberData,auStack_38,auStackX_20[0]);
    535:     uVar5 = 0;

## KeSetSelectedCpuSetsThread */ — reconstrucao/src/decompiled_01.c:533
reconstrucao/src/decompiled_01.c:533:5: error: implicit declaration of function ‘ExReleaseSpinLockSharedFromDpcLevel’ [-Wimplicit-function-declaration]

    530:     }
    531:     FUN_1404fbce4(plVar7,uVar6,param_3,param_2);
    532:     FUN_140200820(param_1,auStack_38);
    533:     ExReleaseSpinLockSharedFromDpcLevel(lVar3 + 0x40);
    534:     FUN_140271070(FiberData,auStack_38,auStackX_20[0]);
    535:     uVar5 = 0;
    536:   }

## KeSetSelectedCpuSetsThread */ — reconstrucao/src/decompiled_01.c:534
reconstrucao/src/decompiled_01.c:534:19: error: ‘FiberData’ undeclared (first use in this function)

    531:     FUN_1404fbce4(plVar7,uVar6,param_3,param_2);
    532:     FUN_140200820(param_1,auStack_38);
    533:     ExReleaseSpinLockSharedFromDpcLevel(lVar3 + 0x40);
    534:     FUN_140271070(FiberData,auStack_38,auStackX_20[0]);
    535:     uVar5 = 0;
    536:   }
    537:   return uVar5;

## FUN_140200bc0 */ — reconstrucao/src/decompiled_01.c:563
reconstrucao/src/decompiled_01.c:563:12: error: ‘FiberData’ undeclared (first use in this function)

    560:   undefined1 auStack_89 [89];
    561:   ulonglong uStack_30;
    562:   
    563:   pvVar1 = FiberData;
    564:   uStack_30 = DAT_140e0a740 ^ (ulonglong)auStack_128;
    565:   puStack_f8 = (undefined4 *)0x0;
    566:   uStack_f0 = uStack_f0 & 0xffffffff00000000;

## FUN_140200bc0 */ — reconstrucao/src/decompiled_01.c:564
reconstrucao/src/decompiled_01.c:564:15: error: ‘DAT_140e0a740’ undeclared (first use in this function)

    561:   ulonglong uStack_30;
    562:   
    563:   pvVar1 = FiberData;
    564:   uStack_30 = DAT_140e0a740 ^ (ulonglong)auStack_128;
    565:   puStack_f8 = (undefined4 *)0x0;
    566:   uStack_f0 = uStack_f0 & 0xffffffff00000000;
    567:   uVar6 = 0;

## FUN_140200bc0 */ — reconstrucao/src/decompiled_01.c:569
reconstrucao/src/decompiled_01.c:569:14: error: assignment to ‘undefined8’ {aka ‘long unsigned int’} from ‘void *’ makes integer from pointer without a cast [-Wint-conversion]

    566:   uStack_f0 = uStack_f0 & 0xffffffff00000000;
    567:   uVar6 = 0;
    568:   uStack_108 = 0;
    569:   uStack_100 = (void *)0x0;
    570:   if ((DAT_140fc7a90 & 8) == 0) {
    571:     uStack_108 = 4;
    572:     uVar2 = FUN_1402fd8a0();

## FUN_140200bc0 */ — reconstrucao/src/decompiled_01.c:570
reconstrucao/src/decompiled_01.c:570:8: error: ‘DAT_140fc7a90’ undeclared (first use in this function)

    567:   uVar6 = 0;
    568:   uStack_108 = 0;
    569:   uStack_100 = (void *)0x0;
    570:   if ((DAT_140fc7a90 & 8) == 0) {
    571:     uStack_108 = 4;
    572:     uVar2 = FUN_1402fd8a0();
    573:     uStack_100 = (void *)CONCAT71(uStack_100._1_7_,uVar2);

## FUN_140200bc0 */ — reconstrucao/src/decompiled_01.c:572
reconstrucao/src/decompiled_01.c:572:13: error: implicit declaration of function ‘FUN_1402fd8a0’; did you mean ‘FUN_140200820’? [-Wimplicit-function-declaration]

    569:   uStack_100 = (void *)0x0;
    570:   if ((DAT_140fc7a90 & 8) == 0) {
    571:     uStack_108 = 4;
    572:     uVar2 = FUN_1402fd8a0();
    573:     uStack_100 = (void *)CONCAT71(uStack_100._1_7_,uVar2);
    574:     uStack_100 = (void *)CONCAT44(1,(undefined4)uStack_100);
    575:     puVar5 = *(undefined4 **)((longlong)FiberData + 0x8c00);

## FUN_140200bc0 */ — reconstrucao/src/decompiled_01.c:573
reconstrucao/src/decompiled_01.c:573:45: error: request for member ‘_1_7_’ in something not a structure or union

    570:   if ((DAT_140fc7a90 & 8) == 0) {
    571:     uStack_108 = 4;
    572:     uVar2 = FUN_1402fd8a0();
    573:     uStack_100 = (void *)CONCAT71(uStack_100._1_7_,uVar2);
    574:     uStack_100 = (void *)CONCAT44(1,(undefined4)uStack_100);
    575:     puVar5 = *(undefined4 **)((longlong)FiberData + 0x8c00);
    576:     uStack_f0 = *(ulonglong *)(puVar5 + 4);

## FUN_140200bc0 */ — reconstrucao/src/decompiled_01.c:574
reconstrucao/src/decompiled_01.c:574:26: error: implicit declaration of function ‘CONCAT44’ [-Wimplicit-function-declaration]

    571:     uStack_108 = 4;
    572:     uVar2 = FUN_1402fd8a0();
    573:     uStack_100 = (void *)CONCAT71(uStack_100._1_7_,uVar2);
    574:     uStack_100 = (void *)CONCAT44(1,(undefined4)uStack_100);
    575:     puVar5 = *(undefined4 **)((longlong)FiberData + 0x8c00);
    576:     uStack_f0 = *(ulonglong *)(puVar5 + 4);
    577:     uVar6 = (uint)uStack_108;

## FUN_140200bc0 */ — reconstrucao/src/decompiled_01.c:574
reconstrucao/src/decompiled_01.c:574:16: error: assignment to ‘undefined8’ {aka ‘long unsigned int’} from ‘void *’ makes integer from pointer without a cast [-Wint-conversion]

    571:     uStack_108 = 4;
    572:     uVar2 = FUN_1402fd8a0();
    573:     uStack_100 = (void *)CONCAT71(uStack_100._1_7_,uVar2);
    574:     uStack_100 = (void *)CONCAT44(1,(undefined4)uStack_100);
    575:     puVar5 = *(undefined4 **)((longlong)FiberData + 0x8c00);
    576:     uStack_f0 = *(ulonglong *)(puVar5 + 4);
    577:     uVar6 = (uint)uStack_108;

## FUN_140200bc0 */ — reconstrucao/src/decompiled_01.c:580
reconstrucao/src/decompiled_01.c:580:28: error: implicit declaration of function ‘ExpInterlockedPopEntrySList’ [-Wimplicit-function-declaration]

    577:     uVar6 = (uint)uStack_108;
    578:   }
    579:   else {
    580:     puVar5 = (undefined4 *)ExpInterlockedPopEntrySList((longlong)FiberData + 0x8bc0);
    581:     if (puVar5 == (undefined4 *)0x0) {
    582:       uStack_108 = CONCAT44(uStack_108._4_4_,2);
    583:       uVar6 = 2;

## FUN_140200bc0 */ — reconstrucao/src/decompiled_01.c:582
reconstrucao/src/decompiled_01.c:582:39: error: request for member ‘_4_4_’ in something not a structure or union

    579:   else {
    580:     puVar5 = (undefined4 *)ExpInterlockedPopEntrySList((longlong)FiberData + 0x8bc0);
    581:     if (puVar5 == (undefined4 *)0x0) {
    582:       uStack_108 = CONCAT44(uStack_108._4_4_,2);
    583:       uVar6 = 2;
    584:       puVar5 = (undefined4 *)((ulonglong)auStack_89 & 0xfffffffffffff000);
    585:       if ((((ulonglong)auStack_89 ^ (ulonglong)auStack_e0) & 0xfffffffffffff000) == 0) {

## FUN_140200bc0 */ — reconstrucao/src/decompiled_01.c:588
reconstrucao/src/decompiled_01.c:588:47: error: request for member ‘_1_7_’ in something not a structure or union

    585:       if ((((ulonglong)auStack_89 ^ (ulonglong)auStack_e0) & 0xfffffffffffff000) == 0) {
    586:         puVar5 = auStack_e0;
    587:       }
    588:       uStack_100 = (void *)CONCAT71(uStack_100._1_7_,(byte)in_CR8);
    589:       if (((byte)in_CR8 < 2) && (DAT_140fc7d20 != 0)) {
    590:         FUN_1404f6e6c(in_CR8,0xfffffffffffff002);
    591:       }

## FUN_140200bc0 */ — reconstrucao/src/decompiled_01.c:589
reconstrucao/src/decompiled_01.c:589:34: error: ‘DAT_140fc7d20’ undeclared (first use in this function)

    586:         puVar5 = auStack_e0;
    587:       }
    588:       uStack_100 = (void *)CONCAT71(uStack_100._1_7_,(byte)in_CR8);
    589:       if (((byte)in_CR8 < 2) && (DAT_140fc7d20 != 0)) {
    590:         FUN_1404f6e6c(in_CR8,0xfffffffffffff002);
    591:       }
    592:       uStack_f0 = MmGetPhysicalAddress(puVar5);

## FUN_140200bc0 */ — reconstrucao/src/decompiled_01.c:592
reconstrucao/src/decompiled_01.c:592:19: error: implicit declaration of function ‘MmGetPhysicalAddress’ [-Wimplicit-function-declaration]

    589:       if (((byte)in_CR8 < 2) && (DAT_140fc7d20 != 0)) {
    590:         FUN_1404f6e6c(in_CR8,0xfffffffffffff002);
    591:       }
    592:       uStack_f0 = MmGetPhysicalAddress(puVar5);
    593:     }
    594:     else {
    595:       uStack_100 = pvVar1;

## FUN_140200bc0 */ — reconstrucao/src/decompiled_01.c:595
reconstrucao/src/decompiled_01.c:595:18: error: assignment to ‘undefined8’ {aka ‘long unsigned int’} from ‘void *’ makes integer from pointer without a cast [-Wint-conversion]

    592:       uStack_f0 = MmGetPhysicalAddress(puVar5);
    593:     }
    594:     else {
    595:       uStack_100 = pvVar1;
    596:       uStack_f0 = *(ulonglong *)(puVar5 + 4);
    597:       uStack_108 = CONCAT44(uStack_108._4_4_,1);
    598:       puStack_f8 = puVar5;

## FUN_140200bc0 */ — reconstrucao/src/decompiled_01.c:597
reconstrucao/src/decompiled_01.c:597:39: error: request for member ‘_4_4_’ in something not a structure or union

    594:     else {
    595:       uStack_100 = pvVar1;
    596:       uStack_f0 = *(ulonglong *)(puVar5 + 4);
    597:       uStack_108 = CONCAT44(uStack_108._4_4_,1);
    598:       puStack_f8 = puVar5;
    599:     }
    600:   }

## FUN_140200bc0 */ — reconstrucao/src/decompiled_01.c:602
reconstrucao/src/decompiled_01.c:602:11: error: implicit declaration of function ‘FUN_140203fd4’; did you mean ‘FUN_140200444’? [-Wimplicit-function-declaration]

    599:     }
    600:   }
    601:   uVar7 = uStack_f0;
    602:   iVar4 = FUN_140203fd4(param_1,puVar5 + 2,(-(uint)((uVar6 & 2) != 0) & 0xfffff058) + 0xfe8);
    603:   if (iVar4 == -1) {
    604:     FUN_140210b60(&uStack_108);
    605:     puVar5 = (undefined4 *)FUN_14046f5e0(&uStack_108,1,0);

## FUN_140200bc0 */ — reconstrucao/src/decompiled_01.c:604
reconstrucao/src/decompiled_01.c:604:5: error: implicit declaration of function ‘FUN_140210b60’; did you mean ‘FUN_140200bc0’? [-Wimplicit-function-declaration]

    601:   uVar7 = uStack_f0;
    602:   iVar4 = FUN_140203fd4(param_1,puVar5 + 2,(-(uint)((uVar6 & 2) != 0) & 0xfffff058) + 0xfe8);
    603:   if (iVar4 == -1) {
    604:     FUN_140210b60(&uStack_108);
    605:     puVar5 = (undefined4 *)FUN_14046f5e0(&uStack_108,1,0);
    606:     iVar4 = FUN_140203fd4(param_1,puVar5 + 2,0xfe8);
    607:     uVar7 = uStack_f0;

## FUN_140200bc0 */ — reconstrucao/src/decompiled_01.c:605
reconstrucao/src/decompiled_01.c:605:28: error: implicit declaration of function ‘FUN_14046f5e0’ [-Wimplicit-function-declaration]

    602:   iVar4 = FUN_140203fd4(param_1,puVar5 + 2,(-(uint)((uVar6 & 2) != 0) & 0xfffff058) + 0xfe8);
    603:   if (iVar4 == -1) {
    604:     FUN_140210b60(&uStack_108);
    605:     puVar5 = (undefined4 *)FUN_14046f5e0(&uStack_108,1,0);
    606:     iVar4 = FUN_140203fd4(param_1,puVar5 + 2,0xfe8);
    607:     uVar7 = uStack_f0;
    608:   }

## FUN_140200bc0 */ — reconstrucao/src/decompiled_01.c:612
reconstrucao/src/decompiled_01.c:612:11: error: implicit declaration of function ‘HvlInvokeHypercall’ [-Wimplicit-function-declaration]

    609:   puVar5[1] = 0;
    610:   *puVar5 = param_2;
    611:   uStack_e8 = (ulonglong)(uint)((iVar4 + 7) * 0x4000) & 0xffffffff03fe0000 | 0x15;
    612:   sVar3 = HvlInvokeHypercall(uStack_e8,uVar7,0);
    613:   FUN_140210b60(&uStack_108);
    614:   return -(uint)(sVar3 != 0) & 0xc0000001;
    615: }

## FUN_140200dcc */ — reconstrucao/src/decompiled_01.c:634
reconstrucao/src/decompiled_01.c:634:15: error: ‘DAT_140e0a740’ undeclared (first use in this function)

    631:   undefined4 uStack_1c;
    632:   ulonglong uStack_18;
    633:   
    634:   uStack_18 = DAT_140e0a740 ^ (ulonglong)auStack_68;
    635:   if (DAT_140e67941 != '\0') {
    636:     auStackX_8[0] = param_1;
    637:     cVar1 = EtwEventEnabled(DAT_140f0bb00,&DAT_140010400);

## FUN_140200dcc */ — reconstrucao/src/decompiled_01.c:635
reconstrucao/src/decompiled_01.c:635:7: error: ‘DAT_140e67941’ undeclared (first use in this function)

    632:   ulonglong uStack_18;
    633:   
    634:   uStack_18 = DAT_140e0a740 ^ (ulonglong)auStack_68;
    635:   if (DAT_140e67941 != '\0') {
    636:     auStackX_8[0] = param_1;
    637:     cVar1 = EtwEventEnabled(DAT_140f0bb00,&DAT_140010400);
    638:     if (cVar1 != '\0') {

## FUN_140200dcc */ — reconstrucao/src/decompiled_01.c:637
reconstrucao/src/decompiled_01.c:637:13: error: implicit declaration of function ‘EtwEventEnabled’ [-Wimplicit-function-declaration]

    634:   uStack_18 = DAT_140e0a740 ^ (ulonglong)auStack_68;
    635:   if (DAT_140e67941 != '\0') {
    636:     auStackX_8[0] = param_1;
    637:     cVar1 = EtwEventEnabled(DAT_140f0bb00,&DAT_140010400);
    638:     if (cVar1 != '\0') {
    639:       uStack_1c = 0;
    640:       puStack_28 = auStackX_8;

## FUN_140200dcc */ — reconstrucao/src/decompiled_01.c:637
reconstrucao/src/decompiled_01.c:637:29: error: ‘DAT_140f0bb00’ undeclared (first use in this function)

    634:   uStack_18 = DAT_140e0a740 ^ (ulonglong)auStack_68;
    635:   if (DAT_140e67941 != '\0') {
    636:     auStackX_8[0] = param_1;
    637:     cVar1 = EtwEventEnabled(DAT_140f0bb00,&DAT_140010400);
    638:     if (cVar1 != '\0') {
    639:       uStack_1c = 0;
    640:       puStack_28 = auStackX_8;

## FUN_140200dcc */ — reconstrucao/src/decompiled_01.c:637
reconstrucao/src/decompiled_01.c:637:44: error: ‘DAT_140010400’ undeclared (first use in this function)

    634:   uStack_18 = DAT_140e0a740 ^ (ulonglong)auStack_68;
    635:   if (DAT_140e67941 != '\0') {
    636:     auStackX_8[0] = param_1;
    637:     cVar1 = EtwEventEnabled(DAT_140f0bb00,&DAT_140010400);
    638:     if (cVar1 != '\0') {
    639:       uStack_1c = 0;
    640:       puStack_28 = auStackX_8;

## FUN_140200dcc */ — reconstrucao/src/decompiled_01.c:646
reconstrucao/src/decompiled_01.c:646:7: error: implicit declaration of function ‘EtwWriteEx’ [-Wimplicit-function-declaration]

    643:       uStack_38 = 1;
    644:       uStack_40 = 0;
    645:       uStack_48 = 0;
    646:       EtwWriteEx(DAT_140f0bb00,&DAT_140010400,0);
    647:     }
    648:   }
    649:   return;

## FUN_140200e70 */ — reconstrucao/src/decompiled_01.c:659
reconstrucao/src/decompiled_01.c:659:3: error: unknown type name ‘code’

    656: {
    657:   ulonglong *puVar1;
    658:   ulonglong uVar2;
    659:   code *pcVar3;
    660:   char cVar4;
    661:   undefined8 *puVar5;
    662:   undefined8 *puVar6;

## FUN_140200e70 */ — reconstrucao/src/decompiled_01.c:673
reconstrucao/src/decompiled_01.c:673:32: error: ‘DAT_140f230b0’ undeclared (first use in this function)

    670:   undefined4 auStack_38 [8];
    671:   undefined8 auStack_18 [2];
    672:   
    673:   KeAcquireSpinLockAtDpcLevel(&DAT_140f230b0);
    674:   puVar9 = auStack_38;
    675:   puVar12 = &DAT_140f230a0;
    676:   puVar6 = DAT_140f230a0;

## FUN_140200e70 */ — reconstrucao/src/decompiled_01.c:675
reconstrucao/src/decompiled_01.c:675:14: error: ‘DAT_140f230a0’ undeclared (first use in this function)

    672:   
    673:   KeAcquireSpinLockAtDpcLevel(&DAT_140f230b0);
    674:   puVar9 = auStack_38;
    675:   puVar12 = &DAT_140f230a0;
    676:   puVar6 = DAT_140f230a0;
    677:   puVar8 = (undefined8 *)0x0;
    678:   while (puVar5 = puVar6, puVar5 != puVar12) {

## FUN_140200e70 */ — reconstrucao/src/decompiled_01.c:684
reconstrucao/src/decompiled_01.c:684:17: error: ‘code’ undeclared (first use in this function)

    681:     if (((undefined8 *)puVar11[1] != puVar5) || (puVar6 = puVar11, (undefined8 *)*puVar7 != puVar5))
    682:     {
    683:       puVar6 = (undefined8 *)0x3;
    684:       pcVar3 = (code *)swi(0x29);
    685:       puVar5 = (undefined8 *)(*pcVar3)();
    686:       puVar9 = puVar9 + 2;
    687:     }

## FUN_140200e70 */ — reconstrucao/src/decompiled_01.c:684
reconstrucao/src/decompiled_01.c:684:23: error: expected expression before ‘)’ token

    681:     if (((undefined8 *)puVar11[1] != puVar5) || (puVar6 = puVar11, (undefined8 *)*puVar7 != puVar5))
    682:     {
    683:       puVar6 = (undefined8 *)0x3;
    684:       pcVar3 = (code *)swi(0x29);
    685:       puVar5 = (undefined8 *)(*pcVar3)();
    686:       puVar9 = puVar9 + 2;
    687:     }

## FUN_140200e70 */ — reconstrucao/src/decompiled_01.c:685
reconstrucao/src/decompiled_01.c:685:31: error: called object is not a function or function pointer

    682:     {
    683:       puVar6 = (undefined8 *)0x3;
    684:       pcVar3 = (code *)swi(0x29);
    685:       puVar5 = (undefined8 *)(*pcVar3)();
    686:       puVar9 = puVar9 + 2;
    687:     }
    688:     *puVar7 = puVar11;

## FUN_140200e70 */ — reconstrucao/src/decompiled_01.c:688
reconstrucao/src/decompiled_01.c:688:13: error: assignment to ‘undefined8’ {aka ‘long unsigned int’} from ‘undefined8 *’ {aka ‘long unsigned int *’} makes integer from pointer without a cast [-Wint-conversion]

    685:       puVar5 = (undefined8 *)(*pcVar3)();
    686:       puVar9 = puVar9 + 2;
    687:     }
    688:     *puVar7 = puVar11;
    689:     puVar11[1] = puVar7;
    690:     *puVar5 = puVar8;
    691:     puVar5[1] = 0;

## FUN_140200e70 */ — reconstrucao/src/decompiled_01.c:689
reconstrucao/src/decompiled_01.c:689:16: error: assignment to ‘undefined8’ {aka ‘long unsigned int’} from ‘undefined8 *’ {aka ‘long unsigned int *’} makes integer from pointer without a cast [-Wint-conversion]

    686:       puVar9 = puVar9 + 2;
    687:     }
    688:     *puVar7 = puVar11;
    689:     puVar11[1] = puVar7;
    690:     *puVar5 = puVar8;
    691:     puVar5[1] = 0;
    692:     LOCK();

## FUN_140200e70 */ — reconstrucao/src/decompiled_01.c:690
reconstrucao/src/decompiled_01.c:690:13: error: assignment to ‘undefined8’ {aka ‘long unsigned int’} from ‘undefined8 *’ {aka ‘long unsigned int *’} makes integer from pointer without a cast [-Wint-conversion]

    687:     }
    688:     *puVar7 = puVar11;
    689:     puVar11[1] = puVar7;
    690:     *puVar5 = puVar8;
    691:     puVar5[1] = 0;
    692:     LOCK();
    693:     *(short *)((longlong)puVar5 + -0x8c) = *(short *)((longlong)puVar5 + -0x8c) + 1;

## FUN_140200e70 */ — reconstrucao/src/decompiled_01.c:698
reconstrucao/src/decompiled_01.c:698:3: error: implicit declaration of function ‘FUN_1402ec370’; did you mean ‘FUN_140200e70’? [-Wimplicit-function-declaration]

    695:     puVar8 = puVar5;
    696:   }
    697:   *(undefined8 *)(puVar9 + -2) = 0x140200eba;
    698:   FUN_1402ec370(&DAT_140f230b0);
    699:   *(undefined8 *)(puVar9 + 8) = 0;
    700:   while (puVar8 != (undefined8 *)0x0) {
    701:     puVar6 = (undefined8 *)*puVar8;

## FUN_140200e70 */ — reconstrucao/src/decompiled_01.c:716
reconstrucao/src/decompiled_01.c:716:15: error: ‘DAT_140fc62ac’ undeclared (first use in this function)

    713:       if ((uVar2 & 1) == 0) break;
    714:       do {
    715:         uVar10 = uVar10 + 1;
    716:         if (((DAT_140fc62ac & uVar10) == 0) && ((DAT_140fc7ab8 & 0x40) != 0)) {
    717:           *(undefined8 *)(puVar9 + -2) = 0x140200fa6;
    718:           cVar4 = FUN_14020cb70();
    719:           if (cVar4 != '\0') {

## FUN_140200e70 */ — reconstrucao/src/decompiled_01.c:716
reconstrucao/src/decompiled_01.c:716:50: error: ‘DAT_140fc7ab8’ undeclared (first use in this function)

    713:       if ((uVar2 & 1) == 0) break;
    714:       do {
    715:         uVar10 = uVar10 + 1;
    716:         if (((DAT_140fc62ac & uVar10) == 0) && ((DAT_140fc7ab8 & 0x40) != 0)) {
    717:           *(undefined8 *)(puVar9 + -2) = 0x140200fa6;
    718:           cVar4 = FUN_14020cb70();
    719:           if (cVar4 != '\0') {

## FUN_140200e70 */ — reconstrucao/src/decompiled_01.c:728
reconstrucao/src/decompiled_01.c:728:7: error: implicit declaration of function ‘FUN_140201280’; did you mean ‘FUN_140200820’? [-Wimplicit-function-declaration]

    725:     }
    726:     if ((*(uint *)(puVar8 + -0x6f) & 0x400000) != 0) {
    727:       *(undefined8 *)(puVar9 + -2) = 0x140200edb;
    728:       FUN_140201280(puVar8 + -0x7e,puVar9 + 8,1);
    729:     }
    730:     puVar8[-0x76] = 0;
    731:     LOCK();

## FUN_140200e70 */ — reconstrucao/src/decompiled_01.c:737
reconstrucao/src/decompiled_01.c:737:17: error: ‘FiberData’ undeclared (first use in this function)

    734:     puVar8 = puVar6;
    735:   }
    736:   *(undefined8 *)(puVar9 + -2) = 0x140200f06;
    737:   FUN_140271070(FiberData,puVar9 + 8,2);
    738:   return;
    739: }
    740: 

## FUN_140200fc0 */ — reconstrucao/src/decompiled_01.c:746
reconstrucao/src/decompiled_01.c:746:3: error: implicit declaration of function ‘FUN_140200fd8’; did you mean ‘FUN_140200fc0’? [-Wimplicit-function-declaration]

    743: void FUN_140200fc0(void)
    744: 
    745: {
    746:   FUN_140200fd8();
    747:   return;
    748: }
    749: 

## FUN_140200fd8 */ — reconstrucao/src/decompiled_01.c:790
reconstrucao/src/decompiled_01.c:790:7: error: implicit declaration of function ‘KeSetActualBasePriorityThread’ [-Wimplicit-function-declaration]

    787:       LOCK();
    788:       *param_1 = *param_1 | 0x400000;
    789:       UNLOCK();
    790:       KeSetActualBasePriorityThread(param_1,1);
    791:       return;
    792:     }
    793:     if ((param_1[0x1e] & 0x400000) == 0) {

## FUN_140200fd8 */ — reconstrucao/src/decompiled_01.c:796
reconstrucao/src/decompiled_01.c:796:5: error: implicit declaration of function ‘FUN_14034b620’; did you mean ‘FUN_140200820’? [-Wimplicit-function-declaration]

    793:     if ((param_1[0x1e] & 0x400000) == 0) {
    794:       return;
    795:     }
    796:     FUN_14034b620(param_1,auStackX_18);
    797:     if (param_1[0x100] != 0x20) {
    798:       FUN_14034b6b4(param_1,&uStackX_20,(int)(char)param_1[0x100],1);
    799:       param_1[0x100] = 0x20;

## FUN_140200fd8 */ — reconstrucao/src/decompiled_01.c:798
reconstrucao/src/decompiled_01.c:798:7: error: implicit declaration of function ‘FUN_14034b6b4’ [-Wimplicit-function-declaration]

    795:     }
    796:     FUN_14034b620(param_1,auStackX_18);
    797:     if (param_1[0x100] != 0x20) {
    798:       FUN_14034b6b4(param_1,&uStackX_20,(int)(char)param_1[0x100],1);
    799:       param_1[0x100] = 0x20;
    800:     }
    801:     uStack_48 = 0;

## FUN_140200fd8 */ — reconstrucao/src/decompiled_01.c:812
reconstrucao/src/decompiled_01.c:812:5: error: implicit declaration of function ‘FUN_1402fd5d0’; did you mean ‘FUN_140200fd8’? [-Wimplicit-function-declaration]

    809:     LOCK();
    810:     *param_1 = *param_1 & 0xffbfffff;
    811:     UNLOCK();
    812:     FUN_1402fd5d0(uVar8,pvStack_60,&uStack_68,uStack_58,&uStack_48);
    813:     param_1[0x10] = 0;
    814:     param_1[0x11] = 0;
    815:     FUN_140271070(FiberData,&uStackX_20,auStackX_18[0]);

## FUN_140200fd8 */ — reconstrucao/src/decompiled_01.c:815
reconstrucao/src/decompiled_01.c:815:19: error: ‘FiberData’ undeclared (first use in this function)

    812:     FUN_1402fd5d0(uVar8,pvStack_60,&uStack_68,uStack_58,&uStack_48);
    813:     param_1[0x10] = 0;
    814:     param_1[0x11] = 0;
    815:     FUN_140271070(FiberData,&uStackX_20,auStackX_18[0]);
    816:     KeSetPriorityThread(param_1,(int)*(char *)((longlong)param_1 + 0x233));
    817:     return;
    818:   }

## FUN_140200fd8 */ — reconstrucao/src/decompiled_01.c:816
reconstrucao/src/decompiled_01.c:816:5: error: implicit declaration of function ‘KeSetPriorityThread’ [-Wimplicit-function-declaration]

    813:     param_1[0x10] = 0;
    814:     param_1[0x11] = 0;
    815:     FUN_140271070(FiberData,&uStackX_20,auStackX_18[0]);
    816:     KeSetPriorityThread(param_1,(int)*(char *)((longlong)param_1 + 0x233));
    817:     return;
    818:   }
    819:   if (param_3 != 1) {

## FUN_140200fd8 */ — reconstrucao/src/decompiled_01.c:821
reconstrucao/src/decompiled_01.c:821:12: error: ‘DAT_140fc7b14’ undeclared (first use in this function)

    818:   }
    819:   if (param_3 != 1) {
    820:     if ((param_3 == 2) || (param_3 == 3)) {
    821:       if ((DAT_140fc7b14 & 0x20) != 0) {
    822:         FUN_1406597f4(param_1,param_3);
    823:       }
    824:       FUN_14034b620(param_1,auStackX_18);

## FUN_140200fd8 */ — reconstrucao/src/decompiled_01.c:822
reconstrucao/src/decompiled_01.c:822:9: error: implicit declaration of function ‘FUN_1406597f4’ [-Wimplicit-function-declaration]

    819:   if (param_3 != 1) {
    820:     if ((param_3 == 2) || (param_3 == 3)) {
    821:       if ((DAT_140fc7b14 & 0x20) != 0) {
    822:         FUN_1406597f4(param_1,param_3);
    823:       }
    824:       FUN_14034b620(param_1,auStackX_18);
    825:     }

## FUN_140200fd8 */ — reconstrucao/src/decompiled_01.c:865
reconstrucao/src/decompiled_01.c:865:11: error: implicit declaration of function ‘FUN_14020c440’; did you mean ‘FUN_140200740’? [-Wimplicit-function-declaration]

    862:   uStack_38 = 0;
    863:   uStack_30 = 0;
    864:   pvStack_60 = pvVar4;
    865:   uVar8 = FUN_14020c440(pvVar4,1,&uStack_68);
    866:   *(char *)(param_1 + 0x81) = (char)uVar5;
    867:   if (*(longlong *)((longlong)pvVar4 + 0x10) == 0) {
    868:     pvStack_50 = pvVar4;

## FUN_140200fd8 */ — reconstrucao/src/decompiled_01.c:879
reconstrucao/src/decompiled_01.c:879:17: error: implicit declaration of function ‘FUN_14027835c’; did you mean ‘FUN_140200dcc’? [-Wimplicit-function-declaration]

    876:         bVar1 = *(byte *)(*(longlong *)((longlong)*ppvVar6 + 0x38) + 0x40);
    877:         *(byte *)(*(longlong *)((longlong)*ppvVar6 + 0x38) + 0x40) =
    878:              (bVar1 ^ (byte)param_1[0x81]) & 7 ^ bVar1;
    879:         uVar8 = FUN_14027835c();
    880:         ppvVar6 = ppvVar6 + 1;
    881:         uVar7 = uVar7 - 1;
    882:       } while (uVar7 != 0);

## FUN_140200fd8 */ — reconstrucao/src/decompiled_01.c:895
reconstrucao/src/decompiled_01.c:895:3: error: implicit declaration of function ‘FUN_140295160’; did you mean ‘FUN_140200fc0’? [-Wimplicit-function-declaration]

    892: LAB_14020115f:
    893:   param_1[0x10] = 0;
    894:   param_1[0x11] = 0;
    895:   FUN_140295160(pvVar4,param_1);
    896:   if (DAT_140fc7d20 != 0) {
    897:     FUN_1404f6e08(in_CR8,auStackX_18[0]);
    898:   }

## FUN_140200fd8 */ — reconstrucao/src/decompiled_01.c:896
reconstrucao/src/decompiled_01.c:896:7: error: ‘DAT_140fc7d20’ undeclared (first use in this function)

    893:   param_1[0x10] = 0;
    894:   param_1[0x11] = 0;
    895:   FUN_140295160(pvVar4,param_1);
    896:   if (DAT_140fc7d20 != 0) {
    897:     FUN_1404f6e08(in_CR8,auStackX_18[0]);
    898:   }
    899:   return;

## FUN_140200fd8 */ — reconstrucao/src/decompiled_01.c:897
reconstrucao/src/decompiled_01.c:897:5: error: implicit declaration of function ‘FUN_1404f6e08’; did you mean ‘FUN_140200008’? [-Wimplicit-function-declaration]

    894:   param_1[0x11] = 0;
    895:   FUN_140295160(pvVar4,param_1);
    896:   if (DAT_140fc7d20 != 0) {
    897:     FUN_1404f6e08(in_CR8,auStackX_18[0]);
    898:   }
    899:   return;
    900: }

## FUN_140201280 */ — reconstrucao/src/decompiled_01.c:938
reconstrucao/src/decompiled_01.c:938:11: error: implicit declaration of function ‘FUN_1402022c4’; did you mean ‘FUN_140201280’? [-Wimplicit-function-declaration]

    935:     **(uint **)(param_1 + 0x3c8) = **(uint **)(param_1 + 0x3c8) | 0x100000;
    936:     UNLOCK();
    937:   }
    938:   iVar5 = FUN_1402022c4(param_1,&uStack_60);
    939:   iVar9 = *(int *)(param_1 + 0x400);
    940:   if (iVar5 != iVar9) {
    941:     lVar7 = (longlong)(char)iVar5;

## FUN_140201280 */ — reconstrucao/src/decompiled_01.c:945
reconstrucao/src/decompiled_01.c:945:7: error: implicit declaration of function ‘KeBugCheckEx’ [-Wimplicit-function-declaration]

    942:     cVar3 = *(char *)(lVar7 + 0x338 + param_1);
    943:     if (cVar3 == -1) {
    944:                     /* WARNING: Subroutine does not return */
    945:       KeBugCheckEx(0x157,param_1,lVar7,1,0);
    946:     }
    947:     *(char *)(lVar7 + 0x338 + param_1) = cVar3 + '\x01';
    948:     *(uint *)(param_1 + 0x358) = *(uint *)(param_1 + 0x358) | 1 << ((int)(char)iVar5 & 0x1fU);

## FUN_140201280 */ — reconstrucao/src/decompiled_01.c:969
reconstrucao/src/decompiled_01.c:969:11: error: implicit declaration of function ‘FUN_1403c1fa4’ [-Wimplicit-function-declaration]

    966:     *(undefined1 *)(param_1 + 0x366) = 0;
    967:     *(ushort *)(param_1 + 0x206) = *(ushort *)(param_1 + 0x206) & 0xf00f;
    968:   }
    969:   iVar6 = FUN_1403c1fa4(param_1,0,0);
    970:   if (iVar6 != iVar9) {
    971:     FUN_140306b38(param_1,param_2,iVar6);
    972:   }

## FUN_140201280 */ — reconstrucao/src/decompiled_01.c:971
reconstrucao/src/decompiled_01.c:971:5: error: implicit declaration of function ‘FUN_140306b38’; did you mean ‘FUN_140200fd8’? [-Wimplicit-function-declaration]

    968:   }
    969:   iVar6 = FUN_1403c1fa4(param_1,0,0);
    970:   if (iVar6 != iVar9) {
    971:     FUN_140306b38(param_1,param_2,iVar6);
    972:   }
    973:   cVar3 = *(char *)(param_1 + 0x462);
    974:   if ((cVar3 != '\0') && (puVar2 = *(uint **)(param_1 + 0x3c8), puVar2 != (uint *)0x0)) {

## FUN_140201280 */ — reconstrucao/src/decompiled_01.c:993
reconstrucao/src/decompiled_01.c:993:18: error: implicit declaration of function ‘FUN_1403fce40’; did you mean ‘FUN_140200e70’? [-Wimplicit-function-declaration]

    990:         alStack_50[0] = lStack_88;
    991:         plStack_78 = (longlong *)0x0;
    992:         auStackX_20[0] = 0;
    993:         uVar11 = FUN_1403fce40(alStack_50,*(uint *)(param_1 + 0x78) >> 1 & 1,&plStack_78,auStackX_20
    994:                               );
    995:         if (auStackX_20[0] != 0) {
    996:           uVar8 = (ulonglong)auStackX_20[0];

## FUN_140201280 */ — reconstrucao/src/decompiled_01.c:1034
reconstrucao/src/decompiled_01.c:1034:29: error: ‘DAT_140fc7b14’ undeclared (first use in this function)

    1031:     **(uint **)(param_1 + 0x3c8) = **(uint **)(param_1 + 0x3c8) & 0xffefffff;
    1032:     UNLOCK();
    1033:   }
    1034:   if ((iVar9 != iVar6) && ((DAT_140fc7b14 & 0x20) != 0)) {
    1035:     FUN_1404d0da8(param_1,iVar9,iVar5,iVar6,&uStack_60);
    1036:   }
    1037:   return;

## FUN_140201280 */ — reconstrucao/src/decompiled_01.c:1035
reconstrucao/src/decompiled_01.c:1035:5: error: implicit declaration of function ‘FUN_1404d0da8’; did you mean ‘FUN_1402007a8’? [-Wimplicit-function-declaration]

    1032:     UNLOCK();
    1033:   }
    1034:   if ((iVar9 != iVar6) && ((DAT_140fc7b14 & 0x20) != 0)) {
    1035:     FUN_1404d0da8(param_1,iVar9,iVar5,iVar6,&uStack_60);
    1036:   }
    1037:   return;
    1038: }

## FUN_1402015a0 */ — reconstrucao/src/decompiled_01.c:1051
reconstrucao/src/decompiled_01.c:1051:40: error: ‘DAT_140f08470’ undeclared (first use in this function)

    1048:   longlong lStackX_10;
    1049:   
    1050:   lStackX_10 = 0;
    1051:   uVar2 = KeAcquireSpinLockRaiseToDpc(&DAT_140f08470);
    1052:   puVar1 = DAT_140f08468;
    1053:   if (DAT_140f08468 != (uint *)0x0) {
    1054:     uVar3 = *DAT_140f08468;

## FUN_1402015a0 */ — reconstrucao/src/decompiled_01.c:1052
reconstrucao/src/decompiled_01.c:1052:12: error: ‘DAT_140f08468’ undeclared (first use in this function)

    1049:   
    1050:   lStackX_10 = 0;
    1051:   uVar2 = KeAcquireSpinLockRaiseToDpc(&DAT_140f08470);
    1052:   puVar1 = DAT_140f08468;
    1053:   if (DAT_140f08468 != (uint *)0x0) {
    1054:     uVar3 = *DAT_140f08468;
    1055:     if (((uVar3 & 0x10) != 0) && ((uVar3 & 1) != (uint)param_1)) {

## FUN_1402015a0 */ — reconstrucao/src/decompiled_01.c:1059
reconstrucao/src/decompiled_01.c:1059:9: error: implicit declaration of function ‘FUN_1402f0180’; did you mean ‘FUN_140201280’? [-Wimplicit-function-declaration]

    1056:       uVar3 = (param_1 ^ uVar3) & 1 ^ uVar3;
    1057:       *DAT_140f08468 = uVar3;
    1058:       if ((uVar3 & 2) == 0) {
    1059:         FUN_1402f0180(&lStackX_10);
    1060:         if (param_1 == 0) {
    1061:           *(longlong *)(puVar1 + 6) =
    1062:                *(longlong *)(puVar1 + 6) + (lStackX_10 - *(longlong *)(puVar1 + 2));

## FUN_14020164c */ — reconstrucao/src/decompiled_01.c:1083
reconstrucao/src/decompiled_01.c:1083:40: error: ‘DAT_140f0cf28’ undeclared (first use in this function)

    1080: {
    1081:   undefined1 uVar1;
    1082:   
    1083:   uVar1 = KeAcquireSpinLockRaiseToDpc(&DAT_140f0cf28);
    1084:   FUN_140201790(DAT_140fc7ad0 + (ulonglong)param_1 * 0x70 + 0x14,1,param_2);
    1085:   KeReleaseSpinLock(&DAT_140f0cf28,uVar1);
    1086:   if (param_1 == *DAT_140fc7ad0 - 1U) {

## FUN_14020164c */ — reconstrucao/src/decompiled_01.c:1084
reconstrucao/src/decompiled_01.c:1084:17: error: ‘DAT_140fc7ad0’ undeclared (first use in this function)

    1081:   undefined1 uVar1;
    1082:   
    1083:   uVar1 = KeAcquireSpinLockRaiseToDpc(&DAT_140f0cf28);
    1084:   FUN_140201790(DAT_140fc7ad0 + (ulonglong)param_1 * 0x70 + 0x14,1,param_2);
    1085:   KeReleaseSpinLock(&DAT_140f0cf28,uVar1);
    1086:   if (param_1 == *DAT_140fc7ad0 - 1U) {
    1087:     if (param_2 == '\0') {

## FUN_14020164c */ — reconstrucao/src/decompiled_01.c:1088
reconstrucao/src/decompiled_01.c:1088:7: error: implicit declaration of function ‘FUN_140201834’; did you mean ‘FUN_14020164c’? [-Wimplicit-function-declaration]

    1085:   KeReleaseSpinLock(&DAT_140f0cf28,uVar1);
    1086:   if (param_1 == *DAT_140fc7ad0 - 1U) {
    1087:     if (param_2 == '\0') {
    1088:       FUN_140201834(1);
    1089:       FUN_1402015a0(1);
    1090:       FUN_140201e00(1);
    1091:       FUN_140293ff4(6);

## FUN_14020164c */ — reconstrucao/src/decompiled_01.c:1090
reconstrucao/src/decompiled_01.c:1090:7: error: implicit declaration of function ‘FUN_140201e00’; did you mean ‘FUN_1402015a0’? [-Wimplicit-function-declaration]

    1087:     if (param_2 == '\0') {
    1088:       FUN_140201834(1);
    1089:       FUN_1402015a0(1);
    1090:       FUN_140201e00(1);
    1091:       FUN_140293ff4(6);
    1092:     }
    1093:     else {

## FUN_14020164c */ — reconstrucao/src/decompiled_01.c:1091
reconstrucao/src/decompiled_01.c:1091:7: error: implicit declaration of function ‘FUN_140293ff4’; did you mean ‘FUN_140200fd8’? [-Wimplicit-function-declaration]

    1088:       FUN_140201834(1);
    1089:       FUN_1402015a0(1);
    1090:       FUN_140201e00(1);
    1091:       FUN_140293ff4(6);
    1092:     }
    1093:     else {
    1094:       FUN_140201834(0);

## FUN_14020164c */ — reconstrucao/src/decompiled_01.c:1097
reconstrucao/src/decompiled_01.c:1097:7: error: implicit declaration of function ‘FUN_140294550’; did you mean ‘FUN_1402015a0’? [-Wimplicit-function-declaration]

    1094:       FUN_140201834(0);
    1095:       FUN_1402015a0(0);
    1096:       FUN_140201e00(0);
    1097:       FUN_140294550(6);
    1098:     }
    1099:   }
    1100:   return;

## FUN_140201708 */ — reconstrucao/src/decompiled_01.c:1113
reconstrucao/src/decompiled_01.c:1113:7: error: ‘DAT_140fc7ad0’ undeclared (first use in this function)

    1110:   ulonglong uVar3;
    1111:   
    1112:   uVar3 = 0;
    1113:   if (DAT_140fc7ad0 != (uint *)0x0) {
    1114:     uVar1 = KeAcquireSpinLockRaiseToDpc(&DAT_140f0cf28);
    1115:     if (*DAT_140fc7ad0 != 0) {
    1116:       do {

## FUN_140201708 */ — reconstrucao/src/decompiled_01.c:1114
reconstrucao/src/decompiled_01.c:1114:42: error: ‘DAT_140f0cf28’ undeclared (first use in this function)

    1111:   
    1112:   uVar3 = 0;
    1113:   if (DAT_140fc7ad0 != (uint *)0x0) {
    1114:     uVar1 = KeAcquireSpinLockRaiseToDpc(&DAT_140f0cf28);
    1115:     if (*DAT_140fc7ad0 != 0) {
    1116:       do {
    1117:         FUN_140201790(DAT_140fc7ad0 + uVar3 * 0x70 + 0x14,CONCAT71((int7)(uVar3 >> 8),2),

## FUN_140201708 */ — reconstrucao/src/decompiled_01.c:1117
reconstrucao/src/decompiled_01.c:1117:69: error: ‘int7’ undeclared (first use in this function); did you mean ‘int’?

    1114:     uVar1 = KeAcquireSpinLockRaiseToDpc(&DAT_140f0cf28);
    1115:     if (*DAT_140fc7ad0 != 0) {
    1116:       do {
    1117:         FUN_140201790(DAT_140fc7ad0 + uVar3 * 0x70 + 0x14,CONCAT71((int7)(uVar3 >> 8),2),
    1118:                       CONCAT71((int7)(uVar3 * 0x1c0 >> 8),param_1));
    1119:         uVar2 = (int)uVar3 + 1;
    1120:         uVar3 = (ulonglong)uVar2;

## FUN_140201834 */ — reconstrucao/src/decompiled_01.c:1188
reconstrucao/src/decompiled_01.c:1188:40: error: ‘DAT_140f0e990’ undeclared (first use in this function)

    1185: {
    1186:   undefined1 uVar1;
    1187:   
    1188:   uVar1 = KeAcquireSpinLockRaiseToDpc(&DAT_140f0e990);
    1189:   if (DAT_140f0e9a1 != '\0') {
    1190:     if (DAT_140f0e9a0 == param_1) goto LAB_14020188d;
    1191:     if (param_1 == '\0') {

## FUN_140531850 */ — reconstrucao/src/decompiled_02.c:13
reconstrucao/src/decompiled_02.c:13:3: error: unknown type name ‘unkint9’; did you mean ‘uint’?

    10:   ulonglong uVar1;
    11:   ulonglong uVar2;
    12:   ulonglong uVar3;
    13:   unkint9 Var4;
    14:   unkint9 Var5;
    15:   ulonglong uVar6;
    16:   ulonglong uVar7;

## FUN_140531850 */ — reconstrucao/src/decompiled_02.c:14
reconstrucao/src/decompiled_02.c:14:3: error: unknown type name ‘unkint9’; did you mean ‘uint’?

    11:   ulonglong uVar2;
    12:   ulonglong uVar3;
    13:   unkint9 Var4;
    14:   unkint9 Var5;
    15:   ulonglong uVar6;
    16:   ulonglong uVar7;
    17:   ulonglong uVar8;

## FUN_140531850 */ — reconstrucao/src/decompiled_02.c:21
reconstrucao/src/decompiled_02.c:21:24: error: ‘unkuint9’ undeclared (first use in this function)

    18:   ulonglong uVar9;
    19:   ulonglong uVar10;
    20:   
    21:   uVar1 = (ulonglong)((unkuint9)*param_2 + (unkuint9)*param_3);
    22:   Var4 = (unkuint9)param_2[1] + (unkuint9)param_3[1] +
    23:          (unkuint9)((char)((unkuint9)*param_2 + (unkuint9)*param_3 >> 0x40) != '\0');
    24:   uVar2 = (ulonglong)Var4;

## FUN_140531850 */ — reconstrucao/src/decompiled_02.c:22
reconstrucao/src/decompiled_02.c:22:20: error: expected ‘;’ before ‘param_2’

    19:   ulonglong uVar10;
    20:   
    21:   uVar1 = (ulonglong)((unkuint9)*param_2 + (unkuint9)*param_3);
    22:   Var4 = (unkuint9)param_2[1] + (unkuint9)param_3[1] +
    23:          (unkuint9)((char)((unkuint9)*param_2 + (unkuint9)*param_3 >> 0x40) != '\0');
    24:   uVar2 = (ulonglong)Var4;
    25:   Var4 = (unkuint9)param_2[2] + (unkuint9)param_3[2] +

## FUN_140531850 */ — reconstrucao/src/decompiled_02.c:25
reconstrucao/src/decompiled_02.c:25:20: error: expected ‘;’ before ‘param_2’

    22:   Var4 = (unkuint9)param_2[1] + (unkuint9)param_3[1] +
    23:          (unkuint9)((char)((unkuint9)*param_2 + (unkuint9)*param_3 >> 0x40) != '\0');
    24:   uVar2 = (ulonglong)Var4;
    25:   Var4 = (unkuint9)param_2[2] + (unkuint9)param_3[2] +
    26:          (unkuint9)((char)((unkuint9)Var4 >> 0x40) != '\0');
    27:   uVar3 = (ulonglong)Var4;
    28:   Var4 = (unkuint9)param_2[3] + (unkuint9)param_3[3] +

## FUN_140531850 */ — reconstrucao/src/decompiled_02.c:28
reconstrucao/src/decompiled_02.c:28:20: error: expected ‘;’ before ‘param_2’

    25:   Var4 = (unkuint9)param_2[2] + (unkuint9)param_3[2] +
    26:          (unkuint9)((char)((unkuint9)Var4 >> 0x40) != '\0');
    27:   uVar3 = (ulonglong)Var4;
    28:   Var4 = (unkuint9)param_2[3] + (unkuint9)param_3[3] +
    29:          (unkuint9)((char)((unkuint9)Var4 >> 0x40) != '\0');
    30:   uVar10 = (ulonglong)Var4;
    31:   Var5 = (unkuint9)*(ulonglong *)(param_1 + 0x100) + (unkuint9)uVar1;

## FUN_140531850 */ — reconstrucao/src/decompiled_02.c:31
reconstrucao/src/decompiled_02.c:31:64: error: expected ‘;’ before ‘uVar1’

    28:   Var4 = (unkuint9)param_2[3] + (unkuint9)param_3[3] +
    29:          (unkuint9)((char)((unkuint9)Var4 >> 0x40) != '\0');
    30:   uVar10 = (ulonglong)Var4;
    31:   Var5 = (unkuint9)*(ulonglong *)(param_1 + 0x100) + (unkuint9)uVar1;
    32:   uVar6 = (ulonglong)Var5;
    33:   Var5 = (unkuint9)*(ulonglong *)(param_1 + 0x108) + (unkuint9)uVar2 +
    34:          (unkuint9)((char)((unkuint9)Var5 >> 0x40) != '\0');

## FUN_140531850 */ — reconstrucao/src/decompiled_02.c:33
reconstrucao/src/decompiled_02.c:33:64: error: expected ‘;’ before ‘uVar2’

    30:   uVar10 = (ulonglong)Var4;
    31:   Var5 = (unkuint9)*(ulonglong *)(param_1 + 0x100) + (unkuint9)uVar1;
    32:   uVar6 = (ulonglong)Var5;
    33:   Var5 = (unkuint9)*(ulonglong *)(param_1 + 0x108) + (unkuint9)uVar2 +
    34:          (unkuint9)((char)((unkuint9)Var5 >> 0x40) != '\0');
    35:   uVar7 = (ulonglong)Var5;
    36:   Var5 = (unkuint9)*(ulonglong *)(param_1 + 0x110) + (unkuint9)uVar3 +

## FUN_140531850 */ — reconstrucao/src/decompiled_02.c:36
reconstrucao/src/decompiled_02.c:36:64: error: expected ‘;’ before ‘uVar3’

    33:   Var5 = (unkuint9)*(ulonglong *)(param_1 + 0x108) + (unkuint9)uVar2 +
    34:          (unkuint9)((char)((unkuint9)Var5 >> 0x40) != '\0');
    35:   uVar7 = (ulonglong)Var5;
    36:   Var5 = (unkuint9)*(ulonglong *)(param_1 + 0x110) + (unkuint9)uVar3 +
    37:          (unkuint9)((char)((unkuint9)Var5 >> 0x40) != '\0');
    38:   uVar8 = (ulonglong)Var5;
    39:   Var5 = (unkuint9)*(ulonglong *)(param_1 + 0x118) + (unkuint9)uVar10 +

## FUN_140531850 */ — reconstrucao/src/decompiled_02.c:39
reconstrucao/src/decompiled_02.c:39:64: error: expected ‘;’ before ‘uVar10’

    36:   Var5 = (unkuint9)*(ulonglong *)(param_1 + 0x110) + (unkuint9)uVar3 +
    37:          (unkuint9)((char)((unkuint9)Var5 >> 0x40) != '\0');
    38:   uVar8 = (ulonglong)Var5;
    39:   Var5 = (unkuint9)*(ulonglong *)(param_1 + 0x118) + (unkuint9)uVar10 +
    40:          (unkuint9)((char)((unkuint9)Var5 >> 0x40) != '\0');
    41:   uVar9 = (ulonglong)Var5;
    42:   if ((char)((unkuint9)Var4 >> 0x40) != '\0') {

## FUN_140531850 */ — reconstrucao/src/decompiled_02.c:42
reconstrucao/src/decompiled_02.c:42:24: error: expected ‘)’ before ‘Var4’

    39:   Var5 = (unkuint9)*(ulonglong *)(param_1 + 0x118) + (unkuint9)uVar10 +
    40:          (unkuint9)((char)((unkuint9)Var5 >> 0x40) != '\0');
    41:   uVar9 = (ulonglong)Var5;
    42:   if ((char)((unkuint9)Var4 >> 0x40) != '\0') {
    43:     uVar10 = uVar9;
    44:     uVar3 = uVar8;
    45:     uVar2 = uVar7;

## FUN_140531850 */ — reconstrucao/src/decompiled_02.c:48
reconstrucao/src/decompiled_02.c:48:24: error: expected ‘)’ before ‘Var5’

    45:     uVar2 = uVar7;
    46:     uVar1 = uVar6;
    47:   }
    48:   if ((char)((unkuint9)Var5 >> 0x40) != '\0') {
    49:     uVar10 = uVar9;
    50:     uVar3 = uVar8;
    51:     uVar2 = uVar7;

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:71
reconstrucao/src/decompiled_02.c:71:3: error: unknown type name ‘unkint9’; did you mean ‘uint’?

    68:   ulonglong uVar3;
    69:   ulonglong uVar4;
    70:   ulonglong uVar5;
    71:   unkint9 Var6;
    72:   ulonglong uVar7;
    73:   ulonglong uVar8;
    74:   ulonglong uVar9;

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:75
reconstrucao/src/decompiled_02.c:75:3: error: unknown type name ‘unkint9’; did you mean ‘uint’?

    72:   ulonglong uVar7;
    73:   ulonglong uVar8;
    74:   ulonglong uVar9;
    75:   unkint9 Var10;
    76:   ulonglong uVar11;
    77:   unkint9 Var12;
    78:   unkint9 Var13;

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:77
reconstrucao/src/decompiled_02.c:77:3: error: unknown type name ‘unkint9’; did you mean ‘uint’?

    74:   ulonglong uVar9;
    75:   unkint9 Var10;
    76:   ulonglong uVar11;
    77:   unkint9 Var12;
    78:   unkint9 Var13;
    79:   unkint9 Var14;
    80:   unkint9 Var15;

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:78
reconstrucao/src/decompiled_02.c:78:3: error: unknown type name ‘unkint9’; did you mean ‘uint’?

    75:   unkint9 Var10;
    76:   ulonglong uVar11;
    77:   unkint9 Var12;
    78:   unkint9 Var13;
    79:   unkint9 Var14;
    80:   unkint9 Var15;
    81:   undefined1 auVar16 [16];

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:79
reconstrucao/src/decompiled_02.c:79:3: error: unknown type name ‘unkint9’; did you mean ‘uint’?

    76:   ulonglong uVar11;
    77:   unkint9 Var12;
    78:   unkint9 Var13;
    79:   unkint9 Var14;
    80:   unkint9 Var15;
    81:   undefined1 auVar16 [16];
    82:   undefined1 auVar17 [16];

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:80
reconstrucao/src/decompiled_02.c:80:3: error: unknown type name ‘unkint9’; did you mean ‘uint’?

    77:   unkint9 Var12;
    78:   unkint9 Var13;
    79:   unkint9 Var14;
    80:   unkint9 Var15;
    81:   undefined1 auVar16 [16];
    82:   undefined1 auVar17 [16];
    83:   undefined1 auVar18 [16];

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:154
reconstrucao/src/decompiled_02.c:154:10: error: request for member ‘_8_8_’ in something not a structure or union

    151:   ulonglong uVar86;
    152:   
    153:   uVar1 = *param_2;
    154:   auVar16._8_8_ = 0;
    155:   auVar16._0_8_ = uVar1;
    156:   auVar48._8_8_ = 0;
    157:   auVar48._0_8_ = *param_3;

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:155
reconstrucao/src/decompiled_02.c:155:10: error: request for member ‘_0_8_’ in something not a structure or union

    152:   
    153:   uVar1 = *param_2;
    154:   auVar16._8_8_ = 0;
    155:   auVar16._0_8_ = uVar1;
    156:   auVar48._8_8_ = 0;
    157:   auVar48._0_8_ = *param_3;
    158:   uVar4 = SUB168(auVar16 * auVar48,0);

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:156
reconstrucao/src/decompiled_02.c:156:10: error: request for member ‘_8_8_’ in something not a structure or union

    153:   uVar1 = *param_2;
    154:   auVar16._8_8_ = 0;
    155:   auVar16._0_8_ = uVar1;
    156:   auVar48._8_8_ = 0;
    157:   auVar48._0_8_ = *param_3;
    158:   uVar4 = SUB168(auVar16 * auVar48,0);
    159:   uVar83 = SUB168(auVar16 * auVar48,8);

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:157
reconstrucao/src/decompiled_02.c:157:10: error: request for member ‘_0_8_’ in something not a structure or union

    154:   auVar16._8_8_ = 0;
    155:   auVar16._0_8_ = uVar1;
    156:   auVar48._8_8_ = 0;
    157:   auVar48._0_8_ = *param_3;
    158:   uVar4 = SUB168(auVar16 * auVar48,0);
    159:   uVar83 = SUB168(auVar16 * auVar48,8);
    160:   auVar17._8_8_ = 0;

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:158
reconstrucao/src/decompiled_02.c:158:11: error: implicit declaration of function ‘SUB168’ [-Wimplicit-function-declaration]

    155:   auVar16._0_8_ = uVar1;
    156:   auVar48._8_8_ = 0;
    157:   auVar48._0_8_ = *param_3;
    158:   uVar4 = SUB168(auVar16 * auVar48,0);
    159:   uVar83 = SUB168(auVar16 * auVar48,8);
    160:   auVar17._8_8_ = 0;
    161:   auVar17._0_8_ = uVar1;

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:158
reconstrucao/src/decompiled_02.c:158:26: error: invalid operands to binary * (have ‘undefined1 *’ {aka ‘unsigned char *’} and ‘undefined1 *’ {aka ‘unsigned char *’})

    155:   auVar16._0_8_ = uVar1;
    156:   auVar48._8_8_ = 0;
    157:   auVar48._0_8_ = *param_3;
    158:   uVar4 = SUB168(auVar16 * auVar48,0);
    159:   uVar83 = SUB168(auVar16 * auVar48,8);
    160:   auVar17._8_8_ = 0;
    161:   auVar17._0_8_ = uVar1;

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:159
reconstrucao/src/decompiled_02.c:159:27: error: invalid operands to binary * (have ‘undefined1 *’ {aka ‘unsigned char *’} and ‘undefined1 *’ {aka ‘unsigned char *’})

    156:   auVar48._8_8_ = 0;
    157:   auVar48._0_8_ = *param_3;
    158:   uVar4 = SUB168(auVar16 * auVar48,0);
    159:   uVar83 = SUB168(auVar16 * auVar48,8);
    160:   auVar17._8_8_ = 0;
    161:   auVar17._0_8_ = uVar1;
    162:   auVar49._8_8_ = 0;

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:160
reconstrucao/src/decompiled_02.c:160:10: error: request for member ‘_8_8_’ in something not a structure or union

    157:   auVar48._0_8_ = *param_3;
    158:   uVar4 = SUB168(auVar16 * auVar48,0);
    159:   uVar83 = SUB168(auVar16 * auVar48,8);
    160:   auVar17._8_8_ = 0;
    161:   auVar17._0_8_ = uVar1;
    162:   auVar49._8_8_ = 0;
    163:   auVar49._0_8_ = param_3[1];

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:161
reconstrucao/src/decompiled_02.c:161:10: error: request for member ‘_0_8_’ in something not a structure or union

    158:   uVar4 = SUB168(auVar16 * auVar48,0);
    159:   uVar83 = SUB168(auVar16 * auVar48,8);
    160:   auVar17._8_8_ = 0;
    161:   auVar17._0_8_ = uVar1;
    162:   auVar49._8_8_ = 0;
    163:   auVar49._0_8_ = param_3[1];
    164:   uVar7 = SUB168(auVar17 * auVar49,0);

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:162
reconstrucao/src/decompiled_02.c:162:10: error: request for member ‘_8_8_’ in something not a structure or union

    159:   uVar83 = SUB168(auVar16 * auVar48,8);
    160:   auVar17._8_8_ = 0;
    161:   auVar17._0_8_ = uVar1;
    162:   auVar49._8_8_ = 0;
    163:   auVar49._0_8_ = param_3[1];
    164:   uVar7 = SUB168(auVar17 * auVar49,0);
    165:   uVar82 = SUB168(auVar17 * auVar49,8);

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:163
reconstrucao/src/decompiled_02.c:163:10: error: request for member ‘_0_8_’ in something not a structure or union

    160:   auVar17._8_8_ = 0;
    161:   auVar17._0_8_ = uVar1;
    162:   auVar49._8_8_ = 0;
    163:   auVar49._0_8_ = param_3[1];
    164:   uVar7 = SUB168(auVar17 * auVar49,0);
    165:   uVar82 = SUB168(auVar17 * auVar49,8);
    166:   auVar18._8_8_ = 0;

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:164
reconstrucao/src/decompiled_02.c:164:26: error: invalid operands to binary * (have ‘undefined1 *’ {aka ‘unsigned char *’} and ‘undefined1 *’ {aka ‘unsigned char *’})

    161:   auVar17._0_8_ = uVar1;
    162:   auVar49._8_8_ = 0;
    163:   auVar49._0_8_ = param_3[1];
    164:   uVar7 = SUB168(auVar17 * auVar49,0);
    165:   uVar82 = SUB168(auVar17 * auVar49,8);
    166:   auVar18._8_8_ = 0;
    167:   auVar18._0_8_ = uVar1;

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:165
reconstrucao/src/decompiled_02.c:165:27: error: invalid operands to binary * (have ‘undefined1 *’ {aka ‘unsigned char *’} and ‘undefined1 *’ {aka ‘unsigned char *’})

    162:   auVar49._8_8_ = 0;
    163:   auVar49._0_8_ = param_3[1];
    164:   uVar7 = SUB168(auVar17 * auVar49,0);
    165:   uVar82 = SUB168(auVar17 * auVar49,8);
    166:   auVar18._8_8_ = 0;
    167:   auVar18._0_8_ = uVar1;
    168:   auVar50._8_8_ = 0;

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:166
reconstrucao/src/decompiled_02.c:166:10: error: request for member ‘_8_8_’ in something not a structure or union

    163:   auVar49._0_8_ = param_3[1];
    164:   uVar7 = SUB168(auVar17 * auVar49,0);
    165:   uVar82 = SUB168(auVar17 * auVar49,8);
    166:   auVar18._8_8_ = 0;
    167:   auVar18._0_8_ = uVar1;
    168:   auVar50._8_8_ = 0;
    169:   auVar50._0_8_ = param_3[2];

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:167
reconstrucao/src/decompiled_02.c:167:10: error: request for member ‘_0_8_’ in something not a structure or union

    164:   uVar7 = SUB168(auVar17 * auVar49,0);
    165:   uVar82 = SUB168(auVar17 * auVar49,8);
    166:   auVar18._8_8_ = 0;
    167:   auVar18._0_8_ = uVar1;
    168:   auVar50._8_8_ = 0;
    169:   auVar50._0_8_ = param_3[2];
    170:   uVar2 = SUB168(auVar18 * auVar50,0);

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:168
reconstrucao/src/decompiled_02.c:168:10: error: request for member ‘_8_8_’ in something not a structure or union

    165:   uVar82 = SUB168(auVar17 * auVar49,8);
    166:   auVar18._8_8_ = 0;
    167:   auVar18._0_8_ = uVar1;
    168:   auVar50._8_8_ = 0;
    169:   auVar50._0_8_ = param_3[2];
    170:   uVar2 = SUB168(auVar18 * auVar50,0);
    171:   uVar81 = SUB168(auVar18 * auVar50,8);

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:169
reconstrucao/src/decompiled_02.c:169:10: error: request for member ‘_0_8_’ in something not a structure or union

    166:   auVar18._8_8_ = 0;
    167:   auVar18._0_8_ = uVar1;
    168:   auVar50._8_8_ = 0;
    169:   auVar50._0_8_ = param_3[2];
    170:   uVar2 = SUB168(auVar18 * auVar50,0);
    171:   uVar81 = SUB168(auVar18 * auVar50,8);
    172:   uVar86 = (ulonglong)CARRY8(uVar83,uVar7);

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:170
reconstrucao/src/decompiled_02.c:170:26: error: invalid operands to binary * (have ‘undefined1 *’ {aka ‘unsigned char *’} and ‘undefined1 *’ {aka ‘unsigned char *’})

    167:   auVar18._0_8_ = uVar1;
    168:   auVar50._8_8_ = 0;
    169:   auVar50._0_8_ = param_3[2];
    170:   uVar2 = SUB168(auVar18 * auVar50,0);
    171:   uVar81 = SUB168(auVar18 * auVar50,8);
    172:   uVar86 = (ulonglong)CARRY8(uVar83,uVar7);
    173:   uVar3 = uVar82 + uVar2;

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:171
reconstrucao/src/decompiled_02.c:171:27: error: invalid operands to binary * (have ‘undefined1 *’ {aka ‘unsigned char *’} and ‘undefined1 *’ {aka ‘unsigned char *’})

    168:   auVar50._8_8_ = 0;
    169:   auVar50._0_8_ = param_3[2];
    170:   uVar2 = SUB168(auVar18 * auVar50,0);
    171:   uVar81 = SUB168(auVar18 * auVar50,8);
    172:   uVar86 = (ulonglong)CARRY8(uVar83,uVar7);
    173:   uVar3 = uVar82 + uVar2;
    174:   auVar19._8_8_ = 0;

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:172
reconstrucao/src/decompiled_02.c:172:23: error: implicit declaration of function ‘CARRY8’ [-Wimplicit-function-declaration]

    169:   auVar50._0_8_ = param_3[2];
    170:   uVar2 = SUB168(auVar18 * auVar50,0);
    171:   uVar81 = SUB168(auVar18 * auVar50,8);
    172:   uVar86 = (ulonglong)CARRY8(uVar83,uVar7);
    173:   uVar3 = uVar82 + uVar2;
    174:   auVar19._8_8_ = 0;
    175:   auVar19._0_8_ = uVar1;

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:174
reconstrucao/src/decompiled_02.c:174:10: error: request for member ‘_8_8_’ in something not a structure or union

    171:   uVar81 = SUB168(auVar18 * auVar50,8);
    172:   uVar86 = (ulonglong)CARRY8(uVar83,uVar7);
    173:   uVar3 = uVar82 + uVar2;
    174:   auVar19._8_8_ = 0;
    175:   auVar19._0_8_ = uVar1;
    176:   auVar51._8_8_ = 0;
    177:   auVar51._0_8_ = param_3[3];

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:175
reconstrucao/src/decompiled_02.c:175:10: error: request for member ‘_0_8_’ in something not a structure or union

    172:   uVar86 = (ulonglong)CARRY8(uVar83,uVar7);
    173:   uVar3 = uVar82 + uVar2;
    174:   auVar19._8_8_ = 0;
    175:   auVar19._0_8_ = uVar1;
    176:   auVar51._8_8_ = 0;
    177:   auVar51._0_8_ = param_3[3];
    178:   uVar5 = SUB168(auVar19 * auVar51,0);

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:176
reconstrucao/src/decompiled_02.c:176:10: error: request for member ‘_8_8_’ in something not a structure or union

    173:   uVar3 = uVar82 + uVar2;
    174:   auVar19._8_8_ = 0;
    175:   auVar19._0_8_ = uVar1;
    176:   auVar51._8_8_ = 0;
    177:   auVar51._0_8_ = param_3[3];
    178:   uVar5 = SUB168(auVar19 * auVar51,0);
    179:   uVar2 = (ulonglong)(CARRY8(uVar82,uVar2) || CARRY8(uVar3,uVar86));

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:177
reconstrucao/src/decompiled_02.c:177:10: error: request for member ‘_0_8_’ in something not a structure or union

    174:   auVar19._8_8_ = 0;
    175:   auVar19._0_8_ = uVar1;
    176:   auVar51._8_8_ = 0;
    177:   auVar51._0_8_ = param_3[3];
    178:   uVar5 = SUB168(auVar19 * auVar51,0);
    179:   uVar2 = (ulonglong)(CARRY8(uVar82,uVar2) || CARRY8(uVar3,uVar86));
    180:   uVar82 = uVar81 + uVar5;

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:178
reconstrucao/src/decompiled_02.c:178:26: error: invalid operands to binary * (have ‘undefined1 *’ {aka ‘unsigned char *’} and ‘undefined1 *’ {aka ‘unsigned char *’})

    175:   auVar19._0_8_ = uVar1;
    176:   auVar51._8_8_ = 0;
    177:   auVar51._0_8_ = param_3[3];
    178:   uVar5 = SUB168(auVar19 * auVar51,0);
    179:   uVar2 = (ulonglong)(CARRY8(uVar82,uVar2) || CARRY8(uVar3,uVar86));
    180:   uVar82 = uVar81 + uVar5;
    181:   uVar85 = uVar4 * *(longlong *)(param_1 + 0x18);

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:184
reconstrucao/src/decompiled_02.c:184:10: error: request for member ‘_8_8_’ in something not a structure or union

    181:   uVar85 = uVar4 * *(longlong *)(param_1 + 0x18);
    182:   puVar80 = (ulonglong *)(param_1 + 0x80);
    183:   uVar1 = param_2[1];
    184:   auVar20._8_8_ = 0;
    185:   auVar20._0_8_ = uVar1;
    186:   auVar52._8_8_ = 0;
    187:   auVar52._0_8_ = *param_3;

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:185
reconstrucao/src/decompiled_02.c:185:10: error: request for member ‘_0_8_’ in something not a structure or union

    182:   puVar80 = (ulonglong *)(param_1 + 0x80);
    183:   uVar1 = param_2[1];
    184:   auVar20._8_8_ = 0;
    185:   auVar20._0_8_ = uVar1;
    186:   auVar52._8_8_ = 0;
    187:   auVar52._0_8_ = *param_3;
    188:   Var10 = (unkuint9)(uVar83 + uVar7) + (unkuint9)SUB168(auVar20 * auVar52,0);

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:186
reconstrucao/src/decompiled_02.c:186:10: error: request for member ‘_8_8_’ in something not a structure or union

    183:   uVar1 = param_2[1];
    184:   auVar20._8_8_ = 0;
    185:   auVar20._0_8_ = uVar1;
    186:   auVar52._8_8_ = 0;
    187:   auVar52._0_8_ = *param_3;
    188:   Var10 = (unkuint9)(uVar83 + uVar7) + (unkuint9)SUB168(auVar20 * auVar52,0);
    189:   Var6 = (unkuint9)(uVar3 + uVar86) + (unkuint9)SUB168(auVar20 * auVar52,8);

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:187
reconstrucao/src/decompiled_02.c:187:10: error: request for member ‘_0_8_’ in something not a structure or union

    184:   auVar20._8_8_ = 0;
    185:   auVar20._0_8_ = uVar1;
    186:   auVar52._8_8_ = 0;
    187:   auVar52._0_8_ = *param_3;
    188:   Var10 = (unkuint9)(uVar83 + uVar7) + (unkuint9)SUB168(auVar20 * auVar52,0);
    189:   Var6 = (unkuint9)(uVar3 + uVar86) + (unkuint9)SUB168(auVar20 * auVar52,8);
    190:   auVar21._8_8_ = 0;

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:188
reconstrucao/src/decompiled_02.c:188:12: error: ‘unkuint9’ undeclared (first use in this function)

    185:   auVar20._0_8_ = uVar1;
    186:   auVar52._8_8_ = 0;
    187:   auVar52._0_8_ = *param_3;
    188:   Var10 = (unkuint9)(uVar83 + uVar7) + (unkuint9)SUB168(auVar20 * auVar52,0);
    189:   Var6 = (unkuint9)(uVar3 + uVar86) + (unkuint9)SUB168(auVar20 * auVar52,8);
    190:   auVar21._8_8_ = 0;
    191:   auVar21._0_8_ = uVar1;

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:188
reconstrucao/src/decompiled_02.c:188:50: error: expected ‘;’ before ‘SUB168’

    185:   auVar20._0_8_ = uVar1;
    186:   auVar52._8_8_ = 0;
    187:   auVar52._0_8_ = *param_3;
    188:   Var10 = (unkuint9)(uVar83 + uVar7) + (unkuint9)SUB168(auVar20 * auVar52,0);
    189:   Var6 = (unkuint9)(uVar3 + uVar86) + (unkuint9)SUB168(auVar20 * auVar52,8);
    190:   auVar21._8_8_ = 0;
    191:   auVar21._0_8_ = uVar1;

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:189
reconstrucao/src/decompiled_02.c:189:49: error: expected ‘;’ before ‘SUB168’

    186:   auVar52._8_8_ = 0;
    187:   auVar52._0_8_ = *param_3;
    188:   Var10 = (unkuint9)(uVar83 + uVar7) + (unkuint9)SUB168(auVar20 * auVar52,0);
    189:   Var6 = (unkuint9)(uVar3 + uVar86) + (unkuint9)SUB168(auVar20 * auVar52,8);
    190:   auVar21._8_8_ = 0;
    191:   auVar21._0_8_ = uVar1;
    192:   auVar53._8_8_ = 0;

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:190
reconstrucao/src/decompiled_02.c:190:10: error: request for member ‘_8_8_’ in something not a structure or union

    187:   auVar52._0_8_ = *param_3;
    188:   Var10 = (unkuint9)(uVar83 + uVar7) + (unkuint9)SUB168(auVar20 * auVar52,0);
    189:   Var6 = (unkuint9)(uVar3 + uVar86) + (unkuint9)SUB168(auVar20 * auVar52,8);
    190:   auVar21._8_8_ = 0;
    191:   auVar21._0_8_ = uVar1;
    192:   auVar53._8_8_ = 0;
    193:   auVar53._0_8_ = param_3[1];

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:191
reconstrucao/src/decompiled_02.c:191:10: error: request for member ‘_0_8_’ in something not a structure or union

    188:   Var10 = (unkuint9)(uVar83 + uVar7) + (unkuint9)SUB168(auVar20 * auVar52,0);
    189:   Var6 = (unkuint9)(uVar3 + uVar86) + (unkuint9)SUB168(auVar20 * auVar52,8);
    190:   auVar21._8_8_ = 0;
    191:   auVar21._0_8_ = uVar1;
    192:   auVar53._8_8_ = 0;
    193:   auVar53._0_8_ = param_3[1];
    194:   Var12 = (unkuint9)(ulonglong)Var6 + (unkuint9)SUB168(auVar21 * auVar53,0) +

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:192
reconstrucao/src/decompiled_02.c:192:10: error: request for member ‘_8_8_’ in something not a structure or union

    189:   Var6 = (unkuint9)(uVar3 + uVar86) + (unkuint9)SUB168(auVar20 * auVar52,8);
    190:   auVar21._8_8_ = 0;
    191:   auVar21._0_8_ = uVar1;
    192:   auVar53._8_8_ = 0;
    193:   auVar53._0_8_ = param_3[1];
    194:   Var12 = (unkuint9)(ulonglong)Var6 + (unkuint9)SUB168(auVar21 * auVar53,0) +
    195:           (unkuint9)((char)((unkuint9)Var10 >> 0x40) != '\0');

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:193
reconstrucao/src/decompiled_02.c:193:10: error: request for member ‘_0_8_’ in something not a structure or union

    190:   auVar21._8_8_ = 0;
    191:   auVar21._0_8_ = uVar1;
    192:   auVar53._8_8_ = 0;
    193:   auVar53._0_8_ = param_3[1];
    194:   Var12 = (unkuint9)(ulonglong)Var6 + (unkuint9)SUB168(auVar21 * auVar53,0) +
    195:           (unkuint9)((char)((unkuint9)Var10 >> 0x40) != '\0');
    196:   Var6 = (unkuint9)(uVar82 + uVar2) + (unkuint9)SUB168(auVar21 * auVar53,8) +

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:194
reconstrucao/src/decompiled_02.c:194:22: error: expected expression before ‘ulonglong’

    191:   auVar21._0_8_ = uVar1;
    192:   auVar53._8_8_ = 0;
    193:   auVar53._0_8_ = param_3[1];
    194:   Var12 = (unkuint9)(ulonglong)Var6 + (unkuint9)SUB168(auVar21 * auVar53,0) +
    195:           (unkuint9)((char)((unkuint9)Var10 >> 0x40) != '\0');
    196:   Var6 = (unkuint9)(uVar82 + uVar2) + (unkuint9)SUB168(auVar21 * auVar53,8) +
    197:          (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:194
reconstrucao/src/decompiled_02.c:194:32: error: expected ‘;’ before ‘Var6’

    191:   auVar21._0_8_ = uVar1;
    192:   auVar53._8_8_ = 0;
    193:   auVar53._0_8_ = param_3[1];
    194:   Var12 = (unkuint9)(ulonglong)Var6 + (unkuint9)SUB168(auVar21 * auVar53,0) +
    195:           (unkuint9)((char)((unkuint9)Var10 >> 0x40) != '\0');
    196:   Var6 = (unkuint9)(uVar82 + uVar2) + (unkuint9)SUB168(auVar21 * auVar53,8) +
    197:          (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:196
reconstrucao/src/decompiled_02.c:196:49: error: expected ‘;’ before ‘SUB168’

    193:   auVar53._0_8_ = param_3[1];
    194:   Var12 = (unkuint9)(ulonglong)Var6 + (unkuint9)SUB168(auVar21 * auVar53,0) +
    195:           (unkuint9)((char)((unkuint9)Var10 >> 0x40) != '\0');
    196:   Var6 = (unkuint9)(uVar82 + uVar2) + (unkuint9)SUB168(auVar21 * auVar53,8) +
    197:          (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
    198:   auVar22._8_8_ = 0;
    199:   auVar22._0_8_ = uVar1;

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:198
reconstrucao/src/decompiled_02.c:198:10: error: request for member ‘_8_8_’ in something not a structure or union

    195:           (unkuint9)((char)((unkuint9)Var10 >> 0x40) != '\0');
    196:   Var6 = (unkuint9)(uVar82 + uVar2) + (unkuint9)SUB168(auVar21 * auVar53,8) +
    197:          (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
    198:   auVar22._8_8_ = 0;
    199:   auVar22._0_8_ = uVar1;
    200:   auVar54._8_8_ = 0;
    201:   auVar54._0_8_ = param_3[2];

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:199
reconstrucao/src/decompiled_02.c:199:10: error: request for member ‘_0_8_’ in something not a structure or union

    196:   Var6 = (unkuint9)(uVar82 + uVar2) + (unkuint9)SUB168(auVar21 * auVar53,8) +
    197:          (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
    198:   auVar22._8_8_ = 0;
    199:   auVar22._0_8_ = uVar1;
    200:   auVar54._8_8_ = 0;
    201:   auVar54._0_8_ = param_3[2];
    202:   Var13 = (unkuint9)(ulonglong)Var6 + (unkuint9)SUB168(auVar22 * auVar54,0) +

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:200
reconstrucao/src/decompiled_02.c:200:10: error: request for member ‘_8_8_’ in something not a structure or union

    197:          (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
    198:   auVar22._8_8_ = 0;
    199:   auVar22._0_8_ = uVar1;
    200:   auVar54._8_8_ = 0;
    201:   auVar54._0_8_ = param_3[2];
    202:   Var13 = (unkuint9)(ulonglong)Var6 + (unkuint9)SUB168(auVar22 * auVar54,0) +
    203:           (unkuint9)((char)((unkuint9)Var12 >> 0x40) != '\0');

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:201
reconstrucao/src/decompiled_02.c:201:10: error: request for member ‘_0_8_’ in something not a structure or union

    198:   auVar22._8_8_ = 0;
    199:   auVar22._0_8_ = uVar1;
    200:   auVar54._8_8_ = 0;
    201:   auVar54._0_8_ = param_3[2];
    202:   Var13 = (unkuint9)(ulonglong)Var6 + (unkuint9)SUB168(auVar22 * auVar54,0) +
    203:           (unkuint9)((char)((unkuint9)Var12 >> 0x40) != '\0');
    204:   Var6 = (unkuint9)

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:202
reconstrucao/src/decompiled_02.c:202:22: error: expected expression before ‘ulonglong’

    199:   auVar22._0_8_ = uVar1;
    200:   auVar54._8_8_ = 0;
    201:   auVar54._0_8_ = param_3[2];
    202:   Var13 = (unkuint9)(ulonglong)Var6 + (unkuint9)SUB168(auVar22 * auVar54,0) +
    203:           (unkuint9)((char)((unkuint9)Var12 >> 0x40) != '\0');
    204:   Var6 = (unkuint9)
    205:          (SUB168(auVar19 * auVar51,8) + (ulonglong)(CARRY8(uVar81,uVar5) || CARRY8(uVar82,uVar2))) +

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:202
reconstrucao/src/decompiled_02.c:202:32: error: expected ‘;’ before ‘Var6’

    199:   auVar22._0_8_ = uVar1;
    200:   auVar54._8_8_ = 0;
    201:   auVar54._0_8_ = param_3[2];
    202:   Var13 = (unkuint9)(ulonglong)Var6 + (unkuint9)SUB168(auVar22 * auVar54,0) +
    203:           (unkuint9)((char)((unkuint9)Var12 >> 0x40) != '\0');
    204:   Var6 = (unkuint9)
    205:          (SUB168(auVar19 * auVar51,8) + (ulonglong)(CARRY8(uVar81,uVar5) || CARRY8(uVar82,uVar2))) +

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:205
reconstrucao/src/decompiled_02.c:205:26: error: invalid operands to binary * (have ‘undefined1 *’ {aka ‘unsigned char *’} and ‘undefined1 *’ {aka ‘unsigned char *’})

    202:   Var13 = (unkuint9)(ulonglong)Var6 + (unkuint9)SUB168(auVar22 * auVar54,0) +
    203:           (unkuint9)((char)((unkuint9)Var12 >> 0x40) != '\0');
    204:   Var6 = (unkuint9)
    205:          (SUB168(auVar19 * auVar51,8) + (ulonglong)(CARRY8(uVar81,uVar5) || CARRY8(uVar82,uVar2))) +
    206:          (unkuint9)SUB168(auVar22 * auVar54,8) + (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
    207:   auVar23._8_8_ = 0;
    208:   auVar23._0_8_ = uVar1;

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:206
reconstrucao/src/decompiled_02.c:206:20: error: expected ‘;’ before ‘SUB168’

    203:           (unkuint9)((char)((unkuint9)Var12 >> 0x40) != '\0');
    204:   Var6 = (unkuint9)
    205:          (SUB168(auVar19 * auVar51,8) + (ulonglong)(CARRY8(uVar81,uVar5) || CARRY8(uVar82,uVar2))) +
    206:          (unkuint9)SUB168(auVar22 * auVar54,8) + (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
    207:   auVar23._8_8_ = 0;
    208:   auVar23._0_8_ = uVar1;
    209:   auVar55._8_8_ = 0;

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:207
reconstrucao/src/decompiled_02.c:207:10: error: request for member ‘_8_8_’ in something not a structure or union

    204:   Var6 = (unkuint9)
    205:          (SUB168(auVar19 * auVar51,8) + (ulonglong)(CARRY8(uVar81,uVar5) || CARRY8(uVar82,uVar2))) +
    206:          (unkuint9)SUB168(auVar22 * auVar54,8) + (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
    207:   auVar23._8_8_ = 0;
    208:   auVar23._0_8_ = uVar1;
    209:   auVar55._8_8_ = 0;
    210:   auVar55._0_8_ = param_3[3];

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:208
reconstrucao/src/decompiled_02.c:208:10: error: request for member ‘_0_8_’ in something not a structure or union

    205:          (SUB168(auVar19 * auVar51,8) + (ulonglong)(CARRY8(uVar81,uVar5) || CARRY8(uVar82,uVar2))) +
    206:          (unkuint9)SUB168(auVar22 * auVar54,8) + (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
    207:   auVar23._8_8_ = 0;
    208:   auVar23._0_8_ = uVar1;
    209:   auVar55._8_8_ = 0;
    210:   auVar55._0_8_ = param_3[3];
    211:   Var14 = (unkuint9)(ulonglong)Var6 + (unkuint9)SUB168(auVar23 * auVar55,0) +

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:209
reconstrucao/src/decompiled_02.c:209:10: error: request for member ‘_8_8_’ in something not a structure or union

    206:          (unkuint9)SUB168(auVar22 * auVar54,8) + (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
    207:   auVar23._8_8_ = 0;
    208:   auVar23._0_8_ = uVar1;
    209:   auVar55._8_8_ = 0;
    210:   auVar55._0_8_ = param_3[3];
    211:   Var14 = (unkuint9)(ulonglong)Var6 + (unkuint9)SUB168(auVar23 * auVar55,0) +
    212:           (unkuint9)((char)((unkuint9)Var13 >> 0x40) != '\0');

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:210
reconstrucao/src/decompiled_02.c:210:10: error: request for member ‘_0_8_’ in something not a structure or union

    207:   auVar23._8_8_ = 0;
    208:   auVar23._0_8_ = uVar1;
    209:   auVar55._8_8_ = 0;
    210:   auVar55._0_8_ = param_3[3];
    211:   Var14 = (unkuint9)(ulonglong)Var6 + (unkuint9)SUB168(auVar23 * auVar55,0) +
    212:           (unkuint9)((char)((unkuint9)Var13 >> 0x40) != '\0');
    213:   uVar3 = SUB168(auVar23 * auVar55,8) + (ulonglong)((char)((unkuint9)Var6 >> 0x40) != '\0');

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:211
reconstrucao/src/decompiled_02.c:211:22: error: expected expression before ‘ulonglong’

    208:   auVar23._0_8_ = uVar1;
    209:   auVar55._8_8_ = 0;
    210:   auVar55._0_8_ = param_3[3];
    211:   Var14 = (unkuint9)(ulonglong)Var6 + (unkuint9)SUB168(auVar23 * auVar55,0) +
    212:           (unkuint9)((char)((unkuint9)Var13 >> 0x40) != '\0');
    213:   uVar3 = SUB168(auVar23 * auVar55,8) + (ulonglong)((char)((unkuint9)Var6 >> 0x40) != '\0');
    214:   auVar24._8_8_ = 0;

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:211
reconstrucao/src/decompiled_02.c:211:32: error: expected ‘;’ before ‘Var6’

    208:   auVar23._0_8_ = uVar1;
    209:   auVar55._8_8_ = 0;
    210:   auVar55._0_8_ = param_3[3];
    211:   Var14 = (unkuint9)(ulonglong)Var6 + (unkuint9)SUB168(auVar23 * auVar55,0) +
    212:           (unkuint9)((char)((unkuint9)Var13 >> 0x40) != '\0');
    213:   uVar3 = SUB168(auVar23 * auVar55,8) + (ulonglong)((char)((unkuint9)Var6 >> 0x40) != '\0');
    214:   auVar24._8_8_ = 0;

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:213
reconstrucao/src/decompiled_02.c:213:26: error: invalid operands to binary * (have ‘undefined1 *’ {aka ‘unsigned char *’} and ‘undefined1 *’ {aka ‘unsigned char *’})

    210:   auVar55._0_8_ = param_3[3];
    211:   Var14 = (unkuint9)(ulonglong)Var6 + (unkuint9)SUB168(auVar23 * auVar55,0) +
    212:           (unkuint9)((char)((unkuint9)Var13 >> 0x40) != '\0');
    213:   uVar3 = SUB168(auVar23 * auVar55,8) + (ulonglong)((char)((unkuint9)Var6 >> 0x40) != '\0');
    214:   auVar24._8_8_ = 0;
    215:   auVar24._0_8_ = uVar85;
    216:   auVar56._8_8_ = 0;

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:213
reconstrucao/src/decompiled_02.c:213:70: error: expected ‘)’ before ‘Var6’

    210:   auVar55._0_8_ = param_3[3];
    211:   Var14 = (unkuint9)(ulonglong)Var6 + (unkuint9)SUB168(auVar23 * auVar55,0) +
    212:           (unkuint9)((char)((unkuint9)Var13 >> 0x40) != '\0');
    213:   uVar3 = SUB168(auVar23 * auVar55,8) + (ulonglong)((char)((unkuint9)Var6 >> 0x40) != '\0');
    214:   auVar24._8_8_ = 0;
    215:   auVar24._0_8_ = uVar85;
    216:   auVar56._8_8_ = 0;

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:214
reconstrucao/src/decompiled_02.c:214:10: error: request for member ‘_8_8_’ in something not a structure or union

    211:   Var14 = (unkuint9)(ulonglong)Var6 + (unkuint9)SUB168(auVar23 * auVar55,0) +
    212:           (unkuint9)((char)((unkuint9)Var13 >> 0x40) != '\0');
    213:   uVar3 = SUB168(auVar23 * auVar55,8) + (ulonglong)((char)((unkuint9)Var6 >> 0x40) != '\0');
    214:   auVar24._8_8_ = 0;
    215:   auVar24._0_8_ = uVar85;
    216:   auVar56._8_8_ = 0;
    217:   auVar56._0_8_ = *puVar80;

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:215
reconstrucao/src/decompiled_02.c:215:10: error: request for member ‘_0_8_’ in something not a structure or union

    212:           (unkuint9)((char)((unkuint9)Var13 >> 0x40) != '\0');
    213:   uVar3 = SUB168(auVar23 * auVar55,8) + (ulonglong)((char)((unkuint9)Var6 >> 0x40) != '\0');
    214:   auVar24._8_8_ = 0;
    215:   auVar24._0_8_ = uVar85;
    216:   auVar56._8_8_ = 0;
    217:   auVar56._0_8_ = *puVar80;
    218:   Var6 = (unkuint9)uVar4 + (unkuint9)SUB168(auVar24 * auVar56,0);

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:216
reconstrucao/src/decompiled_02.c:216:10: error: request for member ‘_8_8_’ in something not a structure or union

    213:   uVar3 = SUB168(auVar23 * auVar55,8) + (ulonglong)((char)((unkuint9)Var6 >> 0x40) != '\0');
    214:   auVar24._8_8_ = 0;
    215:   auVar24._0_8_ = uVar85;
    216:   auVar56._8_8_ = 0;
    217:   auVar56._0_8_ = *puVar80;
    218:   Var6 = (unkuint9)uVar4 + (unkuint9)SUB168(auVar24 * auVar56,0);
    219:   uVar82 = (ulonglong)Var6;

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:217
reconstrucao/src/decompiled_02.c:217:10: error: request for member ‘_0_8_’ in something not a structure or union

    214:   auVar24._8_8_ = 0;
    215:   auVar24._0_8_ = uVar85;
    216:   auVar56._8_8_ = 0;
    217:   auVar56._0_8_ = *puVar80;
    218:   Var6 = (unkuint9)uVar4 + (unkuint9)SUB168(auVar24 * auVar56,0);
    219:   uVar82 = (ulonglong)Var6;
    220:   Var10 = (unkuint9)(ulonglong)Var10 + (unkuint9)SUB168(auVar24 * auVar56,8);

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:218
reconstrucao/src/decompiled_02.c:218:20: error: expected ‘;’ before ‘uVar4’

    215:   auVar24._0_8_ = uVar85;
    216:   auVar56._8_8_ = 0;
    217:   auVar56._0_8_ = *puVar80;
    218:   Var6 = (unkuint9)uVar4 + (unkuint9)SUB168(auVar24 * auVar56,0);
    219:   uVar82 = (ulonglong)Var6;
    220:   Var10 = (unkuint9)(ulonglong)Var10 + (unkuint9)SUB168(auVar24 * auVar56,8);
    221:   auVar25._8_8_ = 0;

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:220
reconstrucao/src/decompiled_02.c:220:22: error: expected expression before ‘ulonglong’

    217:   auVar56._0_8_ = *puVar80;
    218:   Var6 = (unkuint9)uVar4 + (unkuint9)SUB168(auVar24 * auVar56,0);
    219:   uVar82 = (ulonglong)Var6;
    220:   Var10 = (unkuint9)(ulonglong)Var10 + (unkuint9)SUB168(auVar24 * auVar56,8);
    221:   auVar25._8_8_ = 0;
    222:   auVar25._0_8_ = uVar85;
    223:   auVar57._8_8_ = 0;

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:220
reconstrucao/src/decompiled_02.c:220:32: error: expected ‘;’ before ‘Var10’

    217:   auVar56._0_8_ = *puVar80;
    218:   Var6 = (unkuint9)uVar4 + (unkuint9)SUB168(auVar24 * auVar56,0);
    219:   uVar82 = (ulonglong)Var6;
    220:   Var10 = (unkuint9)(ulonglong)Var10 + (unkuint9)SUB168(auVar24 * auVar56,8);
    221:   auVar25._8_8_ = 0;
    222:   auVar25._0_8_ = uVar85;
    223:   auVar57._8_8_ = 0;

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:221
reconstrucao/src/decompiled_02.c:221:10: error: request for member ‘_8_8_’ in something not a structure or union

    218:   Var6 = (unkuint9)uVar4 + (unkuint9)SUB168(auVar24 * auVar56,0);
    219:   uVar82 = (ulonglong)Var6;
    220:   Var10 = (unkuint9)(ulonglong)Var10 + (unkuint9)SUB168(auVar24 * auVar56,8);
    221:   auVar25._8_8_ = 0;
    222:   auVar25._0_8_ = uVar85;
    223:   auVar57._8_8_ = 0;
    224:   auVar57._0_8_ = *(ulonglong *)(param_1 + 0x88);

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:222
reconstrucao/src/decompiled_02.c:222:10: error: request for member ‘_0_8_’ in something not a structure or union

    219:   uVar82 = (ulonglong)Var6;
    220:   Var10 = (unkuint9)(ulonglong)Var10 + (unkuint9)SUB168(auVar24 * auVar56,8);
    221:   auVar25._8_8_ = 0;
    222:   auVar25._0_8_ = uVar85;
    223:   auVar57._8_8_ = 0;
    224:   auVar57._0_8_ = *(ulonglong *)(param_1 + 0x88);
    225:   Var6 = (unkuint9)(ulonglong)Var10 + (unkuint9)SUB168(auVar25 * auVar57,0) +

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:223
reconstrucao/src/decompiled_02.c:223:10: error: request for member ‘_8_8_’ in something not a structure or union

    220:   Var10 = (unkuint9)(ulonglong)Var10 + (unkuint9)SUB168(auVar24 * auVar56,8);
    221:   auVar25._8_8_ = 0;
    222:   auVar25._0_8_ = uVar85;
    223:   auVar57._8_8_ = 0;
    224:   auVar57._0_8_ = *(ulonglong *)(param_1 + 0x88);
    225:   Var6 = (unkuint9)(ulonglong)Var10 + (unkuint9)SUB168(auVar25 * auVar57,0) +
    226:          (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:224
reconstrucao/src/decompiled_02.c:224:10: error: request for member ‘_0_8_’ in something not a structure or union

    221:   auVar25._8_8_ = 0;
    222:   auVar25._0_8_ = uVar85;
    223:   auVar57._8_8_ = 0;
    224:   auVar57._0_8_ = *(ulonglong *)(param_1 + 0x88);
    225:   Var6 = (unkuint9)(ulonglong)Var10 + (unkuint9)SUB168(auVar25 * auVar57,0) +
    226:          (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
    227:   uVar4 = (ulonglong)Var6;

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:225
reconstrucao/src/decompiled_02.c:225:21: error: expected expression before ‘ulonglong’

    222:   auVar25._0_8_ = uVar85;
    223:   auVar57._8_8_ = 0;
    224:   auVar57._0_8_ = *(ulonglong *)(param_1 + 0x88);
    225:   Var6 = (unkuint9)(ulonglong)Var10 + (unkuint9)SUB168(auVar25 * auVar57,0) +
    226:          (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
    227:   uVar4 = (ulonglong)Var6;
    228:   Var10 = (unkuint9)(ulonglong)Var12 + (unkuint9)SUB168(auVar25 * auVar57,8) +

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:225
reconstrucao/src/decompiled_02.c:225:31: error: expected ‘;’ before ‘Var10’

    222:   auVar25._0_8_ = uVar85;
    223:   auVar57._8_8_ = 0;
    224:   auVar57._0_8_ = *(ulonglong *)(param_1 + 0x88);
    225:   Var6 = (unkuint9)(ulonglong)Var10 + (unkuint9)SUB168(auVar25 * auVar57,0) +
    226:          (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
    227:   uVar4 = (ulonglong)Var6;
    228:   Var10 = (unkuint9)(ulonglong)Var12 + (unkuint9)SUB168(auVar25 * auVar57,8) +

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:228
reconstrucao/src/decompiled_02.c:228:22: error: expected expression before ‘ulonglong’

    225:   Var6 = (unkuint9)(ulonglong)Var10 + (unkuint9)SUB168(auVar25 * auVar57,0) +
    226:          (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
    227:   uVar4 = (ulonglong)Var6;
    228:   Var10 = (unkuint9)(ulonglong)Var12 + (unkuint9)SUB168(auVar25 * auVar57,8) +
    229:           (unkuint9)((char)((unkuint9)Var10 >> 0x40) != '\0');
    230:   auVar26._8_8_ = 0;
    231:   auVar26._0_8_ = uVar85;

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:228
reconstrucao/src/decompiled_02.c:228:32: error: expected ‘;’ before ‘Var12’

    225:   Var6 = (unkuint9)(ulonglong)Var10 + (unkuint9)SUB168(auVar25 * auVar57,0) +
    226:          (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
    227:   uVar4 = (ulonglong)Var6;
    228:   Var10 = (unkuint9)(ulonglong)Var12 + (unkuint9)SUB168(auVar25 * auVar57,8) +
    229:           (unkuint9)((char)((unkuint9)Var10 >> 0x40) != '\0');
    230:   auVar26._8_8_ = 0;
    231:   auVar26._0_8_ = uVar85;

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:230
reconstrucao/src/decompiled_02.c:230:10: error: request for member ‘_8_8_’ in something not a structure or union

    227:   uVar4 = (ulonglong)Var6;
    228:   Var10 = (unkuint9)(ulonglong)Var12 + (unkuint9)SUB168(auVar25 * auVar57,8) +
    229:           (unkuint9)((char)((unkuint9)Var10 >> 0x40) != '\0');
    230:   auVar26._8_8_ = 0;
    231:   auVar26._0_8_ = uVar85;
    232:   auVar58._8_8_ = 0;
    233:   auVar58._0_8_ = *(ulonglong *)(param_1 + 0x90);

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:231
reconstrucao/src/decompiled_02.c:231:10: error: request for member ‘_0_8_’ in something not a structure or union

    228:   Var10 = (unkuint9)(ulonglong)Var12 + (unkuint9)SUB168(auVar25 * auVar57,8) +
    229:           (unkuint9)((char)((unkuint9)Var10 >> 0x40) != '\0');
    230:   auVar26._8_8_ = 0;
    231:   auVar26._0_8_ = uVar85;
    232:   auVar58._8_8_ = 0;
    233:   auVar58._0_8_ = *(ulonglong *)(param_1 + 0x90);
    234:   Var6 = (unkuint9)(ulonglong)Var10 + (unkuint9)SUB168(auVar26 * auVar58,0) +

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:232
reconstrucao/src/decompiled_02.c:232:10: error: request for member ‘_8_8_’ in something not a structure or union

    229:           (unkuint9)((char)((unkuint9)Var10 >> 0x40) != '\0');
    230:   auVar26._8_8_ = 0;
    231:   auVar26._0_8_ = uVar85;
    232:   auVar58._8_8_ = 0;
    233:   auVar58._0_8_ = *(ulonglong *)(param_1 + 0x90);
    234:   Var6 = (unkuint9)(ulonglong)Var10 + (unkuint9)SUB168(auVar26 * auVar58,0) +
    235:          (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:233
reconstrucao/src/decompiled_02.c:233:10: error: request for member ‘_0_8_’ in something not a structure or union

    230:   auVar26._8_8_ = 0;
    231:   auVar26._0_8_ = uVar85;
    232:   auVar58._8_8_ = 0;
    233:   auVar58._0_8_ = *(ulonglong *)(param_1 + 0x90);
    234:   Var6 = (unkuint9)(ulonglong)Var10 + (unkuint9)SUB168(auVar26 * auVar58,0) +
    235:          (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
    236:   Var12 = (unkuint9)(ulonglong)Var13 + (unkuint9)SUB168(auVar26 * auVar58,8) +

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:234
reconstrucao/src/decompiled_02.c:234:21: error: expected expression before ‘ulonglong’

    231:   auVar26._0_8_ = uVar85;
    232:   auVar58._8_8_ = 0;
    233:   auVar58._0_8_ = *(ulonglong *)(param_1 + 0x90);
    234:   Var6 = (unkuint9)(ulonglong)Var10 + (unkuint9)SUB168(auVar26 * auVar58,0) +
    235:          (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
    236:   Var12 = (unkuint9)(ulonglong)Var13 + (unkuint9)SUB168(auVar26 * auVar58,8) +
    237:           (unkuint9)((char)((unkuint9)Var10 >> 0x40) != '\0');

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:234
reconstrucao/src/decompiled_02.c:234:31: error: expected ‘;’ before ‘Var10’

    231:   auVar26._0_8_ = uVar85;
    232:   auVar58._8_8_ = 0;
    233:   auVar58._0_8_ = *(ulonglong *)(param_1 + 0x90);
    234:   Var6 = (unkuint9)(ulonglong)Var10 + (unkuint9)SUB168(auVar26 * auVar58,0) +
    235:          (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
    236:   Var12 = (unkuint9)(ulonglong)Var13 + (unkuint9)SUB168(auVar26 * auVar58,8) +
    237:           (unkuint9)((char)((unkuint9)Var10 >> 0x40) != '\0');

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:236
reconstrucao/src/decompiled_02.c:236:22: error: expected expression before ‘ulonglong’

    233:   auVar58._0_8_ = *(ulonglong *)(param_1 + 0x90);
    234:   Var6 = (unkuint9)(ulonglong)Var10 + (unkuint9)SUB168(auVar26 * auVar58,0) +
    235:          (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
    236:   Var12 = (unkuint9)(ulonglong)Var13 + (unkuint9)SUB168(auVar26 * auVar58,8) +
    237:           (unkuint9)((char)((unkuint9)Var10 >> 0x40) != '\0');
    238:   auVar27._8_8_ = 0;
    239:   auVar27._0_8_ = uVar85;

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:236
reconstrucao/src/decompiled_02.c:236:32: error: expected ‘;’ before ‘Var13’

    233:   auVar58._0_8_ = *(ulonglong *)(param_1 + 0x90);
    234:   Var6 = (unkuint9)(ulonglong)Var10 + (unkuint9)SUB168(auVar26 * auVar58,0) +
    235:          (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
    236:   Var12 = (unkuint9)(ulonglong)Var13 + (unkuint9)SUB168(auVar26 * auVar58,8) +
    237:           (unkuint9)((char)((unkuint9)Var10 >> 0x40) != '\0');
    238:   auVar27._8_8_ = 0;
    239:   auVar27._0_8_ = uVar85;

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:238
reconstrucao/src/decompiled_02.c:238:10: error: request for member ‘_8_8_’ in something not a structure or union

    235:          (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
    236:   Var12 = (unkuint9)(ulonglong)Var13 + (unkuint9)SUB168(auVar26 * auVar58,8) +
    237:           (unkuint9)((char)((unkuint9)Var10 >> 0x40) != '\0');
    238:   auVar27._8_8_ = 0;
    239:   auVar27._0_8_ = uVar85;
    240:   auVar59._8_8_ = 0;
    241:   auVar59._0_8_ = *(ulonglong *)(param_1 + 0x98);

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:239
reconstrucao/src/decompiled_02.c:239:10: error: request for member ‘_0_8_’ in something not a structure or union

    236:   Var12 = (unkuint9)(ulonglong)Var13 + (unkuint9)SUB168(auVar26 * auVar58,8) +
    237:           (unkuint9)((char)((unkuint9)Var10 >> 0x40) != '\0');
    238:   auVar27._8_8_ = 0;
    239:   auVar27._0_8_ = uVar85;
    240:   auVar59._8_8_ = 0;
    241:   auVar59._0_8_ = *(ulonglong *)(param_1 + 0x98);
    242:   Var10 = (unkuint9)(ulonglong)Var12 + (unkuint9)SUB168(auVar27 * auVar59,0) +

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:240
reconstrucao/src/decompiled_02.c:240:10: error: request for member ‘_8_8_’ in something not a structure or union

    237:           (unkuint9)((char)((unkuint9)Var10 >> 0x40) != '\0');
    238:   auVar27._8_8_ = 0;
    239:   auVar27._0_8_ = uVar85;
    240:   auVar59._8_8_ = 0;
    241:   auVar59._0_8_ = *(ulonglong *)(param_1 + 0x98);
    242:   Var10 = (unkuint9)(ulonglong)Var12 + (unkuint9)SUB168(auVar27 * auVar59,0) +
    243:           (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:241
reconstrucao/src/decompiled_02.c:241:10: error: request for member ‘_0_8_’ in something not a structure or union

    238:   auVar27._8_8_ = 0;
    239:   auVar27._0_8_ = uVar85;
    240:   auVar59._8_8_ = 0;
    241:   auVar59._0_8_ = *(ulonglong *)(param_1 + 0x98);
    242:   Var10 = (unkuint9)(ulonglong)Var12 + (unkuint9)SUB168(auVar27 * auVar59,0) +
    243:           (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
    244:   Var13 = (unkuint9)(ulonglong)Var14 + (unkuint9)SUB168(auVar27 * auVar59,8) +

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:242
reconstrucao/src/decompiled_02.c:242:22: error: expected expression before ‘ulonglong’

    239:   auVar27._0_8_ = uVar85;
    240:   auVar59._8_8_ = 0;
    241:   auVar59._0_8_ = *(ulonglong *)(param_1 + 0x98);
    242:   Var10 = (unkuint9)(ulonglong)Var12 + (unkuint9)SUB168(auVar27 * auVar59,0) +
    243:           (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
    244:   Var13 = (unkuint9)(ulonglong)Var14 + (unkuint9)SUB168(auVar27 * auVar59,8) +
    245:           (unkuint9)((char)((unkuint9)Var12 >> 0x40) != '\0');

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:242
reconstrucao/src/decompiled_02.c:242:32: error: expected ‘;’ before ‘Var12’

    239:   auVar27._0_8_ = uVar85;
    240:   auVar59._8_8_ = 0;
    241:   auVar59._0_8_ = *(ulonglong *)(param_1 + 0x98);
    242:   Var10 = (unkuint9)(ulonglong)Var12 + (unkuint9)SUB168(auVar27 * auVar59,0) +
    243:           (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
    244:   Var13 = (unkuint9)(ulonglong)Var14 + (unkuint9)SUB168(auVar27 * auVar59,8) +
    245:           (unkuint9)((char)((unkuint9)Var12 >> 0x40) != '\0');

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:244
reconstrucao/src/decompiled_02.c:244:22: error: expected expression before ‘ulonglong’

    241:   auVar59._0_8_ = *(ulonglong *)(param_1 + 0x98);
    242:   Var10 = (unkuint9)(ulonglong)Var12 + (unkuint9)SUB168(auVar27 * auVar59,0) +
    243:           (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
    244:   Var13 = (unkuint9)(ulonglong)Var14 + (unkuint9)SUB168(auVar27 * auVar59,8) +
    245:           (unkuint9)((char)((unkuint9)Var12 >> 0x40) != '\0');
    246:   Var12 = (unkuint9)(ulonglong)Var13 + (unkuint9)uVar82 +
    247:           (unkuint9)((char)((unkuint9)Var10 >> 0x40) != '\0');

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:244
reconstrucao/src/decompiled_02.c:244:32: error: expected ‘;’ before ‘Var14’

    241:   auVar59._0_8_ = *(ulonglong *)(param_1 + 0x98);
    242:   Var10 = (unkuint9)(ulonglong)Var12 + (unkuint9)SUB168(auVar27 * auVar59,0) +
    243:           (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
    244:   Var13 = (unkuint9)(ulonglong)Var14 + (unkuint9)SUB168(auVar27 * auVar59,8) +
    245:           (unkuint9)((char)((unkuint9)Var12 >> 0x40) != '\0');
    246:   Var12 = (unkuint9)(ulonglong)Var13 + (unkuint9)uVar82 +
    247:           (unkuint9)((char)((unkuint9)Var10 >> 0x40) != '\0');

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:246
reconstrucao/src/decompiled_02.c:246:22: error: expected expression before ‘ulonglong’

    243:           (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
    244:   Var13 = (unkuint9)(ulonglong)Var14 + (unkuint9)SUB168(auVar27 * auVar59,8) +
    245:           (unkuint9)((char)((unkuint9)Var12 >> 0x40) != '\0');
    246:   Var12 = (unkuint9)(ulonglong)Var13 + (unkuint9)uVar82 +
    247:           (unkuint9)((char)((unkuint9)Var10 >> 0x40) != '\0');
    248:   uVar81 = ((char)((unkuint9)Var14 >> 0x40) != '\0') + uVar82 +
    249:            (ulonglong)((char)((unkuint9)Var13 >> 0x40) != '\0');

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:246
reconstrucao/src/decompiled_02.c:246:32: error: expected ‘;’ before ‘Var13’

    243:           (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
    244:   Var13 = (unkuint9)(ulonglong)Var14 + (unkuint9)SUB168(auVar27 * auVar59,8) +
    245:           (unkuint9)((char)((unkuint9)Var12 >> 0x40) != '\0');
    246:   Var12 = (unkuint9)(ulonglong)Var13 + (unkuint9)uVar82 +
    247:           (unkuint9)((char)((unkuint9)Var10 >> 0x40) != '\0');
    248:   uVar81 = ((char)((unkuint9)Var14 >> 0x40) != '\0') + uVar82 +
    249:            (ulonglong)((char)((unkuint9)Var13 >> 0x40) != '\0');

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:248
reconstrucao/src/decompiled_02.c:248:30: error: expected ‘)’ before ‘Var14’

    245:           (unkuint9)((char)((unkuint9)Var12 >> 0x40) != '\0');
    246:   Var12 = (unkuint9)(ulonglong)Var13 + (unkuint9)uVar82 +
    247:           (unkuint9)((char)((unkuint9)Var10 >> 0x40) != '\0');
    248:   uVar81 = ((char)((unkuint9)Var14 >> 0x40) != '\0') + uVar82 +
    249:            (ulonglong)((char)((unkuint9)Var13 >> 0x40) != '\0');
    250:   uVar86 = (ulonglong)((char)((unkuint9)Var12 >> 0x40) != '\0');
    251:   uVar2 = uVar81 + uVar3;

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:249
reconstrucao/src/decompiled_02.c:249:41: error: expected ‘)’ before ‘Var13’

    246:   Var12 = (unkuint9)(ulonglong)Var13 + (unkuint9)uVar82 +
    247:           (unkuint9)((char)((unkuint9)Var10 >> 0x40) != '\0');
    248:   uVar81 = ((char)((unkuint9)Var14 >> 0x40) != '\0') + uVar82 +
    249:            (ulonglong)((char)((unkuint9)Var13 >> 0x40) != '\0');
    250:   uVar86 = (ulonglong)((char)((unkuint9)Var12 >> 0x40) != '\0');
    251:   uVar2 = uVar81 + uVar3;
    252:   uVar83 = uVar4 * *(longlong *)(param_1 + 0x18);

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:250
reconstrucao/src/decompiled_02.c:250:41: error: expected ‘)’ before ‘Var12’

    247:           (unkuint9)((char)((unkuint9)Var10 >> 0x40) != '\0');
    248:   uVar81 = ((char)((unkuint9)Var14 >> 0x40) != '\0') + uVar82 +
    249:            (ulonglong)((char)((unkuint9)Var13 >> 0x40) != '\0');
    250:   uVar86 = (ulonglong)((char)((unkuint9)Var12 >> 0x40) != '\0');
    251:   uVar2 = uVar81 + uVar3;
    252:   uVar83 = uVar4 * *(longlong *)(param_1 + 0x18);
    253:   uVar1 = param_2[2];

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:254
reconstrucao/src/decompiled_02.c:254:10: error: request for member ‘_8_8_’ in something not a structure or union

    251:   uVar2 = uVar81 + uVar3;
    252:   uVar83 = uVar4 * *(longlong *)(param_1 + 0x18);
    253:   uVar1 = param_2[2];
    254:   auVar28._8_8_ = 0;
    255:   auVar28._0_8_ = uVar1;
    256:   auVar60._8_8_ = 0;
    257:   auVar60._0_8_ = *param_3;

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:255
reconstrucao/src/decompiled_02.c:255:10: error: request for member ‘_0_8_’ in something not a structure or union

    252:   uVar83 = uVar4 * *(longlong *)(param_1 + 0x18);
    253:   uVar1 = param_2[2];
    254:   auVar28._8_8_ = 0;
    255:   auVar28._0_8_ = uVar1;
    256:   auVar60._8_8_ = 0;
    257:   auVar60._0_8_ = *param_3;
    258:   Var13 = (unkuint9)(ulonglong)Var6 + (unkuint9)SUB168(auVar28 * auVar60,0);

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:256
reconstrucao/src/decompiled_02.c:256:10: error: request for member ‘_8_8_’ in something not a structure or union

    253:   uVar1 = param_2[2];
    254:   auVar28._8_8_ = 0;
    255:   auVar28._0_8_ = uVar1;
    256:   auVar60._8_8_ = 0;
    257:   auVar60._0_8_ = *param_3;
    258:   Var13 = (unkuint9)(ulonglong)Var6 + (unkuint9)SUB168(auVar28 * auVar60,0);
    259:   Var6 = (unkuint9)(ulonglong)Var10 + (unkuint9)SUB168(auVar28 * auVar60,8);

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:257
reconstrucao/src/decompiled_02.c:257:10: error: request for member ‘_0_8_’ in something not a structure or union

    254:   auVar28._8_8_ = 0;
    255:   auVar28._0_8_ = uVar1;
    256:   auVar60._8_8_ = 0;
    257:   auVar60._0_8_ = *param_3;
    258:   Var13 = (unkuint9)(ulonglong)Var6 + (unkuint9)SUB168(auVar28 * auVar60,0);
    259:   Var6 = (unkuint9)(ulonglong)Var10 + (unkuint9)SUB168(auVar28 * auVar60,8);
    260:   auVar29._8_8_ = 0;

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:258
reconstrucao/src/decompiled_02.c:258:22: error: expected expression before ‘ulonglong’

    255:   auVar28._0_8_ = uVar1;
    256:   auVar60._8_8_ = 0;
    257:   auVar60._0_8_ = *param_3;
    258:   Var13 = (unkuint9)(ulonglong)Var6 + (unkuint9)SUB168(auVar28 * auVar60,0);
    259:   Var6 = (unkuint9)(ulonglong)Var10 + (unkuint9)SUB168(auVar28 * auVar60,8);
    260:   auVar29._8_8_ = 0;
    261:   auVar29._0_8_ = uVar1;

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:258
reconstrucao/src/decompiled_02.c:258:32: error: expected ‘;’ before ‘Var6’

    255:   auVar28._0_8_ = uVar1;
    256:   auVar60._8_8_ = 0;
    257:   auVar60._0_8_ = *param_3;
    258:   Var13 = (unkuint9)(ulonglong)Var6 + (unkuint9)SUB168(auVar28 * auVar60,0);
    259:   Var6 = (unkuint9)(ulonglong)Var10 + (unkuint9)SUB168(auVar28 * auVar60,8);
    260:   auVar29._8_8_ = 0;
    261:   auVar29._0_8_ = uVar1;

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:259
reconstrucao/src/decompiled_02.c:259:21: error: expected expression before ‘ulonglong’

    256:   auVar60._8_8_ = 0;
    257:   auVar60._0_8_ = *param_3;
    258:   Var13 = (unkuint9)(ulonglong)Var6 + (unkuint9)SUB168(auVar28 * auVar60,0);
    259:   Var6 = (unkuint9)(ulonglong)Var10 + (unkuint9)SUB168(auVar28 * auVar60,8);
    260:   auVar29._8_8_ = 0;
    261:   auVar29._0_8_ = uVar1;
    262:   auVar61._8_8_ = 0;

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:259
reconstrucao/src/decompiled_02.c:259:31: error: expected ‘;’ before ‘Var10’

    256:   auVar60._8_8_ = 0;
    257:   auVar60._0_8_ = *param_3;
    258:   Var13 = (unkuint9)(ulonglong)Var6 + (unkuint9)SUB168(auVar28 * auVar60,0);
    259:   Var6 = (unkuint9)(ulonglong)Var10 + (unkuint9)SUB168(auVar28 * auVar60,8);
    260:   auVar29._8_8_ = 0;
    261:   auVar29._0_8_ = uVar1;
    262:   auVar61._8_8_ = 0;

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:260
reconstrucao/src/decompiled_02.c:260:10: error: request for member ‘_8_8_’ in something not a structure or union

    257:   auVar60._0_8_ = *param_3;
    258:   Var13 = (unkuint9)(ulonglong)Var6 + (unkuint9)SUB168(auVar28 * auVar60,0);
    259:   Var6 = (unkuint9)(ulonglong)Var10 + (unkuint9)SUB168(auVar28 * auVar60,8);
    260:   auVar29._8_8_ = 0;
    261:   auVar29._0_8_ = uVar1;
    262:   auVar61._8_8_ = 0;
    263:   auVar61._0_8_ = param_3[1];

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:261
reconstrucao/src/decompiled_02.c:261:10: error: request for member ‘_0_8_’ in something not a structure or union

    258:   Var13 = (unkuint9)(ulonglong)Var6 + (unkuint9)SUB168(auVar28 * auVar60,0);
    259:   Var6 = (unkuint9)(ulonglong)Var10 + (unkuint9)SUB168(auVar28 * auVar60,8);
    260:   auVar29._8_8_ = 0;
    261:   auVar29._0_8_ = uVar1;
    262:   auVar61._8_8_ = 0;
    263:   auVar61._0_8_ = param_3[1];
    264:   Var14 = (unkuint9)(ulonglong)Var6 + (unkuint9)SUB168(auVar29 * auVar61,0) +

## FUN_1405318f0 */ — reconstrucao/src/decompiled_02.c:262
reconstrucao/src/decompiled_02.c:262:10: error: request for member ‘_8_8_’ in something not a structure or union

    259:   Var6 = (unkuint9)(ulonglong)Var10 + (unkuint9)SUB168(auVar28 * auVar60,8);
    260:   auVar29._8_8_ = 0;
    261:   auVar29._0_8_ = uVar1;
    262:   auVar61._8_8_ = 0;
    263:   auVar61._0_8_ = param_3[1];
    264:   Var14 = (unkuint9)(ulonglong)Var6 + (unkuint9)SUB168(auVar29 * auVar61,0) +
    265:           (unkuint9)((char)((unkuint9)Var13 >> 0x40) != '\0');

## FUN_14077f3e0 */ — reconstrucao/src/decompiled_03.c:25
reconstrucao/src/decompiled_03.c:25:26: error: implicit declaration of function ‘ExAllocatePool2’ [-Wimplicit-function-declaration]

    22:   }
    23:   else {
    24:     auStackX_20[0] = param_4;
    25:     plVar6 = (longlong *)ExAllocatePool2(0x100,0x60,*(undefined4 *)(param_1 + 0x18));
    26:     if (plVar6 == (longlong *)0x0) {
    27:       iVar5 = -0x3fffff66;
    28:     }

## FUN_14077f3e0 */ — reconstrucao/src/decompiled_03.c:44
reconstrucao/src/decompiled_03.c:44:15: error: implicit declaration of function ‘FUN_140a33084’ [-Wimplicit-function-declaration]

    41:       *(undefined4 *)((longlong)plVar6 + 0x1c) = uVar4;
    42:       *(undefined4 *)(plVar6 + 5) = 0xcccc;
    43:       *(undefined1 *)(plVar6 + 0xb) = 1;
    44:       iVar5 = FUN_140a33084(param_3,auStackX_20,*(undefined4 *)(param_1 + 0x18),plVar6 + 6);
    45:       if ((-1 < iVar5) &&
    46:          (iVar5 = FUN_140a33348(param_3,*(undefined4 *)(param_1 + 0x18),plVar6 + 9), -1 < iVar5)) {
    47:         *param_5 = (longlong)plVar6;

## FUN_14077f3e0 */ — reconstrucao/src/decompiled_03.c:46
reconstrucao/src/decompiled_03.c:46:19: error: implicit declaration of function ‘FUN_140a33348’ [-Wimplicit-function-declaration]

    43:       *(undefined1 *)(plVar6 + 0xb) = 1;
    44:       iVar5 = FUN_140a33084(param_3,auStackX_20,*(undefined4 *)(param_1 + 0x18),plVar6 + 6);
    45:       if ((-1 < iVar5) &&
    46:          (iVar5 = FUN_140a33348(param_3,*(undefined4 *)(param_1 + 0x18),plVar6 + 9), -1 < iVar5)) {
    47:         *param_5 = (longlong)plVar6;
    48:         return 0;
    49:       }

## FUN_14077f3e0 */ — reconstrucao/src/decompiled_03.c:50
reconstrucao/src/decompiled_03.c:50:7: error: implicit declaration of function ‘FUN_140a32d80’ [-Wimplicit-function-declaration]

    47:         *param_5 = (longlong)plVar6;
    48:         return 0;
    49:       }
    50:       FUN_140a32d80(plVar6);
    51:     }
    52:   }
    53:   return iVar5;

## FUN_14077f4f8 */ — reconstrucao/src/decompiled_03.c:76
reconstrucao/src/decompiled_03.c:76:3: error: implicit declaration of function ‘EtwRegister’ [-Wimplicit-function-declaration]

    73: void FUN_14077f4f8(void)
    74: 
    75: {
    76:   EtwRegister(&DAT_14001bcb8,FUN_140a94cf0,0,&DAT_140f07240);
    77:   return;
    78: }
    79: 

## FUN_14077f4f8 */ — reconstrucao/src/decompiled_03.c:76
reconstrucao/src/decompiled_03.c:76:16: error: ‘DAT_14001bcb8’ undeclared (first use in this function)

    73: void FUN_14077f4f8(void)
    74: 
    75: {
    76:   EtwRegister(&DAT_14001bcb8,FUN_140a94cf0,0,&DAT_140f07240);
    77:   return;
    78: }
    79: 

## FUN_14077f4f8 */ — reconstrucao/src/decompiled_03.c:76
reconstrucao/src/decompiled_03.c:76:30: error: ‘FUN_140a94cf0’ undeclared (first use in this function)

    73: void FUN_14077f4f8(void)
    74: 
    75: {
    76:   EtwRegister(&DAT_14001bcb8,FUN_140a94cf0,0,&DAT_140f07240);
    77:   return;
    78: }
    79: 

## FUN_14077f4f8 */ — reconstrucao/src/decompiled_03.c:76
reconstrucao/src/decompiled_03.c:76:47: error: ‘DAT_140f07240’ undeclared (first use in this function)

    73: void FUN_14077f4f8(void)
    74: 
    75: {
    76:   EtwRegister(&DAT_14001bcb8,FUN_140a94cf0,0,&DAT_140f07240);
    77:   return;
    78: }
    79: 

## FUN_14077f528 */ — reconstrucao/src/decompiled_03.c:85
reconstrucao/src/decompiled_03.c:85:3: error: implicit declaration of function ‘PoRegisterPowerSettingCallback’ [-Wimplicit-function-declaration]

    82: void FUN_14077f528(void)
    83: 
    84: {
    85:   PoRegisterPowerSettingCallback(0,&DAT_14001a0b8,FUN_140aa9060,0,&DAT_140f06d38);
    86:   return;
    87: }
    88: 

## FUN_14077f528 */ — reconstrucao/src/decompiled_03.c:85
reconstrucao/src/decompiled_03.c:85:37: error: ‘DAT_14001a0b8’ undeclared (first use in this function)

    82: void FUN_14077f528(void)
    83: 
    84: {
    85:   PoRegisterPowerSettingCallback(0,&DAT_14001a0b8,FUN_140aa9060,0,&DAT_140f06d38);
    86:   return;
    87: }
    88: 

## FUN_14077f528 */ — reconstrucao/src/decompiled_03.c:85
reconstrucao/src/decompiled_03.c:85:51: error: ‘FUN_140aa9060’ undeclared (first use in this function)

    82: void FUN_14077f528(void)
    83: 
    84: {
    85:   PoRegisterPowerSettingCallback(0,&DAT_14001a0b8,FUN_140aa9060,0,&DAT_140f06d38);
    86:   return;
    87: }
    88: 

## FUN_14077f528 */ — reconstrucao/src/decompiled_03.c:85
reconstrucao/src/decompiled_03.c:85:68: error: ‘DAT_140f06d38’ undeclared (first use in this function)

    82: void FUN_14077f528(void)
    83: 
    84: {
    85:   PoRegisterPowerSettingCallback(0,&DAT_14001a0b8,FUN_140aa9060,0,&DAT_140f06d38);
    86:   return;
    87: }
    88: 

## FUN_14077f55c */ — reconstrucao/src/decompiled_03.c:94
reconstrucao/src/decompiled_03.c:94:3: error: implicit declaration of function ‘PoUnregisterPowerSettingCallback’ [-Wimplicit-function-declaration]

    91: void FUN_14077f55c(void)
    92: 
    93: {
    94:   PoUnregisterPowerSettingCallback(DAT_140f06d38);
    95:   return;
    96: }
    97: 

## FUN_14077f55c */ — reconstrucao/src/decompiled_03.c:94
reconstrucao/src/decompiled_03.c:94:36: error: ‘DAT_140f06d38’ undeclared (first use in this function)

    91: void FUN_14077f55c(void)
    92: 
    93: {
    94:   PoUnregisterPowerSettingCallback(DAT_140f06d38);
    95:   return;
    96: }
    97: 

## FUN_14077f580 */ — reconstrucao/src/decompiled_03.c:105
reconstrucao/src/decompiled_03.c:105:3: error: unknown type name ‘undefined’; did you mean ‘undefined8’?

    102: 
    103: {
    104:   int iVar1;
    105:   undefined *puVar2;
    106:   longlong lVar3;
    107:   undefined *puStackX_8;
    108:   longlong lStack_48;

## FUN_14077f580 */ — reconstrucao/src/decompiled_03.c:107
reconstrucao/src/decompiled_03.c:107:3: error: unknown type name ‘undefined’; did you mean ‘undefined8’?

    104:   int iVar1;
    105:   undefined *puVar2;
    106:   longlong lVar3;
    107:   undefined *puStackX_8;
    108:   longlong lStack_48;
    109:   undefined4 uStack_40;
    110:   undefined4 uStack_3c;

## FUN_14077f580 */ — reconstrucao/src/decompiled_03.c:118
reconstrucao/src/decompiled_03.c:118:13: error: ‘undefined’ undeclared (first use in this function); did you mean ‘undefined8’?

    115:   undefined4 uStack_28;
    116:   undefined4 uStack_24;
    117:   
    118:   puVar2 = (undefined *)0x0;
    119:   lVar3 = 0;
    120:   puStackX_8 = (undefined *)0x0;
    121:   lStack_48 = 0;

## FUN_14077f580 */ — reconstrucao/src/decompiled_03.c:118
reconstrucao/src/decompiled_03.c:118:24: error: expected expression before ‘)’ token

    115:   undefined4 uStack_28;
    116:   undefined4 uStack_24;
    117:   
    118:   puVar2 = (undefined *)0x0;
    119:   lVar3 = 0;
    120:   puStackX_8 = (undefined *)0x0;
    121:   lStack_48 = 0;

## FUN_14077f580 */ — reconstrucao/src/decompiled_03.c:120
reconstrucao/src/decompiled_03.c:120:28: error: expected expression before ‘)’ token

    117:   
    118:   puVar2 = (undefined *)0x0;
    119:   lVar3 = 0;
    120:   puStackX_8 = (undefined *)0x0;
    121:   lStack_48 = 0;
    122:   if (((param_1 == 0) || (param_4 == 0)) || (param_5 == (undefined8 *)0x0)) {
    123:     iVar1 = -0x3ffffff3;

## FUN_14077f580 */ — reconstrucao/src/decompiled_03.c:134
reconstrucao/src/decompiled_03.c:134:13: error: implicit declaration of function ‘FUN_1403dcb90’ [-Wimplicit-function-declaration]

    131:     uStack_3c = param_3[1];
    132:     uStack_38 = param_3[2];
    133:     uStack_34 = param_3[3];
    134:     iVar1 = FUN_1403dcb90(uStack_30,&uStack_30,&uStack_40,param_4,0,&lStack_48);
    135:     lVar3 = lStack_48;
    136:     if (-1 < iVar1) {
    137:       iVar1 = FUN_140a329d0(lStack_48,&puStackX_8);

## FUN_14077f580 */ — reconstrucao/src/decompiled_03.c:137
reconstrucao/src/decompiled_03.c:137:15: error: implicit declaration of function ‘FUN_140a329d0’ [-Wimplicit-function-declaration]

    134:     iVar1 = FUN_1403dcb90(uStack_30,&uStack_30,&uStack_40,param_4,0,&lStack_48);
    135:     lVar3 = lStack_48;
    136:     if (-1 < iVar1) {
    137:       iVar1 = FUN_140a329d0(lStack_48,&puStackX_8);
    138:       if (-1 < iVar1) goto LAB_14077f637;
    139:       puVar2 = puStackX_8;
    140:     }

## FUN_14077f580 */ — reconstrucao/src/decompiled_03.c:145
reconstrucao/src/decompiled_03.c:145:29: error: expected expression before ‘)’ token

    142:   if (lVar3 != 0) {
    143:     FUN_140a32d80(lVar3);
    144:   }
    145:   if (puVar2 != (undefined *)0x0) {
    146:     FUN_140485460(puVar2);
    147:   }
    148:   if (iVar1 != -0x3fffff45) {

## FUN_14077f580 */ — reconstrucao/src/decompiled_03.c:146
reconstrucao/src/decompiled_03.c:146:5: error: implicit declaration of function ‘FUN_140485460’; did you mean ‘FUN_14077f4e0’? [-Wimplicit-function-declaration]

    143:     FUN_140a32d80(lVar3);
    144:   }
    145:   if (puVar2 != (undefined *)0x0) {
    146:     FUN_140485460(puVar2);
    147:   }
    148:   if (iVar1 != -0x3fffff45) {
    149:     return iVar1;

## FUN_14077f580 */ — reconstrucao/src/decompiled_03.c:151
reconstrucao/src/decompiled_03.c:151:17: error: ‘DAT_140f06d48’ undeclared (first use in this function)

    148:   if (iVar1 != -0x3fffff45) {
    149:     return iVar1;
    150:   }
    151:   puStackX_8 = &DAT_140f06d48;
    152:   iVar1 = 0;
    153: LAB_14077f637:
    154:   *param_5 = puStackX_8;

## FUN_14077f580 */ — reconstrucao/src/decompiled_03.c:154
reconstrucao/src/decompiled_03.c:154:12: error: assignment to ‘undefined8’ {aka ‘long unsigned int’} from ‘int *’ makes integer from pointer without a cast [-Wint-conversion]

    151:   puStackX_8 = &DAT_140f06d48;
    152:   iVar1 = 0;
    153: LAB_14077f637:
    154:   *param_5 = puStackX_8;
    155:   return iVar1;
    156: }
    157: 

## FUN_14077f660 */ — reconstrucao/src/decompiled_03.c:164
reconstrucao/src/decompiled_03.c:164:3: error: unknown type name ‘undefined’; did you mean ‘undefined8’?

    161: 
    162: {
    163:   int iVar1;
    164:   undefined *puVar2;
    165:   longlong lVar3;
    166:   undefined *puStackX_8;
    167:   longlong lStack_28;

## FUN_14077f660 */ — reconstrucao/src/decompiled_03.c:166
reconstrucao/src/decompiled_03.c:166:3: error: unknown type name ‘undefined’; did you mean ‘undefined8’?

    163:   int iVar1;
    164:   undefined *puVar2;
    165:   longlong lVar3;
    166:   undefined *puStackX_8;
    167:   longlong lStack_28;
    168:   undefined4 uStack_20;
    169:   undefined4 uStack_1c;

## FUN_14077f660 */ — reconstrucao/src/decompiled_03.c:173
reconstrucao/src/decompiled_03.c:173:13: error: ‘undefined’ undeclared (first use in this function); did you mean ‘undefined8’?

    170:   undefined4 uStack_18;
    171:   undefined4 uStack_14;
    172:   
    173:   puVar2 = (undefined *)0x0;
    174:   lVar3 = 0;
    175:   puStackX_8 = (undefined *)0x0;
    176:   lStack_28 = 0;

## FUN_14077f660 */ — reconstrucao/src/decompiled_03.c:173
reconstrucao/src/decompiled_03.c:173:24: error: expected expression before ‘)’ token

    170:   undefined4 uStack_18;
    171:   undefined4 uStack_14;
    172:   
    173:   puVar2 = (undefined *)0x0;
    174:   lVar3 = 0;
    175:   puStackX_8 = (undefined *)0x0;
    176:   lStack_28 = 0;

## FUN_14077f660 */ — reconstrucao/src/decompiled_03.c:175
reconstrucao/src/decompiled_03.c:175:28: error: expected expression before ‘)’ token

    172:   
    173:   puVar2 = (undefined *)0x0;
    174:   lVar3 = 0;
    175:   puStackX_8 = (undefined *)0x0;
    176:   lStack_28 = 0;
    177:   if (((param_1 == 0) || (param_3 == 0)) || (param_4 == (undefined8 *)0x0)) {
    178:     iVar1 = -0x3ffffff3;

## FUN_14077f660 */ — reconstrucao/src/decompiled_03.c:185
reconstrucao/src/decompiled_03.c:185:13: error: implicit declaration of function ‘FUN_140a324f0’; did you mean ‘FUN_14077f4f8’? [-Wimplicit-function-declaration]

    182:     uStack_1c = param_2[1];
    183:     uStack_18 = param_2[2];
    184:     uStack_14 = param_2[3];
    185:     iVar1 = FUN_140a324f0(uStack_20,&uStack_20,param_3,&lStack_28);
    186:     lVar3 = lStack_28;
    187:     if (-1 < iVar1) {
    188:       iVar1 = FUN_140a329d0(lStack_28,&puStackX_8);

## FUN_14077f660 */ — reconstrucao/src/decompiled_03.c:196
reconstrucao/src/decompiled_03.c:196:29: error: expected expression before ‘)’ token

    193:   if (lVar3 != 0) {
    194:     FUN_140a32d80(lVar3);
    195:   }
    196:   if (puVar2 != (undefined *)0x0) {
    197:     FUN_140485460(puVar2);
    198:   }
    199:   if (iVar1 != -0x3fffff45) {

## FUN_14077f660 */ — reconstrucao/src/decompiled_03.c:202
reconstrucao/src/decompiled_03.c:202:17: error: ‘DAT_140f06d48’ undeclared (first use in this function)

    199:   if (iVar1 != -0x3fffff45) {
    200:     return iVar1;
    201:   }
    202:   puStackX_8 = &DAT_140f06d48;
    203:   iVar1 = 0;
    204: LAB_14077f704:
    205:   *param_4 = puStackX_8;

## FUN_14077f660 */ — reconstrucao/src/decompiled_03.c:205
reconstrucao/src/decompiled_03.c:205:12: error: assignment to ‘undefined8’ {aka ‘long unsigned int’} from ‘int *’ makes integer from pointer without a cast [-Wint-conversion]

    202:   puStackX_8 = &DAT_140f06d48;
    203:   iVar1 = 0;
    204: LAB_14077f704:
    205:   *param_4 = puStackX_8;
    206:   return iVar1;
    207: }
    208: 

## FUN_14077f730 */ — reconstrucao/src/decompiled_03.c:215
reconstrucao/src/decompiled_03.c:215:3: error: unknown type name ‘undefined’; did you mean ‘undefined8’?

    212: 
    213: {
    214:   int iVar1;
    215:   undefined *puVar2;
    216:   longlong lVar3;
    217:   undefined *puStackX_8;
    218:   longlong alStack_38 [4];

## FUN_14077f730 */ — reconstrucao/src/decompiled_03.c:217
reconstrucao/src/decompiled_03.c:217:3: error: unknown type name ‘undefined’; did you mean ‘undefined8’?

    214:   int iVar1;
    215:   undefined *puVar2;
    216:   longlong lVar3;
    217:   undefined *puStackX_8;
    218:   longlong alStack_38 [4];
    219:   
    220:   puVar2 = (undefined *)0x0;

## FUN_14077f730 */ — reconstrucao/src/decompiled_03.c:220
reconstrucao/src/decompiled_03.c:220:13: error: ‘undefined’ undeclared (first use in this function); did you mean ‘undefined8’?

    217:   undefined *puStackX_8;
    218:   longlong alStack_38 [4];
    219:   
    220:   puVar2 = (undefined *)0x0;
    221:   lVar3 = 0;
    222:   puStackX_8 = (undefined *)0x0;
    223:   alStack_38[0] = 0;

## FUN_14077f730 */ — reconstrucao/src/decompiled_03.c:220
reconstrucao/src/decompiled_03.c:220:24: error: expected expression before ‘)’ token

    217:   undefined *puStackX_8;
    218:   longlong alStack_38 [4];
    219:   
    220:   puVar2 = (undefined *)0x0;
    221:   lVar3 = 0;
    222:   puStackX_8 = (undefined *)0x0;
    223:   alStack_38[0] = 0;

## FUN_14077f730 */ — reconstrucao/src/decompiled_03.c:222
reconstrucao/src/decompiled_03.c:222:28: error: expected expression before ‘)’ token

    219:   
    220:   puVar2 = (undefined *)0x0;
    221:   lVar3 = 0;
    222:   puStackX_8 = (undefined *)0x0;
    223:   alStack_38[0] = 0;
    224:   alStack_38[1] = 0;
    225:   alStack_38[2] = 0;

## FUN_14077f730 */ — reconstrucao/src/decompiled_03.c:232
reconstrucao/src/decompiled_03.c:232:31: error: expected expression before ‘)’ token

    229:     if (lVar3 != 0) {
    230:       FUN_140a32d80(lVar3);
    231:     }
    232:     if (puVar2 != (undefined *)0x0) {
    233:       FUN_140485460(puVar2);
    234:     }
    235:   }

## FUN_14077f730 */ — reconstrucao/src/decompiled_03.c:237
reconstrucao/src/decompiled_03.c:237:13: error: implicit declaration of function ‘FUN_140a7cc30’; did you mean ‘FUN_14077f730’? [-Wimplicit-function-declaration]

    234:     }
    235:   }
    236:   else {
    237:     iVar1 = FUN_140a7cc30(param_2,alStack_38 + 1);
    238:     if (-1 < iVar1) {
    239:       iVar1 = FUN_140a324f0(param_1,alStack_38 + 1,param_3,alStack_38);
    240:       lVar3 = alStack_38[0];

## FUN_14077f730 */ — reconstrucao/src/decompiled_03.c:252
reconstrucao/src/decompiled_03.c:252:17: error: ‘DAT_140f06d48’ undeclared (first use in this function)

    249:   if (iVar1 != -0x3fffff45) {
    250:     return iVar1;
    251:   }
    252:   puStackX_8 = &DAT_140f06d48;
    253:   iVar1 = 0;
    254: LAB_14077f7ff:
    255:   *param_4 = puStackX_8;

## FUN_14077f730 */ — reconstrucao/src/decompiled_03.c:255
reconstrucao/src/decompiled_03.c:255:12: error: assignment to ‘undefined8’ {aka ‘long unsigned int’} from ‘int *’ makes integer from pointer without a cast [-Wint-conversion]

    252:   puStackX_8 = &DAT_140f06d48;
    253:   iVar1 = 0;
    254: LAB_14077f7ff:
    255:   *param_4 = puStackX_8;
    256:   return iVar1;
    257: }
    258: 

## FUN_14077f830 */ — reconstrucao/src/decompiled_03.c:265
reconstrucao/src/decompiled_03.c:265:3: error: unknown type name ‘undefined’; did you mean ‘undefined8’?

    262: 
    263: {
    264:   int iVar1;
    265:   undefined *puVar2;
    266:   longlong lVar3;
    267:   undefined *puStackX_8;
    268:   longlong lStack_28;

## FUN_14077f830 */ — reconstrucao/src/decompiled_03.c:267
reconstrucao/src/decompiled_03.c:267:3: error: unknown type name ‘undefined’; did you mean ‘undefined8’?

    264:   int iVar1;
    265:   undefined *puVar2;
    266:   longlong lVar3;
    267:   undefined *puStackX_8;
    268:   longlong lStack_28;
    269:   longlong alStack_20 [3];
    270:   

## FUN_14077f830 */ — reconstrucao/src/decompiled_03.c:271
reconstrucao/src/decompiled_03.c:271:13: error: ‘undefined’ undeclared (first use in this function); did you mean ‘undefined8’?

    268:   longlong lStack_28;
    269:   longlong alStack_20 [3];
    270:   
    271:   puVar2 = (undefined *)0x0;
    272:   lVar3 = 0;
    273:   puStackX_8 = (undefined *)0x0;
    274:   lStack_28 = 0;

## FUN_14077f830 */ — reconstrucao/src/decompiled_03.c:271
reconstrucao/src/decompiled_03.c:271:24: error: expected expression before ‘)’ token

    268:   longlong lStack_28;
    269:   longlong alStack_20 [3];
    270:   
    271:   puVar2 = (undefined *)0x0;
    272:   lVar3 = 0;
    273:   puStackX_8 = (undefined *)0x0;
    274:   lStack_28 = 0;

## FUN_14077f830 */ — reconstrucao/src/decompiled_03.c:273
reconstrucao/src/decompiled_03.c:273:28: error: expected expression before ‘)’ token

    270:   
    271:   puVar2 = (undefined *)0x0;
    272:   lVar3 = 0;
    273:   puStackX_8 = (undefined *)0x0;
    274:   lStack_28 = 0;
    275:   if ((((param_1 == 0) || (param_2 == 0)) || (param_3 == 0)) || (param_4 == (undefined8 *)0x0)) {
    276:     iVar1 = -0x3ffffff3;

## FUN_14077f830 */ — reconstrucao/src/decompiled_03.c:292
reconstrucao/src/decompiled_03.c:292:29: error: expected expression before ‘)’ token

    289:   if (lVar3 != 0) {
    290:     FUN_140a32d80(lVar3);
    291:   }
    292:   if (puVar2 != (undefined *)0x0) {
    293:     FUN_140485460(puVar2);
    294:   }
    295:   if (iVar1 != -0x3fffff45) {

## FUN_14077f830 */ — reconstrucao/src/decompiled_03.c:298
reconstrucao/src/decompiled_03.c:298:17: error: ‘DAT_140f06d48’ undeclared (first use in this function)

    295:   if (iVar1 != -0x3fffff45) {
    296:     return iVar1;
    297:   }
    298:   puStackX_8 = &DAT_140f06d48;
    299:   iVar1 = 0;
    300: LAB_14077f8d9:
    301:   *param_4 = puStackX_8;

## FUN_14077f830 */ — reconstrucao/src/decompiled_03.c:301
reconstrucao/src/decompiled_03.c:301:12: error: assignment to ‘undefined8’ {aka ‘long unsigned int’} from ‘int *’ makes integer from pointer without a cast [-Wint-conversion]

    298:   puStackX_8 = &DAT_140f06d48;
    299:   iVar1 = 0;
    300: LAB_14077f8d9:
    301:   *param_4 = puStackX_8;
    302:   return iVar1;
    303: }
    304: 

## FUN_14077f900 */ — reconstrucao/src/decompiled_03.c:310
reconstrucao/src/decompiled_03.c:310:3: error: implicit declaration of function ‘FUN_14077f250’; did you mean ‘FUN_14077f900’? [-Wimplicit-function-declaration]

    307: void FUN_14077f900(void)
    308: 
    309: {
    310:   FUN_14077f250();
    311:   return;
    312: }
    313: 

## FUN_14077f918 */ — reconstrucao/src/decompiled_03.c:324
reconstrucao/src/decompiled_03.c:324:11: error: implicit declaration of function ‘FUN_1402f5ef0’; did you mean ‘FUN_14077f580’? [-Wimplicit-function-declaration]

    321:   undefined8 uStack_18;
    322:   undefined8 uStack_10;
    323:   
    324:   lVar2 = FUN_1402f5ef0(&DAT_140f06ba8,0,0);
    325:   LOCK();
    326:   uVar1 = DAT_140f06ba8 & 1;
    327:   DAT_140f06ba8 = DAT_140f06ba8 | 1;

## FUN_14077f918 */ — reconstrucao/src/decompiled_03.c:324
reconstrucao/src/decompiled_03.c:324:26: error: ‘DAT_140f06ba8’ undeclared (first use in this function)

    321:   undefined8 uStack_18;
    322:   undefined8 uStack_10;
    323:   
    324:   lVar2 = FUN_1402f5ef0(&DAT_140f06ba8,0,0);
    325:   LOCK();
    326:   uVar1 = DAT_140f06ba8 & 1;
    327:   DAT_140f06ba8 = DAT_140f06ba8 | 1;

## FUN_14077f918 */ — reconstrucao/src/decompiled_03.c:325
reconstrucao/src/decompiled_03.c:325:3: error: implicit declaration of function ‘LOCK’ [-Wimplicit-function-declaration]

    322:   undefined8 uStack_10;
    323:   
    324:   lVar2 = FUN_1402f5ef0(&DAT_140f06ba8,0,0);
    325:   LOCK();
    326:   uVar1 = DAT_140f06ba8 & 1;
    327:   DAT_140f06ba8 = DAT_140f06ba8 | 1;
    328:   UNLOCK();

## FUN_14077f918 */ — reconstrucao/src/decompiled_03.c:328
reconstrucao/src/decompiled_03.c:328:3: error: implicit declaration of function ‘UNLOCK’ [-Wimplicit-function-declaration]

    325:   LOCK();
    326:   uVar1 = DAT_140f06ba8 & 1;
    327:   DAT_140f06ba8 = DAT_140f06ba8 | 1;
    328:   UNLOCK();
    329:   if (uVar1 != 0) {
    330:     FUN_1402f5950(&DAT_140f06ba8,lVar2,&DAT_140f06ba8);
    331:   }

## FUN_14077f918 */ — reconstrucao/src/decompiled_03.c:330
reconstrucao/src/decompiled_03.c:330:5: error: implicit declaration of function ‘FUN_1402f5950’; did you mean ‘FUN_14077f900’? [-Wimplicit-function-declaration]

    327:   DAT_140f06ba8 = DAT_140f06ba8 | 1;
    328:   UNLOCK();
    329:   if (uVar1 != 0) {
    330:     FUN_1402f5950(&DAT_140f06ba8,lVar2,&DAT_140f06ba8);
    331:   }
    332:   if (lVar2 != 0) {
    333:     *(undefined1 *)(lVar2 + 10) = 1;

## FUN_14077f918 */ — reconstrucao/src/decompiled_03.c:335
reconstrucao/src/decompiled_03.c:335:3: error: ‘DAT_140f06bb8’ undeclared (first use in this function)

    332:   if (lVar2 != 0) {
    333:     *(undefined1 *)(lVar2 + 10) = 1;
    334:   }
    335:   DAT_140f06bb8 = DAT_140f06bb8 + -1;
    336:   if (DAT_140f06bb8 == 0) {
    337:     uStack_18 = 0;
    338:     uStack_10 = 0xffffffffffffffff;

## FUN_14077f918 */ — reconstrucao/src/decompiled_03.c:339
reconstrucao/src/decompiled_03.c:339:5: error: implicit declaration of function ‘KeSetTimer2’ [-Wimplicit-function-declaration]

    336:   if (DAT_140f06bb8 == 0) {
    337:     uStack_18 = 0;
    338:     uStack_10 = 0xffffffffffffffff;
    339:     KeSetTimer2(&DAT_140f06bc0,0xfffffffffd050f80,0,&uStack_18);
    340:   }
    341:   FUN_1404935fc(&DAT_140f06ba8);
    342:   return;

## FUN_14077f918 */ — reconstrucao/src/decompiled_03.c:339
reconstrucao/src/decompiled_03.c:339:18: error: ‘DAT_140f06bc0’ undeclared (first use in this function)

    336:   if (DAT_140f06bb8 == 0) {
    337:     uStack_18 = 0;
    338:     uStack_10 = 0xffffffffffffffff;
    339:     KeSetTimer2(&DAT_140f06bc0,0xfffffffffd050f80,0,&uStack_18);
    340:   }
    341:   FUN_1404935fc(&DAT_140f06ba8);
    342:   return;

## FUN_14077f918 */ — reconstrucao/src/decompiled_03.c:341
reconstrucao/src/decompiled_03.c:341:3: error: implicit declaration of function ‘FUN_1404935fc’; did you mean ‘FUN_14077f55c’? [-Wimplicit-function-declaration]

    338:     uStack_10 = 0xffffffffffffffff;
    339:     KeSetTimer2(&DAT_140f06bc0,0xfffffffffd050f80,0,&uStack_18);
    340:   }
    341:   FUN_1404935fc(&DAT_140f06ba8);
    342:   return;
    343: }
    344: 

## FUN_14077f9b0 */ — reconstrucao/src/decompiled_03.c:364
reconstrucao/src/decompiled_03.c:364:7: error: implicit declaration of function ‘FUN_1406d1200’; did you mean ‘FUN_14077f900’? [-Wimplicit-function-declaration]

    361:   if (lVar2 != 0) {
    362:     lVar3 = ExAllocatePool2(0x100,0x40,0x70687373);
    363:     if (lVar3 != 0) {
    364:       FUN_1406d1200(lVar2,0,0xa0);
    365:       FUN_1406d1200(lVar3,0,0x40);
    366:       AlpcInitializeMessageAttribute(0x20000000,lVar2,0xa0,auStack_10);
    367:       while( true ) {

## FUN_14077f9b0 */ — reconstrucao/src/decompiled_03.c:366
reconstrucao/src/decompiled_03.c:366:7: error: implicit declaration of function ‘AlpcInitializeMessageAttribute’ [-Wimplicit-function-declaration]

    363:     if (lVar3 != 0) {
    364:       FUN_1406d1200(lVar2,0,0xa0);
    365:       FUN_1406d1200(lVar3,0,0x40);
    366:       AlpcInitializeMessageAttribute(0x20000000,lVar2,0xa0,auStack_10);
    367:       while( true ) {
    368:         uStackX_20 = 0x40;
    369:         iVar1 = ZwAlpcSendWaitReceivePort(DAT_140f06ba0,0,0,0,lVar3,&uStackX_20,lVar2,&uStack_18);

## FUN_14077f9b0 */ — reconstrucao/src/decompiled_03.c:369
reconstrucao/src/decompiled_03.c:369:17: error: implicit declaration of function ‘ZwAlpcSendWaitReceivePort’ [-Wimplicit-function-declaration]

    366:       AlpcInitializeMessageAttribute(0x20000000,lVar2,0xa0,auStack_10);
    367:       while( true ) {
    368:         uStackX_20 = 0x40;
    369:         iVar1 = ZwAlpcSendWaitReceivePort(DAT_140f06ba0,0,0,0,lVar3,&uStackX_20,lVar2,&uStack_18);
    370:         if (iVar1 != 0) break;
    371:         uVar4 = AlpcGetMessageAttribute(lVar2,0x20000000);
    372:         FUN_14077fb9c(lVar3,uVar4);

## FUN_14077f9b0 */ — reconstrucao/src/decompiled_03.c:369
reconstrucao/src/decompiled_03.c:369:43: error: ‘DAT_140f06ba0’ undeclared (first use in this function)

    366:       AlpcInitializeMessageAttribute(0x20000000,lVar2,0xa0,auStack_10);
    367:       while( true ) {
    368:         uStackX_20 = 0x40;
    369:         iVar1 = ZwAlpcSendWaitReceivePort(DAT_140f06ba0,0,0,0,lVar3,&uStackX_20,lVar2,&uStack_18);
    370:         if (iVar1 != 0) break;
    371:         uVar4 = AlpcGetMessageAttribute(lVar2,0x20000000);
    372:         FUN_14077fb9c(lVar3,uVar4);

## FUN_14077f9b0 */ — reconstrucao/src/decompiled_03.c:371
reconstrucao/src/decompiled_03.c:371:17: error: implicit declaration of function ‘AlpcGetMessageAttribute’ [-Wimplicit-function-declaration]

    368:         uStackX_20 = 0x40;
    369:         iVar1 = ZwAlpcSendWaitReceivePort(DAT_140f06ba0,0,0,0,lVar3,&uStackX_20,lVar2,&uStack_18);
    370:         if (iVar1 != 0) break;
    371:         uVar4 = AlpcGetMessageAttribute(lVar2,0x20000000);
    372:         FUN_14077fb9c(lVar3,uVar4);
    373:         AlpcInitializeMessageAttribute(0x20000000);
    374:         uStack_18 = 0;

## FUN_14077f9b0 */ — reconstrucao/src/decompiled_03.c:372
reconstrucao/src/decompiled_03.c:372:9: error: implicit declaration of function ‘FUN_14077fb9c’; did you mean ‘FUN_14077f9b0’? [-Wimplicit-function-declaration]

    369:         iVar1 = ZwAlpcSendWaitReceivePort(DAT_140f06ba0,0,0,0,lVar3,&uStackX_20,lVar2,&uStack_18);
    370:         if (iVar1 != 0) break;
    371:         uVar4 = AlpcGetMessageAttribute(lVar2,0x20000000);
    372:         FUN_14077fb9c(lVar3,uVar4);
    373:         AlpcInitializeMessageAttribute(0x20000000);
    374:         uStack_18 = 0;
    375:       }

## FUN_14077f9b0 */ — reconstrucao/src/decompiled_03.c:376
reconstrucao/src/decompiled_03.c:376:7: error: implicit declaration of function ‘FUN_140447c40’; did you mean ‘FUN_14077f4e0’? [-Wimplicit-function-declaration]

    373:         AlpcInitializeMessageAttribute(0x20000000);
    374:         uStack_18 = 0;
    375:       }
    376:       FUN_140447c40(lVar3,0x70687373);
    377:     }
    378:     FUN_140447c40(lVar2,0x70687373);
    379:   }

## FUN_14077faf0 */ — reconstrucao/src/decompiled_03.c:391
reconstrucao/src/decompiled_03.c:391:26: error: ‘DAT_140f06ba8’ undeclared (first use in this function)

    388:   ulonglong uVar1;
    389:   longlong lVar2;
    390:   
    391:   lVar2 = FUN_1402f5ef0(&DAT_140f06ba8,0,0);
    392:   LOCK();
    393:   uVar1 = DAT_140f06ba8 & 1;
    394:   DAT_140f06ba8 = DAT_140f06ba8 | 1;

## FUN_14077faf0 */ — reconstrucao/src/decompiled_03.c:403
reconstrucao/src/decompiled_03.c:403:10: error: ‘DAT_140f06bbc’ undeclared (first use in this function)

    400:     *(undefined1 *)(lVar2 + 10) = 1;
    401:   }
    402:   lVar2 = (longlong)param_1 * 0xc0;
    403:   if (((&DAT_140f06bbc)[lVar2] != '\0') && ((&DAT_140f06bb8)[(longlong)param_1 * 0x30] == 0)) {
    404:     FUN_14077ff18();
    405:     (&DAT_140f06bbc)[lVar2] = 0;
    406:   }

## FUN_14077faf0 */ — reconstrucao/src/decompiled_03.c:403
reconstrucao/src/decompiled_03.c:403:47: error: ‘DAT_140f06bb8’ undeclared (first use in this function)

    400:     *(undefined1 *)(lVar2 + 10) = 1;
    401:   }
    402:   lVar2 = (longlong)param_1 * 0xc0;
    403:   if (((&DAT_140f06bbc)[lVar2] != '\0') && ((&DAT_140f06bb8)[(longlong)param_1 * 0x30] == 0)) {
    404:     FUN_14077ff18();
    405:     (&DAT_140f06bbc)[lVar2] = 0;
    406:   }

## FUN_14077faf0 */ — reconstrucao/src/decompiled_03.c:404
reconstrucao/src/decompiled_03.c:404:5: error: implicit declaration of function ‘FUN_14077ff18’; did you mean ‘FUN_14077f918’? [-Wimplicit-function-declaration]

    401:   }
    402:   lVar2 = (longlong)param_1 * 0xc0;
    403:   if (((&DAT_140f06bbc)[lVar2] != '\0') && ((&DAT_140f06bb8)[(longlong)param_1 * 0x30] == 0)) {
    404:     FUN_14077ff18();
    405:     (&DAT_140f06bbc)[lVar2] = 0;
    406:   }
    407:   FUN_1404935fc(&DAT_140f06ba8);

## FUN_14077fb9c */ — reconstrucao/src/decompiled_03.c:413
reconstrucao/src/decompiled_03.c:413:12: error: conflicting types for ‘FUN_14077fb9c’; have ‘undefined4(longlong)’ {aka ‘unsigned int(long int)’}

    410: 
    411: /* Ghidra label: FUN_14077fb9c */
    412: /* Ghidra address: 14077fb9c */
    413: undefined4 FUN_14077fb9c(longlong param_1)
    414: 
    415: {
    416:   ulonglong uVar1;

## FUN_14077fb9c */ — reconstrucao/src/decompiled_03.c:440
reconstrucao/src/decompiled_03.c:440:15: error: ‘DAT_140e0a740’ undeclared (first use in this function)

    437:   undefined8 uStack_68;
    438:   ulonglong uStack_28;
    439:   
    440:   uStack_28 = DAT_140e0a740 ^ (ulonglong)auStack_108;
    441:   uStack_ac = 0;
    442:   uStack_94 = 0;
    443:   uVar5 = *(ushort *)(param_1 + 4) & 0xff;

## FUN_14077fb9c */ — reconstrucao/src/decompiled_03.c:447
reconstrucao/src/decompiled_03.c:447:32: error: ‘DAT_140f06ba8’ undeclared (first use in this function)

    444:   if (uVar5 != 1) {
    445:     if ((uVar5 != 2) && (uVar5 != 3)) {
    446:       if ((uVar5 == 5) || (uVar5 == 6)) {
    447:         lVar4 = FUN_1402f5ef0(&DAT_140f06ba8,0,0);
    448:         LOCK();
    449:         uVar1 = DAT_140f06ba8 & 1;
    450:         DAT_140f06ba8 = DAT_140f06ba8 | 1;

## FUN_14077fb9c */ — reconstrucao/src/decompiled_03.c:458
reconstrucao/src/decompiled_03.c:458:17: error: ‘DAT_140f06bb0’ undeclared (first use in this function)

    455:         if (lVar4 != 0) {
    456:           *(undefined1 *)(lVar4 + 10) = 1;
    457:         }
    458:         lVar4 = DAT_140f06bb0;
    459:         DAT_140f06bb0 = 0;
    460:         FUN_1404935fc(&DAT_140f06ba8);
    461:         ZwClose(lVar4);

## FUN_14077fb9c */ — reconstrucao/src/decompiled_03.c:461
reconstrucao/src/decompiled_03.c:461:9: error: implicit declaration of function ‘ZwClose’ [-Wimplicit-function-declaration]

    458:         lVar4 = DAT_140f06bb0;
    459:         DAT_140f06bb0 = 0;
    460:         FUN_1404935fc(&DAT_140f06ba8);
    461:         ZwClose(lVar4);
    462:         return 0;
    463:       }
    464:       if (uVar5 != 10) {

## FUN_14077fb9c */ — reconstrucao/src/decompiled_03.c:491
reconstrucao/src/decompiled_03.c:491:15: error: implicit declaration of function ‘ZwAlpcAcceptConnectPort’ [-Wimplicit-function-declaration]

    488:       uStack_d0 = 0;
    489:       uStack_e0 = 0;
    490:       lStack_d8 = param_1;
    491:       iVar2 = ZwAlpcAcceptConnectPort(&DAT_140f06bb0,DAT_140f06ba0,0,&uStack_b0);
    492:       if (iVar2 < 0) {
    493:         puStack_e8 = auStack_78;
    494:         uStack_c8 = 0;

## FUN_14077fb9c */ — reconstrucao/src/decompiled_03.c:491
reconstrucao/src/decompiled_03.c:491:54: error: ‘DAT_140f06ba0’ undeclared (first use in this function)

    488:       uStack_d0 = 0;
    489:       uStack_e0 = 0;
    490:       lStack_d8 = param_1;
    491:       iVar2 = ZwAlpcAcceptConnectPort(&DAT_140f06bb0,DAT_140f06ba0,0,&uStack_b0);
    492:       if (iVar2 < 0) {
    493:         puStack_e8 = auStack_78;
    494:         uStack_c8 = 0;

## FUN_14077fb9c */ — reconstrucao/src/decompiled_03.c:501
reconstrucao/src/decompiled_03.c:501:32: error: ‘DAT_140fc4ac0’ undeclared (first use in this function)

    498:         ZwAlpcAcceptConnectPort(&DAT_140f06bb0,DAT_140f06ba0,0,&uStack_b0);
    499:       }
    500:       else {
    501:         uStack_b8 = (ulonglong)DAT_140fc4ac0;
    502:         if ((DAT_140fc4ac0 & 0x10) == 0) {
    503:           uStack_b8 = (ulonglong)(DAT_140fc4ac0 | 1);
    504:           FUN_14053fd44(&PTR_DAT_1400dd860,uStack_b8,3,1);

## FUN_14077fb9c */ — reconstrucao/src/decompiled_03.c:504
reconstrucao/src/decompiled_03.c:504:11: error: implicit declaration of function ‘FUN_14053fd44’ [-Wimplicit-function-declaration]

    501:         uStack_b8 = (ulonglong)DAT_140fc4ac0;
    502:         if ((DAT_140fc4ac0 & 0x10) == 0) {
    503:           uStack_b8 = (ulonglong)(DAT_140fc4ac0 | 1);
    504:           FUN_14053fd44(&PTR_DAT_1400dd860,uStack_b8,3,1);
    505:           FUN_14053fdd4(uStack_b8,3,&PTR_DAT_1400dd860);
    506:         }
    507:       }

## FUN_14077fb9c */ — reconstrucao/src/decompiled_03.c:504
reconstrucao/src/decompiled_03.c:504:26: error: ‘PTR_DAT_1400dd860’ undeclared (first use in this function)

    501:         uStack_b8 = (ulonglong)DAT_140fc4ac0;
    502:         if ((DAT_140fc4ac0 & 0x10) == 0) {
    503:           uStack_b8 = (ulonglong)(DAT_140fc4ac0 | 1);
    504:           FUN_14053fd44(&PTR_DAT_1400dd860,uStack_b8,3,1);
    505:           FUN_14053fdd4(uStack_b8,3,&PTR_DAT_1400dd860);
    506:         }
    507:       }

## FUN_14077fb9c */ — reconstrucao/src/decompiled_03.c:505
reconstrucao/src/decompiled_03.c:505:11: error: implicit declaration of function ‘FUN_14053fdd4’ [-Wimplicit-function-declaration]

    502:         if ((DAT_140fc4ac0 & 0x10) == 0) {
    503:           uStack_b8 = (ulonglong)(DAT_140fc4ac0 | 1);
    504:           FUN_14053fd44(&PTR_DAT_1400dd860,uStack_b8,3,1);
    505:           FUN_14053fdd4(uStack_b8,3,&PTR_DAT_1400dd860);
    506:         }
    507:       }
    508:       FUN_1404935fc(&DAT_140f06ba8);

## FUN_14077fb9c */ — reconstrucao/src/decompiled_03.c:512
reconstrucao/src/decompiled_03.c:512:15: error: implicit declaration of function ‘ZwAlpcCancelMessage’ [-Wimplicit-function-declaration]

    509:       return 0;
    510:     }
    511:     if ((*(ushort *)(param_1 + 4) >> 0xd & 1) != 0) {
    512:       uVar3 = ZwAlpcCancelMessage(DAT_140f06ba0,0);
    513:       return uVar3;
    514:     }
    515:   }

## FUN_14077fb9c */ — reconstrucao/src/decompiled_03.c:516
reconstrucao/src/decompiled_03.c:516:3: error: implicit declaration of function ‘FUN_14077fdf8’; did you mean ‘FUN_14077f4f8’? [-Wimplicit-function-declaration]

    513:       return uVar3;
    514:     }
    515:   }
    516:   FUN_14077fdf8(param_1);
    517:   return 0;
    518: }
    519: 

## FUN_14077fdf8 */ — reconstrucao/src/decompiled_03.c:522
reconstrucao/src/decompiled_03.c:522:12: error: conflicting types for ‘FUN_14077fdf8’; have ‘undefined8(longlong)’ {aka ‘long unsigned int(long int)’}

    519: 
    520: /* Ghidra label: FUN_14077fdf8 */
    521: /* Ghidra address: 14077fdf8 */
    522: undefined8 FUN_14077fdf8(longlong param_1)
    523: 
    524: {
    525:   undefined4 uVar1;

## FUN_14077fdf8 */ — reconstrucao/src/decompiled_03.c:529
reconstrucao/src/decompiled_03.c:529:10: error: ‘DAT_140fc4ac0’ undeclared (first use in this function)

    526:   uint uVar2;
    527:   
    528:   if (*(int *)(param_1 + 0x28) == 0) {
    529:     if ((DAT_140fc4ac0 & 0x10) == 0) {
    530:       uVar2 = DAT_140fc4ac0 | 1;
    531:       FUN_14053fd44(&PTR_DAT_1400dd860,uVar2,3);
    532:       FUN_14053fdd4(uVar2,3,&PTR_DAT_1400dd860);

## FUN_14077fdf8 */ — reconstrucao/src/decompiled_03.c:531
reconstrucao/src/decompiled_03.c:531:22: error: ‘PTR_DAT_1400dd860’ undeclared (first use in this function)

    528:   if (*(int *)(param_1 + 0x28) == 0) {
    529:     if ((DAT_140fc4ac0 & 0x10) == 0) {
    530:       uVar2 = DAT_140fc4ac0 | 1;
    531:       FUN_14053fd44(&PTR_DAT_1400dd860,uVar2,3);
    532:       FUN_14053fdd4(uVar2,3,&PTR_DAT_1400dd860);
    533:     }
    534:   }

## FUN_14077fdf8 */ — reconstrucao/src/decompiled_03.c:541
reconstrucao/src/decompiled_03.c:541:13: error: implicit declaration of function ‘FUN_14077eff0’; did you mean ‘FUN_14077faf0’? [-Wimplicit-function-declaration]

    538:       FUN_14053fd44(&PTR_DAT_1400dd860,uVar2,3,1);
    539:       FUN_14053fdd4(uVar2,3,&PTR_DAT_1400dd860);
    540:     }
    541:     uVar1 = FUN_14077eff0(*(undefined8 *)(param_1 + 0x30));
    542:     *(undefined4 *)(param_1 + 0x30) = uVar1;
    543:     ZwAlpcSendWaitReceivePort(DAT_140f06bb0,0x10000,param_1,0,0,0,0,0);
    544:     return 0;

## FUN_14077fdf8 */ — reconstrucao/src/decompiled_03.c:543
reconstrucao/src/decompiled_03.c:543:31: error: ‘DAT_140f06bb0’ undeclared (first use in this function)

    540:     }
    541:     uVar1 = FUN_14077eff0(*(undefined8 *)(param_1 + 0x30));
    542:     *(undefined4 *)(param_1 + 0x30) = uVar1;
    543:     ZwAlpcSendWaitReceivePort(DAT_140f06bb0,0x10000,param_1,0,0,0,0,0);
    544:     return 0;
    545:   }
    546:   return 0xc00000bb;

## FUN_14077ff18 */ — reconstrucao/src/decompiled_03.c:573
reconstrucao/src/decompiled_03.c:573:11: error: ‘DAT_140f06bb0’ undeclared (first use in this function)

    570:   undefined1 auStack_c8 [160];
    571:   ulonglong uStack_28;
    572:   
    573:   lVar1 = DAT_140f06bb0;
    574:   uStack_28 = DAT_140e0a740 ^ (ulonglong)auStack_158;
    575:   if (DAT_140f06bb0 != 0) {
    576:     uStack_e8 = 0;

## FUN_14077ff18 */ — reconstrucao/src/decompiled_03.c:574
reconstrucao/src/decompiled_03.c:574:15: error: ‘DAT_140e0a740’ undeclared (first use in this function)

    571:   ulonglong uStack_28;
    572:   
    573:   lVar1 = DAT_140f06bb0;
    574:   uStack_28 = DAT_140e0a740 ^ (ulonglong)auStack_158;
    575:   if (DAT_140f06bb0 != 0) {
    576:     uStack_e8 = 0;
    577:     uStack_e0 = (ulonglong)param_2;

## FUN_14077ff18 */ — reconstrucao/src/decompiled_03.c:583
reconstrucao/src/decompiled_03.c:583:5: error: implicit declaration of function ‘RtlCopyMemory’ [-Wimplicit-function-declaration]

    580:     uStack_f8 = 0;
    581:     uStack_f0 = 0;
    582:     uStack_108 = 0x380010;
    583:     RtlCopyMemory(auStack_d8,param_4,(ulonglong)param_3);
    584:     if (param_5 == '\0') {
    585:       puStack_120 = (undefined8 *)0x0;
    586:       uVar2 = 0x10000;

## TtmNotifyDeviceArrival */ — reconstrucao/src/decompiled_03.c:608
reconstrucao/src/decompiled_03.c:608:1: error: expected identifier or ‘(’ before ‘if’

    605: 
    606: /* Ghidra label: TtmNotifyDeviceArrival */
    607: /* Ghidra address: 140780020 */
    608: if (param_3 == (longlong *)0x0) {
    609:     iVar4 = -0x3ffffff3;
    610:     uVar9 = 0x182;
    611: LAB_14078029b:

## TtmNotifyDeviceDeparture */ — reconstrucao/src/decompiled_03.c:630
reconstrucao/src/decompiled_03.c:630:11: error: implicit declaration of function ‘FUN_140781b40’; did you mean ‘FUN_14077fb9c’? [-Wimplicit-function-declaration]

    627:   uStackX_18 = 0;
    628:   lStackX_20 = 0;
    629:   cVar1 = '\0';
    630:   iVar2 = FUN_140781b40(&uStackX_18);
    631:   if (iVar2 < 0) {
    632:     FUN_1409a24bc("TtmNotifyDeviceDeparture",0x26f,iVar2,iVar2);
    633:   }

## TtmNotifyDeviceDeparture */ — reconstrucao/src/decompiled_03.c:632
reconstrucao/src/decompiled_03.c:632:5: error: implicit declaration of function ‘FUN_1409a24bc’ [-Wimplicit-function-declaration]

    629:   cVar1 = '\0';
    630:   iVar2 = FUN_140781b40(&uStackX_18);
    631:   if (iVar2 < 0) {
    632:     FUN_1409a24bc("TtmNotifyDeviceDeparture",0x26f,iVar2,iVar2);
    633:   }
    634:   else {
    635:     cVar1 = FUN_140781098(uStackX_18,param_1,param_2,&lStackX_20);

## TtmNotifyDeviceDeparture */ — reconstrucao/src/decompiled_03.c:635
reconstrucao/src/decompiled_03.c:635:13: error: implicit declaration of function ‘FUN_140781098’; did you mean ‘FUN_14077ff18’? [-Wimplicit-function-declaration]

    632:     FUN_1409a24bc("TtmNotifyDeviceDeparture",0x26f,iVar2,iVar2);
    633:   }
    634:   else {
    635:     cVar1 = FUN_140781098(uStackX_18,param_1,param_2,&lStackX_20);
    636:     if (cVar1 != '\0') {
    637:       if ((*(uint *)(lStackX_20 + 600) & 4) == 0) {
    638:         *(uint *)(lStackX_20 + 600) = *(uint *)(lStackX_20 + 600) | 4;

## TtmNotifyDeviceDeparture */ — reconstrucao/src/decompiled_03.c:639
reconstrucao/src/decompiled_03.c:639:9: error: implicit declaration of function ‘FUN_140781cb4’; did you mean ‘FUN_14077f9b0’? [-Wimplicit-function-declaration]

    636:     if (cVar1 != '\0') {
    637:       if ((*(uint *)(lStackX_20 + 600) & 4) == 0) {
    638:         *(uint *)(lStackX_20 + 600) = *(uint *)(lStackX_20 + 600) | 4;
    639:         FUN_140781cb4(uStackX_18,1);
    640:       }
    641:     }
    642:     ExReleaseResourceLite(&DAT_140f06b20);

## TtmNotifyDeviceDeparture */ — reconstrucao/src/decompiled_03.c:642
reconstrucao/src/decompiled_03.c:642:5: error: implicit declaration of function ‘ExReleaseResourceLite’ [-Wimplicit-function-declaration]

    639:         FUN_140781cb4(uStackX_18,1);
    640:       }
    641:     }
    642:     ExReleaseResourceLite(&DAT_140f06b20);
    643:     KeLeaveCriticalRegion();
    644:   }
    645:   FUN_140784338(param_1,param_2,cVar1);

## TtmNotifyDeviceDeparture */ — reconstrucao/src/decompiled_03.c:642
reconstrucao/src/decompiled_03.c:642:28: error: ‘DAT_140f06b20’ undeclared (first use in this function)

    639:         FUN_140781cb4(uStackX_18,1);
    640:       }
    641:     }
    642:     ExReleaseResourceLite(&DAT_140f06b20);
    643:     KeLeaveCriticalRegion();
    644:   }
    645:   FUN_140784338(param_1,param_2,cVar1);

## TtmNotifyDeviceDeparture */ — reconstrucao/src/decompiled_03.c:643
reconstrucao/src/decompiled_03.c:643:5: error: implicit declaration of function ‘KeLeaveCriticalRegion’ [-Wimplicit-function-declaration]

    640:       }
    641:     }
    642:     ExReleaseResourceLite(&DAT_140f06b20);
    643:     KeLeaveCriticalRegion();
    644:   }
    645:   FUN_140784338(param_1,param_2,cVar1);
    646:   return;

## TtmNotifyDeviceDeparture */ — reconstrucao/src/decompiled_03.c:645
reconstrucao/src/decompiled_03.c:645:3: error: implicit declaration of function ‘FUN_140784338’; did you mean ‘FUN_14077ff18’? [-Wimplicit-function-declaration]

    642:     ExReleaseResourceLite(&DAT_140f06b20);
    643:     KeLeaveCriticalRegion();
    644:   }
    645:   FUN_140784338(param_1,param_2,cVar1);
    646:   return;
    647: }
    648: 

## TtmNotifyDeviceInput */ — reconstrucao/src/decompiled_03.c:689
reconstrucao/src/decompiled_03.c:689:46: error: ‘_DAT_fffff78000000008’ undeclared (first use in this function)

    686:         lVar5 = lVar7;
    687:       }
    688:       else {
    689:         *(undefined8 *)(lStack_38 + 0x260) = _DAT_fffff78000000008;
    690:         if (*(int *)(lStack_38 + 0x254) == -1) goto LAB_140780444;
    691:         lVar7 = lStack_38;
    692:         iVar3 = FUN_140787534(&uStack_30,lStackX_20);

## TtmNotifyDeviceInput */ — reconstrucao/src/decompiled_03.c:692
reconstrucao/src/decompiled_03.c:692:17: error: implicit declaration of function ‘FUN_140787534’; did you mean ‘FUN_14077f830’? [-Wimplicit-function-declaration]

    689:         *(undefined8 *)(lStack_38 + 0x260) = _DAT_fffff78000000008;
    690:         if (*(int *)(lStack_38 + 0x254) == -1) goto LAB_140780444;
    691:         lVar7 = lStack_38;
    692:         iVar3 = FUN_140787534(&uStack_30,lStackX_20);
    693:         if (-1 < iVar3) {
    694:           if ((param_3 & 1) != 0) {
    695:             uVar6 = 0;

## TtmNotifyDeviceInput */ — reconstrucao/src/decompiled_03.c:700
reconstrucao/src/decompiled_03.c:700:19: error: implicit declaration of function ‘FUN_1407878c0’; did you mean ‘FUN_14077f830’? [-Wimplicit-function-declaration]

    697:               uVar6 = 1;
    698:             }
    699:           }
    700:           uVar2 = FUN_1407878c0(lVar5,uStack_30,4,0x54544941,uVar6);
    701:           goto LAB_140780448;
    702:         }
    703:         uVar4 = 0x324;

## TtmNotifyDeviceInput */ — reconstrucao/src/decompiled_03.c:714
reconstrucao/src/decompiled_03.c:714:3: error: implicit declaration of function ‘FUN_1407846c4’; did you mean ‘FUN_14077f660’? [-Wimplicit-function-declaration]

    711:     FUN_1409a24bc("TtmNotifyDeviceInput",uVar4,iVar3,0xffffffff);
    712:   }
    713: LAB_140780448:
    714:   FUN_1407846c4(param_1,param_2,param_3,cVar1,uVar2,uVar6);
    715:   if (lVar5 != 0) {
    716:     ExReleaseResourceLite(&DAT_140f06b20);
    717:     KeLeaveCriticalRegion();

## TtmNotifyDeviceInput */ — reconstrucao/src/decompiled_03.c:716
reconstrucao/src/decompiled_03.c:716:28: error: ‘DAT_140f06b20’ undeclared (first use in this function)

    713: LAB_140780448:
    714:   FUN_1407846c4(param_1,param_2,param_3,cVar1,uVar2,uVar6);
    715:   if (lVar5 != 0) {
    716:     ExReleaseResourceLite(&DAT_140f06b20);
    717:     KeLeaveCriticalRegion();
    718:   }
    719:   return;

## FUN_14078056c */ — reconstrucao/src/decompiled_03.c:734
reconstrucao/src/decompiled_03.c:734:11: error: implicit declaration of function ‘FUN_140781064’; did you mean ‘FUN_14078056c’? [-Wimplicit-function-declaration]

    731:   
    732:   uVar3 = 0;
    733:   lStackX_20 = 0;
    734:   cVar2 = FUN_140781064(param_1,param_3,&lStackX_20);
    735:   lVar1 = lStackX_20;
    736:   if (cVar2 == '\0') {
    737:     uVar3 = 0xc0000225;

## FUN_14078056c */ — reconstrucao/src/decompiled_03.c:742
reconstrucao/src/decompiled_03.c:742:5: error: implicit declaration of function ‘FUN_140781248’; did you mean ‘FUN_14078056c’? [-Wimplicit-function-declaration]

    739:   }
    740:   else {
    741:     *(undefined4 *)(lStackX_20 + 0x254) = *(undefined4 *)(param_2 + 0x1c);
    742:     FUN_140781248(param_1,0,lStackX_20,4);
    743:     FUN_140784a98(*(undefined4 *)(lVar1 + 0x254),param_3);
    744:     *(uint *)(lVar1 + 600) = *(uint *)(lVar1 + 600) | 0x60;
    745:     FUN_140781cb4(param_1,1);

## FUN_14078056c */ — reconstrucao/src/decompiled_03.c:743
reconstrucao/src/decompiled_03.c:743:5: error: implicit declaration of function ‘FUN_140784a98’; did you mean ‘FUN_14078056c’? [-Wimplicit-function-declaration]

    740:   else {
    741:     *(undefined4 *)(lStackX_20 + 0x254) = *(undefined4 *)(param_2 + 0x1c);
    742:     FUN_140781248(param_1,0,lStackX_20,4);
    743:     FUN_140784a98(*(undefined4 *)(lVar1 + 0x254),param_3);
    744:     *(uint *)(lVar1 + 600) = *(uint *)(lVar1 + 600) | 0x60;
    745:     FUN_140781cb4(param_1,1);
    746:   }

## FUN_14078062c */ — reconstrucao/src/decompiled_03.c:772
reconstrucao/src/decompiled_03.c:772:9: error: ‘_uStack_30’ undeclared (first use in this function); did you mean ‘uStack_30’?

    769:         puVar2 = (undefined8 *)*puVar2) {
    770:       if ((*(uint *)(puVar2 + 0x4b) & 8) == 0) {
    771:         uStack_20 = puVar2[3];
    772:         _uStack_30 = CONCAT44(*(undefined4 *)(puVar2 + 4),*(undefined4 *)(puVar2 + 2));
    773:         uStack_18 = puVar2[0x4c];
    774:         _uStack_28 = CONCAT44(*(uint *)(puVar2 + 0x4b),*(undefined4 *)(puVar2 + 9));
    775:         _uStack_38 = CONCAT44(*(undefined4 *)((longlong)puVar2 + 0x254),uVar1);

## FUN_14078062c */ — reconstrucao/src/decompiled_03.c:772
reconstrucao/src/decompiled_03.c:772:22: error: implicit declaration of function ‘CONCAT44’ [-Wimplicit-function-declaration]

    769:         puVar2 = (undefined8 *)*puVar2) {
    770:       if ((*(uint *)(puVar2 + 0x4b) & 8) == 0) {
    771:         uStack_20 = puVar2[3];
    772:         _uStack_30 = CONCAT44(*(undefined4 *)(puVar2 + 4),*(undefined4 *)(puVar2 + 2));
    773:         uStack_18 = puVar2[0x4c];
    774:         _uStack_28 = CONCAT44(*(uint *)(puVar2 + 0x4b),*(undefined4 *)(puVar2 + 9));
    775:         _uStack_38 = CONCAT44(*(undefined4 *)((longlong)puVar2 + 0x254),uVar1);

## FUN_14078062c */ — reconstrucao/src/decompiled_03.c:774
reconstrucao/src/decompiled_03.c:774:9: error: ‘_uStack_28’ undeclared (first use in this function); did you mean ‘uStack_28’?

    771:         uStack_20 = puVar2[3];
    772:         _uStack_30 = CONCAT44(*(undefined4 *)(puVar2 + 4),*(undefined4 *)(puVar2 + 2));
    773:         uStack_18 = puVar2[0x4c];
    774:         _uStack_28 = CONCAT44(*(uint *)(puVar2 + 0x4b),*(undefined4 *)(puVar2 + 9));
    775:         _uStack_38 = CONCAT44(*(undefined4 *)((longlong)puVar2 + 0x254),uVar1);
    776:         FUN_140784830(&uStack_38);
    777:       }

## FUN_14078062c */ — reconstrucao/src/decompiled_03.c:775
reconstrucao/src/decompiled_03.c:775:9: error: ‘_uStack_38’ undeclared (first use in this function); did you mean ‘uStack_38’?

    772:         _uStack_30 = CONCAT44(*(undefined4 *)(puVar2 + 4),*(undefined4 *)(puVar2 + 2));
    773:         uStack_18 = puVar2[0x4c];
    774:         _uStack_28 = CONCAT44(*(uint *)(puVar2 + 0x4b),*(undefined4 *)(puVar2 + 9));
    775:         _uStack_38 = CONCAT44(*(undefined4 *)((longlong)puVar2 + 0x254),uVar1);
    776:         FUN_140784830(&uStack_38);
    777:       }
    778:     }

## FUN_14078062c */ — reconstrucao/src/decompiled_03.c:776
reconstrucao/src/decompiled_03.c:776:9: error: implicit declaration of function ‘FUN_140784830’; did you mean ‘FUN_14077f830’? [-Wimplicit-function-declaration]

    773:         uStack_18 = puVar2[0x4c];
    774:         _uStack_28 = CONCAT44(*(uint *)(puVar2 + 0x4b),*(undefined4 *)(puVar2 + 9));
    775:         _uStack_38 = CONCAT44(*(undefined4 *)((longlong)puVar2 + 0x254),uVar1);
    776:         FUN_140784830(&uStack_38);
    777:       }
    778:     }
    779:   }

## FUN_1407806d4 */ — reconstrucao/src/decompiled_03.c:795
reconstrucao/src/decompiled_03.c:795:7: error: implicit declaration of function ‘FUN_140784590’; did you mean ‘FUN_14078056c’? [-Wimplicit-function-declaration]

    792:   for (puVar2 = *(undefined8 **)(param_1 + 0x60); puVar2 != (undefined8 *)(param_1 + 0x60);
    793:       puVar2 = (undefined8 *)*puVar2) {
    794:     if (*(int *)((longlong)puVar2 + 0x254) == *(int *)(param_2 + 0x1c)) {
    795:       FUN_140784590(*(int *)(param_2 + 0x1c),*(undefined4 *)(puVar2 + 2),puVar2[3],
    796:                     *(undefined4 *)(puVar2 + 4));
    797:       *(undefined4 *)((longlong)puVar2 + 0x254) = 0xffffffff;
    798:       uVar1 = 1;

## FUN_1407807d0 */ — reconstrucao/src/decompiled_03.c:833
reconstrucao/src/decompiled_03.c:833:3: error: unknown type name ‘code’

    830: {
    831:   uint uVar1;
    832:   longlong lVar2;
    833:   code *pcVar3;
    834:   char cVar4;
    835:   longlong *plVar5;
    836:   longlong *plVar6;

## FUN_1407807d0 */ — reconstrucao/src/decompiled_03.c:848
reconstrucao/src/decompiled_03.c:848:7: error: implicit declaration of function ‘FUN_140780ec0’; did you mean ‘FUN_1407807d0’? [-Wimplicit-function-declaration]

    845:   plVar6 = *(longlong **)(param_1 + 0x60);
    846:   do {
    847:     if (plVar6 == (longlong *)(param_1 + 0x60)) {
    848:       FUN_140780ec0(param_1,0);
    849:       FUN_140780ec0(param_1,1);
    850:       FUN_140780ec0(param_1,2);
    851:       FUN_140780ec0(param_1,3);

## FUN_1407807d0 */ — reconstrucao/src/decompiled_03.c:859
reconstrucao/src/decompiled_03.c:859:19: error: implicit declaration of function ‘FUN_140780a78’; did you mean ‘FUN_1407807d0’? [-Wimplicit-function-declaration]

    856:       if ((uVar1 & 1) == 0) {
    857:         if ((uVar1 & 0x10) != 0) {
    858:           *(uint *)(plVar6 + 0x4b) = uVar1 & 0xffffffef;
    859:           uVar8 = FUN_140780a78(param_1,plVar6);
    860:           uVar7 = 4;
    861:           goto LAB_140780846;
    862:         }

## FUN_1407807d0 */ — reconstrucao/src/decompiled_03.c:873
reconstrucao/src/decompiled_03.c:873:9: error: implicit declaration of function ‘FUN_140780aa0’; did you mean ‘FUN_1407807d0’? [-Wimplicit-function-declaration]

    870:       }
    871:       if ((*(uint *)(plVar6 + 0x4b) & 0x20) != 0) {
    872:         *(uint *)(plVar6 + 0x4b) = *(uint *)(plVar6 + 0x4b) & 0xffffffdf;
    873:         FUN_140780aa0(param_1,plVar6);
    874:       }
    875:     }
    876:     if (((byte)*(uint *)(plVar6 + 0x4b) & 0x44) == 0x40) {

## FUN_140ac2d20 */ — reconstrucao/src/decompiled_04.c:23
reconstrucao/src/decompiled_04.c:23:3: error: implicit declaration of function ‘FUN_14090ef10’ [-Wimplicit-function-declaration]

    20:   uStack_40 = 0x500;
    21:   uStack_38 = *(undefined8 *)(param_1 + 0x30);
    22:   uStack_28 = (ulonglong)*(uint *)(param_1 + 0x40);
    23:   FUN_14090ef10(param_1 + 0x48,0,&uStack_40,param_4,0x38);
    24:   return 0;
    25: }
    26: 

## FUN_140ac2d78 */ — reconstrucao/src/decompiled_04.c:36
reconstrucao/src/decompiled_04.c:36:11: error: implicit declaration of function ‘FUN_14041b0bc’ [-Wimplicit-function-declaration]

    33:   longlong lVar2;
    34:   longlong lVar3;
    35:   
    36:   lVar2 = FUN_14041b0bc(param_1,8);
    37:   lVar1 = *(longlong *)(lVar2 + 8);
    38:   do {
    39:     lVar3 = lVar1;

## FUN_140ac2d78 */ — reconstrucao/src/decompiled_04.c:42
reconstrucao/src/decompiled_04.c:42:7: error: implicit declaration of function ‘FUN_14031db18’ [-Wimplicit-function-declaration]

    39:     lVar3 = lVar1;
    40:     if (*(int *)(lVar1 + 0xb0) == 1) {
    41: LAB_140ac2dd5:
    42:       FUN_14031db18(lVar3,0,0);
    43:       return lVar3;
    44:     }
    45:     lVar3 = FUN_14031d8f0(0,0);

## FUN_140ac2d78 */ — reconstrucao/src/decompiled_04.c:45
reconstrucao/src/decompiled_04.c:45:13: error: implicit declaration of function ‘FUN_14031d8f0’ [-Wimplicit-function-declaration]

    42:       FUN_14031db18(lVar3,0,0);
    43:       return lVar3;
    44:     }
    45:     lVar3 = FUN_14031d8f0(0,0);
    46:     if (lVar3 != 0) {
    47:       FUN_14033e740(lVar1);
    48:       *(longlong *)(lVar2 + 8) = lVar3;

## FUN_140ac2d78 */ — reconstrucao/src/decompiled_04.c:47
reconstrucao/src/decompiled_04.c:47:7: error: implicit declaration of function ‘FUN_14033e740’ [-Wimplicit-function-declaration]

    44:     }
    45:     lVar3 = FUN_14031d8f0(0,0);
    46:     if (lVar3 != 0) {
    47:       FUN_14033e740(lVar1);
    48:       *(longlong *)(lVar2 + 8) = lVar3;
    49:       goto LAB_140ac2dd5;
    50:     }

## FUN_140ac2d78 */ — reconstrucao/src/decompiled_04.c:51
reconstrucao/src/decompiled_04.c:51:5: error: implicit declaration of function ‘KeDelayExecutionThread’ [-Wimplicit-function-declaration]

    48:       *(longlong *)(lVar2 + 8) = lVar3;
    49:       goto LAB_140ac2dd5;
    50:     }
    51:     KeDelayExecutionThread(0);
    52:   } while( true );
    53: }
    54: 

## FUN_140ac2e00 */ — reconstrucao/src/decompiled_04.c:158
reconstrucao/src/decompiled_04.c:158:15: error: ‘DAT_140e0a740’ undeclared (first use in this function)

    155:   undefined4 uStack_b0;
    156:   ulonglong uStack_58;
    157:   
    158:   uStack_58 = DAT_140e0a740 ^ (ulonglong)auStack_388;
    159:   pwStack_360 = (wchar_t *)0x0;
    160:   iStack_2d4 = 1;
    161:   lStack_2e0 = 0;

## FUN_140ac2e00 */ — reconstrucao/src/decompiled_04.c:205
reconstrucao/src/decompiled_04.c:205:11: error: implicit declaration of function ‘FUN_1408dfac0’ [-Wimplicit-function-declaration]

    202:   plStack_308 = param_4;
    203:   lStack_280 = param_3;
    204:   lStack_218 = param_1;
    205:   iVar5 = FUN_1408dfac0(param_2,param_3,0,0x20019);
    206:   if (iVar5 < 0) goto LAB_140ac33b1;
    207:   FUN_1406d1200(auStack_1e8,0,0x188);
    208:   uStack_120 = 0x4000000;

## FUN_140ac2e00 */ — reconstrucao/src/decompiled_04.c:207
reconstrucao/src/decompiled_04.c:207:3: error: implicit declaration of function ‘FUN_1406d1200’; did you mean ‘FUN_140ac2e00’? [-Wimplicit-function-declaration]

    204:   lStack_218 = param_1;
    205:   iVar5 = FUN_1408dfac0(param_2,param_3,0,0x20019);
    206:   if (iVar5 < 0) goto LAB_140ac33b1;
    207:   FUN_1406d1200(auStack_1e8,0,0x188);
    208:   uStack_120 = 0x4000000;
    209:   uStack_1e0 = 0x130;
    210:   uStack_1c8 = 0x7000000;

## FUN_140ac2e00 */ — reconstrucao/src/decompiled_04.c:232
reconstrucao/src/decompiled_04.c:232:28: error: implicit declaration of function ‘CONCAT71’ [-Wimplicit-function-declaration]

    229:   uStack_e8 = 0x1000000;
    230:   uStack_c8 = 0x120;
    231:   uStack_b0 = 0x1000000;
    232:   pwStack_360 = (wchar_t *)CONCAT71(pwStack_360._1_7_,1);
    233:   iVar5 = FUN_14093ded0(0xc0000000,lStack_2e0,auStack_1e8,0);
    234:   if (iVar5 < 0) goto LAB_140ac33b1;
    235:   if ((lStack_2b0 != 0) && ((ushort)uStack_2b8 < 3)) {

## FUN_140ac2e00 */ — reconstrucao/src/decompiled_04.c:232
reconstrucao/src/decompiled_04.c:232:48: error: request for member ‘_1_7_’ in something not a structure or union

    229:   uStack_e8 = 0x1000000;
    230:   uStack_c8 = 0x120;
    231:   uStack_b0 = 0x1000000;
    232:   pwStack_360 = (wchar_t *)CONCAT71(pwStack_360._1_7_,1);
    233:   iVar5 = FUN_14093ded0(0xc0000000,lStack_2e0,auStack_1e8,0);
    234:   if (iVar5 < 0) goto LAB_140ac33b1;
    235:   if ((lStack_2b0 != 0) && ((ushort)uStack_2b8 < 3)) {

## FUN_140ac2e00 */ — reconstrucao/src/decompiled_04.c:233
reconstrucao/src/decompiled_04.c:233:11: error: implicit declaration of function ‘FUN_14093ded0’; did you mean ‘FUN_140ac2e00’? [-Wimplicit-function-declaration]

    230:   uStack_c8 = 0x120;
    231:   uStack_b0 = 0x1000000;
    232:   pwStack_360 = (wchar_t *)CONCAT71(pwStack_360._1_7_,1);
    233:   iVar5 = FUN_14093ded0(0xc0000000,lStack_2e0,auStack_1e8,0);
    234:   if (iVar5 < 0) goto LAB_140ac33b1;
    235:   if ((lStack_2b0 != 0) && ((ushort)uStack_2b8 < 3)) {
    236:     RtlFreeAnsiString(&uStack_2b8);

## FUN_140ac2e00 */ — reconstrucao/src/decompiled_04.c:236
reconstrucao/src/decompiled_04.c:236:5: error: implicit declaration of function ‘RtlFreeAnsiString’ [-Wimplicit-function-declaration]

    233:   iVar5 = FUN_14093ded0(0xc0000000,lStack_2e0,auStack_1e8,0);
    234:   if (iVar5 < 0) goto LAB_140ac33b1;
    235:   if ((lStack_2b0 != 0) && ((ushort)uStack_2b8 < 3)) {
    236:     RtlFreeAnsiString(&uStack_2b8);
    237:   }
    238:   if ((plStack_2a0 != (longlong *)0x0) && ((ushort)uStack_2a8 < 3)) {
    239:     RtlFreeAnsiString(&uStack_2a8);

## FUN_140ac2e00 */ — reconstrucao/src/decompiled_04.c:250
reconstrucao/src/decompiled_04.c:250:39: error: implicit declaration of function ‘RtlGUIDFromString’ [-Wimplicit-function-declaration]

    247:     if ((ushort)uStack_298 < 2) {
    248:       RtlFreeAnsiString(&uStack_298);
    249:     }
    250:     if ((lStack_290 == 0) || (iVar6 = RtlGUIDFromString(&uStack_298), iVar6 < 0))
    251:     goto LAB_140ac309a;
    252:   }
    253:   if ((puStack_258 != (uint *)0x0) && ((ushort)uStack_260 < 2)) {

## FUN_140ac2e00 */ — reconstrucao/src/decompiled_04.c:268
reconstrucao/src/decompiled_04.c:268:20: error: ‘DAT_140f8c958’ undeclared (first use in this function)

    265:   plStack_208 = plStack_2a0;
    266:   uStack_220 = 2;
    267:   uStack_21c = 3;
    268:   for (; lVar11 != DAT_140f8c958; lVar11 = *(longlong *)(lVar11 + 0x10)) {
    269:     if (*(longlong *)(*(longlong *)(lVar11 + 0x20) + 8) == DAT_140f8adc0) {
    270:       RtlInitUnicodeString(auStack_240,L"SWD\\");
    271:       cVar4 = RtlPrefixUnicodeString(auStack_240,lVar11 + 0x28);

## FUN_140ac2e00 */ — reconstrucao/src/decompiled_04.c:269
reconstrucao/src/decompiled_04.c:269:60: error: ‘DAT_140f8adc0’ undeclared (first use in this function)

    266:   uStack_220 = 2;
    267:   uStack_21c = 3;
    268:   for (; lVar11 != DAT_140f8c958; lVar11 = *(longlong *)(lVar11 + 0x10)) {
    269:     if (*(longlong *)(*(longlong *)(lVar11 + 0x20) + 8) == DAT_140f8adc0) {
    270:       RtlInitUnicodeString(auStack_240,L"SWD\\");
    271:       cVar4 = RtlPrefixUnicodeString(auStack_240,lVar11 + 0x28);
    272:       if (cVar4 != '\0') {

## FUN_140ac2e00 */ — reconstrucao/src/decompiled_04.c:270
reconstrucao/src/decompiled_04.c:270:7: error: implicit declaration of function ‘RtlInitUnicodeString’ [-Wimplicit-function-declaration]

    267:   uStack_21c = 3;
    268:   for (; lVar11 != DAT_140f8c958; lVar11 = *(longlong *)(lVar11 + 0x10)) {
    269:     if (*(longlong *)(*(longlong *)(lVar11 + 0x20) + 8) == DAT_140f8adc0) {
    270:       RtlInitUnicodeString(auStack_240,L"SWD\\");
    271:       cVar4 = RtlPrefixUnicodeString(auStack_240,lVar11 + 0x28);
    272:       if (cVar4 != '\0') {
    273:         RtlInitUnicodeString

## FUN_140ac2e00 */ — reconstrucao/src/decompiled_04.c:271
reconstrucao/src/decompiled_04.c:271:15: error: implicit declaration of function ‘RtlPrefixUnicodeString’ [-Wimplicit-function-declaration]

    268:   for (; lVar11 != DAT_140f8c958; lVar11 = *(longlong *)(lVar11 + 0x10)) {
    269:     if (*(longlong *)(*(longlong *)(lVar11 + 0x20) + 8) == DAT_140f8adc0) {
    270:       RtlInitUnicodeString(auStack_240,L"SWD\\");
    271:       cVar4 = RtlPrefixUnicodeString(auStack_240,lVar11 + 0x28);
    272:       if (cVar4 != '\0') {
    273:         RtlInitUnicodeString
    274:                   (&uStack_270,*(longlong *)(lVar11 + 0x30) + (auStack_240[0] >> 1 & 0x7fff) * 2);

## FUN_140ac2e00 */ — reconstrucao/src/decompiled_04.c:280
reconstrucao/src/decompiled_04.c:280:23: error: implicit declaration of function ‘FUN_140a3034c’ [-Wimplicit-function-declaration]

    277:         if (cVar4 != '\0') {
    278:           if (*(short *)(lStack_268 + (auStack_240[0] >> 1 & 0x7fff) * 2) == 0x5c) {
    279:             if (iVar16 == 0) {
    280:               iVar5 = FUN_140a3034c(lStack_2b0,plStack_2a0);
    281:               if (iVar5 < 0) goto LAB_140ac33a4;
    282:               if ((auStack_2f0[0] & 8) == 0) {
    283:                 RtlInitUnicodeString(&uStack_270,&DAT_140019790);

## FUN_140ac2e00 */ — reconstrucao/src/decompiled_04.c:283
reconstrucao/src/decompiled_04.c:283:51: error: ‘DAT_140019790’ undeclared (first use in this function)

    280:               iVar5 = FUN_140a3034c(lStack_2b0,plStack_2a0);
    281:               if (iVar5 < 0) goto LAB_140ac33a4;
    282:               if ((auStack_2f0[0] & 8) == 0) {
    283:                 RtlInitUnicodeString(&uStack_270,&DAT_140019790);
    284:                 iVar5 = RtlHashUnicodeString(&uStack_270,1,0,&iStack_2f8);
    285:                 if (iVar5 < 0) goto LAB_140ac33a4;
    286:                 iVar16 = iStack_2f4 + iStack_2f8;

## FUN_140ac2e00 */ — reconstrucao/src/decompiled_04.c:284
reconstrucao/src/decompiled_04.c:284:25: error: implicit declaration of function ‘RtlHashUnicodeString’ [-Wimplicit-function-declaration]

    281:               if (iVar5 < 0) goto LAB_140ac33a4;
    282:               if ((auStack_2f0[0] & 8) == 0) {
    283:                 RtlInitUnicodeString(&uStack_270,&DAT_140019790);
    284:                 iVar5 = RtlHashUnicodeString(&uStack_270,1,0,&iStack_2f8);
    285:                 if (iVar5 < 0) goto LAB_140ac33a4;
    286:                 iVar16 = iStack_2f4 + iStack_2f8;
    287:               }

## FUN_140ac2e00 */ — reconstrucao/src/decompiled_04.c:291
reconstrucao/src/decompiled_04.c:291:49: error: ‘DAT_140019778’ undeclared (first use in this function)

    288:               else {
    289:                 iVar16 = iStack_2f4;
    290:               }
    291:               RtlInitUnicodeString(&uStack_270,&DAT_140019778);
    292:               iVar5 = RtlHashUnicodeString(&uStack_270,1,0,&iStack_2f8);
    293:               if (iVar5 < 0) goto LAB_140ac33a4;
    294:               iVar16 = iVar16 + iStack_2f8;

## FUN_140ac2e00 */ — reconstrucao/src/decompiled_04.c:301
reconstrucao/src/decompiled_04.c:301:37: error: implicit declaration of function ‘ExAllocatePool2’ [-Wimplicit-function-declaration]

    298:             if (*(int *)(lVar11 + 0x2ac) == iVar16) {
    299:               if (pwVar7 == (wchar_t *)0x0) {
    300:                 uStack_2d8 = 0x800;
    301:                 pwVar7 = (wchar_t *)ExAllocatePool2(0x100);
    302:                 if (pwVar7 == (wchar_t *)0x0) goto LAB_140ac339f;
    303:               }
    304:               uVar3 = uStack_2d8;

## FUN_140ac2e00 */ — reconstrucao/src/decompiled_04.c:315
reconstrucao/src/decompiled_04.c:315:25: error: implicit declaration of function ‘FUN_1408ddb20’; did you mean ‘FUN_140ac2d20’? [-Wimplicit-function-declaration]

    312:                 plStack_368 = (longlong *)&iStack_2d4;
    313:                 auStack_318[0] = uVar3;
    314:                 pwStack_360 = pwVar7;
    315:                 iVar5 = FUN_1408ddb20(DAT_140e66448,*(undefined8 *)(lVar11 + 0x30),0,*puStack_288);
    316:                 if (((iVar5 < 0) || (iStack_2d4 != 7)) || (auStack_318[0] < 2)) {
    317:                   *pwVar7 = L'\0';
    318:                   iVar5 = 0;

## FUN_140ac2e00 */ — reconstrucao/src/decompiled_04.c:315
reconstrucao/src/decompiled_04.c:315:39: error: ‘DAT_140e66448’ undeclared (first use in this function)

    312:                 plStack_368 = (longlong *)&iStack_2d4;
    313:                 auStack_318[0] = uVar3;
    314:                 pwStack_360 = pwVar7;
    315:                 iVar5 = FUN_1408ddb20(DAT_140e66448,*(undefined8 *)(lVar11 + 0x30),0,*puStack_288);
    316:                 if (((iVar5 < 0) || (iStack_2d4 != 7)) || (auStack_318[0] < 2)) {
    317:                   *pwVar7 = L'\0';
    318:                   iVar5 = 0;

## FUN_140ac2e00 */ — reconstrucao/src/decompiled_04.c:322
reconstrucao/src/decompiled_04.c:322:30: error: implicit declaration of function ‘_wcsicmp’ [-Wimplicit-function-declaration]

    319:                 }
    320:                 if (uVar17 == 1) {
    321:                   for (_Str1 = pwVar7; *_Str1 != L'\0'; _Str1 = _Str1 + lVar9 + 2) {
    322:                     iVar16 = _wcsicmp(_Str1,L"SWD\\GenericRaw");
    323:                     if ((iVar16 == 0) || (iVar16 = _wcsicmp(_Str1,L"SWD\\Generic"), iVar16 == 0)) {
    324:                       *_Str1 = L'\0';
    325:                       break;

## FUN_140ac2e00 */ — reconstrucao/src/decompiled_04.c:339
reconstrucao/src/decompiled_04.c:339:27: error: implicit declaration of function ‘FUN_1407473cc’ [-Wimplicit-function-declaration]

    336:                   if (*pwVar7 != L'\0') break;
    337:                 }
    338:                 else {
    339:                   cVar4 = FUN_1407473cc();
    340:                   if (cVar4 == '\0') break;
    341:                 }
    342:                 puStack_288 = puVar14 + 1;

## FUN_140ac2e00 */ — reconstrucao/src/decompiled_04.c:359
reconstrucao/src/decompiled_04.c:359:11: error: implicit declaration of function ‘FUN_1409b020c’ [-Wimplicit-function-declaration]

    356:     }
    357:   }
    358:   if (iVar5 < 0) goto LAB_140ac33a4;
    359:   iVar5 = FUN_1409b020c(lStack_2e0,L"Security",0,&lStack_300);
    360:   lVar11 = lStack_300;
    361:   param_4 = plStack_308;
    362:   if (iVar5 < 0) {

## FUN_140ac2e00 */ — reconstrucao/src/decompiled_04.c:376
reconstrucao/src/decompiled_04.c:376:15: error: implicit declaration of function ‘RtlCreateUnicodeString’ [-Wimplicit-function-declaration]

    373:     lStack_278 = (ulonglong)*(uint *)(lStack_300 + 8) + lStack_300;
    374: LAB_140ac352a:
    375:     if (*plStack_308 == DAT_140f8c958) {
    376:       cVar4 = RtlCreateUnicodeString(&uStack_230,lStack_280);
    377:       if (cVar4 != '\0') {
    378: LAB_140ac35e6:
    379:         lVar11 = lStack_218;

## FUN_140ac2e00 */ — reconstrucao/src/decompiled_04.c:383
reconstrucao/src/decompiled_04.c:383:36: error: implicit declaration of function ‘CONCAT44’ [-Wimplicit-function-declaration]

    380:         uVar18 = (ulonglong)uStack_2c8;
    381:         do {
    382:           puStack_358 = auStack_318;
    383:           pwStack_360 = (wchar_t *)CONCAT44(pwStack_360._4_4_,(uint)uVar18);
    384:           plStack_368 = plVar10;
    385:           iVar5 = FUN_1409a9498(lVar11,lStack_2e0,0,0);
    386:           uVar3 = auStack_318[0];

## FUN_140ac2e00 */ — reconstrucao/src/decompiled_04.c:383
reconstrucao/src/decompiled_04.c:383:56: error: request for member ‘_4_4_’ in something not a structure or union

    380:         uVar18 = (ulonglong)uStack_2c8;
    381:         do {
    382:           puStack_358 = auStack_318;
    383:           pwStack_360 = (wchar_t *)CONCAT44(pwStack_360._4_4_,(uint)uVar18);
    384:           plStack_368 = plVar10;
    385:           iVar5 = FUN_1409a9498(lVar11,lStack_2e0,0,0);
    386:           uVar3 = auStack_318[0];

## FUN_140ac2e00 */ — reconstrucao/src/decompiled_04.c:385
reconstrucao/src/decompiled_04.c:385:19: error: implicit declaration of function ‘FUN_1409a9498’ [-Wimplicit-function-declaration]

    382:           puStack_358 = auStack_318;
    383:           pwStack_360 = (wchar_t *)CONCAT44(pwStack_360._4_4_,(uint)uVar18);
    384:           plStack_368 = plVar10;
    385:           iVar5 = FUN_1409a9498(lVar11,lStack_2e0,0,0);
    386:           uVar3 = auStack_318[0];
    387:           if (iVar5 != -0x3fffffdd) {
    388:             uVar18 = (ulonglong)auStack_318[0];

## FUN_140ac2e00 */ — reconstrucao/src/decompiled_04.c:406
reconstrucao/src/decompiled_04.c:406:13: error: implicit declaration of function ‘ExFreePoolWithTag’ [-Wimplicit-function-declaration]

    403:             goto LAB_140ac37bb;
    404:           }
    405:           if (plVar10 != (longlong *)0x0) {
    406:             ExFreePoolWithTag(plVar10,0);
    407:           }
    408:           uVar18 = (ulonglong)auStack_318[0];
    409:           plVar10 = (longlong *)ExAllocatePool2(0x100,uVar18 * 0x14);

## FUN_140ac2e00 */ — reconstrucao/src/decompiled_04.c:418
reconstrucao/src/decompiled_04.c:418:15: error: implicit declaration of function ‘FUN_140a74b18’; did you mean ‘FUN_140ac2d78’? [-Wimplicit-function-declaration]

    415:       iVar5 = -0x3fffff66;
    416:     }
    417:     else {
    418:       iVar5 = FUN_140a74b18(*(undefined8 *)(*plStack_308 + 0x20),0,&lStack_310);
    419:       lVar9 = lStack_280;
    420:       lVar8 = lStack_310;
    421:       if (-1 < iVar5) {

## FUN_140ac2e00 */ — reconstrucao/src/decompiled_04.c:431
reconstrucao/src/decompiled_04.c:431:19: error: request for member ‘_0_4_’ in something not a structure or union

    428:         do {
    429:           lVar20 = lVar20 + 1;
    430:         } while (*(short *)(lStack_310 + lVar20 * 2) != 0);
    431:         uStack_230._0_4_ = CONCAT22(((short)lVar13 + 3 + (short)lVar20) * 2,(undefined2)uStack_230);
    432:         lStack_228 = ExAllocatePool2(0x100,(lVar12 + lVar20) * 2 + 4U & 0xffff,0x67727453);
    433:         if (lStack_228 == 0) {
    434:           iVar5 = -0x3fffff66;

## FUN_140ac2e00 */ — reconstrucao/src/decompiled_04.c:431
reconstrucao/src/decompiled_04.c:431:28: error: implicit declaration of function ‘CONCAT22’ [-Wimplicit-function-declaration]

    428:         do {
    429:           lVar20 = lVar20 + 1;
    430:         } while (*(short *)(lStack_310 + lVar20 * 2) != 0);
    431:         uStack_230._0_4_ = CONCAT22(((short)lVar13 + 3 + (short)lVar20) * 2,(undefined2)uStack_230);
    432:         lStack_228 = ExAllocatePool2(0x100,(lVar12 + lVar20) * 2 + 4U & 0xffff,0x67727453);
    433:         if (lStack_228 == 0) {
    434:           iVar5 = -0x3fffff66;

## FUN_140ac2e00 */ — reconstrucao/src/decompiled_04.c:437
reconstrucao/src/decompiled_04.c:437:19: error: implicit declaration of function ‘FUN_140489994’ [-Wimplicit-function-declaration]

    434:           iVar5 = -0x3fffff66;
    435:         }
    436:         else {
    437:           iVar5 = FUN_140489994(&uStack_230,L"%ws&%ws",lVar9,lVar8);
    438:           if (-1 < iVar5) goto LAB_140ac35e6;
    439:         }
    440:         goto LAB_140ac33a8;

## FUN_140ac2e00 */ — reconstrucao/src/decompiled_04.c:447
reconstrucao/src/decompiled_04.c:447:5: error: implicit declaration of function ‘ExFreePool’ [-Wimplicit-function-declaration]

    444:   lVar8 = lStack_310;
    445: LAB_140ac33b1:
    446:   if (lStack_228 != 0) {
    447:     ExFreePool();
    448:   }
    449:   if (lVar8 != 0) {
    450:     ExFreePoolWithTag(lVar8,0);

## FUN_140ac2e00 */ — reconstrucao/src/decompiled_04.c:484
reconstrucao/src/decompiled_04.c:484:5: error: implicit declaration of function ‘ZwClose’ [-Wimplicit-function-declaration]

    481:     ExFreePoolWithTag(pwVar7,0);
    482:   }
    483:   if (lStack_2e0 != 0) {
    484:     ZwClose();
    485:   }
    486:   if ((iVar5 < 0) && ((DAT_140ef02c4 & 4) != 0)) {
    487:     pwStack_360 = (wchar_t *)CONCAT44(pwStack_360._4_4_,iVar5);

## FUN_140ac2e00 */ — reconstrucao/src/decompiled_04.c:486
reconstrucao/src/decompiled_04.c:486:24: error: ‘DAT_140ef02c4’ undeclared (first use in this function)

    483:   if (lStack_2e0 != 0) {
    484:     ZwClose();
    485:   }
    486:   if ((iVar5 < 0) && ((DAT_140ef02c4 & 4) != 0)) {
    487:     pwStack_360 = (wchar_t *)CONCAT44(pwStack_360._4_4_,iVar5);
    488:     plStack_368 = (longlong *)lStack_280;
    489:     FUN_14039f2ac();

