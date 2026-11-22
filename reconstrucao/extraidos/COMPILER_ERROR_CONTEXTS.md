# Contextos dos primeiros erros de compilação

Cada erro está associado ao marcador de função Ghidra mais próximo. O contexto serve para reconstrução orientada por evidência.

## FUN_140214060 */ — reconstrucao/src/decompiled_01.c:15865
reconstrucao/src/../include/ghidra_function_prototypes.h:15865:26: error: unknown type name ‘PCONTEXT’

    15862:       FUN_1402f5950(puVar11 + 5,lVar9,puVar11 + 5);
    15863:     }
    15864:     if (lVar9 != 0) {
    15865:       *(undefined1 *)(lVar9 + 10) = 1;
    15866:     }
    15867:     *(uint *)((longlong)pvVar6 + 0x5a8) = *(uint *)((longlong)pvVar6 + 0x5a8) | 0x80;
    15868:     FUN_1402145fc(puVar11);

## FUN_140214060 */ — reconstrucao/src/decompiled_01.c:15865
reconstrucao/src/../include/ghidra_function_prototypes.h:15865:43: error: unknown type name ‘PCONTEXT’

    15862:       FUN_1402f5950(puVar11 + 5,lVar9,puVar11 + 5);
    15863:     }
    15864:     if (lVar9 != 0) {
    15865:       *(undefined1 *)(lVar9 + 10) = 1;
    15866:     }
    15867:     *(uint *)((longlong)pvVar6 + 0x5a8) = *(uint *)((longlong)pvVar6 + 0x5a8) | 0x80;
    15868:     FUN_1402145fc(puVar11);

## FUN_140214060 */ — reconstrucao/src/decompiled_01.c:15865
reconstrucao/src/../include/ghidra_function_prototypes.h:15865:60: error: unknown type name ‘PCONTEXT’

    15862:       FUN_1402f5950(puVar11 + 5,lVar9,puVar11 + 5);
    15863:     }
    15864:     if (lVar9 != 0) {
    15865:       *(undefined1 *)(lVar9 + 10) = 1;
    15866:     }
    15867:     *(uint *)((longlong)pvVar6 + 0x5a8) = *(uint *)((longlong)pvVar6 + 0x5a8) | 0x80;
    15868:     FUN_1402145fc(puVar11);

## FUN_140218c60 */ — reconstrucao/src/decompiled_01.c:18857
reconstrucao/src/../include/ghidra_function_prototypes.h:18857:59: error: unknown type name ‘ULONGLONG’

    18854:       return 1;
    18855:     }
    18856:     _DAT_140ef54b4 = _DAT_140ef54b4 + 1;
    18857:     return 1;
    18858:   }
    18859:   if ((puVar10 < (undefined1 *)0xfffff68000000000) || ((undefined1 *)0xfffff6ffffffffff < puVar10))
    18860:   {

## FUN_14021e8b0 */ — reconstrucao/src/decompiled_01.c:22298
reconstrucao/src/../include/ghidra_function_prototypes.h:22298:1: error: unknown type name ‘BADSPACEBASE’

    22295: 
    22296: {
    22297:   ulonglong *puVar1;
    22298:   longlong lVar2;
    22299:   int iVar3;
    22300:   ulonglong uVar4;
    22301:   ulonglong uVar5;

## FUN_1402249dc */ — reconstrucao/src/decompiled_01.c:26577
reconstrucao/src/../include/ghidra_function_prototypes.h:26577:51: error: unknown type name ‘IMAGE_DOS_HEADER’

    26574:         else {
    26575:           uVar8 = lVar5 * 0x2000000 >> 0x10;
    26576:           uStack_b8 = (ulonglong)uStack_c0 & 0xfffffff8;
    26577:           lStack_b0 = uStack_c0 + uVar8;
    26578:           param_2 = (uStack_c0 & 7) + param_2;
    26579:           uVar9 = uVar11 * 0x1000 - uStack_b8;
    26580:           uVar10 = uStack_c8 & 1;

## FUN_1402287ec */ — reconstrucao/src/decompiled_01.c:29003
reconstrucao/src/../include/ghidra_function_prototypes.h:29003:1: error: unknown type name ‘BADSPACEBASE’

    29000: /* Ghidra label: FUN_1402287ec */
    29001: /* Ghidra address: 1402287ec */
    29002: void FUN_1402287ec(ulonglong *param_1)
    29003: 
    29004: {
    29005:   ulonglong uVar1;
    29006:   longlong lVar2;

## FUN_14022b140 */ — reconstrucao/src/decompiled_01.c:30712
reconstrucao/src/../include/ghidra_function_prototypes.h:30712:1: error: unknown type name ‘NTSTATUS’

    30709:           }
    30710:         }
    30711:         puVar10 = (uint *)(*(longlong *)
    30712:                             (*(longlong *)((longlong)SystemReserved1[0xf] + 0xb8) + 0x410) + 0x3ec);
    30713:         if (((DAT_140fc7b04._2_1_ & 0x21) == 0) || (DAT_140f0e27c != 0)) {
    30714:           uVar5 = *puVar10 & 0x7fffffff;
    30715:           do {

## FUN_14022b140 */ — reconstrucao/src/decompiled_01.c:30712
reconstrucao/src/../include/ghidra_function_prototypes.h:30712:46: error: unknown type name ‘HANDLE’

    30709:           }
    30710:         }
    30711:         puVar10 = (uint *)(*(longlong *)
    30712:                             (*(longlong *)((longlong)SystemReserved1[0xf] + 0xb8) + 0x410) + 0x3ec);
    30713:         if (((DAT_140fc7b04._2_1_ & 0x21) == 0) || (DAT_140f0e27c != 0)) {
    30714:           uVar5 = *puVar10 & 0x7fffffff;
    30715:           do {

## FUN_14022b140 */ — reconstrucao/src/decompiled_01.c:30713
reconstrucao/src/../include/ghidra_function_prototypes.h:30713:1: error: unknown type name ‘NTSTATUS’

    30710:         }
    30711:         puVar10 = (uint *)(*(longlong *)
    30712:                             (*(longlong *)((longlong)SystemReserved1[0xf] + 0xb8) + 0x410) + 0x3ec);
    30713:         if (((DAT_140fc7b04._2_1_ & 0x21) == 0) || (DAT_140f0e27c != 0)) {
    30714:           uVar5 = *puVar10 & 0x7fffffff;
    30715:           do {
    30716:             uVar1 = uVar5 + 1;

## FUN_14022c080 */ — reconstrucao/src/decompiled_01.c:31569
reconstrucao/src/../include/ghidra_function_prototypes.h:31569:32: error: unknown type name ‘PCONTEXT’

    31566:                 UNLOCK();
    31567:                 if (-1 < (longlong)uVar6) break;
    31568:                 do {
    31569:                   uVar12 = uVar12 + 1;
    31570:                   if ((((DAT_140fc62ac & uVar12) == 0) && ((DAT_140fc7ab8 & 0x40) != 0)) &&
    31571:                      (cVar5 = FUN_14020cb70(), cVar5 != '\0')) {
    31572:                     FUN_14020cb40(uVar12);

## FUN_14022c080 */ — reconstrucao/src/decompiled_01.c:31569
reconstrucao/src/../include/ghidra_function_prototypes.h:31569:55: error: unknown type name ‘_EXCEPTION_RECORD’

    31566:                 UNLOCK();
    31567:                 if (-1 < (longlong)uVar6) break;
    31568:                 do {
    31569:                   uVar12 = uVar12 + 1;
    31570:                   if ((((DAT_140fc62ac & uVar12) == 0) && ((DAT_140fc7ab8 & 0x40) != 0)) &&
    31571:                      (cVar5 = FUN_14020cb70(), cVar5 != '\0')) {
    31572:                     FUN_14020cb40(uVar12);

## FUN_14022d290 */ — reconstrucao/src/decompiled_01.c:32166
reconstrucao/src/../include/ghidra_function_prototypes.h:32166:1: error: unknown type name ‘errno_t’

    32163:               } while (bVar20);
    32164:             }
    32165:           }
    32166:         }
    32167:         else {
    32168:           if (uVar15 != 1) {
    32169:             uVar12 = uStack_68;

## FUN_14022d290 */ — reconstrucao/src/decompiled_01.c:32167
reconstrucao/src/../include/ghidra_function_prototypes.h:32167:1: error: unknown type name ‘errno_t’

    32164:             }
    32165:           }
    32166:         }
    32167:         else {
    32168:           if (uVar15 != 1) {
    32169:             uVar12 = uStack_68;
    32170:             if (uVar15 == 3) {

## FUN_14022d290 */ — reconstrucao/src/decompiled_01.c:32170
reconstrucao/src/../include/ghidra_function_prototypes.h:32170:1: error: unknown type name ‘errno_t’

    32167:         else {
    32168:           if (uVar15 != 1) {
    32169:             uVar12 = uStack_68;
    32170:             if (uVar15 == 3) {
    32171: LAB_14022d8a3:
    32172:               FUN_14023002c(puVar16,uVar17,uVar12);
    32173:               goto LAB_14022d4e0;

## FUN_14022d290 */ — reconstrucao/src/decompiled_01.c:32172
reconstrucao/src/../include/ghidra_function_prototypes.h:32172:1: error: unknown type name ‘errno_t’

    32169:             uVar12 = uStack_68;
    32170:             if (uVar15 == 3) {
    32171: LAB_14022d8a3:
    32172:               FUN_14023002c(puVar16,uVar17,uVar12);
    32173:               goto LAB_14022d4e0;
    32174:             }
    32175:             uVar15 = (uint)((ulonglong)*(undefined8 *)(lVar5 + -0x21ffffffffe8) >> 0x3b) & 7;

## FUN_14022d290 */ — reconstrucao/src/decompiled_01.c:32177
reconstrucao/src/../include/ghidra_function_prototypes.h:32177:21: error: unknown type name ‘_JBTYPE’

    32174:             }
    32175:             uVar15 = (uint)((ulonglong)*(undefined8 *)(lVar5 + -0x21ffffffffe8) >> 0x3b) & 7;
    32176:             if (uVar15 != 0) {
    32177:               LOCK();
    32178:               UNLOCK();
    32179:               cVar3 = FUN_140457b68(uVar15,DAT_140fd0080,7);
    32180:               if (cVar3 == '\0') {

## FUN_14022d290 */ — reconstrucao/src/decompiled_01.c:32189
reconstrucao/src/../include/ghidra_function_prototypes.h:32189:1: error: unknown type name ‘errno_t’

    32186:           if ((*(ulonglong *)(lVar5 + -0x21fffffffff0) & 0x3e0) != 0) {
    32187:             FUN_14022f6f0(0,lVar7,uVar19 & 0xffffffff,uVar17);
    32188:           }
    32189:           uVar6 = FUN_140378e00(alStack_58[2]);
    32190:           alStack_58[3] = alStack_58[3] + 1;
    32191:           *(undefined8 *)(lVar5 + -0x21fffffffff0) = uVar6;
    32192:           alStack_58[2] = lVar7;

## FUN_14022d290 */ — reconstrucao/src/decompiled_01.c:32192
reconstrucao/src/../include/ghidra_function_prototypes.h:32192:1: error: unknown type name ‘errno_t’

    32189:           uVar6 = FUN_140378e00(alStack_58[2]);
    32190:           alStack_58[3] = alStack_58[3] + 1;
    32191:           *(undefined8 *)(lVar5 + -0x21fffffffff0) = uVar6;
    32192:           alStack_58[2] = lVar7;
    32193:         }
    32194:       }
    32195:       else {

## FUN_14022d290 */ — reconstrucao/src/decompiled_01.c:32196
reconstrucao/src/../include/ghidra_function_prototypes.h:32196:1: error: unknown type name ‘errno_t’

    32193:         }
    32194:       }
    32195:       else {
    32196:         uVar6 = FUN_140378e00(alStack_58[0]);
    32197:         *(undefined8 *)(lVar5 + -0x21fffffffff0) = uVar6;
    32198:         alStack_58[1] = alStack_58[1] + 1;
    32199:         alStack_58[0] = lVar7;

## FUN_14022d290 */ — reconstrucao/src/decompiled_01.c:32197
reconstrucao/src/../include/ghidra_function_prototypes.h:32197:1: error: unknown type name ‘errno_t’

    32194:       }
    32195:       else {
    32196:         uVar6 = FUN_140378e00(alStack_58[0]);
    32197:         *(undefined8 *)(lVar5 + -0x21fffffffff0) = uVar6;
    32198:         alStack_58[1] = alStack_58[1] + 1;
    32199:         alStack_58[0] = lVar7;
    32200:         if (alStack_58[1] == 0x10) {

## FUN_14022d290 */ — reconstrucao/src/decompiled_01.c:32198
reconstrucao/src/../include/ghidra_function_prototypes.h:32198:1: error: unknown type name ‘errno_t’

    32195:       else {
    32196:         uVar6 = FUN_140378e00(alStack_58[0]);
    32197:         *(undefined8 *)(lVar5 + -0x21fffffffff0) = uVar6;
    32198:         alStack_58[1] = alStack_58[1] + 1;
    32199:         alStack_58[0] = lVar7;
    32200:         if (alStack_58[1] == 0x10) {
    32201:           FUN_1404fac14(alStack_58,uVar17,uVar15 & 1);

## FUN_14022d290 */ — reconstrucao/src/decompiled_01.c:32199
reconstrucao/src/../include/ghidra_function_prototypes.h:32199:1: error: unknown type name ‘errno_t’

    32196:         uVar6 = FUN_140378e00(alStack_58[0]);
    32197:         *(undefined8 *)(lVar5 + -0x21fffffffff0) = uVar6;
    32198:         alStack_58[1] = alStack_58[1] + 1;
    32199:         alStack_58[0] = lVar7;
    32200:         if (alStack_58[1] == 0x10) {
    32201:           FUN_1404fac14(alStack_58,uVar17,uVar15 & 1);
    32202:         }

## FUN_14022d290 */ — reconstrucao/src/decompiled_01.c:32202
reconstrucao/src/../include/ghidra_function_prototypes.h:32202:53: error: unknown type name ‘_locale_t’; did you mean ‘locale_t’?

    32199:         alStack_58[0] = lVar7;
    32200:         if (alStack_58[1] == 0x10) {
    32201:           FUN_1404fac14(alStack_58,uVar17,uVar15 & 1);
    32202:         }
    32203:       }
    32204:       *puVar16 = param_1[0xb];
    32205:       param_1[0xb] = puVar16;

## FUN_14022d290 */ — reconstrucao/src/decompiled_01.c:32207
reconstrucao/src/../include/ghidra_function_prototypes.h:32207:1: error: unknown type name ‘errno_t’

    32204:       *puVar16 = param_1[0xb];
    32205:       param_1[0xb] = puVar16;
    32206:       if (param_1[0xc] == 0) {
    32207:         param_1[0xc] = puVar16;
    32208:       }
    32209:       param_1[0xd] = param_1[0xd] + 1;
    32210:       if ((param_1[0xd] == param_1[10]) ||

## FUN_14022d290 */ — reconstrucao/src/decompiled_01.c:32210
reconstrucao/src/../include/ghidra_function_prototypes.h:32210:1: error: unknown type name ‘errno_t’

    32207:         param_1[0xc] = puVar16;
    32208:       }
    32209:       param_1[0xd] = param_1[0xd] + 1;
    32210:       if ((param_1[0xd] == param_1[10]) ||
    32211:          ((((param_1[0xd] & 0xf) == 0 && ((*(uint *)(param_1 + 4) & 1) != 0)) &&
    32212:           ((((*(uint *)((longlong)param_1 + 0x1c) >> 4 & 3) != 2 &&
    32213:             (iVar4 = FUN_140337360(param_1[1]), iVar4 != 0)) ||

## FUN_14022d290 */ — reconstrucao/src/decompiled_01.c:32212
reconstrucao/src/../include/ghidra_function_prototypes.h:32212:1: error: unknown type name ‘errno_t’

    32209:       param_1[0xd] = param_1[0xd] + 1;
    32210:       if ((param_1[0xd] == param_1[10]) ||
    32211:          ((((param_1[0xd] & 0xf) == 0 && ((*(uint *)(param_1 + 4) & 1) != 0)) &&
    32212:           ((((*(uint *)((longlong)param_1 + 0x1c) >> 4 & 3) != 2 &&
    32213:             (iVar4 = FUN_140337360(param_1[1]), iVar4 != 0)) ||
    32214:            (iVar4 = KeShouldYieldProcessor(), iVar4 != 0)))))) goto LAB_14022d559;
    32215:       puVar18 = puStack_70;

## FUN_14022d290 */ — reconstrucao/src/decompiled_01.c:32227
reconstrucao/src/../include/ghidra_function_prototypes.h:32227:32: error: unknown type name ‘wctype_t’

    32224:       uVar13 = *(uint *)(param_1 + 6);
    32225:       puVar1 = (uint *)param_1[5];
    32226:       LOCK();
    32227:       uVar14 = *puVar1;
    32228:       *puVar1 = *puVar1 + 1;
    32229:       UNLOCK();
    32230:       lVar5 = FUN_1402b3c90(*param_1,(uVar14 % (uint)(&DAT_140e2dd40)[uVar13 >> 0x10 & 3] ^ uVar13)

## FUN_14022d290 */ — reconstrucao/src/decompiled_01.c:32231
reconstrucao/src/../include/ghidra_function_prototypes.h:32231:22: error: unknown type name ‘_JBTYPE’

    32228:       *puVar1 = *puVar1 + 1;
    32229:       UNLOCK();
    32230:       lVar5 = FUN_1402b3c90(*param_1,(uVar14 % (uint)(&DAT_140e2dd40)[uVar13 >> 0x10 & 3] ^ uVar13)
    32231:                                      & 0xff ^ uVar13,uVar10);
    32232:       if ((lVar5 == -1) || (FUN_140340690(param_1,alStack_58,lVar5), param_1[0xd] == param_1[10]))
    32233:       break;
    32234:       iVar4 = FUN_140465c7c(param_1,0x10);

## FUN_14022d290 */ — reconstrucao/src/decompiled_01.c:32236
reconstrucao/src/../include/ghidra_function_prototypes.h:32236:1: error: unknown type name ‘errno_t’

    32233:       break;
    32234:       iVar4 = FUN_140465c7c(param_1,0x10);
    32235:     } while (iVar4 == 0);
    32236:   }
    32237: LAB_14022d559:
    32238:   uVar14 = 0;
    32239:   do {

## FUN_14022d290 */ — reconstrucao/src/decompiled_01.c:32236
reconstrucao/src/../include/ghidra_function_prototypes.h:32236:37: error: unknown type name ‘rsize_t’; did you mean ‘size_t’?

    32233:       break;
    32234:       iVar4 = FUN_140465c7c(param_1,0x10);
    32235:     } while (iVar4 == 0);
    32236:   }
    32237: LAB_14022d559:
    32238:   uVar14 = 0;
    32239:   do {

## FUN_14022d290 */ — reconstrucao/src/decompiled_01.c:32236
reconstrucao/src/../include/ghidra_function_prototypes.h:32236:65: error: unknown type name ‘rsize_t’; did you mean ‘size_t’?

    32233:       break;
    32234:       iVar4 = FUN_140465c7c(param_1,0x10);
    32235:     } while (iVar4 == 0);
    32236:   }
    32237: LAB_14022d559:
    32238:   uVar14 = 0;
    32239:   do {

## FUN_14022d290 */ — reconstrucao/src/decompiled_01.c:32237
reconstrucao/src/../include/ghidra_function_prototypes.h:32237:1: error: unknown type name ‘errno_t’

    32234:       iVar4 = FUN_140465c7c(param_1,0x10);
    32235:     } while (iVar4 == 0);
    32236:   }
    32237: LAB_14022d559:
    32238:   uVar14 = 0;
    32239:   do {
    32240:     plVar11 = alStack_58 + (ulonglong)uVar14 * 2;

## FUN_14022d290 */ — reconstrucao/src/decompiled_01.c:32237
reconstrucao/src/../include/ghidra_function_prototypes.h:32237:38: error: unknown type name ‘rsize_t’; did you mean ‘size_t’?

    32234:       iVar4 = FUN_140465c7c(param_1,0x10);
    32235:     } while (iVar4 == 0);
    32236:   }
    32237: LAB_14022d559:
    32238:   uVar14 = 0;
    32239:   do {
    32240:     plVar11 = alStack_58 + (ulonglong)uVar14 * 2;

## FUN_14022d290 */ — reconstrucao/src/decompiled_01.c:32237
reconstrucao/src/../include/ghidra_function_prototypes.h:32237:66: error: unknown type name ‘rsize_t’; did you mean ‘size_t’?

    32234:       iVar4 = FUN_140465c7c(param_1,0x10);
    32235:     } while (iVar4 == 0);
    32236:   }
    32237: LAB_14022d559:
    32238:   uVar14 = 0;
    32239:   do {
    32240:     plVar11 = alStack_58 + (ulonglong)uVar14 * 2;

## FUN_14022d290 */ — reconstrucao/src/decompiled_01.c:32247
reconstrucao/src/../include/ghidra_function_prototypes.h:32247:1: error: unknown type name ‘errno_t’

    32244:         FUN_1404fac14(plVar11,uVar13,uVar10 & 1);
    32245:       }
    32246:       else {
    32247:         FUN_1402cbf80(plVar11,uVar13,DAT_140010430);
    32248:       }
    32249:     }
    32250:     plVar11 = alStack_58 + (ulonglong)(uVar14 + 1) * 2;

## FUN_14022d290 */ — reconstrucao/src/decompiled_01.c:32247
reconstrucao/src/../include/ghidra_function_prototypes.h:32247:37: error: unknown type name ‘rsize_t’; did you mean ‘size_t’?

    32244:         FUN_1404fac14(plVar11,uVar13,uVar10 & 1);
    32245:       }
    32246:       else {
    32247:         FUN_1402cbf80(plVar11,uVar13,DAT_140010430);
    32248:       }
    32249:     }
    32250:     plVar11 = alStack_58 + (ulonglong)(uVar14 + 1) * 2;

## FUN_14022d290 */ — reconstrucao/src/decompiled_01.c:32251
reconstrucao/src/../include/ghidra_function_prototypes.h:32251:1: error: unknown type name ‘errno_t’

    32248:       }
    32249:     }
    32250:     plVar11 = alStack_58 + (ulonglong)(uVar14 + 1) * 2;
    32251:     if (*plVar11 != 0x7fffffffff) {
    32252:       uVar13 = *(uint *)(param_1 + 6) >> 0x12 & 3;
    32253:       if (uVar14 + 1 == 0) {
    32254:         FUN_1404fac14(plVar11,uVar13,uVar10 & 1);

## FUN_14022d290 */ — reconstrucao/src/decompiled_01.c:32251
reconstrucao/src/../include/ghidra_function_prototypes.h:32251:37: error: unknown type name ‘rsize_t’; did you mean ‘size_t’?

    32248:       }
    32249:     }
    32250:     plVar11 = alStack_58 + (ulonglong)(uVar14 + 1) * 2;
    32251:     if (*plVar11 != 0x7fffffffff) {
    32252:       uVar13 = *(uint *)(param_1 + 6) >> 0x12 & 3;
    32253:       if (uVar14 + 1 == 0) {
    32254:         FUN_1404fac14(plVar11,uVar13,uVar10 & 1);

## FUN_14022d290 */ — reconstrucao/src/decompiled_01.c:32254
reconstrucao/src/../include/ghidra_function_prototypes.h:32254:1: error: unknown type name ‘errno_t’

    32251:     if (*plVar11 != 0x7fffffffff) {
    32252:       uVar13 = *(uint *)(param_1 + 6) >> 0x12 & 3;
    32253:       if (uVar14 + 1 == 0) {
    32254:         FUN_1404fac14(plVar11,uVar13,uVar10 & 1);
    32255:       }
    32256:       else {
    32257:         FUN_1402cbf80(plVar11,uVar13,DAT_140010430,uVar10 & 1);

## FUN_14022d290 */ — reconstrucao/src/decompiled_01.c:32254
reconstrucao/src/../include/ghidra_function_prototypes.h:32254:38: error: unknown type name ‘rsize_t’; did you mean ‘size_t’?

    32251:     if (*plVar11 != 0x7fffffffff) {
    32252:       uVar13 = *(uint *)(param_1 + 6) >> 0x12 & 3;
    32253:       if (uVar14 + 1 == 0) {
    32254:         FUN_1404fac14(plVar11,uVar13,uVar10 & 1);
    32255:       }
    32256:       else {
    32257:         FUN_1402cbf80(plVar11,uVar13,DAT_140010430,uVar10 & 1);

## FUN_14022d290 */ — reconstrucao/src/decompiled_01.c:32254
reconstrucao/src/../include/ghidra_function_prototypes.h:32254:70: error: unknown type name ‘rsize_t’; did you mean ‘size_t’?

    32251:     if (*plVar11 != 0x7fffffffff) {
    32252:       uVar13 = *(uint *)(param_1 + 6) >> 0x12 & 3;
    32253:       if (uVar14 + 1 == 0) {
    32254:         FUN_1404fac14(plVar11,uVar13,uVar10 & 1);
    32255:       }
    32256:       else {
    32257:         FUN_1402cbf80(plVar11,uVar13,DAT_140010430,uVar10 & 1);

## FUN_14022d290 */ — reconstrucao/src/decompiled_01.c:32257
reconstrucao/src/../include/ghidra_function_prototypes.h:32257:1: error: unknown type name ‘errno_t’

    32254:         FUN_1404fac14(plVar11,uVar13,uVar10 & 1);
    32255:       }
    32256:       else {
    32257:         FUN_1402cbf80(plVar11,uVar13,DAT_140010430,uVar10 & 1);
    32258:       }
    32259:     }
    32260:     uVar14 = uVar14 + 2;

## FUN_14022d290 */ — reconstrucao/src/decompiled_01.c:32257
reconstrucao/src/../include/ghidra_function_prototypes.h:32257:38: error: unknown type name ‘rsize_t’; did you mean ‘size_t’?

    32254:         FUN_1404fac14(plVar11,uVar13,uVar10 & 1);
    32255:       }
    32256:       else {
    32257:         FUN_1402cbf80(plVar11,uVar13,DAT_140010430,uVar10 & 1);
    32258:       }
    32259:     }
    32260:     uVar14 = uVar14 + 2;

## FUN_14022d290 */ — reconstrucao/src/decompiled_01.c:32257
reconstrucao/src/../include/ghidra_function_prototypes.h:32257:70: error: unknown type name ‘rsize_t’; did you mean ‘size_t’?

    32254:         FUN_1404fac14(plVar11,uVar13,uVar10 & 1);
    32255:       }
    32256:       else {
    32257:         FUN_1402cbf80(plVar11,uVar13,DAT_140010430,uVar10 & 1);
    32258:       }
    32259:     }
    32260:     uVar14 = uVar14 + 2;

## FUN_14022da30 */ — reconstrucao/src/decompiled_01.c:32282
reconstrucao/src/../include/ghidra_function_prototypes.h:32282:19: error: conflicting types for ‘wcscat’; have ‘wchar_t *(wchar_t *, wchar_t *)’ {aka ‘int *(int *, int *)’}

    32279: 
    32280: /* Ghidra label: FUN_14022da30 */
    32281: /* Ghidra address: 14022da30 */
    32282: undefined1 FUN_14022da30(ulonglong param_1)
    32283: 
    32284: {
    32285:   if (0xffff7fffffffffff < param_1) {

## FUN_14022da30 */ — reconstrucao/src/decompiled_01.c:32283
reconstrucao/src/../include/ghidra_function_prototypes.h:32283:1: error: unknown type name ‘errno_t’

    32280: /* Ghidra label: FUN_14022da30 */
    32281: /* Ghidra address: 14022da30 */
    32282: undefined1 FUN_14022da30(ulonglong param_1)
    32283: 
    32284: {
    32285:   if (0xffff7fffffffffff < param_1) {
    32286:     if ((0xfffff67fffffffff < param_1) && (param_1 < 0xfffff70000000000)) {

## FUN_14022da30 */ — reconstrucao/src/decompiled_01.c:32283
reconstrucao/src/../include/ghidra_function_prototypes.h:32283:40: error: unknown type name ‘rsize_t’; did you mean ‘size_t’?

    32280: /* Ghidra label: FUN_14022da30 */
    32281: /* Ghidra address: 14022da30 */
    32282: undefined1 FUN_14022da30(ulonglong param_1)
    32283: 
    32284: {
    32285:   if (0xffff7fffffffffff < param_1) {
    32286:     if ((0xfffff67fffffffff < param_1) && (param_1 < 0xfffff70000000000)) {

## FUN_14022da30 */ — reconstrucao/src/decompiled_01.c:32284
reconstrucao/src/../include/ghidra_function_prototypes.h:32284:19: error: conflicting types for ‘wcschr’; have ‘wchar_t *(wchar_t *, wchar_t)’ {aka ‘int *(int *, int)’}

    32281: /* Ghidra address: 14022da30 */
    32282: undefined1 FUN_14022da30(ulonglong param_1)
    32283: 
    32284: {
    32285:   if (0xffff7fffffffffff < param_1) {
    32286:     if ((0xfffff67fffffffff < param_1) && (param_1 < 0xfffff70000000000)) {
    32287:       return 0;

## FUN_14022da30 */ — reconstrucao/src/decompiled_01.c:32285
reconstrucao/src/../include/ghidra_function_prototypes.h:32285:13: error: conflicting types for ‘wcscmp’; have ‘int(wchar_t *, wchar_t *)’ {aka ‘int(int *, int *)’}

    32282: undefined1 FUN_14022da30(ulonglong param_1)
    32283: 
    32284: {
    32285:   if (0xffff7fffffffffff < param_1) {
    32286:     if ((0xfffff67fffffffff < param_1) && (param_1 < 0xfffff70000000000)) {
    32287:       return 0;
    32288:     }

## FUN_14022da30 */ — reconstrucao/src/decompiled_01.c:32286
reconstrucao/src/../include/ghidra_function_prototypes.h:32286:19: error: conflicting types for ‘wcscpy’; have ‘wchar_t *(wchar_t *, wchar_t *)’ {aka ‘int *(int *, int *)’}

    32283: 
    32284: {
    32285:   if (0xffff7fffffffffff < param_1) {
    32286:     if ((0xfffff67fffffffff < param_1) && (param_1 < 0xfffff70000000000)) {
    32287:       return 0;
    32288:     }
    32289:     if ((param_1 < DAT_140e2f400) || (DAT_140e2f410 < param_1)) {

## FUN_14022da30 */ — reconstrucao/src/decompiled_01.c:32287
reconstrucao/src/../include/ghidra_function_prototypes.h:32287:1: error: unknown type name ‘errno_t’

    32284: {
    32285:   if (0xffff7fffffffffff < param_1) {
    32286:     if ((0xfffff67fffffffff < param_1) && (param_1 < 0xfffff70000000000)) {
    32287:       return 0;
    32288:     }
    32289:     if ((param_1 < DAT_140e2f400) || (DAT_140e2f410 < param_1)) {
    32290:       return DAT_140e2ef04;

## FUN_14022da30 */ — reconstrucao/src/decompiled_01.c:32287
reconstrucao/src/../include/ghidra_function_prototypes.h:32287:40: error: unknown type name ‘rsize_t’; did you mean ‘size_t’?

    32284: {
    32285:   if (0xffff7fffffffffff < param_1) {
    32286:     if ((0xfffff67fffffffff < param_1) && (param_1 < 0xfffff70000000000)) {
    32287:       return 0;
    32288:     }
    32289:     if ((param_1 < DAT_140e2f400) || (DAT_140e2f410 < param_1)) {
    32290:       return DAT_140e2ef04;

## FUN_14022da30 */ — reconstrucao/src/decompiled_01.c:32288
reconstrucao/src/../include/ghidra_function_prototypes.h:32288:16: error: conflicting types for ‘wcscspn’; have ‘size_t(wchar_t *, wchar_t *)’ {aka ‘long unsigned int(int *, int *)’}

    32285:   if (0xffff7fffffffffff < param_1) {
    32286:     if ((0xfffff67fffffffff < param_1) && (param_1 < 0xfffff70000000000)) {
    32287:       return 0;
    32288:     }
    32289:     if ((param_1 < DAT_140e2f400) || (DAT_140e2f410 < param_1)) {
    32290:       return DAT_140e2ef04;
    32291:     }

## FUN_14022da30 */ — reconstrucao/src/decompiled_01.c:32289
reconstrucao/src/../include/ghidra_function_prototypes.h:32289:16: error: conflicting types for ‘wcslen’; have ‘size_t(wchar_t *)’ {aka ‘long unsigned int(int *)’}

    32286:     if ((0xfffff67fffffffff < param_1) && (param_1 < 0xfffff70000000000)) {
    32287:       return 0;
    32288:     }
    32289:     if ((param_1 < DAT_140e2f400) || (DAT_140e2f410 < param_1)) {
    32290:       return DAT_140e2ef04;
    32291:     }
    32292:   }

## FUN_14022da30 */ — reconstrucao/src/decompiled_01.c:32290
reconstrucao/src/../include/ghidra_function_prototypes.h:32290:19: error: conflicting types for ‘wcsncat’; have ‘wchar_t *(wchar_t *, wchar_t *, size_t)’ {aka ‘int *(int *, int *, long unsigned int)’}

    32287:       return 0;
    32288:     }
    32289:     if ((param_1 < DAT_140e2f400) || (DAT_140e2f410 < param_1)) {
    32290:       return DAT_140e2ef04;
    32291:     }
    32292:   }
    32293:   return DAT_140e2ef05;

## FUN_14022da30 */ — reconstrucao/src/decompiled_01.c:32291
reconstrucao/src/../include/ghidra_function_prototypes.h:32291:1: error: unknown type name ‘errno_t’

    32288:     }
    32289:     if ((param_1 < DAT_140e2f400) || (DAT_140e2f410 < param_1)) {
    32290:       return DAT_140e2ef04;
    32291:     }
    32292:   }
    32293:   return DAT_140e2ef05;
    32294: }

## FUN_14022da30 */ — reconstrucao/src/decompiled_01.c:32291
reconstrucao/src/../include/ghidra_function_prototypes.h:32291:41: error: unknown type name ‘rsize_t’; did you mean ‘size_t’?

    32288:     }
    32289:     if ((param_1 < DAT_140e2f400) || (DAT_140e2f410 < param_1)) {
    32290:       return DAT_140e2ef04;
    32291:     }
    32292:   }
    32293:   return DAT_140e2ef05;
    32294: }

## FUN_14022da30 */ — reconstrucao/src/decompiled_01.c:32291
reconstrucao/src/../include/ghidra_function_prototypes.h:32291:76: error: unknown type name ‘rsize_t’; did you mean ‘size_t’?

    32288:     }
    32289:     if ((param_1 < DAT_140e2f400) || (DAT_140e2f410 < param_1)) {
    32290:       return DAT_140e2ef04;
    32291:     }
    32292:   }
    32293:   return DAT_140e2ef05;
    32294: }

## FUN_14022da30 */ — reconstrucao/src/decompiled_01.c:32292
reconstrucao/src/../include/ghidra_function_prototypes.h:32292:13: error: conflicting types for ‘wcsncmp’; have ‘int(wchar_t *, wchar_t *, size_t)’ {aka ‘int(int *, int *, long unsigned int)’}

    32289:     if ((param_1 < DAT_140e2f400) || (DAT_140e2f410 < param_1)) {
    32290:       return DAT_140e2ef04;
    32291:     }
    32292:   }
    32293:   return DAT_140e2ef05;
    32294: }
    32295: 

## FUN_14022da30 */ — reconstrucao/src/decompiled_01.c:32293
reconstrucao/src/../include/ghidra_function_prototypes.h:32293:19: error: conflicting types for ‘wcsncpy’; have ‘wchar_t *(wchar_t *, wchar_t *, size_t)’ {aka ‘int *(int *, int *, long unsigned int)’}

    32290:       return DAT_140e2ef04;
    32291:     }
    32292:   }
    32293:   return DAT_140e2ef05;
    32294: }
    32295: 
    32296: /* Ghidra label: FUN_14022da90 */

## FUN_14022da30 */ — reconstrucao/src/decompiled_01.c:32294
reconstrucao/src/../include/ghidra_function_prototypes.h:32294:1: error: unknown type name ‘errno_t’

    32291:     }
    32292:   }
    32293:   return DAT_140e2ef05;
    32294: }
    32295: 
    32296: /* Ghidra label: FUN_14022da90 */
    32297: /* Ghidra address: 14022da90 */

## FUN_14022da30 */ — reconstrucao/src/decompiled_01.c:32294
reconstrucao/src/../include/ghidra_function_prototypes.h:32294:41: error: unknown type name ‘rsize_t’; did you mean ‘size_t’?

    32291:     }
    32292:   }
    32293:   return DAT_140e2ef05;
    32294: }
    32295: 
    32296: /* Ghidra label: FUN_14022da90 */
    32297: /* Ghidra address: 14022da90 */

## FUN_14022da30 */ — reconstrucao/src/decompiled_01.c:32294
reconstrucao/src/../include/ghidra_function_prototypes.h:32294:76: error: unknown type name ‘rsize_t’; did you mean ‘size_t’?

    32291:     }
    32292:   }
    32293:   return DAT_140e2ef05;
    32294: }
    32295: 
    32296: /* Ghidra label: FUN_14022da90 */
    32297: /* Ghidra address: 14022da90 */

## FUN_14022da30 */ — reconstrucao/src/decompiled_01.c:32295
reconstrucao/src/../include/ghidra_function_prototypes.h:32295:16: error: conflicting types for ‘wcsnlen’; have ‘size_t(wchar_t *, size_t)’ {aka ‘long unsigned int(int *, long unsigned int)’}

    32292:   }
    32293:   return DAT_140e2ef05;
    32294: }
    32295: 
    32296: /* Ghidra label: FUN_14022da90 */
    32297: /* Ghidra address: 14022da90 */
    32298: undefined8 FUN_14022da90(longlong param_1,longlong param_2)

## FUN_14022da30 */ — reconstrucao/src/decompiled_01.c:32296
reconstrucao/src/../include/ghidra_function_prototypes.h:32296:19: error: conflicting types for ‘wcsrchr’; have ‘wchar_t *(wchar_t *, wchar_t)’ {aka ‘int *(int *, int)’}

    32293:   return DAT_140e2ef05;
    32294: }
    32295: 
    32296: /* Ghidra label: FUN_14022da90 */
    32297: /* Ghidra address: 14022da90 */
    32298: undefined8 FUN_14022da90(longlong param_1,longlong param_2)
    32299: 

## FUN_14022da90 */ — reconstrucao/src/decompiled_01.c:32297
reconstrucao/src/../include/ghidra_function_prototypes.h:32297:16: error: conflicting types for ‘wcsspn’; have ‘size_t(wchar_t *, wchar_t *)’ {aka ‘long unsigned int(int *, int *)’}

    32294: }
    32295: 
    32296: /* Ghidra label: FUN_14022da90 */
    32297: /* Ghidra address: 14022da90 */
    32298: undefined8 FUN_14022da90(longlong param_1,longlong param_2)
    32299: 
    32300: {

## FUN_14022da90 */ — reconstrucao/src/decompiled_01.c:32298
reconstrucao/src/../include/ghidra_function_prototypes.h:32298:19: error: conflicting types for ‘wcsstr’; have ‘wchar_t *(wchar_t *, wchar_t *)’ {aka ‘int *(int *, int *)’}

    32295: 
    32296: /* Ghidra label: FUN_14022da90 */
    32297: /* Ghidra address: 14022da90 */
    32298: undefined8 FUN_14022da90(longlong param_1,longlong param_2)
    32299: 
    32300: {
    32301:   ulonglong *puVar1;

## FUN_14022da90 */ — reconstrucao/src/decompiled_01.c:32300
reconstrucao/src/../include/ghidra_function_prototypes.h:32300:18: error: conflicting types for ‘wcstoul’; have ‘uint32_t(wchar_t *, wchar_t **, int)’ {aka ‘unsigned int(int *, int **, int)’}

    32297: /* Ghidra address: 14022da90 */
    32298: undefined8 FUN_14022da90(longlong param_1,longlong param_2)
    32299: 
    32300: {
    32301:   ulonglong *puVar1;
    32302:   uint uVar2;
    32303:   byte bVar3;

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

## FUN_14053f484 */ — reconstrucao/src/decompiled_02.c:15865
reconstrucao/src/../include/ghidra_function_prototypes.h:15865:26: error: unknown type name ‘PCONTEXT’

    15862:     if (*(uint *)(param_2 + 0xd8) <= *(uint *)(param_2 + 0xdc)) {
    15863:       KeReleaseInStackQueuedSpinLock(&uStack_28);
    15864:       goto LAB_14053f4ea;
    15865:     }
    15866:     uVar2 = *(uint *)(param_2 + 0xd8) - *(uint *)(param_2 + 0xdc);
    15867:     lVar4 = param_2;
    15868:     if (uVar2 < param_3) {

## FUN_14053f484 */ — reconstrucao/src/decompiled_02.c:15865
reconstrucao/src/../include/ghidra_function_prototypes.h:15865:43: error: unknown type name ‘PCONTEXT’

    15862:     if (*(uint *)(param_2 + 0xd8) <= *(uint *)(param_2 + 0xdc)) {
    15863:       KeReleaseInStackQueuedSpinLock(&uStack_28);
    15864:       goto LAB_14053f4ea;
    15865:     }
    15866:     uVar2 = *(uint *)(param_2 + 0xd8) - *(uint *)(param_2 + 0xdc);
    15867:     lVar4 = param_2;
    15868:     if (uVar2 < param_3) {

## FUN_14053f484 */ — reconstrucao/src/decompiled_02.c:15865
reconstrucao/src/../include/ghidra_function_prototypes.h:15865:60: error: unknown type name ‘PCONTEXT’

    15862:     if (*(uint *)(param_2 + 0xd8) <= *(uint *)(param_2 + 0xdc)) {
    15863:       KeReleaseInStackQueuedSpinLock(&uStack_28);
    15864:       goto LAB_14053f4ea;
    15865:     }
    15866:     uVar2 = *(uint *)(param_2 + 0xd8) - *(uint *)(param_2 + 0xdc);
    15867:     lVar4 = param_2;
    15868:     if (uVar2 < param_3) {

## FUN_14054308c */ — reconstrucao/src/decompiled_02.c:18857
reconstrucao/src/../include/ghidra_function_prototypes.h:18857:59: error: unknown type name ‘ULONGLONG’

    18854:   uint uVar13;
    18855:   byte bVar14;
    18856:   byte bVar15;
    18857:   uint uVar16;
    18858:   uint uVar17;
    18859:   undefined1 auStack_b8 [32];
    18860:   undefined8 uStack_98;

## HalRequestDeferredRecoveryServiceInterrupt */ — reconstrucao/src/decompiled_02.c:22298
reconstrucao/src/../include/ghidra_function_prototypes.h:22298:1: error: unknown type name ‘BADSPACEBASE’

    22295: }
    22296: 
    22297: /* Ghidra label: HalRequestDeferredRecoveryServiceInterrupt */
    22298: /* Ghidra address: 1405474a0 */
    22299: void HalRequestDeferredRecoveryServiceInterrupt(void)
    22300: 
    22301: {

## FUN_14054ca64 */ — reconstrucao/src/decompiled_02.c:26577
reconstrucao/src/../include/ghidra_function_prototypes.h:26577:51: error: unknown type name ‘IMAGE_DOS_HEADER’

    26574:     cVar1 = EtwEventEnabled(DAT_140fc25f8,&DAT_1400214f8);
    26575:     if (cVar1 != '\0') {
    26576:       uStack_5c = 0;
    26577:       puStack_68 = auStackX_8;
    26578:       uStack_4c = 0;
    26579:       uStack_3c = 0;
    26580:       uStack_2c = 0;

## FUN_14054fca0 */ — reconstrucao/src/decompiled_02.c:29003
reconstrucao/src/../include/ghidra_function_prototypes.h:29003:1: error: unknown type name ‘BADSPACEBASE’

    29000:         *(undefined4 *)(puVar13 + 0x30) = uVar4;
    29001:         *(undefined2 *)(puVar13 + 0x28) = *(undefined2 *)(lVar6 + 0x12);
    29002:         uVar4 = *(undefined4 *)(lVar6 + 4);
    29003:         *(undefined2 *)(puVar13 + 0x20) = *(undefined2 *)(lVar6 + 0x10);
    29004:         *(undefined8 *)(puVar13 + -8) = 0x14054fe4e;
    29005:         iVar9 = FUN_14054faf4(uVar4,uVar5,uVar3,uVar2);
    29006:         if (-1 < iVar9) {

## FUN_140551ad8 */ — reconstrucao/src/decompiled_02.c:30712
reconstrucao/src/../include/ghidra_function_prototypes.h:30712:1: error: unknown type name ‘NTSTATUS’

    30709:     iVar2 = FUN_140551bdc(param_2,param_3,param_4);
    30710:     if (iVar2 < 0) {
    30711:       return -0x3fffff10;
    30712:     }
    30713:     plVar1 = (longlong *)*param_1;
    30714:     if (*(char *)((longlong)param_4 + 0x25) == '\0') {
    30715:       uVar3 = 0;

## FUN_140551ad8 */ — reconstrucao/src/decompiled_02.c:30712
reconstrucao/src/../include/ghidra_function_prototypes.h:30712:46: error: unknown type name ‘HANDLE’

    30709:     iVar2 = FUN_140551bdc(param_2,param_3,param_4);
    30710:     if (iVar2 < 0) {
    30711:       return -0x3fffff10;
    30712:     }
    30713:     plVar1 = (longlong *)*param_1;
    30714:     if (*(char *)((longlong)param_4 + 0x25) == '\0') {
    30715:       uVar3 = 0;

## FUN_140551ad8 */ — reconstrucao/src/decompiled_02.c:30713
reconstrucao/src/../include/ghidra_function_prototypes.h:30713:1: error: unknown type name ‘NTSTATUS’

    30710:     if (iVar2 < 0) {
    30711:       return -0x3fffff10;
    30712:     }
    30713:     plVar1 = (longlong *)*param_1;
    30714:     if (*(char *)((longlong)param_4 + 0x25) == '\0') {
    30715:       uVar3 = 0;
    30716:       uVar4 = (ulonglong)*(uint *)(plVar1 + 5);

## FUN_1405529b8 */ — reconstrucao/src/decompiled_02.c:31569
reconstrucao/src/../include/ghidra_function_prototypes.h:31569:32: error: unknown type name ‘PCONTEXT’

    31566:       uVar9 = (*(ulonglong *)(param_3 + 0x30) & 0xfffffffffffff000) + (ulonglong)(param_2 & 0xfff);
    31567:       if ((param_5 == '\0') && (*(char *)(param_1 + 0x1bd) == '\0')) {
    31568:         uVar5 = (uint)uVar9 - ((uint)uVar9 & ~(iVar3 - 1U));
    31569:         uVar9 = uVar9 - uVar5;
    31570:         uVar11 = (ulonglong)((param_4 - 1) + iVar3 + uVar5 & ~(iVar3 - 1U));
    31571:       }
    31572:       bVar2 = bVar15;

## FUN_1405529b8 */ — reconstrucao/src/decompiled_02.c:31569
reconstrucao/src/../include/ghidra_function_prototypes.h:31569:55: error: unknown type name ‘_EXCEPTION_RECORD’

    31566:       uVar9 = (*(ulonglong *)(param_3 + 0x30) & 0xfffffffffffff000) + (ulonglong)(param_2 & 0xfff);
    31567:       if ((param_5 == '\0') && (*(char *)(param_1 + 0x1bd) == '\0')) {
    31568:         uVar5 = (uint)uVar9 - ((uint)uVar9 & ~(iVar3 - 1U));
    31569:         uVar9 = uVar9 - uVar5;
    31570:         uVar11 = (ulonglong)((param_4 - 1) + iVar3 + uVar5 & ~(iVar3 - 1U));
    31571:       }
    31572:       bVar2 = bVar15;

## FUN_140553270 */ — reconstrucao/src/decompiled_02.c:32166
reconstrucao/src/../include/ghidra_function_prototypes.h:32166:1: error: unknown type name ‘errno_t’

    32163:     *(undefined8 *)(puVar17 + -8) = 0x14055354d;
    32164:     FUN_1403ea524();
    32165:   }
    32166:   if (puVar18 != (undefined8 *)0x0) {
    32167:     *(undefined8 *)(puVar17 + -8) = 0x14055355a;
    32168:     FUN_1403ea524();
    32169:   }

## FUN_140553270 */ — reconstrucao/src/decompiled_02.c:32167
reconstrucao/src/../include/ghidra_function_prototypes.h:32167:1: error: unknown type name ‘errno_t’

    32164:     FUN_1403ea524();
    32165:   }
    32166:   if (puVar18 != (undefined8 *)0x0) {
    32167:     *(undefined8 *)(puVar17 + -8) = 0x14055355a;
    32168:     FUN_1403ea524();
    32169:   }
    32170:   return puVar8;

## FUN_140553270 */ — reconstrucao/src/decompiled_02.c:32170
reconstrucao/src/../include/ghidra_function_prototypes.h:32170:1: error: unknown type name ‘errno_t’

    32167:     *(undefined8 *)(puVar17 + -8) = 0x14055355a;
    32168:     FUN_1403ea524();
    32169:   }
    32170:   return puVar8;
    32171: }
    32172: 
    32173: /* Ghidra label: FUN_140553574 */

## FUN_140553270 */ — reconstrucao/src/decompiled_02.c:32172
reconstrucao/src/../include/ghidra_function_prototypes.h:32172:1: error: unknown type name ‘errno_t’

    32169:   }
    32170:   return puVar8;
    32171: }
    32172: 
    32173: /* Ghidra label: FUN_140553574 */
    32174: /* Ghidra address: 140553574 */
    32175: undefined8 FUN_140553574(ulonglong param_1,ulonglong param_2)

## FUN_140553574 */ — reconstrucao/src/decompiled_02.c:32177
reconstrucao/src/../include/ghidra_function_prototypes.h:32177:21: error: unknown type name ‘_JBTYPE’

    32174: /* Ghidra address: 140553574 */
    32175: undefined8 FUN_140553574(ulonglong param_1,ulonglong param_2)
    32176: 
    32177: {
    32178:   undefined8 uVar1;
    32179:   undefined8 *puStackX_20;
    32180:   

## FUN_140553574 */ — reconstrucao/src/decompiled_02.c:32189
reconstrucao/src/../include/ghidra_function_prototypes.h:32189:1: error: unknown type name ‘errno_t’

    32186:     else if (~param_2 < param_1) {
    32187:       uVar1 = 0xc000000d;
    32188:     }
    32189:     else if (DAT_140fc1bb0 == 0) {
    32190:       uVar1 = FUN_140562710(param_1,0x20,&puStackX_20);
    32191:       if (-1 < (int)uVar1) {
    32192:         puStackX_20[1] = param_1;

## FUN_140553574 */ — reconstrucao/src/decompiled_02.c:32192
reconstrucao/src/../include/ghidra_function_prototypes.h:32192:1: error: unknown type name ‘errno_t’

    32189:     else if (DAT_140fc1bb0 == 0) {
    32190:       uVar1 = FUN_140562710(param_1,0x20,&puStackX_20);
    32191:       if (-1 < (int)uVar1) {
    32192:         puStackX_20[1] = param_1;
    32193:         puStackX_20[2] = param_2 >> 0xc;
    32194:         *(undefined1 *)(puStackX_20 + 3) = 0;
    32195:         *puStackX_20 = DAT_140fc1aa0;

## FUN_140553574 */ — reconstrucao/src/decompiled_02.c:32196
reconstrucao/src/../include/ghidra_function_prototypes.h:32196:1: error: unknown type name ‘errno_t’

    32193:         puStackX_20[2] = param_2 >> 0xc;
    32194:         *(undefined1 *)(puStackX_20 + 3) = 0;
    32195:         *puStackX_20 = DAT_140fc1aa0;
    32196:         DAT_140fc1aa8 = DAT_140fc1aa8 + 1;
    32197:         DAT_140fc1aa0 = puStackX_20;
    32198:       }
    32199:     }

## FUN_140553574 */ — reconstrucao/src/decompiled_02.c:32197
reconstrucao/src/../include/ghidra_function_prototypes.h:32197:1: error: unknown type name ‘errno_t’

    32194:         *(undefined1 *)(puStackX_20 + 3) = 0;
    32195:         *puStackX_20 = DAT_140fc1aa0;
    32196:         DAT_140fc1aa8 = DAT_140fc1aa8 + 1;
    32197:         DAT_140fc1aa0 = puStackX_20;
    32198:       }
    32199:     }
    32200:     else {

## FUN_140553574 */ — reconstrucao/src/decompiled_02.c:32198
reconstrucao/src/../include/ghidra_function_prototypes.h:32198:1: error: unknown type name ‘errno_t’

    32195:         *puStackX_20 = DAT_140fc1aa0;
    32196:         DAT_140fc1aa8 = DAT_140fc1aa8 + 1;
    32197:         DAT_140fc1aa0 = puStackX_20;
    32198:       }
    32199:     }
    32200:     else {
    32201:       uVar1 = 0xc0000189;

## FUN_140553574 */ — reconstrucao/src/decompiled_02.c:32199
reconstrucao/src/../include/ghidra_function_prototypes.h:32199:1: error: unknown type name ‘errno_t’

    32196:         DAT_140fc1aa8 = DAT_140fc1aa8 + 1;
    32197:         DAT_140fc1aa0 = puStackX_20;
    32198:       }
    32199:     }
    32200:     else {
    32201:       uVar1 = 0xc0000189;
    32202:     }

## FUN_140553574 */ — reconstrucao/src/decompiled_02.c:32202
reconstrucao/src/../include/ghidra_function_prototypes.h:32202:53: error: unknown type name ‘_locale_t’; did you mean ‘locale_t’?

    32199:     }
    32200:     else {
    32201:       uVar1 = 0xc0000189;
    32202:     }
    32203:   }
    32204:   else {
    32205:     uVar1 = 0xc00000ef;

## FUN_140553574 */ — reconstrucao/src/decompiled_02.c:32207
reconstrucao/src/../include/ghidra_function_prototypes.h:32207:1: error: unknown type name ‘errno_t’

    32204:   else {
    32205:     uVar1 = 0xc00000ef;
    32206:   }
    32207:   return uVar1;
    32208: }
    32209: 
    32210: /* Ghidra label: FUN_140553628 */

## FUN_140553574 */ — reconstrucao/src/decompiled_02.c:32210
reconstrucao/src/../include/ghidra_function_prototypes.h:32210:1: error: unknown type name ‘errno_t’

    32207:   return uVar1;
    32208: }
    32209: 
    32210: /* Ghidra label: FUN_140553628 */
    32211: /* Ghidra address: 140553628 */
    32212: void FUN_140553628(longlong param_1)
    32213: 

## FUN_140553628 */ — reconstrucao/src/decompiled_02.c:32212
reconstrucao/src/../include/ghidra_function_prototypes.h:32212:1: error: unknown type name ‘errno_t’

    32209: 
    32210: /* Ghidra label: FUN_140553628 */
    32211: /* Ghidra address: 140553628 */
    32212: void FUN_140553628(longlong param_1)
    32213: 
    32214: {
    32215:   int iVar1;

## FUN_140553678 */ — reconstrucao/src/decompiled_02.c:32227
reconstrucao/src/../include/ghidra_function_prototypes.h:32227:32: error: unknown type name ‘wctype_t’

    32224: }
    32225: 
    32226: /* Ghidra label: FUN_140553678 */
    32227: /* Ghidra address: 140553678 */
    32228: longlong FUN_140553678(undefined8 param_1,int param_2)
    32229: 
    32230: {

## FUN_140553678 */ — reconstrucao/src/decompiled_02.c:32231
reconstrucao/src/../include/ghidra_function_prototypes.h:32231:22: error: unknown type name ‘_JBTYPE’

    32228: longlong FUN_140553678(undefined8 param_1,int param_2)
    32229: 
    32230: {
    32231:   int iVar1;
    32232:   longlong lVar2;
    32233:   uint *puVar3;
    32234:   longlong lVar4;

## FUN_140553678 */ — reconstrucao/src/decompiled_02.c:32236
reconstrucao/src/../include/ghidra_function_prototypes.h:32236:1: error: unknown type name ‘errno_t’

    32233:   uint *puVar3;
    32234:   longlong lVar4;
    32235:   ulonglong uVar5;
    32236:   uint *puVar6;
    32237:   uint *puVar7;
    32238:   ulonglong uVar8;
    32239:   ulonglong uVar9;

## FUN_140553678 */ — reconstrucao/src/decompiled_02.c:32236
reconstrucao/src/../include/ghidra_function_prototypes.h:32236:37: error: unknown type name ‘rsize_t’; did you mean ‘size_t’?

    32233:   uint *puVar3;
    32234:   longlong lVar4;
    32235:   ulonglong uVar5;
    32236:   uint *puVar6;
    32237:   uint *puVar7;
    32238:   ulonglong uVar8;
    32239:   ulonglong uVar9;

## FUN_140553678 */ — reconstrucao/src/decompiled_02.c:32236
reconstrucao/src/../include/ghidra_function_prototypes.h:32236:65: error: unknown type name ‘rsize_t’; did you mean ‘size_t’?

    32233:   uint *puVar3;
    32234:   longlong lVar4;
    32235:   ulonglong uVar5;
    32236:   uint *puVar6;
    32237:   uint *puVar7;
    32238:   ulonglong uVar8;
    32239:   ulonglong uVar9;

## FUN_140553678 */ — reconstrucao/src/decompiled_02.c:32237
reconstrucao/src/../include/ghidra_function_prototypes.h:32237:1: error: unknown type name ‘errno_t’

    32234:   longlong lVar4;
    32235:   ulonglong uVar5;
    32236:   uint *puVar6;
    32237:   uint *puVar7;
    32238:   ulonglong uVar8;
    32239:   ulonglong uVar9;
    32240:   longlong lVar10;

## FUN_140553678 */ — reconstrucao/src/decompiled_02.c:32237
reconstrucao/src/../include/ghidra_function_prototypes.h:32237:38: error: unknown type name ‘rsize_t’; did you mean ‘size_t’?

    32234:   longlong lVar4;
    32235:   ulonglong uVar5;
    32236:   uint *puVar6;
    32237:   uint *puVar7;
    32238:   ulonglong uVar8;
    32239:   ulonglong uVar9;
    32240:   longlong lVar10;

## FUN_140553678 */ — reconstrucao/src/decompiled_02.c:32237
reconstrucao/src/../include/ghidra_function_prototypes.h:32237:66: error: unknown type name ‘rsize_t’; did you mean ‘size_t’?

    32234:   longlong lVar4;
    32235:   ulonglong uVar5;
    32236:   uint *puVar6;
    32237:   uint *puVar7;
    32238:   ulonglong uVar8;
    32239:   ulonglong uVar9;
    32240:   longlong lVar10;

## FUN_140553678 */ — reconstrucao/src/decompiled_02.c:32247
reconstrucao/src/../include/ghidra_function_prototypes.h:32247:1: error: unknown type name ‘errno_t’

    32244:   uint uVar14;
    32245:   int aiStackX_18 [2];
    32246:   uint uStackX_20;
    32247:   ulonglong uStack_a8;
    32248:   uint *puStack_a0;
    32249:   longlong lStack_98;
    32250:   undefined1 auStack_88 [8];

## FUN_140553678 */ — reconstrucao/src/decompiled_02.c:32247
reconstrucao/src/../include/ghidra_function_prototypes.h:32247:37: error: unknown type name ‘rsize_t’; did you mean ‘size_t’?

    32244:   uint uVar14;
    32245:   int aiStackX_18 [2];
    32246:   uint uStackX_20;
    32247:   ulonglong uStack_a8;
    32248:   uint *puStack_a0;
    32249:   longlong lStack_98;
    32250:   undefined1 auStack_88 [8];

## FUN_140553678 */ — reconstrucao/src/decompiled_02.c:32251
reconstrucao/src/../include/ghidra_function_prototypes.h:32251:1: error: unknown type name ‘errno_t’

    32248:   uint *puStack_a0;
    32249:   longlong lStack_98;
    32250:   undefined1 auStack_88 [8];
    32251:   undefined8 uStack_80;
    32252:   longlong lStack_40;
    32253:   
    32254:   uStack_a8 = 0;

## FUN_140553678 */ — reconstrucao/src/decompiled_02.c:32251
reconstrucao/src/../include/ghidra_function_prototypes.h:32251:37: error: unknown type name ‘rsize_t’; did you mean ‘size_t’?

    32248:   uint *puStack_a0;
    32249:   longlong lStack_98;
    32250:   undefined1 auStack_88 [8];
    32251:   undefined8 uStack_80;
    32252:   longlong lStack_40;
    32253:   
    32254:   uStack_a8 = 0;

## FUN_140553678 */ — reconstrucao/src/decompiled_02.c:32254
reconstrucao/src/../include/ghidra_function_prototypes.h:32254:1: error: unknown type name ‘errno_t’

    32251:   undefined8 uStack_80;
    32252:   longlong lStack_40;
    32253:   
    32254:   uStack_a8 = 0;
    32255:   aiStackX_18[0] = 0;
    32256:   FUN_1406d1200(auStack_88,0,0x50);
    32257:   lVar4 = 0;

## FUN_140553678 */ — reconstrucao/src/decompiled_02.c:32254
reconstrucao/src/../include/ghidra_function_prototypes.h:32254:38: error: unknown type name ‘rsize_t’; did you mean ‘size_t’?

    32251:   undefined8 uStack_80;
    32252:   longlong lStack_40;
    32253:   
    32254:   uStack_a8 = 0;
    32255:   aiStackX_18[0] = 0;
    32256:   FUN_1406d1200(auStack_88,0,0x50);
    32257:   lVar4 = 0;

## FUN_140553678 */ — reconstrucao/src/decompiled_02.c:32254
reconstrucao/src/../include/ghidra_function_prototypes.h:32254:70: error: unknown type name ‘rsize_t’; did you mean ‘size_t’?

    32251:   undefined8 uStack_80;
    32252:   longlong lStack_40;
    32253:   
    32254:   uStack_a8 = 0;
    32255:   aiStackX_18[0] = 0;
    32256:   FUN_1406d1200(auStack_88,0,0x50);
    32257:   lVar4 = 0;

## FUN_140553678 */ — reconstrucao/src/decompiled_02.c:32257
reconstrucao/src/../include/ghidra_function_prototypes.h:32257:1: error: unknown type name ‘errno_t’

    32254:   uStack_a8 = 0;
    32255:   aiStackX_18[0] = 0;
    32256:   FUN_1406d1200(auStack_88,0,0x50);
    32257:   lVar4 = 0;
    32258:   uStackX_20 = 0;
    32259:   iVar12 = 0;
    32260:   iVar1 = FUN_14053f900(param_1,auStack_88);

## FUN_140553678 */ — reconstrucao/src/decompiled_02.c:32257
reconstrucao/src/../include/ghidra_function_prototypes.h:32257:38: error: unknown type name ‘rsize_t’; did you mean ‘size_t’?

    32254:   uStack_a8 = 0;
    32255:   aiStackX_18[0] = 0;
    32256:   FUN_1406d1200(auStack_88,0,0x50);
    32257:   lVar4 = 0;
    32258:   uStackX_20 = 0;
    32259:   iVar12 = 0;
    32260:   iVar1 = FUN_14053f900(param_1,auStack_88);

## FUN_140553678 */ — reconstrucao/src/decompiled_02.c:32257
reconstrucao/src/../include/ghidra_function_prototypes.h:32257:70: error: unknown type name ‘rsize_t’; did you mean ‘size_t’?

    32254:   uStack_a8 = 0;
    32255:   aiStackX_18[0] = 0;
    32256:   FUN_1406d1200(auStack_88,0,0x50);
    32257:   lVar4 = 0;
    32258:   uStackX_20 = 0;
    32259:   iVar12 = 0;
    32260:   iVar1 = FUN_14053f900(param_1,auStack_88);

## FUN_140553678 */ — reconstrucao/src/decompiled_02.c:32282
reconstrucao/src/../include/ghidra_function_prototypes.h:32282:19: error: conflicting types for ‘wcscat’; have ‘wchar_t *(wchar_t *, wchar_t *)’ {aka ‘int *(int *, int *)’}

    32279:                     iVar12 = iVar12 + 1;
    32280:                   }
    32281:                   puVar7 = puVar7 + 5;
    32282:                   uVar9 = uVar9 - 1;
    32283:                 } while (uVar9 != 0);
    32284:               }
    32285:               puVar6 = puVar6 + 9;

## FUN_140553678 */ — reconstrucao/src/decompiled_02.c:32283
reconstrucao/src/../include/ghidra_function_prototypes.h:32283:1: error: unknown type name ‘errno_t’

    32280:                   }
    32281:                   puVar7 = puVar7 + 5;
    32282:                   uVar9 = uVar9 - 1;
    32283:                 } while (uVar9 != 0);
    32284:               }
    32285:               puVar6 = puVar6 + 9;
    32286:               uVar11 = uVar11 - 1;

## FUN_140553678 */ — reconstrucao/src/decompiled_02.c:32283
reconstrucao/src/../include/ghidra_function_prototypes.h:32283:40: error: unknown type name ‘rsize_t’; did you mean ‘size_t’?

    32280:                   }
    32281:                   puVar7 = puVar7 + 5;
    32282:                   uVar9 = uVar9 - 1;
    32283:                 } while (uVar9 != 0);
    32284:               }
    32285:               puVar6 = puVar6 + 9;
    32286:               uVar11 = uVar11 - 1;

## FUN_140553678 */ — reconstrucao/src/decompiled_02.c:32284
reconstrucao/src/../include/ghidra_function_prototypes.h:32284:19: error: conflicting types for ‘wcschr’; have ‘wchar_t *(wchar_t *, wchar_t)’ {aka ‘int *(int *, int)’}

    32281:                   puVar7 = puVar7 + 5;
    32282:                   uVar9 = uVar9 - 1;
    32283:                 } while (uVar9 != 0);
    32284:               }
    32285:               puVar6 = puVar6 + 9;
    32286:               uVar11 = uVar11 - 1;
    32287:             } while (uVar11 != 0);

## FUN_140553678 */ — reconstrucao/src/decompiled_02.c:32285
reconstrucao/src/../include/ghidra_function_prototypes.h:32285:13: error: conflicting types for ‘wcscmp’; have ‘int(wchar_t *, wchar_t *)’ {aka ‘int(int *, int *)’}

    32282:                   uVar9 = uVar9 - 1;
    32283:                 } while (uVar9 != 0);
    32284:               }
    32285:               puVar6 = puVar6 + 9;
    32286:               uVar11 = uVar11 - 1;
    32287:             } while (uVar11 != 0);
    32288:           }

## FUN_140553678 */ — reconstrucao/src/decompiled_02.c:32286
reconstrucao/src/../include/ghidra_function_prototypes.h:32286:19: error: conflicting types for ‘wcscpy’; have ‘wchar_t *(wchar_t *, wchar_t *)’ {aka ‘int *(int *, int *)’}

    32283:                 } while (uVar9 != 0);
    32284:               }
    32285:               puVar6 = puVar6 + 9;
    32286:               uVar11 = uVar11 - 1;
    32287:             } while (uVar11 != 0);
    32288:           }
    32289:           aiStackX_18[0] = iVar12 << 5;

## FUN_140553678 */ — reconstrucao/src/decompiled_02.c:32287
reconstrucao/src/../include/ghidra_function_prototypes.h:32287:1: error: unknown type name ‘errno_t’

    32284:               }
    32285:               puVar6 = puVar6 + 9;
    32286:               uVar11 = uVar11 - 1;
    32287:             } while (uVar11 != 0);
    32288:           }
    32289:           aiStackX_18[0] = iVar12 << 5;
    32290:           lVar4 = FUN_1403e9cd8();

## FUN_140553678 */ — reconstrucao/src/decompiled_02.c:32287
reconstrucao/src/../include/ghidra_function_prototypes.h:32287:40: error: unknown type name ‘rsize_t’; did you mean ‘size_t’?

    32284:               }
    32285:               puVar6 = puVar6 + 9;
    32286:               uVar11 = uVar11 - 1;
    32287:             } while (uVar11 != 0);
    32288:           }
    32289:           aiStackX_18[0] = iVar12 << 5;
    32290:           lVar4 = FUN_1403e9cd8();

## FUN_140553678 */ — reconstrucao/src/decompiled_02.c:32288
reconstrucao/src/../include/ghidra_function_prototypes.h:32288:16: error: conflicting types for ‘wcscspn’; have ‘size_t(wchar_t *, wchar_t *)’ {aka ‘long unsigned int(int *, int *)’}

    32285:               puVar6 = puVar6 + 9;
    32286:               uVar11 = uVar11 - 1;
    32287:             } while (uVar11 != 0);
    32288:           }
    32289:           aiStackX_18[0] = iVar12 << 5;
    32290:           lVar4 = FUN_1403e9cd8();
    32291:           if (lVar4 != 0) {

## FUN_140553678 */ — reconstrucao/src/decompiled_02.c:32289
reconstrucao/src/../include/ghidra_function_prototypes.h:32289:16: error: conflicting types for ‘wcslen’; have ‘size_t(wchar_t *)’ {aka ‘long unsigned int(int *)’}

    32286:               uVar11 = uVar11 - 1;
    32287:             } while (uVar11 != 0);
    32288:           }
    32289:           aiStackX_18[0] = iVar12 << 5;
    32290:           lVar4 = FUN_1403e9cd8();
    32291:           if (lVar4 != 0) {
    32292:             uVar11 = 0;

## FUN_140553678 */ — reconstrucao/src/decompiled_02.c:32290
reconstrucao/src/../include/ghidra_function_prototypes.h:32290:19: error: conflicting types for ‘wcsncat’; have ‘wchar_t *(wchar_t *, wchar_t *, size_t)’ {aka ‘int *(int *, int *, long unsigned int)’}

    32287:             } while (uVar11 != 0);
    32288:           }
    32289:           aiStackX_18[0] = iVar12 << 5;
    32290:           lVar4 = FUN_1403e9cd8();
    32291:           if (lVar4 != 0) {
    32292:             uVar11 = 0;
    32293:             if (*puVar3 != 0) {

## FUN_140553678 */ — reconstrucao/src/decompiled_02.c:32291
reconstrucao/src/../include/ghidra_function_prototypes.h:32291:1: error: unknown type name ‘errno_t’

    32288:           }
    32289:           aiStackX_18[0] = iVar12 << 5;
    32290:           lVar4 = FUN_1403e9cd8();
    32291:           if (lVar4 != 0) {
    32292:             uVar11 = 0;
    32293:             if (*puVar3 != 0) {
    32294:               uVar14 = uStackX_20;

## FUN_140553678 */ — reconstrucao/src/decompiled_02.c:32291
reconstrucao/src/../include/ghidra_function_prototypes.h:32291:41: error: unknown type name ‘rsize_t’; did you mean ‘size_t’?

    32288:           }
    32289:           aiStackX_18[0] = iVar12 << 5;
    32290:           lVar4 = FUN_1403e9cd8();
    32291:           if (lVar4 != 0) {
    32292:             uVar11 = 0;
    32293:             if (*puVar3 != 0) {
    32294:               uVar14 = uStackX_20;

## FUN_140553678 */ — reconstrucao/src/decompiled_02.c:32291
reconstrucao/src/../include/ghidra_function_prototypes.h:32291:76: error: unknown type name ‘rsize_t’; did you mean ‘size_t’?

    32288:           }
    32289:           aiStackX_18[0] = iVar12 << 5;
    32290:           lVar4 = FUN_1403e9cd8();
    32291:           if (lVar4 != 0) {
    32292:             uVar11 = 0;
    32293:             if (*puVar3 != 0) {
    32294:               uVar14 = uStackX_20;

## FUN_140553678 */ — reconstrucao/src/decompiled_02.c:32292
reconstrucao/src/../include/ghidra_function_prototypes.h:32292:13: error: conflicting types for ‘wcsncmp’; have ‘int(wchar_t *, wchar_t *, size_t)’ {aka ‘int(int *, int *, long unsigned int)’}

    32289:           aiStackX_18[0] = iVar12 << 5;
    32290:           lVar4 = FUN_1403e9cd8();
    32291:           if (lVar4 != 0) {
    32292:             uVar11 = 0;
    32293:             if (*puVar3 != 0) {
    32294:               uVar14 = uStackX_20;
    32295:               do {

## FUN_140553678 */ — reconstrucao/src/decompiled_02.c:32293
reconstrucao/src/../include/ghidra_function_prototypes.h:32293:19: error: conflicting types for ‘wcsncpy’; have ‘wchar_t *(wchar_t *, wchar_t *, size_t)’ {aka ‘int *(int *, int *, long unsigned int)’}

    32290:           lVar4 = FUN_1403e9cd8();
    32291:           if (lVar4 != 0) {
    32292:             uVar11 = 0;
    32293:             if (*puVar3 != 0) {
    32294:               uVar14 = uStackX_20;
    32295:               do {
    32296:                 lVar2 = uVar11 * 9;

## FUN_140553678 */ — reconstrucao/src/decompiled_02.c:32294
reconstrucao/src/../include/ghidra_function_prototypes.h:32294:1: error: unknown type name ‘errno_t’

    32291:           if (lVar4 != 0) {
    32292:             uVar11 = 0;
    32293:             if (*puVar3 != 0) {
    32294:               uVar14 = uStackX_20;
    32295:               do {
    32296:                 lVar2 = uVar11 * 9;
    32297:                 uVar9 = 0;

## FUN_140553678 */ — reconstrucao/src/decompiled_02.c:32294
reconstrucao/src/../include/ghidra_function_prototypes.h:32294:41: error: unknown type name ‘rsize_t’; did you mean ‘size_t’?

    32291:           if (lVar4 != 0) {
    32292:             uVar11 = 0;
    32293:             if (*puVar3 != 0) {
    32294:               uVar14 = uStackX_20;
    32295:               do {
    32296:                 lVar2 = uVar11 * 9;
    32297:                 uVar9 = 0;

## FUN_140553678 */ — reconstrucao/src/decompiled_02.c:32294
reconstrucao/src/../include/ghidra_function_prototypes.h:32294:76: error: unknown type name ‘rsize_t’; did you mean ‘size_t’?

    32291:           if (lVar4 != 0) {
    32292:             uVar11 = 0;
    32293:             if (*puVar3 != 0) {
    32294:               uVar14 = uStackX_20;
    32295:               do {
    32296:                 lVar2 = uVar11 * 9;
    32297:                 uVar9 = 0;

## FUN_140553678 */ — reconstrucao/src/decompiled_02.c:32295
reconstrucao/src/../include/ghidra_function_prototypes.h:32295:16: error: conflicting types for ‘wcsnlen’; have ‘size_t(wchar_t *, size_t)’ {aka ‘long unsigned int(int *, long unsigned int)’}

    32292:             uVar11 = 0;
    32293:             if (*puVar3 != 0) {
    32294:               uVar14 = uStackX_20;
    32295:               do {
    32296:                 lVar2 = uVar11 * 9;
    32297:                 uVar9 = 0;
    32298:                 if (puVar3[lVar2 + 4] != 0) {

## FUN_140553678 */ — reconstrucao/src/decompiled_02.c:32296
reconstrucao/src/../include/ghidra_function_prototypes.h:32296:19: error: conflicting types for ‘wcsrchr’; have ‘wchar_t *(wchar_t *, wchar_t)’ {aka ‘int *(int *, int)’}

    32293:             if (*puVar3 != 0) {
    32294:               uVar14 = uStackX_20;
    32295:               do {
    32296:                 lVar2 = uVar11 * 9;
    32297:                 uVar9 = 0;
    32298:                 if (puVar3[lVar2 + 4] != 0) {
    32299:                   do {

## FUN_140553678 */ — reconstrucao/src/decompiled_02.c:32297
reconstrucao/src/../include/ghidra_function_prototypes.h:32297:16: error: conflicting types for ‘wcsspn’; have ‘size_t(wchar_t *, wchar_t *)’ {aka ‘long unsigned int(int *, int *)’}

    32294:               uVar14 = uStackX_20;
    32295:               do {
    32296:                 lVar2 = uVar11 * 9;
    32297:                 uVar9 = 0;
    32298:                 if (puVar3[lVar2 + 4] != 0) {
    32299:                   do {
    32300:                     if (((char)puVar3[lVar2 + uVar9 * 5 + 5] - 3U & 0xfb) == 0) {

## FUN_140553678 */ — reconstrucao/src/decompiled_02.c:32298
reconstrucao/src/../include/ghidra_function_prototypes.h:32298:19: error: conflicting types for ‘wcsstr’; have ‘wchar_t *(wchar_t *, wchar_t *)’ {aka ‘int *(int *, int *)’}

    32295:               do {
    32296:                 lVar2 = uVar11 * 9;
    32297:                 uVar9 = 0;
    32298:                 if (puVar3[lVar2 + 4] != 0) {
    32299:                   do {
    32300:                     if (((char)puVar3[lVar2 + uVar9 * 5 + 5] - 3U & 0xfb) == 0) {
    32301:                       uVar5 = RtlCmDecodeMemIoResource(puVar3 + lVar2 + uVar9 * 5 + 5,&uStack_a8);

## FUN_140553678 */ — reconstrucao/src/decompiled_02.c:32300
reconstrucao/src/../include/ghidra_function_prototypes.h:32300:18: error: conflicting types for ‘wcstoul’; have ‘uint32_t(wchar_t *, wchar_t **, int)’ {aka ‘unsigned int(int *, int **, int)’}

    32297:                 uVar9 = 0;
    32298:                 if (puVar3[lVar2 + 4] != 0) {
    32299:                   do {
    32300:                     if (((char)puVar3[lVar2 + uVar9 * 5 + 5] - 3U & 0xfb) == 0) {
    32301:                       uVar5 = RtlCmDecodeMemIoResource(puVar3 + lVar2 + uVar9 * 5 + 5,&uStack_a8);
    32302:                       lVar10 = (ulonglong)uVar14 * 0x20;
    32303:                       if (param_2 == 2) {

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

## FUN_140792760 */ — reconstrucao/src/decompiled_03.c:15865
reconstrucao/src/../include/ghidra_function_prototypes.h:15865:26: error: unknown type name ‘PCONTEXT’

    15862:   uStackX_20 = 0;
    15863:   iVar1 = FUN_1408771e0(param_1,0x2000,PsProcessType,
    15864:                         *(undefined1 *)((longlong)SystemReserved1[0xf] + 0x232),0x79517350,
    15865:                         &uStackX_20,0,0);
    15866:   if (-1 < iVar1) {
    15867:     iVar1 = FUN_140722a98(uStackX_20,param_2,param_3);
    15868:     ObfDereferenceObjectWithTag(uStackX_20,0x79517350);

## FUN_140792760 */ — reconstrucao/src/decompiled_03.c:15865
reconstrucao/src/../include/ghidra_function_prototypes.h:15865:43: error: unknown type name ‘PCONTEXT’

    15862:   uStackX_20 = 0;
    15863:   iVar1 = FUN_1408771e0(param_1,0x2000,PsProcessType,
    15864:                         *(undefined1 *)((longlong)SystemReserved1[0xf] + 0x232),0x79517350,
    15865:                         &uStackX_20,0,0);
    15866:   if (-1 < iVar1) {
    15867:     iVar1 = FUN_140722a98(uStackX_20,param_2,param_3);
    15868:     ObfDereferenceObjectWithTag(uStackX_20,0x79517350);

## FUN_140792760 */ — reconstrucao/src/decompiled_03.c:15865
reconstrucao/src/../include/ghidra_function_prototypes.h:15865:60: error: unknown type name ‘PCONTEXT’

    15862:   uStackX_20 = 0;
    15863:   iVar1 = FUN_1408771e0(param_1,0x2000,PsProcessType,
    15864:                         *(undefined1 *)((longlong)SystemReserved1[0xf] + 0x232),0x79517350,
    15865:                         &uStackX_20,0,0);
    15866:   if (-1 < iVar1) {
    15867:     iVar1 = FUN_140722a98(uStackX_20,param_2,param_3);
    15868:     ObfDereferenceObjectWithTag(uStackX_20,0x79517350);

## RtlDecompressChunks */ — reconstrucao/src/decompiled_03.c:18857
reconstrucao/src/../include/ghidra_function_prototypes.h:18857:59: error: unknown type name ‘ULONGLONG’

    18854: {
    18855:   void *pvVar1;
    18856:   void *_Dst;
    18857:   uint uVar2;
    18858:   undefined8 uVar3;
    18859:   ulonglong uVar4;
    18860:   uint uVar5;

## FUN_14079accc */ — reconstrucao/src/decompiled_03.c:22298
reconstrucao/src/../include/ghidra_function_prototypes.h:22298:1: error: unknown type name ‘BADSPACEBASE’

    22295:   uStack_238 = 0;
    22296:   puStack_230 = (undefined1 *)0x0;
    22297:   FUN_1406d1200(auStack_128,0,0x110);
    22298:   uStack_168 = 0;
    22299:   uStack_160 = 0;
    22300:   uStack_188 = 0;
    22301:   uStack_180 = 0;

## FUN_14079ffac */ — reconstrucao/src/decompiled_03.c:26577
reconstrucao/src/../include/ghidra_function_prototypes.h:26577:51: error: unknown type name ‘IMAGE_DOS_HEADER’

    26574:   _DAT_140e28260 = 0;
    26575:   return;
    26576: }
    26577: 
    26578: /* Ghidra label: FUN_14079ffdc */
    26579: /* Ghidra address: 14079ffdc */
    26580: undefined8 FUN_14079ffdc(uint *param_1,longlong param_2,char param_3,longlong *param_4)

## FUN_1407a2c30 */ — reconstrucao/src/decompiled_03.c:29003
reconstrucao/src/../include/ghidra_function_prototypes.h:29003:1: error: unknown type name ‘BADSPACEBASE’

    29000:   
    29001:   iVar11 = *(int *)(param_1 + 3);
    29002:   auStack_58[1] = 0;
    29003:   iVar2 = (int)param_6[1];
    29004:   uVar9 = *(ushort *)*param_1 & 0x1f;
    29005:   iVar5 = (1 << (sbyte)uVar9) - (*(ushort *)*param_1 >> 5 & 7);
    29006:   auStack_48[1] = 0;

## FUN_1407a4e54 */ — reconstrucao/src/decompiled_03.c:30712
reconstrucao/src/../include/ghidra_function_prototypes.h:30712:1: error: unknown type name ‘NTSTATUS’

    30709:         }
    30710:         return uVar2;
    30711:       }
    30712:     }
    30713:     else if (((uVar1 == 1) || (uVar1 == 2)) || (uVar1 == 3)) {
    30714:       return 0xc0000002;
    30715:     }

## FUN_1407a4e54 */ — reconstrucao/src/decompiled_03.c:30712
reconstrucao/src/../include/ghidra_function_prototypes.h:30712:46: error: unknown type name ‘HANDLE’

    30709:         }
    30710:         return uVar2;
    30711:       }
    30712:     }
    30713:     else if (((uVar1 == 1) || (uVar1 == 2)) || (uVar1 == 3)) {
    30714:       return 0xc0000002;
    30715:     }

## FUN_1407a4e54 */ — reconstrucao/src/decompiled_03.c:30713
reconstrucao/src/../include/ghidra_function_prototypes.h:30713:1: error: unknown type name ‘NTSTATUS’

    30710:         return uVar2;
    30711:       }
    30712:     }
    30713:     else if (((uVar1 == 1) || (uVar1 == 2)) || (uVar1 == 3)) {
    30714:       return 0xc0000002;
    30715:     }
    30716:   }

## FUN_1407a5df0 */ — reconstrucao/src/decompiled_03.c:31569
reconstrucao/src/../include/ghidra_function_prototypes.h:31569:32: error: unknown type name ‘PCONTEXT’

    31566:         }
    31567:         else {
    31568:           piVar5 = *(int **)(param_1 + 0x18);
    31569:           while (piVar5 != (int *)0x0) {
    31570:             iVar3 = FUN_1407a5a34(alStackX_18,piVar5);
    31571:             if (iVar3 < 0) {
    31572:               piVar5 = *(int **)piVar5;

## FUN_1407a5df0 */ — reconstrucao/src/decompiled_03.c:31569
reconstrucao/src/../include/ghidra_function_prototypes.h:31569:55: error: unknown type name ‘_EXCEPTION_RECORD’

    31566:         }
    31567:         else {
    31568:           piVar5 = *(int **)(param_1 + 0x18);
    31569:           while (piVar5 != (int *)0x0) {
    31570:             iVar3 = FUN_1407a5a34(alStackX_18,piVar5);
    31571:             if (iVar3 < 0) {
    31572:               piVar5 = *(int **)piVar5;

## FUN_1407a67fc */ — reconstrucao/src/decompiled_03.c:32166
reconstrucao/src/../include/ghidra_function_prototypes.h:32166:1: error: unknown type name ‘errno_t’

    32163:                       if (uVar7 != 0) {
    32164:                         if ((uVar8 < uVar7) || (uVar12 <= uVar10)) {
    32165:                           iVar3 = -0x7ffffffb;
    32166:                           goto LAB_1407a6aee;
    32167:                         }
    32168:                         uVar1 = (ushort)puVar5[1];
    32169:                         if (uVar7 <= (ushort)puVar5[1]) {

## FUN_1407a67fc */ — reconstrucao/src/decompiled_03.c:32167
reconstrucao/src/../include/ghidra_function_prototypes.h:32167:1: error: unknown type name ‘errno_t’

    32164:                         if ((uVar8 < uVar7) || (uVar12 <= uVar10)) {
    32165:                           iVar3 = -0x7ffffffb;
    32166:                           goto LAB_1407a6aee;
    32167:                         }
    32168:                         uVar1 = (ushort)puVar5[1];
    32169:                         if (uVar7 <= (ushort)puVar5[1]) {
    32170:                           uVar1 = (ushort)uVar7;

## FUN_1407a67fc */ — reconstrucao/src/decompiled_03.c:32170
reconstrucao/src/../include/ghidra_function_prototypes.h:32170:1: error: unknown type name ‘errno_t’

    32167:                         }
    32168:                         uVar1 = (ushort)puVar5[1];
    32169:                         if (uVar7 <= (ushort)puVar5[1]) {
    32170:                           uVar1 = (ushort)uVar7;
    32171:                         }
    32172:                         *(ushort *)(puVar5 + 1) = uVar1;
    32173:                         uVar1 = *(ushort *)((longlong)puVar5 + 6);

## FUN_1407a67fc */ — reconstrucao/src/decompiled_03.c:32172
reconstrucao/src/../include/ghidra_function_prototypes.h:32172:1: error: unknown type name ‘errno_t’

    32169:                         if (uVar7 <= (ushort)puVar5[1]) {
    32170:                           uVar1 = (ushort)uVar7;
    32171:                         }
    32172:                         *(ushort *)(puVar5 + 1) = uVar1;
    32173:                         uVar1 = *(ushort *)((longlong)puVar5 + 6);
    32174:                         if ((uint)*(ushort *)((longlong)puVar5 + 6) <= *(uint *)(lVar4 + 8)) {
    32175:                           uVar1 = (ushort)*(uint *)(lVar4 + 8);

## FUN_1407a67fc */ — reconstrucao/src/decompiled_03.c:32177
reconstrucao/src/../include/ghidra_function_prototypes.h:32177:21: error: unknown type name ‘_JBTYPE’

    32174:                         if ((uint)*(ushort *)((longlong)puVar5 + 6) <= *(uint *)(lVar4 + 8)) {
    32175:                           uVar1 = (ushort)*(uint *)(lVar4 + 8);
    32176:                         }
    32177:                         *(ushort *)((longlong)puVar5 + 6) = uVar1;
    32178:                         *(uint **)(puVar5 + uVar11 * 4 + 4) = puStack_b0;
    32179:                         *(undefined2 *)(puVar5 + uVar11 * 4 + 2) = *(undefined2 *)(lVar4 + 8);
    32180:                         *(undefined2 *)((longlong)puVar5 + uVar11 * 0x10 + 10) =

## FUN_1407a67fc */ — reconstrucao/src/decompiled_03.c:32189
reconstrucao/src/../include/ghidra_function_prototypes.h:32189:1: error: unknown type name ‘errno_t’

    32186:                         uVar8 = uVar8 - *(uint *)(lVar4 + 8);
    32187:                         uVar11 = (ulonglong)(uVar10 + 1);
    32188:                       }
    32189:                     }
    32190:                     uVar9 = uVar9 + 1;
    32191:                   }
    32192:                   *(short *)(puVar5 + 1) = (short)puVar5[1] + 8;

## FUN_1407a67fc */ — reconstrucao/src/decompiled_03.c:32192
reconstrucao/src/../include/ghidra_function_prototypes.h:32192:1: error: unknown type name ‘errno_t’

    32189:                     }
    32190:                     uVar9 = uVar9 + 1;
    32191:                   }
    32192:                   *(short *)(puVar5 + 1) = (short)puVar5[1] + 8;
    32193:                   *(short *)((longlong)puVar5 + 6U) = *(short *)((longlong)puVar5 + 6U) + 8;
    32194:                   uVar6 = 0;
    32195:                   *puVar5 = uVar10;

## FUN_1407a67fc */ — reconstrucao/src/decompiled_03.c:32196
reconstrucao/src/../include/ghidra_function_prototypes.h:32196:1: error: unknown type name ‘errno_t’

    32193:                   *(short *)((longlong)puVar5 + 6U) = *(short *)((longlong)puVar5 + 6U) + 8;
    32194:                   uVar6 = 0;
    32195:                   *puVar5 = uVar10;
    32196:                   LOCK();
    32197:                   uVar11 = *(ulonglong *)(lStack_a8 + 0x28);
    32198:                   if (uVar11 == 0) {
    32199:                     *(ulonglong *)(lStack_a8 + 0x28) = (ulonglong)puVar5;

## FUN_1407a67fc */ — reconstrucao/src/decompiled_03.c:32197
reconstrucao/src/../include/ghidra_function_prototypes.h:32197:1: error: unknown type name ‘errno_t’

    32194:                   uVar6 = 0;
    32195:                   *puVar5 = uVar10;
    32196:                   LOCK();
    32197:                   uVar11 = *(ulonglong *)(lStack_a8 + 0x28);
    32198:                   if (uVar11 == 0) {
    32199:                     *(ulonglong *)(lStack_a8 + 0x28) = (ulonglong)puVar5;
    32200:                   }

## FUN_1407a67fc */ — reconstrucao/src/decompiled_03.c:32198
reconstrucao/src/../include/ghidra_function_prototypes.h:32198:1: error: unknown type name ‘errno_t’

    32195:                   *puVar5 = uVar10;
    32196:                   LOCK();
    32197:                   uVar11 = *(ulonglong *)(lStack_a8 + 0x28);
    32198:                   if (uVar11 == 0) {
    32199:                     *(ulonglong *)(lStack_a8 + 0x28) = (ulonglong)puVar5;
    32200:                   }
    32201:                   else {

## FUN_1407a67fc */ — reconstrucao/src/decompiled_03.c:32199
reconstrucao/src/../include/ghidra_function_prototypes.h:32199:1: error: unknown type name ‘errno_t’

    32196:                   LOCK();
    32197:                   uVar11 = *(ulonglong *)(lStack_a8 + 0x28);
    32198:                   if (uVar11 == 0) {
    32199:                     *(ulonglong *)(lStack_a8 + 0x28) = (ulonglong)puVar5;
    32200:                   }
    32201:                   else {
    32202:                     uVar6 = uVar11;

## FUN_1407a67fc */ — reconstrucao/src/decompiled_03.c:32202
reconstrucao/src/../include/ghidra_function_prototypes.h:32202:53: error: unknown type name ‘_locale_t’; did you mean ‘locale_t’?

    32199:                     *(ulonglong *)(lStack_a8 + 0x28) = (ulonglong)puVar5;
    32200:                   }
    32201:                   else {
    32202:                     uVar6 = uVar11;
    32203:                   }
    32204:                   UNLOCK();
    32205:                   puVar5 = (uint *)((ulonglong)puVar5 & -(ulonglong)(uVar6 != 0));

## FUN_1407a67fc */ — reconstrucao/src/decompiled_03.c:32207
reconstrucao/src/../include/ghidra_function_prototypes.h:32207:1: error: unknown type name ‘errno_t’

    32204:                   UNLOCK();
    32205:                   puVar5 = (uint *)((ulonglong)puVar5 & -(ulonglong)(uVar6 != 0));
    32206:                 }
    32207: LAB_1407a6aee:
    32208:                 if (puVar5 != (uint *)0x0) {
    32209:                   ExFreePoolWithTag(puVar5,0x63734943);
    32210:                 }

## FUN_1407a67fc */ — reconstrucao/src/decompiled_03.c:32210
reconstrucao/src/../include/ghidra_function_prototypes.h:32210:1: error: unknown type name ‘errno_t’

    32207: LAB_1407a6aee:
    32208:                 if (puVar5 != (uint *)0x0) {
    32209:                   ExFreePoolWithTag(puVar5,0x63734943);
    32210:                 }
    32211:                 ExFreePoolWithTag(lVar4,0x63734943);
    32212:               }
    32213:             }

## FUN_1407a67fc */ — reconstrucao/src/decompiled_03.c:32212
reconstrucao/src/../include/ghidra_function_prototypes.h:32212:1: error: unknown type name ‘errno_t’

    32209:                   ExFreePoolWithTag(puVar5,0x63734943);
    32210:                 }
    32211:                 ExFreePoolWithTag(lVar4,0x63734943);
    32212:               }
    32213:             }
    32214:           }
    32215:         }

## FUN_1407a6b60 */ — reconstrucao/src/decompiled_03.c:32227
reconstrucao/src/../include/ghidra_function_prototypes.h:32227:32: error: unknown type name ‘wctype_t’

    32224: }
    32225: 
    32226: /* Ghidra label: FUN_1407a6b60 */
    32227: /* Ghidra address: 1407a6b60 */
    32228: void FUN_1407a6b60(undefined1 param_1)
    32229: 
    32230: {

## FUN_1407a6b60 */ — reconstrucao/src/decompiled_03.c:32231
reconstrucao/src/../include/ghidra_function_prototypes.h:32231:22: error: unknown type name ‘_JBTYPE’

    32228: void FUN_1407a6b60(undefined1 param_1)
    32229: 
    32230: {
    32231:   DAT_140e67e3c = param_1;
    32232:   return;
    32233: }
    32234: 

## FUN_1407a6b70 */ — reconstrucao/src/decompiled_03.c:32236
reconstrucao/src/../include/ghidra_function_prototypes.h:32236:1: error: unknown type name ‘errno_t’

    32233: }
    32234: 
    32235: /* Ghidra label: FUN_1407a6b70 */
    32236: /* Ghidra address: 1407a6b70 */
    32237: undefined8 FUN_1407a6b70(longlong param_1)
    32238: 
    32239: {

## FUN_1407a6b70 */ — reconstrucao/src/decompiled_03.c:32236
reconstrucao/src/../include/ghidra_function_prototypes.h:32236:37: error: unknown type name ‘rsize_t’; did you mean ‘size_t’?

    32233: }
    32234: 
    32235: /* Ghidra label: FUN_1407a6b70 */
    32236: /* Ghidra address: 1407a6b70 */
    32237: undefined8 FUN_1407a6b70(longlong param_1)
    32238: 
    32239: {

## FUN_1407a6b70 */ — reconstrucao/src/decompiled_03.c:32236
reconstrucao/src/../include/ghidra_function_prototypes.h:32236:65: error: unknown type name ‘rsize_t’; did you mean ‘size_t’?

    32233: }
    32234: 
    32235: /* Ghidra label: FUN_1407a6b70 */
    32236: /* Ghidra address: 1407a6b70 */
    32237: undefined8 FUN_1407a6b70(longlong param_1)
    32238: 
    32239: {

## FUN_1407a6b70 */ — reconstrucao/src/decompiled_03.c:32237
reconstrucao/src/../include/ghidra_function_prototypes.h:32237:1: error: unknown type name ‘errno_t’

    32234: 
    32235: /* Ghidra label: FUN_1407a6b70 */
    32236: /* Ghidra address: 1407a6b70 */
    32237: undefined8 FUN_1407a6b70(longlong param_1)
    32238: 
    32239: {
    32240:   undefined4 *puVar1;

## FUN_1407a6b70 */ — reconstrucao/src/decompiled_03.c:32237
reconstrucao/src/../include/ghidra_function_prototypes.h:32237:38: error: unknown type name ‘rsize_t’; did you mean ‘size_t’?

    32234: 
    32235: /* Ghidra label: FUN_1407a6b70 */
    32236: /* Ghidra address: 1407a6b70 */
    32237: undefined8 FUN_1407a6b70(longlong param_1)
    32238: 
    32239: {
    32240:   undefined4 *puVar1;

## FUN_1407a6b70 */ — reconstrucao/src/decompiled_03.c:32237
reconstrucao/src/../include/ghidra_function_prototypes.h:32237:66: error: unknown type name ‘rsize_t’; did you mean ‘size_t’?

    32234: 
    32235: /* Ghidra label: FUN_1407a6b70 */
    32236: /* Ghidra address: 1407a6b70 */
    32237: undefined8 FUN_1407a6b70(longlong param_1)
    32238: 
    32239: {
    32240:   undefined4 *puVar1;

## FUN_1407a6b70 */ — reconstrucao/src/decompiled_03.c:32247
reconstrucao/src/../include/ghidra_function_prototypes.h:32247:1: error: unknown type name ‘errno_t’

    32244:   longlong lVar5;
    32245:   undefined8 uVar6;
    32246:   longlong lVar7;
    32247:   ulonglong uVar8;
    32248:   bool bVar9;
    32249:   
    32250:   uVar6 = 0;

## FUN_1407a6b70 */ — reconstrucao/src/decompiled_03.c:32247
reconstrucao/src/../include/ghidra_function_prototypes.h:32247:37: error: unknown type name ‘rsize_t’; did you mean ‘size_t’?

    32244:   longlong lVar5;
    32245:   undefined8 uVar6;
    32246:   longlong lVar7;
    32247:   ulonglong uVar8;
    32248:   bool bVar9;
    32249:   
    32250:   uVar6 = 0;

## FUN_1407a6b70 */ — reconstrucao/src/decompiled_03.c:32251
reconstrucao/src/../include/ghidra_function_prototypes.h:32251:1: error: unknown type name ‘errno_t’

    32248:   bool bVar9;
    32249:   
    32250:   uVar6 = 0;
    32251:   FUN_1407a67fc();
    32252:   lVar2 = FUN_1402e1b60();
    32253:   uVar8 = (ulonglong)*(ushort *)(lVar2 + 0x4d0) + 0x1e;
    32254:   if ((DAT_140fc4e80 & 0x10) == 0) {

## FUN_1407a6b70 */ — reconstrucao/src/decompiled_03.c:32251
reconstrucao/src/../include/ghidra_function_prototypes.h:32251:37: error: unknown type name ‘rsize_t’; did you mean ‘size_t’?

    32248:   bool bVar9;
    32249:   
    32250:   uVar6 = 0;
    32251:   FUN_1407a67fc();
    32252:   lVar2 = FUN_1402e1b60();
    32253:   uVar8 = (ulonglong)*(ushort *)(lVar2 + 0x4d0) + 0x1e;
    32254:   if ((DAT_140fc4e80 & 0x10) == 0) {

## FUN_1407a6b70 */ — reconstrucao/src/decompiled_03.c:32254
reconstrucao/src/../include/ghidra_function_prototypes.h:32254:1: error: unknown type name ‘errno_t’

    32251:   FUN_1407a67fc();
    32252:   lVar2 = FUN_1402e1b60();
    32253:   uVar8 = (ulonglong)*(ushort *)(lVar2 + 0x4d0) + 0x1e;
    32254:   if ((DAT_140fc4e80 & 0x10) == 0) {
    32255:     uVar4 = DAT_140fc4e80 | 1;
    32256:     FUN_14053fd44(&PTR_DAT_1400df268,uVar4,3,1);
    32257:     FUN_14053fdd4(uVar4,3,&PTR_DAT_1400df268);

## FUN_1407a6b70 */ — reconstrucao/src/decompiled_03.c:32254
reconstrucao/src/../include/ghidra_function_prototypes.h:32254:38: error: unknown type name ‘rsize_t’; did you mean ‘size_t’?

    32251:   FUN_1407a67fc();
    32252:   lVar2 = FUN_1402e1b60();
    32253:   uVar8 = (ulonglong)*(ushort *)(lVar2 + 0x4d0) + 0x1e;
    32254:   if ((DAT_140fc4e80 & 0x10) == 0) {
    32255:     uVar4 = DAT_140fc4e80 | 1;
    32256:     FUN_14053fd44(&PTR_DAT_1400df268,uVar4,3,1);
    32257:     FUN_14053fdd4(uVar4,3,&PTR_DAT_1400df268);

## FUN_1407a6b70 */ — reconstrucao/src/decompiled_03.c:32254
reconstrucao/src/../include/ghidra_function_prototypes.h:32254:70: error: unknown type name ‘rsize_t’; did you mean ‘size_t’?

    32251:   FUN_1407a67fc();
    32252:   lVar2 = FUN_1402e1b60();
    32253:   uVar8 = (ulonglong)*(ushort *)(lVar2 + 0x4d0) + 0x1e;
    32254:   if ((DAT_140fc4e80 & 0x10) == 0) {
    32255:     uVar4 = DAT_140fc4e80 | 1;
    32256:     FUN_14053fd44(&PTR_DAT_1400df268,uVar4,3,1);
    32257:     FUN_14053fdd4(uVar4,3,&PTR_DAT_1400df268);

## FUN_1407a6b70 */ — reconstrucao/src/decompiled_03.c:32257
reconstrucao/src/../include/ghidra_function_prototypes.h:32257:1: error: unknown type name ‘errno_t’

    32254:   if ((DAT_140fc4e80 & 0x10) == 0) {
    32255:     uVar4 = DAT_140fc4e80 | 1;
    32256:     FUN_14053fd44(&PTR_DAT_1400df268,uVar4,3,1);
    32257:     FUN_14053fdd4(uVar4,3,&PTR_DAT_1400df268);
    32258:   }
    32259:   lVar7 = (ulonglong)*(ushort *)(lVar2 + 0x4d0) + 0x22;
    32260:   puVar3 = (undefined4 *)ExAllocatePool2(0x100,uVar8 * 2 + 0x40 + lVar7,0x63734943);

## FUN_1407a6b70 */ — reconstrucao/src/decompiled_03.c:32257
reconstrucao/src/../include/ghidra_function_prototypes.h:32257:38: error: unknown type name ‘rsize_t’; did you mean ‘size_t’?

    32254:   if ((DAT_140fc4e80 & 0x10) == 0) {
    32255:     uVar4 = DAT_140fc4e80 | 1;
    32256:     FUN_14053fd44(&PTR_DAT_1400df268,uVar4,3,1);
    32257:     FUN_14053fdd4(uVar4,3,&PTR_DAT_1400df268);
    32258:   }
    32259:   lVar7 = (ulonglong)*(ushort *)(lVar2 + 0x4d0) + 0x22;
    32260:   puVar3 = (undefined4 *)ExAllocatePool2(0x100,uVar8 * 2 + 0x40 + lVar7,0x63734943);

## FUN_1407a6b70 */ — reconstrucao/src/decompiled_03.c:32257
reconstrucao/src/../include/ghidra_function_prototypes.h:32257:70: error: unknown type name ‘rsize_t’; did you mean ‘size_t’?

    32254:   if ((DAT_140fc4e80 & 0x10) == 0) {
    32255:     uVar4 = DAT_140fc4e80 | 1;
    32256:     FUN_14053fd44(&PTR_DAT_1400df268,uVar4,3,1);
    32257:     FUN_14053fdd4(uVar4,3,&PTR_DAT_1400df268);
    32258:   }
    32259:   lVar7 = (ulonglong)*(ushort *)(lVar2 + 0x4d0) + 0x22;
    32260:   puVar3 = (undefined4 *)ExAllocatePool2(0x100,uVar8 * 2 + 0x40 + lVar7,0x63734943);

## FUN_1407a6b70 */ — reconstrucao/src/decompiled_03.c:32282
reconstrucao/src/../include/ghidra_function_prototypes.h:32282:19: error: conflicting types for ‘wcscat’; have ‘wchar_t *(wchar_t *, wchar_t *)’ {aka ‘int *(int *, int *)’}

    32279:       FUN_14053fdd4(uVar4,3,&PTR_DAT_1400df268);
    32280:     }
    32281:     lVar5 = lVar5 + (uVar8 & 0xfffffffffffffffe);
    32282:     FUN_14040d3e0(lVar5,lVar7,L"\\??\\%ws\\SystemApps\\",*(undefined8 *)(lVar2 + 0x4d8));
    32283:     RtlInitUnicodeString(puVar3 + 0xc,lVar5);
    32284:     LOCK();
    32285:     bVar9 = *(longlong *)(param_1 + 0x20) == 0;

## FUN_1407a6b70 */ — reconstrucao/src/decompiled_03.c:32283
reconstrucao/src/../include/ghidra_function_prototypes.h:32283:1: error: unknown type name ‘errno_t’

    32280:     }
    32281:     lVar5 = lVar5 + (uVar8 & 0xfffffffffffffffe);
    32282:     FUN_14040d3e0(lVar5,lVar7,L"\\??\\%ws\\SystemApps\\",*(undefined8 *)(lVar2 + 0x4d8));
    32283:     RtlInitUnicodeString(puVar3 + 0xc,lVar5);
    32284:     LOCK();
    32285:     bVar9 = *(longlong *)(param_1 + 0x20) == 0;
    32286:     if (bVar9) {

## FUN_1407a6b70 */ — reconstrucao/src/decompiled_03.c:32283
reconstrucao/src/../include/ghidra_function_prototypes.h:32283:40: error: unknown type name ‘rsize_t’; did you mean ‘size_t’?

    32280:     }
    32281:     lVar5 = lVar5 + (uVar8 & 0xfffffffffffffffe);
    32282:     FUN_14040d3e0(lVar5,lVar7,L"\\??\\%ws\\SystemApps\\",*(undefined8 *)(lVar2 + 0x4d8));
    32283:     RtlInitUnicodeString(puVar3 + 0xc,lVar5);
    32284:     LOCK();
    32285:     bVar9 = *(longlong *)(param_1 + 0x20) == 0;
    32286:     if (bVar9) {

## FUN_1407a6b70 */ — reconstrucao/src/decompiled_03.c:32284
reconstrucao/src/../include/ghidra_function_prototypes.h:32284:19: error: conflicting types for ‘wcschr’; have ‘wchar_t *(wchar_t *, wchar_t)’ {aka ‘int *(int *, int)’}

    32281:     lVar5 = lVar5 + (uVar8 & 0xfffffffffffffffe);
    32282:     FUN_14040d3e0(lVar5,lVar7,L"\\??\\%ws\\SystemApps\\",*(undefined8 *)(lVar2 + 0x4d8));
    32283:     RtlInitUnicodeString(puVar3 + 0xc,lVar5);
    32284:     LOCK();
    32285:     bVar9 = *(longlong *)(param_1 + 0x20) == 0;
    32286:     if (bVar9) {
    32287:       *(longlong *)(param_1 + 0x20) = (longlong)puVar3;

## FUN_1407a6b70 */ — reconstrucao/src/decompiled_03.c:32285
reconstrucao/src/../include/ghidra_function_prototypes.h:32285:13: error: conflicting types for ‘wcscmp’; have ‘int(wchar_t *, wchar_t *)’ {aka ‘int(int *, int *)’}

    32282:     FUN_14040d3e0(lVar5,lVar7,L"\\??\\%ws\\SystemApps\\",*(undefined8 *)(lVar2 + 0x4d8));
    32283:     RtlInitUnicodeString(puVar3 + 0xc,lVar5);
    32284:     LOCK();
    32285:     bVar9 = *(longlong *)(param_1 + 0x20) == 0;
    32286:     if (bVar9) {
    32287:       *(longlong *)(param_1 + 0x20) = (longlong)puVar3;
    32288:     }

## FUN_1407a6b70 */ — reconstrucao/src/decompiled_03.c:32286
reconstrucao/src/../include/ghidra_function_prototypes.h:32286:19: error: conflicting types for ‘wcscpy’; have ‘wchar_t *(wchar_t *, wchar_t *)’ {aka ‘int *(int *, int *)’}

    32283:     RtlInitUnicodeString(puVar3 + 0xc,lVar5);
    32284:     LOCK();
    32285:     bVar9 = *(longlong *)(param_1 + 0x20) == 0;
    32286:     if (bVar9) {
    32287:       *(longlong *)(param_1 + 0x20) = (longlong)puVar3;
    32288:     }
    32289:     UNLOCK();

## FUN_1407a6b70 */ — reconstrucao/src/decompiled_03.c:32287
reconstrucao/src/../include/ghidra_function_prototypes.h:32287:1: error: unknown type name ‘errno_t’

    32284:     LOCK();
    32285:     bVar9 = *(longlong *)(param_1 + 0x20) == 0;
    32286:     if (bVar9) {
    32287:       *(longlong *)(param_1 + 0x20) = (longlong)puVar3;
    32288:     }
    32289:     UNLOCK();
    32290:     if (!bVar9) {

## FUN_1407a6b70 */ — reconstrucao/src/decompiled_03.c:32287
reconstrucao/src/../include/ghidra_function_prototypes.h:32287:40: error: unknown type name ‘rsize_t’; did you mean ‘size_t’?

    32284:     LOCK();
    32285:     bVar9 = *(longlong *)(param_1 + 0x20) == 0;
    32286:     if (bVar9) {
    32287:       *(longlong *)(param_1 + 0x20) = (longlong)puVar3;
    32288:     }
    32289:     UNLOCK();
    32290:     if (!bVar9) {

## FUN_1407a6b70 */ — reconstrucao/src/decompiled_03.c:32288
reconstrucao/src/../include/ghidra_function_prototypes.h:32288:16: error: conflicting types for ‘wcscspn’; have ‘size_t(wchar_t *, wchar_t *)’ {aka ‘long unsigned int(int *, int *)’}

    32285:     bVar9 = *(longlong *)(param_1 + 0x20) == 0;
    32286:     if (bVar9) {
    32287:       *(longlong *)(param_1 + 0x20) = (longlong)puVar3;
    32288:     }
    32289:     UNLOCK();
    32290:     if (!bVar9) {
    32291:       ExFreePoolWithTag(puVar3,0x63734943);

## FUN_1407a6b70 */ — reconstrucao/src/decompiled_03.c:32289
reconstrucao/src/../include/ghidra_function_prototypes.h:32289:16: error: conflicting types for ‘wcslen’; have ‘size_t(wchar_t *)’ {aka ‘long unsigned int(int *)’}

    32286:     if (bVar9) {
    32287:       *(longlong *)(param_1 + 0x20) = (longlong)puVar3;
    32288:     }
    32289:     UNLOCK();
    32290:     if (!bVar9) {
    32291:       ExFreePoolWithTag(puVar3,0x63734943);
    32292:     }

## FUN_1407a6b70 */ — reconstrucao/src/decompiled_03.c:32290
reconstrucao/src/../include/ghidra_function_prototypes.h:32290:19: error: conflicting types for ‘wcsncat’; have ‘wchar_t *(wchar_t *, wchar_t *, size_t)’ {aka ‘int *(int *, int *, long unsigned int)’}

    32287:       *(longlong *)(param_1 + 0x20) = (longlong)puVar3;
    32288:     }
    32289:     UNLOCK();
    32290:     if (!bVar9) {
    32291:       ExFreePoolWithTag(puVar3,0x63734943);
    32292:     }
    32293:   }

## FUN_1407a6b70 */ — reconstrucao/src/decompiled_03.c:32291
reconstrucao/src/../include/ghidra_function_prototypes.h:32291:1: error: unknown type name ‘errno_t’

    32288:     }
    32289:     UNLOCK();
    32290:     if (!bVar9) {
    32291:       ExFreePoolWithTag(puVar3,0x63734943);
    32292:     }
    32293:   }
    32294:   return uVar6;

## FUN_1407a6b70 */ — reconstrucao/src/decompiled_03.c:32291
reconstrucao/src/../include/ghidra_function_prototypes.h:32291:41: error: unknown type name ‘rsize_t’; did you mean ‘size_t’?

    32288:     }
    32289:     UNLOCK();
    32290:     if (!bVar9) {
    32291:       ExFreePoolWithTag(puVar3,0x63734943);
    32292:     }
    32293:   }
    32294:   return uVar6;

## FUN_1407a6b70 */ — reconstrucao/src/decompiled_03.c:32291
reconstrucao/src/../include/ghidra_function_prototypes.h:32291:76: error: unknown type name ‘rsize_t’; did you mean ‘size_t’?

    32288:     }
    32289:     UNLOCK();
    32290:     if (!bVar9) {
    32291:       ExFreePoolWithTag(puVar3,0x63734943);
    32292:     }
    32293:   }
    32294:   return uVar6;

## FUN_1407a6b70 */ — reconstrucao/src/decompiled_03.c:32292
reconstrucao/src/../include/ghidra_function_prototypes.h:32292:13: error: conflicting types for ‘wcsncmp’; have ‘int(wchar_t *, wchar_t *, size_t)’ {aka ‘int(int *, int *, long unsigned int)’}

    32289:     UNLOCK();
    32290:     if (!bVar9) {
    32291:       ExFreePoolWithTag(puVar3,0x63734943);
    32292:     }
    32293:   }
    32294:   return uVar6;
    32295: }

## FUN_1407a6b70 */ — reconstrucao/src/decompiled_03.c:32293
reconstrucao/src/../include/ghidra_function_prototypes.h:32293:19: error: conflicting types for ‘wcsncpy’; have ‘wchar_t *(wchar_t *, wchar_t *, size_t)’ {aka ‘int *(int *, int *, long unsigned int)’}

    32290:     if (!bVar9) {
    32291:       ExFreePoolWithTag(puVar3,0x63734943);
    32292:     }
    32293:   }
    32294:   return uVar6;
    32295: }
    32296: 

## FUN_1407a6b70 */ — reconstrucao/src/decompiled_03.c:32294
reconstrucao/src/../include/ghidra_function_prototypes.h:32294:1: error: unknown type name ‘errno_t’

    32291:       ExFreePoolWithTag(puVar3,0x63734943);
    32292:     }
    32293:   }
    32294:   return uVar6;
    32295: }
    32296: 
    32297: /* Ghidra label: FUN_1407a6d5c */

## FUN_1407a6b70 */ — reconstrucao/src/decompiled_03.c:32294
reconstrucao/src/../include/ghidra_function_prototypes.h:32294:41: error: unknown type name ‘rsize_t’; did you mean ‘size_t’?

    32291:       ExFreePoolWithTag(puVar3,0x63734943);
    32292:     }
    32293:   }
    32294:   return uVar6;
    32295: }
    32296: 
    32297: /* Ghidra label: FUN_1407a6d5c */

## FUN_1407a6b70 */ — reconstrucao/src/decompiled_03.c:32294
reconstrucao/src/../include/ghidra_function_prototypes.h:32294:76: error: unknown type name ‘rsize_t’; did you mean ‘size_t’?

    32291:       ExFreePoolWithTag(puVar3,0x63734943);
    32292:     }
    32293:   }
    32294:   return uVar6;
    32295: }
    32296: 
    32297: /* Ghidra label: FUN_1407a6d5c */

## FUN_1407a6b70 */ — reconstrucao/src/decompiled_03.c:32295
reconstrucao/src/../include/ghidra_function_prototypes.h:32295:16: error: conflicting types for ‘wcsnlen’; have ‘size_t(wchar_t *, size_t)’ {aka ‘long unsigned int(int *, long unsigned int)’}

    32292:     }
    32293:   }
    32294:   return uVar6;
    32295: }
    32296: 
    32297: /* Ghidra label: FUN_1407a6d5c */
    32298: /* Ghidra address: 1407a6d5c */

## FUN_1407a6b70 */ — reconstrucao/src/decompiled_03.c:32296
reconstrucao/src/../include/ghidra_function_prototypes.h:32296:19: error: conflicting types for ‘wcsrchr’; have ‘wchar_t *(wchar_t *, wchar_t)’ {aka ‘int *(int *, int)’}

    32293:   }
    32294:   return uVar6;
    32295: }
    32296: 
    32297: /* Ghidra label: FUN_1407a6d5c */
    32298: /* Ghidra address: 1407a6d5c */
    32299: void FUN_1407a6d5c(char param_1,char param_2,char *param_3,char *param_4)

## FUN_1407a6b70 */ — reconstrucao/src/decompiled_03.c:32297
reconstrucao/src/../include/ghidra_function_prototypes.h:32297:16: error: conflicting types for ‘wcsspn’; have ‘size_t(wchar_t *, wchar_t *)’ {aka ‘long unsigned int(int *, int *)’}

    32294:   return uVar6;
    32295: }
    32296: 
    32297: /* Ghidra label: FUN_1407a6d5c */
    32298: /* Ghidra address: 1407a6d5c */
    32299: void FUN_1407a6d5c(char param_1,char param_2,char *param_3,char *param_4)
    32300: 

## FUN_1407a6d5c */ — reconstrucao/src/decompiled_03.c:32298
reconstrucao/src/../include/ghidra_function_prototypes.h:32298:19: error: conflicting types for ‘wcsstr’; have ‘wchar_t *(wchar_t *, wchar_t *)’ {aka ‘int *(int *, int *)’}

    32295: }
    32296: 
    32297: /* Ghidra label: FUN_1407a6d5c */
    32298: /* Ghidra address: 1407a6d5c */
    32299: void FUN_1407a6d5c(char param_1,char param_2,char *param_3,char *param_4)
    32300: 
    32301: {

## FUN_1407a6d5c */ — reconstrucao/src/decompiled_03.c:32300
reconstrucao/src/../include/ghidra_function_prototypes.h:32300:18: error: conflicting types for ‘wcstoul’; have ‘uint32_t(wchar_t *, wchar_t **, int)’ {aka ‘unsigned int(int *, int **, int)’}

    32297: /* Ghidra label: FUN_1407a6d5c */
    32298: /* Ghidra address: 1407a6d5c */
    32299: void FUN_1407a6d5c(char param_1,char param_2,char *param_3,char *param_4)
    32300: 
    32301: {
    32302:   int iVar1;
    32303:   bool bVar2;

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

## FUN_140ad6940 */ — reconstrucao/src/decompiled_04.c:15865
reconstrucao/src/../include/ghidra_function_prototypes.h:15865:26: error: unknown type name ‘PCONTEXT’

    15862:     pvStack_48 = _Dst;
    15863:     if (_Dst == (void *)0x0) {
    15864:       iVar3 = -0x3fffff66;
    15865:       goto LAB_140ad6b43;
    15866:     }
    15867:     if ((_Size != 0) && ((*(ulonglong *)(param_1 + 0x10) & 7) != 0)) {
    15868:                     /* WARNING: Subroutine does not return */

## FUN_140ad6940 */ — reconstrucao/src/decompiled_04.c:15865
reconstrucao/src/../include/ghidra_function_prototypes.h:15865:43: error: unknown type name ‘PCONTEXT’

    15862:     pvStack_48 = _Dst;
    15863:     if (_Dst == (void *)0x0) {
    15864:       iVar3 = -0x3fffff66;
    15865:       goto LAB_140ad6b43;
    15866:     }
    15867:     if ((_Size != 0) && ((*(ulonglong *)(param_1 + 0x10) & 7) != 0)) {
    15868:                     /* WARNING: Subroutine does not return */

## FUN_140ad6940 */ — reconstrucao/src/decompiled_04.c:15865
reconstrucao/src/../include/ghidra_function_prototypes.h:15865:60: error: unknown type name ‘PCONTEXT’

    15862:     pvStack_48 = _Dst;
    15863:     if (_Dst == (void *)0x0) {
    15864:       iVar3 = -0x3fffff66;
    15865:       goto LAB_140ad6b43;
    15866:     }
    15867:     if ((_Size != 0) && ((*(ulonglong *)(param_1 + 0x10) & 7) != 0)) {
    15868:                     /* WARNING: Subroutine does not return */

## FUN_140ada5c8 */ — reconstrucao/src/decompiled_04.c:18857
reconstrucao/src/../include/ghidra_function_prototypes.h:18857:59: error: unknown type name ‘ULONGLONG’

    18854:   uint *puVar13;
    18855:   int *piVar14;
    18856:   uint *puVar15;
    18857:   uint uVar16;
    18858:   int *piVar17;
    18859:   int aiStackX_18 [4];
    18860:   void *pvStack_50;

## FUN_140ade634 */ — reconstrucao/src/decompiled_04.c:22298
reconstrucao/src/../include/ghidra_function_prototypes.h:22298:1: error: unknown type name ‘BADSPACEBASE’

    22295:     puVar1 = *(undefined8 **)(param_1 + 0x20);
    22296:     while (puVar5 = puVar1, puVar5 != (undefined8 *)(param_1 + 0x20)) {
    22297:       puVar1 = (undefined8 *)*puVar5;
    22298:       if (*(char *)(puVar5 + 7) == '\0') {
    22299:         puVar6 = (undefined8 *)puVar5[5];
    22300:         while (puVar6 != puVar5 + 5) {
    22301:           puVar2 = (undefined8 *)*puVar6;

## FUN_140ae3d7c */ — reconstrucao/src/decompiled_04.c:26577
reconstrucao/src/../include/ghidra_function_prototypes.h:26577:51: error: unknown type name ‘IMAGE_DOS_HEADER’

    26574:   return;
    26575: }
    26576: 
    26577: /* Ghidra label: FUN_140ae3e00 */
    26578: /* Ghidra address: 140ae3e00 */
    26579: int FUN_140ae3e00(void)
    26580: 

## FUN_140ae7108 */ — reconstrucao/src/decompiled_04.c:29003
reconstrucao/src/../include/ghidra_function_prototypes.h:29003:1: error: unknown type name ‘BADSPACEBASE’

    29000:     plVar11 = *(longlong **)(param_1 + 8);
    29001:     if (*plVar11 != param_1) {
    29002:       pcVar4 = (code *)swi(0x29);
    29003:       plVar11 = (longlong *)(*pcVar4)(3);
    29004:       puVar13 = auStack_40;
    29005:     }
    29006:     *plVar8 = param_1;

## FUN_140ae97f0 */ — reconstrucao/src/decompiled_04.c:30712
reconstrucao/src/../include/ghidra_function_prototypes.h:30712:1: error: unknown type name ‘NTSTATUS’

    30709:   undefined1 auStack_218 [32];
    30710:   undefined4 uStack_1f8;
    30711:   undefined1 *puStack_1f0;
    30712:   uint uStack_1e8;
    30713:   uint uStack_1e4;
    30714:   uint uStack_1e0;
    30715:   uint uStack_1dc;

## FUN_140ae97f0 */ — reconstrucao/src/decompiled_04.c:30712
reconstrucao/src/../include/ghidra_function_prototypes.h:30712:46: error: unknown type name ‘HANDLE’

    30709:   undefined1 auStack_218 [32];
    30710:   undefined4 uStack_1f8;
    30711:   undefined1 *puStack_1f0;
    30712:   uint uStack_1e8;
    30713:   uint uStack_1e4;
    30714:   uint uStack_1e0;
    30715:   uint uStack_1dc;

## FUN_140ae97f0 */ — reconstrucao/src/decompiled_04.c:30713
reconstrucao/src/../include/ghidra_function_prototypes.h:30713:1: error: unknown type name ‘NTSTATUS’

    30710:   undefined4 uStack_1f8;
    30711:   undefined1 *puStack_1f0;
    30712:   uint uStack_1e8;
    30713:   uint uStack_1e4;
    30714:   uint uStack_1e0;
    30715:   uint uStack_1dc;
    30716:   uint uStack_1d8;

## FUN_140aea7c0 */ — reconstrucao/src/decompiled_04.c:31569
reconstrucao/src/../include/ghidra_function_prototypes.h:31569:32: error: unknown type name ‘PCONTEXT’

    31566:           if ((*(uint *)((longlong)puVar13 + 100) & 2) != 0) {
    31567:             iVar7 = FUN_140a9f9b0(puVar24,0);
    31568:           }
    31569:           *(int *)(puVar13 + 0x12) = iVar7;
    31570:           iStack_4d8 = 0;
    31571:           if (iVar7 != -1) {
    31572:             iStack_4d8 = iVar7;

## FUN_140aea7c0 */ — reconstrucao/src/decompiled_04.c:31569
reconstrucao/src/../include/ghidra_function_prototypes.h:31569:55: error: unknown type name ‘_EXCEPTION_RECORD’

    31566:           if ((*(uint *)((longlong)puVar13 + 100) & 2) != 0) {
    31567:             iVar7 = FUN_140a9f9b0(puVar24,0);
    31568:           }
    31569:           *(int *)(puVar13 + 0x12) = iVar7;
    31570:           iStack_4d8 = 0;
    31571:           if (iVar7 != -1) {
    31572:             iStack_4d8 = iVar7;

## FUN_140aea7c0 */ — reconstrucao/src/decompiled_04.c:32166
reconstrucao/src/../include/ghidra_function_prototypes.h:32166:1: error: unknown type name ‘errno_t’

    32163:         puStack_258 = puVar22 + 0x68;
    32164:         uStack_250 = 4;
    32165:         if (DAT_140f0c5a0 == 0) {
    32166:           uVar15 = uVar14;
    32167:         }
    32168:         else {
    32169:           uVar15 = ((ulonglong)DAT_140f0c564 * 100000) / (ulonglong)DAT_140f0c5a0;

## FUN_140aea7c0 */ — reconstrucao/src/decompiled_04.c:32167
reconstrucao/src/../include/ghidra_function_prototypes.h:32167:1: error: unknown type name ‘errno_t’

    32164:         uStack_250 = 4;
    32165:         if (DAT_140f0c5a0 == 0) {
    32166:           uVar15 = uVar14;
    32167:         }
    32168:         else {
    32169:           uVar15 = ((ulonglong)DAT_140f0c564 * 100000) / (ulonglong)DAT_140f0c5a0;
    32170:         }

## FUN_140aea7c0 */ — reconstrucao/src/decompiled_04.c:32170
reconstrucao/src/../include/ghidra_function_prototypes.h:32170:1: error: unknown type name ‘errno_t’

    32167:         }
    32168:         else {
    32169:           uVar15 = ((ulonglong)DAT_140f0c564 * 100000) / (ulonglong)DAT_140f0c5a0;
    32170:         }
    32171:         pcVar20 = "Relative Capacity Unit";
    32172:         *(int *)(puVar22 + 0x5c) = (int)uVar15;
    32173:         puStack_248 = (ulonglong *)(puVar22 + 0x5c);

## FUN_140aea7c0 */ — reconstrucao/src/decompiled_04.c:32172
reconstrucao/src/../include/ghidra_function_prototypes.h:32172:1: error: unknown type name ‘errno_t’

    32169:           uVar15 = ((ulonglong)DAT_140f0c564 * 100000) / (ulonglong)DAT_140f0c5a0;
    32170:         }
    32171:         pcVar20 = "Relative Capacity Unit";
    32172:         *(int *)(puVar22 + 0x5c) = (int)uVar15;
    32173:         puStack_248 = (ulonglong *)(puVar22 + 0x5c);
    32174:         uStack_240 = 4;
    32175:         uStack_474 = DAT_140f0c564;

## FUN_140aea7c0 */ — reconstrucao/src/decompiled_04.c:32177
reconstrucao/src/../include/ghidra_function_prototypes.h:32177:21: error: unknown type name ‘_JBTYPE’

    32174:         uStack_240 = 4;
    32175:         uStack_474 = DAT_140f0c564;
    32176:         puStack_238 = &uStack_474;
    32177:         puStack_228 = &uStack_470;
    32178:         uStack_484 = DAT_140f0c568;
    32179:         puStack_218 = &uStack_484;
    32180:         uStack_480 = DAT_140f0c56c;

## FUN_140aea7c0 */ — reconstrucao/src/decompiled_04.c:32189
reconstrucao/src/../include/ghidra_function_prototypes.h:32189:1: error: unknown type name ‘errno_t’

    32186:           pcVar20 = "mWh Unit";
    32187:         }
    32188:         uStack_230 = 4;
    32189:         uStack_470 = DAT_140f0c5a0;
    32190:         uStack_220 = 4;
    32191:         uStack_210 = 4;
    32192:         uStack_200 = 4;

## FUN_140aea7c0 */ — reconstrucao/src/decompiled_04.c:32192
reconstrucao/src/../include/ghidra_function_prototypes.h:32192:1: error: unknown type name ‘errno_t’

    32189:         uStack_470 = DAT_140f0c5a0;
    32190:         uStack_220 = 4;
    32191:         uStack_210 = 4;
    32192:         uStack_200 = 4;
    32193:         uStack_1f0 = 4;
    32194:         uStack_1e0 = 4;
    32195:         *(undefined8 *)(puVar22 + -8) = 0x140aebb4e;

## FUN_140aea7c0 */ — reconstrucao/src/decompiled_04.c:32196
reconstrucao/src/../include/ghidra_function_prototypes.h:32196:1: error: unknown type name ‘errno_t’

    32193:         uStack_1f0 = 4;
    32194:         uStack_1e0 = 4;
    32195:         *(undefined8 *)(puVar22 + -8) = 0x140aebb4e;
    32196:         uStack_478 = uVar17;
    32197:         FUN_14043d694(&puStack_1d8,pcVar20);
    32198:         puStack_1c8 = &uStack_490;
    32199:         puVar21 = &DAT_14004e058;

## FUN_140aea7c0 */ — reconstrucao/src/decompiled_04.c:32197
reconstrucao/src/../include/ghidra_function_prototypes.h:32197:1: error: unknown type name ‘errno_t’

    32194:         uStack_1e0 = 4;
    32195:         *(undefined8 *)(puVar22 + -8) = 0x140aebb4e;
    32196:         uStack_478 = uVar17;
    32197:         FUN_14043d694(&puStack_1d8,pcVar20);
    32198:         puStack_1c8 = &uStack_490;
    32199:         puVar21 = &DAT_14004e058;
    32200:         puStack_1b8 = puVar22 + 0x78;

## FUN_140aea7c0 */ — reconstrucao/src/decompiled_04.c:32198
reconstrucao/src/../include/ghidra_function_prototypes.h:32198:1: error: unknown type name ‘errno_t’

    32195:         *(undefined8 *)(puVar22 + -8) = 0x140aebb4e;
    32196:         uStack_478 = uVar17;
    32197:         FUN_14043d694(&puStack_1d8,pcVar20);
    32198:         puStack_1c8 = &uStack_490;
    32199:         puVar21 = &DAT_14004e058;
    32200:         puStack_1b8 = puVar22 + 0x78;
    32201:         uStack_490 = CONCAT44(uStack_490._4_4_,DAT_140f0c59c);

## FUN_140aea7c0 */ — reconstrucao/src/decompiled_04.c:32199
reconstrucao/src/../include/ghidra_function_prototypes.h:32199:1: error: unknown type name ‘errno_t’

    32196:         uStack_478 = uVar17;
    32197:         FUN_14043d694(&puStack_1d8,pcVar20);
    32198:         puStack_1c8 = &uStack_490;
    32199:         puVar21 = &DAT_14004e058;
    32200:         puStack_1b8 = puVar22 + 0x78;
    32201:         uStack_490 = CONCAT44(uStack_490._4_4_,DAT_140f0c59c);
    32202:         *(undefined1 **)(puVar22 + 0x28) = auStack_318;

## FUN_140aea7c0 */ — reconstrucao/src/decompiled_04.c:32202
reconstrucao/src/../include/ghidra_function_prototypes.h:32202:53: error: unknown type name ‘_locale_t’; did you mean ‘locale_t’?

    32199:         puVar21 = &DAT_14004e058;
    32200:         puStack_1b8 = puVar22 + 0x78;
    32201:         uStack_490 = CONCAT44(uStack_490._4_4_,DAT_140f0c59c);
    32202:         *(undefined1 **)(puVar22 + 0x28) = auStack_318;
    32203:         *(undefined4 *)(puVar22 + 0x20) = 0x17;
    32204:         uStack_1c0 = 4;
    32205:         *(undefined4 *)(puVar22 + 0x78) = uVar11;

## FUN_140aea7c0 */ — reconstrucao/src/decompiled_04.c:32207
reconstrucao/src/../include/ghidra_function_prototypes.h:32207:1: error: unknown type name ‘errno_t’

    32204:         uStack_1c0 = 4;
    32205:         *(undefined4 *)(puVar22 + 0x78) = uVar11;
    32206:         goto LAB_140aebead;
    32207:       }
    32208:     }
    32209:   }
    32210:   else if (5 < DAT_140e07748) {

## FUN_140aea7c0 */ — reconstrucao/src/decompiled_04.c:32210
reconstrucao/src/../include/ghidra_function_prototypes.h:32210:1: error: unknown type name ‘errno_t’

    32207:       }
    32208:     }
    32209:   }
    32210:   else if (5 < DAT_140e07748) {
    32211:     *(undefined8 *)(puVar22 + -8) = 0x140aebbc0;
    32212:     cVar5 = FUN_14042b0b0(&DAT_140e07748,0x400000000000);
    32213:     if (cVar5 != '\0') {

## FUN_140aea7c0 */ — reconstrucao/src/decompiled_04.c:32212
reconstrucao/src/../include/ghidra_function_prototypes.h:32212:1: error: unknown type name ‘errno_t’

    32209:   }
    32210:   else if (5 < DAT_140e07748) {
    32211:     *(undefined8 *)(puVar22 + -8) = 0x140aebbc0;
    32212:     cVar5 = FUN_14042b0b0(&DAT_140e07748,0x400000000000);
    32213:     if (cVar5 != '\0') {
    32214:       uVar15 = (ulonglong)DAT_140f0c560;
    32215:       puStack_2f8 = puVar22 + 0x78;

## FUN_140aea7c0 */ — reconstrucao/src/decompiled_04.c:32227
reconstrucao/src/../include/ghidra_function_prototypes.h:32227:32: error: unknown type name ‘wctype_t’

    32224:       FUN_14043d694(auStack_2e8,pcVar20);
    32225:       pcVar20 = "Battery Discharging";
    32226:       pcVar28 = "-";
    32227:       if ((uVar15 & 2) == 0) {
    32228:         pcVar20 = "-";
    32229:       }
    32230:       *(undefined8 *)(puVar22 + -8) = 0x140aebc35;

## FUN_140aea7c0 */ — reconstrucao/src/decompiled_04.c:32231
reconstrucao/src/../include/ghidra_function_prototypes.h:32231:22: error: unknown type name ‘_JBTYPE’

    32228:         pcVar20 = "-";
    32229:       }
    32230:       *(undefined8 *)(puVar22 + -8) = 0x140aebc35;
    32231:       FUN_14043d694(auStack_2d8,pcVar20);
    32232:       pcVar20 = "Battery Charging";
    32233:       if ((bVar16 & (byte)uVar15) == 0) {
    32234:         pcVar20 = pcVar28;

## FUN_140aea7c0 */ — reconstrucao/src/decompiled_04.c:32236
reconstrucao/src/../include/ghidra_function_prototypes.h:32236:1: error: unknown type name ‘errno_t’

    32233:       if ((bVar16 & (byte)uVar15) == 0) {
    32234:         pcVar20 = pcVar28;
    32235:       }
    32236:       *(undefined8 *)(puVar22 + -8) = 0x140aebc4f;
    32237:       FUN_14043d694(auStack_2c8,pcVar20);
    32238:       pcVar20 = "Battery Critical";
    32239:       if ((uVar15 & 8) == 0) {

## FUN_140aea7c0 */ — reconstrucao/src/decompiled_04.c:32236
reconstrucao/src/../include/ghidra_function_prototypes.h:32236:37: error: unknown type name ‘rsize_t’; did you mean ‘size_t’?

    32233:       if ((bVar16 & (byte)uVar15) == 0) {
    32234:         pcVar20 = pcVar28;
    32235:       }
    32236:       *(undefined8 *)(puVar22 + -8) = 0x140aebc4f;
    32237:       FUN_14043d694(auStack_2c8,pcVar20);
    32238:       pcVar20 = "Battery Critical";
    32239:       if ((uVar15 & 8) == 0) {

## FUN_140aea7c0 */ — reconstrucao/src/decompiled_04.c:32236
reconstrucao/src/../include/ghidra_function_prototypes.h:32236:65: error: unknown type name ‘rsize_t’; did you mean ‘size_t’?

    32233:       if ((bVar16 & (byte)uVar15) == 0) {
    32234:         pcVar20 = pcVar28;
    32235:       }
    32236:       *(undefined8 *)(puVar22 + -8) = 0x140aebc4f;
    32237:       FUN_14043d694(auStack_2c8,pcVar20);
    32238:       pcVar20 = "Battery Critical";
    32239:       if ((uVar15 & 8) == 0) {

## FUN_140aea7c0 */ — reconstrucao/src/decompiled_04.c:32237
reconstrucao/src/../include/ghidra_function_prototypes.h:32237:1: error: unknown type name ‘errno_t’

    32234:         pcVar20 = pcVar28;
    32235:       }
    32236:       *(undefined8 *)(puVar22 + -8) = 0x140aebc4f;
    32237:       FUN_14043d694(auStack_2c8,pcVar20);
    32238:       pcVar20 = "Battery Critical";
    32239:       if ((uVar15 & 8) == 0) {
    32240:         pcVar20 = pcVar28;

## FUN_140aea7c0 */ — reconstrucao/src/decompiled_04.c:32237
reconstrucao/src/../include/ghidra_function_prototypes.h:32237:38: error: unknown type name ‘rsize_t’; did you mean ‘size_t’?

    32234:         pcVar20 = pcVar28;
    32235:       }
    32236:       *(undefined8 *)(puVar22 + -8) = 0x140aebc4f;
    32237:       FUN_14043d694(auStack_2c8,pcVar20);
    32238:       pcVar20 = "Battery Critical";
    32239:       if ((uVar15 & 8) == 0) {
    32240:         pcVar20 = pcVar28;

## FUN_140aea7c0 */ — reconstrucao/src/decompiled_04.c:32237
reconstrucao/src/../include/ghidra_function_prototypes.h:32237:66: error: unknown type name ‘rsize_t’; did you mean ‘size_t’?

    32234:         pcVar20 = pcVar28;
    32235:       }
    32236:       *(undefined8 *)(puVar22 + -8) = 0x140aebc4f;
    32237:       FUN_14043d694(auStack_2c8,pcVar20);
    32238:       pcVar20 = "Battery Critical";
    32239:       if ((uVar15 & 8) == 0) {
    32240:         pcVar20 = pcVar28;

## FUN_140aea7c0 */ — reconstrucao/src/decompiled_04.c:32247
reconstrucao/src/../include/ghidra_function_prototypes.h:32247:1: error: unknown type name ‘errno_t’

    32244:       pcVar20 = "Battery charge limiting mode";
    32245:       if ((uVar15 & 0x10) == 0) {
    32246:         pcVar20 = pcVar28;
    32247:       }
    32248:       *(undefined8 *)(puVar22 + -8) = 0x140aebc88;
    32249:       FUN_14043d694(auStack_2a8,pcVar20);
    32250:       pcVar20 = "Battery charging state power supply present";

## FUN_140aea7c0 */ — reconstrucao/src/decompiled_04.c:32247
reconstrucao/src/../include/ghidra_function_prototypes.h:32247:37: error: unknown type name ‘rsize_t’; did you mean ‘size_t’?

    32244:       pcVar20 = "Battery charge limiting mode";
    32245:       if ((uVar15 & 0x10) == 0) {
    32246:         pcVar20 = pcVar28;
    32247:       }
    32248:       *(undefined8 *)(puVar22 + -8) = 0x140aebc88;
    32249:       FUN_14043d694(auStack_2a8,pcVar20);
    32250:       pcVar20 = "Battery charging state power supply present";

## FUN_140aea7c0 */ — reconstrucao/src/decompiled_04.c:32251
reconstrucao/src/../include/ghidra_function_prototypes.h:32251:1: error: unknown type name ‘errno_t’

    32248:       *(undefined8 *)(puVar22 + -8) = 0x140aebc88;
    32249:       FUN_14043d694(auStack_2a8,pcVar20);
    32250:       pcVar20 = "Battery charging state power supply present";
    32251:       if ((uVar15 & 0x20) == 0) {
    32252:         pcVar20 = pcVar28;
    32253:       }
    32254:       *(undefined8 *)(puVar22 + -8) = 0x140aebca3;

## FUN_140aea7c0 */ — reconstrucao/src/decompiled_04.c:32251
reconstrucao/src/../include/ghidra_function_prototypes.h:32251:37: error: unknown type name ‘rsize_t’; did you mean ‘size_t’?

    32248:       *(undefined8 *)(puVar22 + -8) = 0x140aebc88;
    32249:       FUN_14043d694(auStack_2a8,pcVar20);
    32250:       pcVar20 = "Battery charging state power supply present";
    32251:       if ((uVar15 & 0x20) == 0) {
    32252:         pcVar20 = pcVar28;
    32253:       }
    32254:       *(undefined8 *)(puVar22 + -8) = 0x140aebca3;

## FUN_140aea7c0 */ — reconstrucao/src/decompiled_04.c:32254
reconstrucao/src/../include/ghidra_function_prototypes.h:32254:1: error: unknown type name ‘errno_t’

    32251:       if ((uVar15 & 0x20) == 0) {
    32252:         pcVar20 = pcVar28;
    32253:       }
    32254:       *(undefined8 *)(puVar22 + -8) = 0x140aebca3;
    32255:       FUN_14043d694(auStack_298,pcVar20);
    32256:       pcVar20 = "Battery charging state adequate";
    32257:       if ((uVar15 & 0x40) == 0) {

