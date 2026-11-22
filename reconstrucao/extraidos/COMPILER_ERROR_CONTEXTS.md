# Contextos dos primeiros erros de compilação

Cada erro está associado ao marcador de função Ghidra mais próximo. O contexto serve para reconstrução orientada por evidência.

## FUN_140200008 */ — reconstrucao/src/decompiled_01.c:8
reconstrucao/src/../include/ghidra_function_prototypes.h:8:1: error: unknown type name ‘NTSTATUS’

    5: 
    6: /* Ghidra label: FUN_140200008 */
    7: /* Ghidra address: 140200008 */
    8: void FUN_140200008(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
    9:                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
    10:                   undefined8 *param_9,undefined8 *param_10,undefined8 param_11,undefined8 param_12,
    11:                   undefined8 *param_13,undefined8 param_14,undefined8 param_15,undefined8 *param_16,

## FUN_140200008 */ — reconstrucao/src/decompiled_01.c:8
reconstrucao/src/../include/ghidra_function_prototypes.h:8:46: error: unknown type name ‘HANDLE’

    5: 
    6: /* Ghidra label: FUN_140200008 */
    7: /* Ghidra address: 140200008 */
    8: void FUN_140200008(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
    9:                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
    10:                   undefined8 *param_9,undefined8 *param_10,undefined8 param_11,undefined8 param_12,
    11:                   undefined8 *param_13,undefined8 param_14,undefined8 param_15,undefined8 *param_16,

## FUN_140200008 */ — reconstrucao/src/decompiled_01.c:9
reconstrucao/src/../include/ghidra_function_prototypes.h:9:1: error: unknown type name ‘NTSTATUS’

    6: /* Ghidra label: FUN_140200008 */
    7: /* Ghidra address: 140200008 */
    8: void FUN_140200008(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
    9:                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
    10:                   undefined8 *param_9,undefined8 *param_10,undefined8 param_11,undefined8 param_12,
    11:                   undefined8 *param_13,undefined8 param_14,undefined8 param_15,undefined8 *param_16,
    12:                   undefined8 param_17,undefined8 param_18,undefined8 *param_19,undefined8 param_20,

## FUN_140201708 */ — reconstrucao/src/decompiled_01.c:1112
reconstrucao/src/../include/ghidra_function_prototypes.h:1112:1: error: unknown type name ‘errno_t’

    1109:   undefined1 uVar1;
    1110:   uint uVar2;
    1111:   ulonglong uVar3;
    1112:   
    1113:   uVar3 = 0;
    1114:   if (DAT_140fc7ad0 != (uint *)0x0) {
    1115:     uVar1 = KeAcquireSpinLockRaiseToDpc(&DAT_140f0cf28);

## FUN_140201708 */ — reconstrucao/src/decompiled_01.c:1113
reconstrucao/src/../include/ghidra_function_prototypes.h:1113:1: error: unknown type name ‘errno_t’

    1110:   uint uVar2;
    1111:   ulonglong uVar3;
    1112:   
    1113:   uVar3 = 0;
    1114:   if (DAT_140fc7ad0 != (uint *)0x0) {
    1115:     uVar1 = KeAcquireSpinLockRaiseToDpc(&DAT_140f0cf28);
    1116:     if (*DAT_140fc7ad0 != 0) {

## FUN_140201708 */ — reconstrucao/src/decompiled_01.c:1114
reconstrucao/src/../include/ghidra_function_prototypes.h:1114:1: error: unknown type name ‘errno_t’

    1111:   ulonglong uVar3;
    1112:   
    1113:   uVar3 = 0;
    1114:   if (DAT_140fc7ad0 != (uint *)0x0) {
    1115:     uVar1 = KeAcquireSpinLockRaiseToDpc(&DAT_140f0cf28);
    1116:     if (*DAT_140fc7ad0 != 0) {
    1117:       do {

## FUN_140201708 */ — reconstrucao/src/decompiled_01.c:1115
reconstrucao/src/../include/ghidra_function_prototypes.h:1115:1: error: unknown type name ‘errno_t’

    1112:   
    1113:   uVar3 = 0;
    1114:   if (DAT_140fc7ad0 != (uint *)0x0) {
    1115:     uVar1 = KeAcquireSpinLockRaiseToDpc(&DAT_140f0cf28);
    1116:     if (*DAT_140fc7ad0 != 0) {
    1117:       do {
    1118:         FUN_140201790(DAT_140fc7ad0 + uVar3 * 0x70 + 0x14,CONCAT71((int7)(uVar3 >> 8),2),

## FUN_140201708 */ — reconstrucao/src/decompiled_01.c:1116
reconstrucao/src/../include/ghidra_function_prototypes.h:1116:1: error: unknown type name ‘errno_t’

    1113:   uVar3 = 0;
    1114:   if (DAT_140fc7ad0 != (uint *)0x0) {
    1115:     uVar1 = KeAcquireSpinLockRaiseToDpc(&DAT_140f0cf28);
    1116:     if (*DAT_140fc7ad0 != 0) {
    1117:       do {
    1118:         FUN_140201790(DAT_140fc7ad0 + uVar3 * 0x70 + 0x14,CONCAT71((int7)(uVar3 >> 8),2),
    1119:                       CONCAT71((int7)(uVar3 * 0x1c0 >> 8),param_1));

## FUN_140201708 */ — reconstrucao/src/decompiled_01.c:1117
reconstrucao/src/../include/ghidra_function_prototypes.h:1117:1: error: unknown type name ‘errno_t’

    1114:   if (DAT_140fc7ad0 != (uint *)0x0) {
    1115:     uVar1 = KeAcquireSpinLockRaiseToDpc(&DAT_140f0cf28);
    1116:     if (*DAT_140fc7ad0 != 0) {
    1117:       do {
    1118:         FUN_140201790(DAT_140fc7ad0 + uVar3 * 0x70 + 0x14,CONCAT71((int7)(uVar3 >> 8),2),
    1119:                       CONCAT71((int7)(uVar3 * 0x1c0 >> 8),param_1));
    1120:         uVar2 = (int)uVar3 + 1;

## FUN_140201708 */ — reconstrucao/src/decompiled_01.c:1118
reconstrucao/src/../include/ghidra_function_prototypes.h:1118:1: error: unknown type name ‘errno_t’

    1115:     uVar1 = KeAcquireSpinLockRaiseToDpc(&DAT_140f0cf28);
    1116:     if (*DAT_140fc7ad0 != 0) {
    1117:       do {
    1118:         FUN_140201790(DAT_140fc7ad0 + uVar3 * 0x70 + 0x14,CONCAT71((int7)(uVar3 >> 8),2),
    1119:                       CONCAT71((int7)(uVar3 * 0x1c0 >> 8),param_1));
    1120:         uVar2 = (int)uVar3 + 1;
    1121:         uVar3 = (ulonglong)uVar2;

## FUN_140201708 */ — reconstrucao/src/decompiled_01.c:1119
reconstrucao/src/../include/ghidra_function_prototypes.h:1119:1: error: unknown type name ‘errno_t’

    1116:     if (*DAT_140fc7ad0 != 0) {
    1117:       do {
    1118:         FUN_140201790(DAT_140fc7ad0 + uVar3 * 0x70 + 0x14,CONCAT71((int7)(uVar3 >> 8),2),
    1119:                       CONCAT71((int7)(uVar3 * 0x1c0 >> 8),param_1));
    1120:         uVar2 = (int)uVar3 + 1;
    1121:         uVar3 = (ulonglong)uVar2;
    1122:       } while (uVar2 < *DAT_140fc7ad0);

## FUN_140201708 */ — reconstrucao/src/decompiled_01.c:1120
reconstrucao/src/../include/ghidra_function_prototypes.h:1120:1: error: unknown type name ‘errno_t’

    1117:       do {
    1118:         FUN_140201790(DAT_140fc7ad0 + uVar3 * 0x70 + 0x14,CONCAT71((int7)(uVar3 >> 8),2),
    1119:                       CONCAT71((int7)(uVar3 * 0x1c0 >> 8),param_1));
    1120:         uVar2 = (int)uVar3 + 1;
    1121:         uVar3 = (ulonglong)uVar2;
    1122:       } while (uVar2 < *DAT_140fc7ad0);
    1123:     }

## FUN_140201708 */ — reconstrucao/src/decompiled_01.c:1121
reconstrucao/src/../include/ghidra_function_prototypes.h:1121:1: error: unknown type name ‘errno_t’

    1118:         FUN_140201790(DAT_140fc7ad0 + uVar3 * 0x70 + 0x14,CONCAT71((int7)(uVar3 >> 8),2),
    1119:                       CONCAT71((int7)(uVar3 * 0x1c0 >> 8),param_1));
    1120:         uVar2 = (int)uVar3 + 1;
    1121:         uVar3 = (ulonglong)uVar2;
    1122:       } while (uVar2 < *DAT_140fc7ad0);
    1123:     }
    1124:     KeReleaseSpinLock(&DAT_140f0cf28,uVar1);

## FUN_140201708 */ — reconstrucao/src/decompiled_01.c:1122
reconstrucao/src/../include/ghidra_function_prototypes.h:1122:1: error: unknown type name ‘errno_t’

    1119:                       CONCAT71((int7)(uVar3 * 0x1c0 >> 8),param_1));
    1120:         uVar2 = (int)uVar3 + 1;
    1121:         uVar3 = (ulonglong)uVar2;
    1122:       } while (uVar2 < *DAT_140fc7ad0);
    1123:     }
    1124:     KeReleaseSpinLock(&DAT_140f0cf28,uVar1);
    1125:   }

## FUN_140201708 */ — reconstrucao/src/decompiled_01.c:1123
reconstrucao/src/../include/ghidra_function_prototypes.h:1123:1: error: unknown type name ‘errno_t’

    1120:         uVar2 = (int)uVar3 + 1;
    1121:         uVar3 = (ulonglong)uVar2;
    1122:       } while (uVar2 < *DAT_140fc7ad0);
    1123:     }
    1124:     KeReleaseSpinLock(&DAT_140f0cf28,uVar1);
    1125:   }
    1126:   return;

## FUN_140201708 */ — reconstrucao/src/decompiled_01.c:1124
reconstrucao/src/../include/ghidra_function_prototypes.h:1124:1: error: unknown type name ‘errno_t’

    1121:         uVar3 = (ulonglong)uVar2;
    1122:       } while (uVar2 < *DAT_140fc7ad0);
    1123:     }
    1124:     KeReleaseSpinLock(&DAT_140f0cf28,uVar1);
    1125:   }
    1126:   return;
    1127: }

## FUN_140201708 */ — reconstrucao/src/decompiled_01.c:1125
reconstrucao/src/../include/ghidra_function_prototypes.h:1125:1: error: unknown type name ‘errno_t’

    1122:       } while (uVar2 < *DAT_140fc7ad0);
    1123:     }
    1124:     KeReleaseSpinLock(&DAT_140f0cf28,uVar1);
    1125:   }
    1126:   return;
    1127: }
    1128: 

## FUN_140201708 */ — reconstrucao/src/decompiled_01.c:1125
reconstrucao/src/../include/ghidra_function_prototypes.h:1125:37: error: unknown type name ‘rsize_t’; did you mean ‘size_t’?

    1122:       } while (uVar2 < *DAT_140fc7ad0);
    1123:     }
    1124:     KeReleaseSpinLock(&DAT_140f0cf28,uVar1);
    1125:   }
    1126:   return;
    1127: }
    1128: 

## FUN_140201708 */ — reconstrucao/src/decompiled_01.c:1125
reconstrucao/src/../include/ghidra_function_prototypes.h:1125:65: error: unknown type name ‘rsize_t’; did you mean ‘size_t’?

    1122:       } while (uVar2 < *DAT_140fc7ad0);
    1123:     }
    1124:     KeReleaseSpinLock(&DAT_140f0cf28,uVar1);
    1125:   }
    1126:   return;
    1127: }
    1128: 

## FUN_140201708 */ — reconstrucao/src/decompiled_01.c:1126
reconstrucao/src/../include/ghidra_function_prototypes.h:1126:1: error: unknown type name ‘errno_t’

    1123:     }
    1124:     KeReleaseSpinLock(&DAT_140f0cf28,uVar1);
    1125:   }
    1126:   return;
    1127: }
    1128: 
    1129: /* Ghidra label: FUN_140201790 */

## FUN_140201708 */ — reconstrucao/src/decompiled_01.c:1126
reconstrucao/src/../include/ghidra_function_prototypes.h:1126:38: error: unknown type name ‘rsize_t’; did you mean ‘size_t’?

    1123:     }
    1124:     KeReleaseSpinLock(&DAT_140f0cf28,uVar1);
    1125:   }
    1126:   return;
    1127: }
    1128: 
    1129: /* Ghidra label: FUN_140201790 */

## FUN_140201708 */ — reconstrucao/src/decompiled_01.c:1126
reconstrucao/src/../include/ghidra_function_prototypes.h:1126:66: error: unknown type name ‘rsize_t’; did you mean ‘size_t’?

    1123:     }
    1124:     KeReleaseSpinLock(&DAT_140f0cf28,uVar1);
    1125:   }
    1126:   return;
    1127: }
    1128: 
    1129: /* Ghidra label: FUN_140201790 */

## FUN_140201708 */ — reconstrucao/src/decompiled_01.c:1127
reconstrucao/src/../include/ghidra_function_prototypes.h:1127:1: error: unknown type name ‘errno_t’

    1124:     KeReleaseSpinLock(&DAT_140f0cf28,uVar1);
    1125:   }
    1126:   return;
    1127: }
    1128: 
    1129: /* Ghidra label: FUN_140201790 */
    1130: /* Ghidra address: 140201790 */

## FUN_140201708 */ — reconstrucao/src/decompiled_01.c:1127
reconstrucao/src/../include/ghidra_function_prototypes.h:1127:37: error: unknown type name ‘rsize_t’; did you mean ‘size_t’?

    1124:     KeReleaseSpinLock(&DAT_140f0cf28,uVar1);
    1125:   }
    1126:   return;
    1127: }
    1128: 
    1129: /* Ghidra label: FUN_140201790 */
    1130: /* Ghidra address: 140201790 */

## FUN_140201708 */ — reconstrucao/src/decompiled_01.c:1128
reconstrucao/src/../include/ghidra_function_prototypes.h:1128:1: error: unknown type name ‘errno_t’

    1125:   }
    1126:   return;
    1127: }
    1128: 
    1129: /* Ghidra label: FUN_140201790 */
    1130: /* Ghidra address: 140201790 */
    1131: void FUN_140201790(longlong param_1,byte param_2,char param_3)

## FUN_140201708 */ — reconstrucao/src/decompiled_01.c:1128
reconstrucao/src/../include/ghidra_function_prototypes.h:1128:37: error: unknown type name ‘rsize_t’; did you mean ‘size_t’?

    1125:   }
    1126:   return;
    1127: }
    1128: 
    1129: /* Ghidra label: FUN_140201790 */
    1130: /* Ghidra address: 140201790 */
    1131: void FUN_140201790(longlong param_1,byte param_2,char param_3)

## FUN_140201708 */ — reconstrucao/src/decompiled_01.c:1129
reconstrucao/src/../include/ghidra_function_prototypes.h:1129:1: error: unknown type name ‘errno_t’

    1126:   return;
    1127: }
    1128: 
    1129: /* Ghidra label: FUN_140201790 */
    1130: /* Ghidra address: 140201790 */
    1131: void FUN_140201790(longlong param_1,byte param_2,char param_3)
    1132: 

## FUN_140201708 */ — reconstrucao/src/decompiled_01.c:1129
reconstrucao/src/../include/ghidra_function_prototypes.h:1129:38: error: unknown type name ‘rsize_t’; did you mean ‘size_t’?

    1126:   return;
    1127: }
    1128: 
    1129: /* Ghidra label: FUN_140201790 */
    1130: /* Ghidra address: 140201790 */
    1131: void FUN_140201790(longlong param_1,byte param_2,char param_3)
    1132: 

## FUN_140201708 */ — reconstrucao/src/decompiled_01.c:1129
reconstrucao/src/../include/ghidra_function_prototypes.h:1129:70: error: unknown type name ‘rsize_t’; did you mean ‘size_t’?

    1126:   return;
    1127: }
    1128: 
    1129: /* Ghidra label: FUN_140201790 */
    1130: /* Ghidra address: 140201790 */
    1131: void FUN_140201790(longlong param_1,byte param_2,char param_3)
    1132: 

## FUN_140201790 */ — reconstrucao/src/decompiled_01.c:1130
reconstrucao/src/../include/ghidra_function_prototypes.h:1130:1: error: unknown type name ‘errno_t’

    1127: }
    1128: 
    1129: /* Ghidra label: FUN_140201790 */
    1130: /* Ghidra address: 140201790 */
    1131: void FUN_140201790(longlong param_1,byte param_2,char param_3)
    1132: 
    1133: {

## FUN_140201790 */ — reconstrucao/src/decompiled_01.c:1130
reconstrucao/src/../include/ghidra_function_prototypes.h:1130:38: error: unknown type name ‘rsize_t’; did you mean ‘size_t’?

    1127: }
    1128: 
    1129: /* Ghidra label: FUN_140201790 */
    1130: /* Ghidra address: 140201790 */
    1131: void FUN_140201790(longlong param_1,byte param_2,char param_3)
    1132: 
    1133: {

## FUN_140201790 */ — reconstrucao/src/decompiled_01.c:1130
reconstrucao/src/../include/ghidra_function_prototypes.h:1130:70: error: unknown type name ‘rsize_t’; did you mean ‘size_t’?

    1127: }
    1128: 
    1129: /* Ghidra label: FUN_140201790 */
    1130: /* Ghidra address: 140201790 */
    1131: void FUN_140201790(longlong param_1,byte param_2,char param_3)
    1132: 
    1133: {

## FUN_140201790 */ — reconstrucao/src/decompiled_01.c:1131
reconstrucao/src/../include/ghidra_function_prototypes.h:1131:1: error: unknown type name ‘errno_t’

    1128: 
    1129: /* Ghidra label: FUN_140201790 */
    1130: /* Ghidra address: 140201790 */
    1131: void FUN_140201790(longlong param_1,byte param_2,char param_3)
    1132: 
    1133: {
    1134:   undefined8 uVar1;

## FUN_140201790 */ — reconstrucao/src/decompiled_01.c:1131
reconstrucao/src/../include/ghidra_function_prototypes.h:1131:40: error: unknown type name ‘rsize_t’; did you mean ‘size_t’?

    1128: 
    1129: /* Ghidra label: FUN_140201790 */
    1130: /* Ghidra address: 140201790 */
    1131: void FUN_140201790(longlong param_1,byte param_2,char param_3)
    1132: 
    1133: {
    1134:   undefined8 uVar1;

## FUN_140201790 */ — reconstrucao/src/decompiled_01.c:1132
reconstrucao/src/../include/ghidra_function_prototypes.h:1132:1: error: unknown type name ‘errno_t’

    1129: /* Ghidra label: FUN_140201790 */
    1130: /* Ghidra address: 140201790 */
    1131: void FUN_140201790(longlong param_1,byte param_2,char param_3)
    1132: 
    1133: {
    1134:   undefined8 uVar1;
    1135:   longlong lVar2;

## FUN_140201790 */ — reconstrucao/src/decompiled_01.c:1132
reconstrucao/src/../include/ghidra_function_prototypes.h:1132:40: error: unknown type name ‘rsize_t’; did you mean ‘size_t’?

    1129: /* Ghidra label: FUN_140201790 */
    1130: /* Ghidra address: 140201790 */
    1131: void FUN_140201790(longlong param_1,byte param_2,char param_3)
    1132: 
    1133: {
    1134:   undefined8 uVar1;
    1135:   longlong lVar2;

## FUN_140201790 */ — reconstrucao/src/decompiled_01.c:1133
reconstrucao/src/../include/ghidra_function_prototypes.h:1133:1: error: unknown type name ‘errno_t’

    1130: /* Ghidra address: 140201790 */
    1131: void FUN_140201790(longlong param_1,byte param_2,char param_3)
    1132: 
    1133: {
    1134:   undefined8 uVar1;
    1135:   longlong lVar2;
    1136:   byte bVar3;

## FUN_140201790 */ — reconstrucao/src/decompiled_01.c:1133
reconstrucao/src/../include/ghidra_function_prototypes.h:1133:41: error: unknown type name ‘rsize_t’; did you mean ‘size_t’?

    1130: /* Ghidra address: 140201790 */
    1131: void FUN_140201790(longlong param_1,byte param_2,char param_3)
    1132: 
    1133: {
    1134:   undefined8 uVar1;
    1135:   longlong lVar2;
    1136:   byte bVar3;

## FUN_140201790 */ — reconstrucao/src/decompiled_01.c:1133
reconstrucao/src/../include/ghidra_function_prototypes.h:1133:76: error: unknown type name ‘rsize_t’; did you mean ‘size_t’?

    1130: /* Ghidra address: 140201790 */
    1131: void FUN_140201790(longlong param_1,byte param_2,char param_3)
    1132: 
    1133: {
    1134:   undefined8 uVar1;
    1135:   longlong lVar2;
    1136:   byte bVar3;

## FUN_140201790 */ — reconstrucao/src/decompiled_01.c:1134
reconstrucao/src/../include/ghidra_function_prototypes.h:1134:1: error: unknown type name ‘errno_t’

    1131: void FUN_140201790(longlong param_1,byte param_2,char param_3)
    1132: 
    1133: {
    1134:   undefined8 uVar1;
    1135:   longlong lVar2;
    1136:   byte bVar3;
    1137:   uint uVar4;

## FUN_140201790 */ — reconstrucao/src/decompiled_01.c:1134
reconstrucao/src/../include/ghidra_function_prototypes.h:1134:41: error: unknown type name ‘rsize_t’; did you mean ‘size_t’?

    1131: void FUN_140201790(longlong param_1,byte param_2,char param_3)
    1132: 
    1133: {
    1134:   undefined8 uVar1;
    1135:   longlong lVar2;
    1136:   byte bVar3;
    1137:   uint uVar4;

## FUN_140201790 */ — reconstrucao/src/decompiled_01.c:1134
reconstrucao/src/../include/ghidra_function_prototypes.h:1134:76: error: unknown type name ‘rsize_t’; did you mean ‘size_t’?

    1131: void FUN_140201790(longlong param_1,byte param_2,char param_3)
    1132: 
    1133: {
    1134:   undefined8 uVar1;
    1135:   longlong lVar2;
    1136:   byte bVar3;
    1137:   uint uVar4;

## FUN_14020412c */ — reconstrucao/src/decompiled_01.c:3380
reconstrucao/src/../include/ghidra_function_prototypes.h:3380:51: error: unknown type name ‘IMAGE_DOS_HEADER’

    3377:   
    3378:   uVar1 = (ulonglong)DAT_140fc7ab8;
    3379:   uVar2 = 0;
    3380:   if (((char)DAT_140fc7ab8 < '\0') &&
    3381:      ((param_1 == 0 || (uVar1 = (ulonglong)(param_2 + 1U), param_2 + 1U < 0xd)))) {
    3382:     uVar2 = 1;
    3383:   }

## FUN_140215e80 */ — reconstrucao/src/decompiled_01.c:17366
reconstrucao/src/../include/ghidra_function_prototypes.h:17366:37: error: unknown type name ‘PSLIST_HEADER’

    17363:     uStack_150 = 0x3f - (int)lVar4;
    17364:     uVar22 = (ulonglong)uStack_150;
    17365:     puVar11 = puVar11 + 1;
    17366:   }
    17367:   goto LAB_1402165b3;
    17368: code_r0x0001402167a8:
    17369:   if (*puVar11 != 0) goto LAB_1402167ae;

## FUN_140215e80 */ — reconstrucao/src/decompiled_01.c:17366
reconstrucao/src/../include/ghidra_function_prototypes.h:17366:59: error: unknown type name ‘ULONGLONG’

    17363:     uStack_150 = 0x3f - (int)lVar4;
    17364:     uVar22 = (ulonglong)uStack_150;
    17365:     puVar11 = puVar11 + 1;
    17366:   }
    17367:   goto LAB_1402165b3;
    17368: code_r0x0001402167a8:
    17369:   if (*puVar11 != 0) goto LAB_1402167ae;

## FUN_140215e80 */ — reconstrucao/src/decompiled_01.c:17367
reconstrucao/src/../include/ghidra_function_prototypes.h:17367:37: error: unknown type name ‘PSLIST_HEADER’

    17364:     uVar22 = (ulonglong)uStack_150;
    17365:     puVar11 = puVar11 + 1;
    17366:   }
    17367:   goto LAB_1402165b3;
    17368: code_r0x0001402167a8:
    17369:   if (*puVar11 != 0) goto LAB_1402167ae;
    17370:   goto LAB_14021679f;

## FUN_14021baa0 */ — reconstrucao/src/decompiled_01.c:20616
reconstrucao/src/../include/ghidra_function_prototypes.h:20616:55: error: unknown type name ‘_EXCEPTION_RECORD’

    20613:         _DAT_140ef5270 = _DAT_140ef5270 + 1;
    20614:       }
    20615:       uVar16 = (int)uVar17 + 1;
    20616:       uVar17 = (ulonglong)uVar16;
    20617:       uStack_a0 = uStack_a0 + lVar6 * 0x1000;
    20618:     } while (uVar16 < *(uint *)(lStack_80 + 0x118));
    20619:     uVar12 = (ulonglong)uVar7;

## FUN_14021baa0 */ — reconstrucao/src/decompiled_01.c:20619
reconstrucao/src/../include/ghidra_function_prototypes.h:20619:36: error: unknown type name ‘PSLIST_HEADER’

    20616:       uVar17 = (ulonglong)uVar16;
    20617:       uStack_a0 = uStack_a0 + lVar6 * 0x1000;
    20618:     } while (uVar16 < *(uint *)(lStack_80 + 0x118));
    20619:     uVar12 = (ulonglong)uVar7;
    20620:   }
    20621:   return uVar12;
    20622: }

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
reconstrucao/src/decompiled_01.c:201:3: error: implicit declaration of function ‘FUN_1403a0f70’; did you mean ‘FUN_140ba0670’? [-Wimplicit-function-declaration]

    198:   uStack_280 = 4;
    199:   uStack_290 = 4;
    200:   uStack_2a0 = 8;
    201:   FUN_1403a0f70(&DAT_140e0a590,param_2,0,0);
    202:   return;
    203: }
    204: 

## FUN_140200008 */ — reconstrucao/src/decompiled_01.c:201
reconstrucao/src/decompiled_01.c:201:18: error: ‘DAT_140e0a590’ undeclared (first use in this function)

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

## FUN_140200740 */ — reconstrucao/src/decompiled_01.c:337
reconstrucao/src/decompiled_01.c:337:5: error: implicit declaration of function ‘FUN_1404f6e6c’; did you mean ‘FUN_1404f6c6c’? [-Wimplicit-function-declaration]

    334:   
    335:   auStackX_10[0] = 0;
    336:   if (DAT_140fc7d20 != 0) {
    337:     FUN_1404f6e6c(in_CR8,2);
    338:   }
    339:   FUN_1402007a8(param_1,auStackX_10);
    340:   FUN_140271070(FiberData,auStackX_10);

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
reconstrucao/src/decompiled_01.c:340:3: error: implicit declaration of function ‘FUN_140271070’; did you mean ‘FUN_140471070’? [-Wimplicit-function-declaration]

    337:     FUN_1404f6e6c(in_CR8,2);
    338:   }
    339:   FUN_1402007a8(param_1,auStackX_10);
    340:   FUN_140271070(FiberData,auStackX_10);
    341:   return;
    342: }
    343: 

## FUN_140200740 */ — reconstrucao/src/decompiled_01.c:340
reconstrucao/src/decompiled_01.c:340:17: error: ‘FiberData’ undeclared (first use in this function)

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
reconstrucao/src/decompiled_01.c:364:48: error: ‘DAT_140fc7ab8’ undeclared (first use in this function)

    361:     if ((uVar2 & 1) == 0) break;
    362:     do {
    363:       uVar4 = uVar4 + 1;
    364:       if ((((DAT_140fc62ac & uVar4) == 0) && ((DAT_140fc7ab8 & 0x40) != 0)) &&
    365:          (cVar3 = FUN_14020cb70(), cVar3 != '\0')) {
    366:         FUN_14020cb40(uVar4);
    367:       }

## FUN_1402007a8 */ — reconstrucao/src/decompiled_01.c:365
reconstrucao/src/decompiled_01.c:365:19: error: implicit declaration of function ‘FUN_14020cb70’; did you mean ‘FUN_14020cbe0’? [-Wimplicit-function-declaration]

    362:     do {
    363:       uVar4 = uVar4 + 1;
    364:       if ((((DAT_140fc62ac & uVar4) == 0) && ((DAT_140fc7ab8 & 0x40) != 0)) &&
    365:          (cVar3 = FUN_14020cb70(), cVar3 != '\0')) {
    366:         FUN_14020cb40(uVar4);
    367:       }
    368:     } while (*(longlong *)(param_1 + 0x40) != 0);

## FUN_1402007a8 */ — reconstrucao/src/decompiled_01.c:366
reconstrucao/src/decompiled_01.c:366:9: error: implicit declaration of function ‘FUN_14020cb40’; did you mean ‘FUN_14020cbe0’? [-Wimplicit-function-declaration]

    363:       uVar4 = uVar4 + 1;
    364:       if ((((DAT_140fc62ac & uVar4) == 0) && ((DAT_140fc7ab8 & 0x40) != 0)) &&
    365:          (cVar3 = FUN_14020cb70(), cVar3 != '\0')) {
    366:         FUN_14020cb40(uVar4);
    367:       }
    368:     } while (*(longlong *)(param_1 + 0x40) != 0);
    369:   }

## FUN_1402007a8 */ — reconstrucao/src/decompiled_01.c:370
reconstrucao/src/decompiled_01.c:370:3: error: implicit declaration of function ‘FUN_140200820’; did you mean ‘FUN_140200740’? [-Wimplicit-function-declaration]

    367:       }
    368:     } while (*(longlong *)(param_1 + 0x40) != 0);
    369:   }
    370:   FUN_140200820(param_1,param_2);
    371:   return;
    372: }
    373: 

## FUN_140200820 */ — reconstrucao/src/decompiled_01.c:396
reconstrucao/src/decompiled_01.c:396:5: error: implicit declaration of function ‘FUN_14020bfa0’; did you mean ‘FUN_140a0afa0’? [-Wimplicit-function-declaration]

    393:   uStack_48 = 0;
    394:   uStack_40 = 0;
    395:   if ((*(uint *)(param_1 + 0x74) & 8) == 0) {
    396:     FUN_14020bfa0(0,&uStackX_20,&uStackX_18,auStackX_8,&uStack_48);
    397:     cVar2 = FUN_14034f180(param_1);
    398:     iVar3 = *(int *)(param_1 + 0x24c);
    399:     FUN_14020a0c8(param_1,*(undefined8 *)(param_1 + 0x240));

## FUN_140200820 */ — reconstrucao/src/decompiled_01.c:397
reconstrucao/src/decompiled_01.c:397:13: error: implicit declaration of function ‘FUN_14034f180’; did you mean ‘FUN_14054f190’? [-Wimplicit-function-declaration]

    394:   uStack_40 = 0;
    395:   if ((*(uint *)(param_1 + 0x74) & 8) == 0) {
    396:     FUN_14020bfa0(0,&uStackX_20,&uStackX_18,auStackX_8,&uStack_48);
    397:     cVar2 = FUN_14034f180(param_1);
    398:     iVar3 = *(int *)(param_1 + 0x24c);
    399:     FUN_14020a0c8(param_1,*(undefined8 *)(param_1 + 0x240));
    400:   }

## FUN_140200820 */ — reconstrucao/src/decompiled_01.c:399
reconstrucao/src/decompiled_01.c:399:5: error: implicit declaration of function ‘FUN_14020a0c8’; did you mean ‘FUN_14060a0c8’? [-Wimplicit-function-declaration]

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

## FUN_140200820 */ — reconstrucao/src/decompiled_01.c:406
reconstrucao/src/decompiled_01.c:406:5: error: implicit declaration of function ‘FUN_1403c0604’; did you mean ‘FUN_140bc0304’? [-Wimplicit-function-declaration]

    403:     iVar3 = iVar1;
    404:   }
    405:   if ((((uint)DAT_140fc7b04 & 0x1000) != 0) && (cVar2 != '\0')) {
    406:     FUN_1403c0604(param_1,*(undefined2 *)(param_1 + 0x248),
    407:                   CONCAT31((uint3)(*(uint *)(param_1 + 0x74) >> 0xb),
    408:                            (char)(*(uint *)(param_1 + 0x74) >> 3)) & 0xffffff01,0,
    409:                   *(undefined8 *)(param_1 + 0x240),0x536);

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

## FUN_140200820 */ — reconstrucao/src/decompiled_01.c:411
reconstrucao/src/decompiled_01.c:411:29: error: ‘DAT_140fc7b10’ undeclared (first use in this function)

    408:                            (char)(*(uint *)(param_1 + 0x74) >> 3)) & 0xffffff01,0,
    409:                   *(undefined8 *)(param_1 + 0x240),0x536);
    410:   }
    411:   if ((iVar1 != iVar3) && ((DAT_140fc7b10 & 0x8000000) != 0)) {
    412:     FUN_1403be528(param_1,0x546,iVar1,iVar3);
    413:   }
    414:   return;

## FUN_140200820 */ — reconstrucao/src/decompiled_01.c:412
reconstrucao/src/decompiled_01.c:412:5: error: implicit declaration of function ‘FUN_1403be528’; did you mean ‘FUN_140abe628’? [-Wimplicit-function-declaration]

    409:                   *(undefined8 *)(param_1 + 0x240),0x536);
    410:   }
    411:   if ((iVar1 != iVar3) && ((DAT_140fc7b10 & 0x8000000) != 0)) {
    412:     FUN_1403be528(param_1,0x546,iVar1,iVar3);
    413:   }
    414:   return;
    415: }

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
reconstrucao/src/decompiled_01.c:430:13: error: implicit declaration of function ‘KeAcquireSpinLockRaiseToDpc’; did you mean ‘KeAcquireSpinLockRaiseToSynch’? [-Wimplicit-function-declaration]

    427:   ulonglong uVar6;
    428:   
    429:   if (DAT_140fc7ad0 != (uint *)0x0) {
    430:     uVar2 = KeAcquireSpinLockRaiseToDpc(&DAT_140f0cf28);
    431:     uVar6 = 0;
    432:     if (*DAT_140fc7ad0 != 0) {
    433:       do {

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

## FUN_140200950 */ — reconstrucao/src/decompiled_01.c:450
reconstrucao/src/decompiled_01.c:450:5: error: implicit declaration of function ‘KeReleaseSpinLock’; did you mean ‘IoReleaseVpbSpinLock’? [-Wimplicit-function-declaration]

    447:         uVar6 = (ulonglong)uVar3;
    448:       } while (uVar3 < *DAT_140fc7ad0);
    449:     }
    450:     KeReleaseSpinLock(&DAT_140f0cf28,uVar2);
    451:   }
    452:   return;
    453: }

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
reconstrucao/src/decompiled_01.c:481:3: error: implicit declaration of function ‘KeAcquireSpinLockAtDpcLevel’; did you mean ‘KeTryToAcquireSpinLockAtDpcLevel’? [-Wimplicit-function-declaration]

    478:     FUN_1404f6e6c(in_CR8,2);
    479:   }
    480:   *param_2 = in_CR8;
    481:   KeAcquireSpinLockAtDpcLevel(param_1 + 8);
    482:   return;
    483: }
    484: 

## KeSetSelectedCpuSetsThread */ — reconstrucao/src/decompiled_01.c:503
reconstrucao/src/decompiled_01.c:503:11: error: implicit declaration of function ‘FUN_140201918’; did you mean ‘FUN_140201958’? [-Wimplicit-function-declaration]

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
reconstrucao/src/decompiled_01.c:526:50: error: ‘DAT_140fc7ab8’ undeclared (first use in this function)

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
reconstrucao/src/decompiled_01.c:534:5: error: implicit declaration of function ‘ExReleaseSpinLockSharedFromDpcLevel’; did you mean ‘KeReleaseSpinLockFromDpcLevel’? [-Wimplicit-function-declaration]

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

## FUN_140200bc0 */ — reconstrucao/src/decompiled_01.c:573
reconstrucao/src/decompiled_01.c:573:13: error: implicit declaration of function ‘FUN_1402fd8a0’; did you mean ‘FUN_140bad8a0’? [-Wimplicit-function-declaration]

    570:   uStack_100 = (void *)0x0;
    571:   if ((DAT_140fc7a90 & 8) == 0) {
    572:     uStack_108 = 4;
    573:     uVar2 = FUN_1402fd8a0();
    574:     uStack_100 = (void *)CONCAT71(uStack_100._1_7_,uVar2);
    575:     uStack_100 = (void *)CONCAT44(1,(undefined4)uStack_100);
    576:     puVar5 = *(undefined4 **)((longlong)FiberData + 0x8c00);

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

## FUN_140200bc0 */ — reconstrucao/src/decompiled_01.c:581
reconstrucao/src/decompiled_01.c:581:28: error: implicit declaration of function ‘ExpInterlockedPopEntrySList’; did you mean ‘ExInterlockedPopEntryList’? [-Wimplicit-function-declaration]

    578:     uVar6 = (uint)uStack_108;
    579:   }
    580:   else {
    581:     puVar5 = (undefined4 *)ExpInterlockedPopEntrySList((longlong)FiberData + 0x8bc0);
    582:     if (puVar5 == (undefined4 *)0x0) {
    583:       uStack_108 = CONCAT44(uStack_108._4_4_,2);
    584:       uVar6 = 2;

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
reconstrucao/src/decompiled_01.c:593:19: error: implicit declaration of function ‘MmGetPhysicalAddress’ [-Wimplicit-function-declaration]

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
reconstrucao/src/decompiled_01.c:606:28: error: implicit declaration of function ‘FUN_14046f5e0’; did you mean ‘FUN_14046f6e0’? [-Wimplicit-function-declaration]

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

## FUN_140200bc0 */ — reconstrucao/src/decompiled_01.c:613
reconstrucao/src/decompiled_01.c:613:11: error: implicit declaration of function ‘HvlInvokeHypercall’ [-Wimplicit-function-declaration]

    610:   puVar5[1] = 0;
    611:   *puVar5 = param_2;
    612:   uStack_e8 = (ulonglong)(uint)((iVar4 + 7) * 0x4000) & 0xffffffff03fe0000 | 0x15;
    613:   sVar3 = HvlInvokeHypercall(uStack_e8,uVar7,0);
    614:   FUN_140210b60(&uStack_108);
    615:   return -(uint)(sVar3 != 0) & 0xc0000001;
    616: }

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
reconstrucao/src/decompiled_01.c:638:13: error: implicit declaration of function ‘EtwEventEnabled’ [-Wimplicit-function-declaration]

    635:   uStack_18 = DAT_140e0a740 ^ (ulonglong)auStack_68;
    636:   if (DAT_140e67941 != '\0') {
    637:     auStackX_8[0] = param_1;
    638:     cVar1 = EtwEventEnabled(DAT_140f0bb00,&DAT_140010400);
    639:     if (cVar1 != '\0') {
    640:       uStack_1c = 0;
    641:       puStack_28 = auStackX_8;

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
reconstrucao/src/decompiled_01.c:647:7: error: implicit declaration of function ‘EtwWriteEx’ [-Wimplicit-function-declaration]

    644:       uStack_38 = 1;
    645:       uStack_40 = 0;
    646:       uStack_48 = 0;
    647:       EtwWriteEx(DAT_140f0bb00,&DAT_140010400,0);
    648:     }
    649:   }
    650:   return;

## FUN_140531850 */ — reconstrucao/src/decompiled_02.c:8
reconstrucao/src/../include/ghidra_function_prototypes.h:8:1: error: unknown type name ‘NTSTATUS’

    5: 
    6: /* Ghidra label: FUN_140531850 */
    7: /* Ghidra address: 140531850 */
    8: void FUN_140531850(longlong param_1,ulonglong *param_2,ulonglong *param_3,ulonglong *param_4)
    9: 
    10: {
    11:   ulonglong uVar1;

## FUN_140531850 */ — reconstrucao/src/decompiled_02.c:8
reconstrucao/src/../include/ghidra_function_prototypes.h:8:46: error: unknown type name ‘HANDLE’

    5: 
    6: /* Ghidra label: FUN_140531850 */
    7: /* Ghidra address: 140531850 */
    8: void FUN_140531850(longlong param_1,ulonglong *param_2,ulonglong *param_3,ulonglong *param_4)
    9: 
    10: {
    11:   ulonglong uVar1;

## FUN_140531850 */ — reconstrucao/src/decompiled_02.c:9
reconstrucao/src/../include/ghidra_function_prototypes.h:9:1: error: unknown type name ‘NTSTATUS’

    6: /* Ghidra label: FUN_140531850 */
    7: /* Ghidra address: 140531850 */
    8: void FUN_140531850(longlong param_1,ulonglong *param_2,ulonglong *param_3,ulonglong *param_4)
    9: 
    10: {
    11:   ulonglong uVar1;
    12:   ulonglong uVar2;

## FUN_140531d60 */ — reconstrucao/src/decompiled_02.c:1112
reconstrucao/src/../include/ghidra_function_prototypes.h:1112:1: error: unknown type name ‘errno_t’

    1109:   uVar1 = SUB168(auVar21 * auVar75,0);
    1110:   uVar129 = (ulonglong)(CARRY8(uVar134,uVar6) || CARRY8(uVar5,uVar3));
    1111:   uVar6 = uVar135 + uVar1;
    1112:   uVar126 = SUB168(auVar21 * auVar75,8) +
    1113:             (ulonglong)(CARRY8(uVar135,uVar1) || CARRY8(uVar6,uVar129));
    1114:   puVar124 = (ulonglong *)(param_1 + 0x80);
    1115:   uVar134 = uVar7 * *(longlong *)(param_1 + 0x18);

## FUN_140531d60 */ — reconstrucao/src/decompiled_02.c:1113
reconstrucao/src/../include/ghidra_function_prototypes.h:1113:1: error: unknown type name ‘errno_t’

    1110:   uVar129 = (ulonglong)(CARRY8(uVar134,uVar6) || CARRY8(uVar5,uVar3));
    1111:   uVar6 = uVar135 + uVar1;
    1112:   uVar126 = SUB168(auVar21 * auVar75,8) +
    1113:             (ulonglong)(CARRY8(uVar135,uVar1) || CARRY8(uVar6,uVar129));
    1114:   puVar124 = (ulonglong *)(param_1 + 0x80);
    1115:   uVar134 = uVar7 * *(longlong *)(param_1 + 0x18);
    1116:   auVar22._8_8_ = 0;

## FUN_140531d60 */ — reconstrucao/src/decompiled_02.c:1114
reconstrucao/src/../include/ghidra_function_prototypes.h:1114:1: error: unknown type name ‘errno_t’

    1111:   uVar6 = uVar135 + uVar1;
    1112:   uVar126 = SUB168(auVar21 * auVar75,8) +
    1113:             (ulonglong)(CARRY8(uVar135,uVar1) || CARRY8(uVar6,uVar129));
    1114:   puVar124 = (ulonglong *)(param_1 + 0x80);
    1115:   uVar134 = uVar7 * *(longlong *)(param_1 + 0x18);
    1116:   auVar22._8_8_ = 0;
    1117:   auVar22._0_8_ = uVar134;

## FUN_140531d60 */ — reconstrucao/src/decompiled_02.c:1115
reconstrucao/src/../include/ghidra_function_prototypes.h:1115:1: error: unknown type name ‘errno_t’

    1112:   uVar126 = SUB168(auVar21 * auVar75,8) +
    1113:             (ulonglong)(CARRY8(uVar135,uVar1) || CARRY8(uVar6,uVar129));
    1114:   puVar124 = (ulonglong *)(param_1 + 0x80);
    1115:   uVar134 = uVar7 * *(longlong *)(param_1 + 0x18);
    1116:   auVar22._8_8_ = 0;
    1117:   auVar22._0_8_ = uVar134;
    1118:   auVar76._8_8_ = 0;

## FUN_140531d60 */ — reconstrucao/src/decompiled_02.c:1116
reconstrucao/src/../include/ghidra_function_prototypes.h:1116:1: error: unknown type name ‘errno_t’

    1113:             (ulonglong)(CARRY8(uVar135,uVar1) || CARRY8(uVar6,uVar129));
    1114:   puVar124 = (ulonglong *)(param_1 + 0x80);
    1115:   uVar134 = uVar7 * *(longlong *)(param_1 + 0x18);
    1116:   auVar22._8_8_ = 0;
    1117:   auVar22._0_8_ = uVar134;
    1118:   auVar76._8_8_ = 0;
    1119:   auVar76._0_8_ = *puVar124;

## FUN_140531d60 */ — reconstrucao/src/decompiled_02.c:1117
reconstrucao/src/../include/ghidra_function_prototypes.h:1117:1: error: unknown type name ‘errno_t’

    1114:   puVar124 = (ulonglong *)(param_1 + 0x80);
    1115:   uVar134 = uVar7 * *(longlong *)(param_1 + 0x18);
    1116:   auVar22._8_8_ = 0;
    1117:   auVar22._0_8_ = uVar134;
    1118:   auVar76._8_8_ = 0;
    1119:   auVar76._0_8_ = *puVar124;
    1120:   Var8 = (unkuint9)uVar7 + (unkuint9)SUB168(auVar22 * auVar76,0);

## FUN_140531d60 */ — reconstrucao/src/decompiled_02.c:1118
reconstrucao/src/../include/ghidra_function_prototypes.h:1118:1: error: unknown type name ‘errno_t’

    1115:   uVar134 = uVar7 * *(longlong *)(param_1 + 0x18);
    1116:   auVar22._8_8_ = 0;
    1117:   auVar22._0_8_ = uVar134;
    1118:   auVar76._8_8_ = 0;
    1119:   auVar76._0_8_ = *puVar124;
    1120:   Var8 = (unkuint9)uVar7 + (unkuint9)SUB168(auVar22 * auVar76,0);
    1121:   uVar7 = (ulonglong)Var8;

## FUN_140531d60 */ — reconstrucao/src/decompiled_02.c:1119
reconstrucao/src/../include/ghidra_function_prototypes.h:1119:1: error: unknown type name ‘errno_t’

    1116:   auVar22._8_8_ = 0;
    1117:   auVar22._0_8_ = uVar134;
    1118:   auVar76._8_8_ = 0;
    1119:   auVar76._0_8_ = *puVar124;
    1120:   Var8 = (unkuint9)uVar7 + (unkuint9)SUB168(auVar22 * auVar76,0);
    1121:   uVar7 = (ulonglong)Var8;
    1122:   Var10 = (unkuint9)(uVar130 + uVar9) + (unkuint9)SUB168(auVar22 * auVar76,8);

## FUN_140531d60 */ — reconstrucao/src/decompiled_02.c:1120
reconstrucao/src/../include/ghidra_function_prototypes.h:1120:1: error: unknown type name ‘errno_t’

    1117:   auVar22._0_8_ = uVar134;
    1118:   auVar76._8_8_ = 0;
    1119:   auVar76._0_8_ = *puVar124;
    1120:   Var8 = (unkuint9)uVar7 + (unkuint9)SUB168(auVar22 * auVar76,0);
    1121:   uVar7 = (ulonglong)Var8;
    1122:   Var10 = (unkuint9)(uVar130 + uVar9) + (unkuint9)SUB168(auVar22 * auVar76,8);
    1123:   auVar23._8_8_ = 0;

## FUN_140531d60 */ — reconstrucao/src/decompiled_02.c:1121
reconstrucao/src/../include/ghidra_function_prototypes.h:1121:1: error: unknown type name ‘errno_t’

    1118:   auVar76._8_8_ = 0;
    1119:   auVar76._0_8_ = *puVar124;
    1120:   Var8 = (unkuint9)uVar7 + (unkuint9)SUB168(auVar22 * auVar76,0);
    1121:   uVar7 = (ulonglong)Var8;
    1122:   Var10 = (unkuint9)(uVar130 + uVar9) + (unkuint9)SUB168(auVar22 * auVar76,8);
    1123:   auVar23._8_8_ = 0;
    1124:   auVar23._0_8_ = uVar134;

## FUN_140531d60 */ — reconstrucao/src/decompiled_02.c:1122
reconstrucao/src/../include/ghidra_function_prototypes.h:1122:1: error: unknown type name ‘errno_t’

    1119:   auVar76._0_8_ = *puVar124;
    1120:   Var8 = (unkuint9)uVar7 + (unkuint9)SUB168(auVar22 * auVar76,0);
    1121:   uVar7 = (ulonglong)Var8;
    1122:   Var10 = (unkuint9)(uVar130 + uVar9) + (unkuint9)SUB168(auVar22 * auVar76,8);
    1123:   auVar23._8_8_ = 0;
    1124:   auVar23._0_8_ = uVar134;
    1125:   auVar77._8_8_ = 0;

## FUN_140531d60 */ — reconstrucao/src/decompiled_02.c:1123
reconstrucao/src/../include/ghidra_function_prototypes.h:1123:1: error: unknown type name ‘errno_t’

    1120:   Var8 = (unkuint9)uVar7 + (unkuint9)SUB168(auVar22 * auVar76,0);
    1121:   uVar7 = (ulonglong)Var8;
    1122:   Var10 = (unkuint9)(uVar130 + uVar9) + (unkuint9)SUB168(auVar22 * auVar76,8);
    1123:   auVar23._8_8_ = 0;
    1124:   auVar23._0_8_ = uVar134;
    1125:   auVar77._8_8_ = 0;
    1126:   auVar77._0_8_ = *(ulonglong *)(param_1 + 0x88);

## FUN_140531d60 */ — reconstrucao/src/decompiled_02.c:1124
reconstrucao/src/../include/ghidra_function_prototypes.h:1124:1: error: unknown type name ‘errno_t’

    1121:   uVar7 = (ulonglong)Var8;
    1122:   Var10 = (unkuint9)(uVar130 + uVar9) + (unkuint9)SUB168(auVar22 * auVar76,8);
    1123:   auVar23._8_8_ = 0;
    1124:   auVar23._0_8_ = uVar134;
    1125:   auVar77._8_8_ = 0;
    1126:   auVar77._0_8_ = *(ulonglong *)(param_1 + 0x88);
    1127:   Var8 = (unkuint9)(ulonglong)Var10 + (unkuint9)SUB168(auVar23 * auVar77,0) +

## FUN_140531d60 */ — reconstrucao/src/decompiled_02.c:1125
reconstrucao/src/../include/ghidra_function_prototypes.h:1125:1: error: unknown type name ‘errno_t’

    1122:   Var10 = (unkuint9)(uVar130 + uVar9) + (unkuint9)SUB168(auVar22 * auVar76,8);
    1123:   auVar23._8_8_ = 0;
    1124:   auVar23._0_8_ = uVar134;
    1125:   auVar77._8_8_ = 0;
    1126:   auVar77._0_8_ = *(ulonglong *)(param_1 + 0x88);
    1127:   Var8 = (unkuint9)(ulonglong)Var10 + (unkuint9)SUB168(auVar23 * auVar77,0) +
    1128:          (unkuint9)((char)((unkuint9)Var8 >> 0x40) != '\0');

## FUN_140531d60 */ — reconstrucao/src/decompiled_02.c:1125
reconstrucao/src/../include/ghidra_function_prototypes.h:1125:37: error: unknown type name ‘rsize_t’; did you mean ‘size_t’?

    1122:   Var10 = (unkuint9)(uVar130 + uVar9) + (unkuint9)SUB168(auVar22 * auVar76,8);
    1123:   auVar23._8_8_ = 0;
    1124:   auVar23._0_8_ = uVar134;
    1125:   auVar77._8_8_ = 0;
    1126:   auVar77._0_8_ = *(ulonglong *)(param_1 + 0x88);
    1127:   Var8 = (unkuint9)(ulonglong)Var10 + (unkuint9)SUB168(auVar23 * auVar77,0) +
    1128:          (unkuint9)((char)((unkuint9)Var8 >> 0x40) != '\0');

## FUN_140531d60 */ — reconstrucao/src/decompiled_02.c:1125
reconstrucao/src/../include/ghidra_function_prototypes.h:1125:65: error: unknown type name ‘rsize_t’; did you mean ‘size_t’?

    1122:   Var10 = (unkuint9)(uVar130 + uVar9) + (unkuint9)SUB168(auVar22 * auVar76,8);
    1123:   auVar23._8_8_ = 0;
    1124:   auVar23._0_8_ = uVar134;
    1125:   auVar77._8_8_ = 0;
    1126:   auVar77._0_8_ = *(ulonglong *)(param_1 + 0x88);
    1127:   Var8 = (unkuint9)(ulonglong)Var10 + (unkuint9)SUB168(auVar23 * auVar77,0) +
    1128:          (unkuint9)((char)((unkuint9)Var8 >> 0x40) != '\0');

## FUN_140531d60 */ — reconstrucao/src/decompiled_02.c:1126
reconstrucao/src/../include/ghidra_function_prototypes.h:1126:1: error: unknown type name ‘errno_t’

    1123:   auVar23._8_8_ = 0;
    1124:   auVar23._0_8_ = uVar134;
    1125:   auVar77._8_8_ = 0;
    1126:   auVar77._0_8_ = *(ulonglong *)(param_1 + 0x88);
    1127:   Var8 = (unkuint9)(ulonglong)Var10 + (unkuint9)SUB168(auVar23 * auVar77,0) +
    1128:          (unkuint9)((char)((unkuint9)Var8 >> 0x40) != '\0');
    1129:   Var12 = (unkuint9)(uVar4 + uVar2) + (unkuint9)SUB168(auVar23 * auVar77,8) +

## FUN_140531d60 */ — reconstrucao/src/decompiled_02.c:1126
reconstrucao/src/../include/ghidra_function_prototypes.h:1126:38: error: unknown type name ‘rsize_t’; did you mean ‘size_t’?

    1123:   auVar23._8_8_ = 0;
    1124:   auVar23._0_8_ = uVar134;
    1125:   auVar77._8_8_ = 0;
    1126:   auVar77._0_8_ = *(ulonglong *)(param_1 + 0x88);
    1127:   Var8 = (unkuint9)(ulonglong)Var10 + (unkuint9)SUB168(auVar23 * auVar77,0) +
    1128:          (unkuint9)((char)((unkuint9)Var8 >> 0x40) != '\0');
    1129:   Var12 = (unkuint9)(uVar4 + uVar2) + (unkuint9)SUB168(auVar23 * auVar77,8) +

## FUN_140531d60 */ — reconstrucao/src/decompiled_02.c:1126
reconstrucao/src/../include/ghidra_function_prototypes.h:1126:66: error: unknown type name ‘rsize_t’; did you mean ‘size_t’?

    1123:   auVar23._8_8_ = 0;
    1124:   auVar23._0_8_ = uVar134;
    1125:   auVar77._8_8_ = 0;
    1126:   auVar77._0_8_ = *(ulonglong *)(param_1 + 0x88);
    1127:   Var8 = (unkuint9)(ulonglong)Var10 + (unkuint9)SUB168(auVar23 * auVar77,0) +
    1128:          (unkuint9)((char)((unkuint9)Var8 >> 0x40) != '\0');
    1129:   Var12 = (unkuint9)(uVar4 + uVar2) + (unkuint9)SUB168(auVar23 * auVar77,8) +

## FUN_140531d60 */ — reconstrucao/src/decompiled_02.c:1127
reconstrucao/src/../include/ghidra_function_prototypes.h:1127:1: error: unknown type name ‘errno_t’

    1124:   auVar23._0_8_ = uVar134;
    1125:   auVar77._8_8_ = 0;
    1126:   auVar77._0_8_ = *(ulonglong *)(param_1 + 0x88);
    1127:   Var8 = (unkuint9)(ulonglong)Var10 + (unkuint9)SUB168(auVar23 * auVar77,0) +
    1128:          (unkuint9)((char)((unkuint9)Var8 >> 0x40) != '\0');
    1129:   Var12 = (unkuint9)(uVar4 + uVar2) + (unkuint9)SUB168(auVar23 * auVar77,8) +
    1130:           (unkuint9)((char)((unkuint9)Var10 >> 0x40) != '\0');

## FUN_140531d60 */ — reconstrucao/src/decompiled_02.c:1127
reconstrucao/src/../include/ghidra_function_prototypes.h:1127:37: error: unknown type name ‘rsize_t’; did you mean ‘size_t’?

    1124:   auVar23._0_8_ = uVar134;
    1125:   auVar77._8_8_ = 0;
    1126:   auVar77._0_8_ = *(ulonglong *)(param_1 + 0x88);
    1127:   Var8 = (unkuint9)(ulonglong)Var10 + (unkuint9)SUB168(auVar23 * auVar77,0) +
    1128:          (unkuint9)((char)((unkuint9)Var8 >> 0x40) != '\0');
    1129:   Var12 = (unkuint9)(uVar4 + uVar2) + (unkuint9)SUB168(auVar23 * auVar77,8) +
    1130:           (unkuint9)((char)((unkuint9)Var10 >> 0x40) != '\0');

## FUN_140531d60 */ — reconstrucao/src/decompiled_02.c:1128
reconstrucao/src/../include/ghidra_function_prototypes.h:1128:1: error: unknown type name ‘errno_t’

    1125:   auVar77._8_8_ = 0;
    1126:   auVar77._0_8_ = *(ulonglong *)(param_1 + 0x88);
    1127:   Var8 = (unkuint9)(ulonglong)Var10 + (unkuint9)SUB168(auVar23 * auVar77,0) +
    1128:          (unkuint9)((char)((unkuint9)Var8 >> 0x40) != '\0');
    1129:   Var12 = (unkuint9)(uVar4 + uVar2) + (unkuint9)SUB168(auVar23 * auVar77,8) +
    1130:           (unkuint9)((char)((unkuint9)Var10 >> 0x40) != '\0');
    1131:   auVar24._8_8_ = 0;

## FUN_140531d60 */ — reconstrucao/src/decompiled_02.c:1128
reconstrucao/src/../include/ghidra_function_prototypes.h:1128:37: error: unknown type name ‘rsize_t’; did you mean ‘size_t’?

    1125:   auVar77._8_8_ = 0;
    1126:   auVar77._0_8_ = *(ulonglong *)(param_1 + 0x88);
    1127:   Var8 = (unkuint9)(ulonglong)Var10 + (unkuint9)SUB168(auVar23 * auVar77,0) +
    1128:          (unkuint9)((char)((unkuint9)Var8 >> 0x40) != '\0');
    1129:   Var12 = (unkuint9)(uVar4 + uVar2) + (unkuint9)SUB168(auVar23 * auVar77,8) +
    1130:           (unkuint9)((char)((unkuint9)Var10 >> 0x40) != '\0');
    1131:   auVar24._8_8_ = 0;

## FUN_140531d60 */ — reconstrucao/src/decompiled_02.c:1129
reconstrucao/src/../include/ghidra_function_prototypes.h:1129:1: error: unknown type name ‘errno_t’

    1126:   auVar77._0_8_ = *(ulonglong *)(param_1 + 0x88);
    1127:   Var8 = (unkuint9)(ulonglong)Var10 + (unkuint9)SUB168(auVar23 * auVar77,0) +
    1128:          (unkuint9)((char)((unkuint9)Var8 >> 0x40) != '\0');
    1129:   Var12 = (unkuint9)(uVar4 + uVar2) + (unkuint9)SUB168(auVar23 * auVar77,8) +
    1130:           (unkuint9)((char)((unkuint9)Var10 >> 0x40) != '\0');
    1131:   auVar24._8_8_ = 0;
    1132:   auVar24._0_8_ = uVar134;

## FUN_140531d60 */ — reconstrucao/src/decompiled_02.c:1129
reconstrucao/src/../include/ghidra_function_prototypes.h:1129:38: error: unknown type name ‘rsize_t’; did you mean ‘size_t’?

    1126:   auVar77._0_8_ = *(ulonglong *)(param_1 + 0x88);
    1127:   Var8 = (unkuint9)(ulonglong)Var10 + (unkuint9)SUB168(auVar23 * auVar77,0) +
    1128:          (unkuint9)((char)((unkuint9)Var8 >> 0x40) != '\0');
    1129:   Var12 = (unkuint9)(uVar4 + uVar2) + (unkuint9)SUB168(auVar23 * auVar77,8) +
    1130:           (unkuint9)((char)((unkuint9)Var10 >> 0x40) != '\0');
    1131:   auVar24._8_8_ = 0;
    1132:   auVar24._0_8_ = uVar134;

## FUN_140531d60 */ — reconstrucao/src/decompiled_02.c:1129
reconstrucao/src/../include/ghidra_function_prototypes.h:1129:70: error: unknown type name ‘rsize_t’; did you mean ‘size_t’?

    1126:   auVar77._0_8_ = *(ulonglong *)(param_1 + 0x88);
    1127:   Var8 = (unkuint9)(ulonglong)Var10 + (unkuint9)SUB168(auVar23 * auVar77,0) +
    1128:          (unkuint9)((char)((unkuint9)Var8 >> 0x40) != '\0');
    1129:   Var12 = (unkuint9)(uVar4 + uVar2) + (unkuint9)SUB168(auVar23 * auVar77,8) +
    1130:           (unkuint9)((char)((unkuint9)Var10 >> 0x40) != '\0');
    1131:   auVar24._8_8_ = 0;
    1132:   auVar24._0_8_ = uVar134;

## FUN_140531d60 */ — reconstrucao/src/decompiled_02.c:1130
reconstrucao/src/../include/ghidra_function_prototypes.h:1130:1: error: unknown type name ‘errno_t’

    1127:   Var8 = (unkuint9)(ulonglong)Var10 + (unkuint9)SUB168(auVar23 * auVar77,0) +
    1128:          (unkuint9)((char)((unkuint9)Var8 >> 0x40) != '\0');
    1129:   Var12 = (unkuint9)(uVar4 + uVar2) + (unkuint9)SUB168(auVar23 * auVar77,8) +
    1130:           (unkuint9)((char)((unkuint9)Var10 >> 0x40) != '\0');
    1131:   auVar24._8_8_ = 0;
    1132:   auVar24._0_8_ = uVar134;
    1133:   auVar78._8_8_ = 0;

## FUN_140531d60 */ — reconstrucao/src/decompiled_02.c:1130
reconstrucao/src/../include/ghidra_function_prototypes.h:1130:38: error: unknown type name ‘rsize_t’; did you mean ‘size_t’?

    1127:   Var8 = (unkuint9)(ulonglong)Var10 + (unkuint9)SUB168(auVar23 * auVar77,0) +
    1128:          (unkuint9)((char)((unkuint9)Var8 >> 0x40) != '\0');
    1129:   Var12 = (unkuint9)(uVar4 + uVar2) + (unkuint9)SUB168(auVar23 * auVar77,8) +
    1130:           (unkuint9)((char)((unkuint9)Var10 >> 0x40) != '\0');
    1131:   auVar24._8_8_ = 0;
    1132:   auVar24._0_8_ = uVar134;
    1133:   auVar78._8_8_ = 0;

## FUN_140531d60 */ — reconstrucao/src/decompiled_02.c:1130
reconstrucao/src/../include/ghidra_function_prototypes.h:1130:70: error: unknown type name ‘rsize_t’; did you mean ‘size_t’?

    1127:   Var8 = (unkuint9)(ulonglong)Var10 + (unkuint9)SUB168(auVar23 * auVar77,0) +
    1128:          (unkuint9)((char)((unkuint9)Var8 >> 0x40) != '\0');
    1129:   Var12 = (unkuint9)(uVar4 + uVar2) + (unkuint9)SUB168(auVar23 * auVar77,8) +
    1130:           (unkuint9)((char)((unkuint9)Var10 >> 0x40) != '\0');
    1131:   auVar24._8_8_ = 0;
    1132:   auVar24._0_8_ = uVar134;
    1133:   auVar78._8_8_ = 0;

## FUN_140531d60 */ — reconstrucao/src/decompiled_02.c:1131
reconstrucao/src/../include/ghidra_function_prototypes.h:1131:1: error: unknown type name ‘errno_t’

    1128:          (unkuint9)((char)((unkuint9)Var8 >> 0x40) != '\0');
    1129:   Var12 = (unkuint9)(uVar4 + uVar2) + (unkuint9)SUB168(auVar23 * auVar77,8) +
    1130:           (unkuint9)((char)((unkuint9)Var10 >> 0x40) != '\0');
    1131:   auVar24._8_8_ = 0;
    1132:   auVar24._0_8_ = uVar134;
    1133:   auVar78._8_8_ = 0;
    1134:   auVar78._0_8_ = *(ulonglong *)(param_1 + 0x90);

## FUN_140531d60 */ — reconstrucao/src/decompiled_02.c:1131
reconstrucao/src/../include/ghidra_function_prototypes.h:1131:40: error: unknown type name ‘rsize_t’; did you mean ‘size_t’?

    1128:          (unkuint9)((char)((unkuint9)Var8 >> 0x40) != '\0');
    1129:   Var12 = (unkuint9)(uVar4 + uVar2) + (unkuint9)SUB168(auVar23 * auVar77,8) +
    1130:           (unkuint9)((char)((unkuint9)Var10 >> 0x40) != '\0');
    1131:   auVar24._8_8_ = 0;
    1132:   auVar24._0_8_ = uVar134;
    1133:   auVar78._8_8_ = 0;
    1134:   auVar78._0_8_ = *(ulonglong *)(param_1 + 0x90);

## FUN_140531d60 */ — reconstrucao/src/decompiled_02.c:1132
reconstrucao/src/../include/ghidra_function_prototypes.h:1132:1: error: unknown type name ‘errno_t’

    1129:   Var12 = (unkuint9)(uVar4 + uVar2) + (unkuint9)SUB168(auVar23 * auVar77,8) +
    1130:           (unkuint9)((char)((unkuint9)Var10 >> 0x40) != '\0');
    1131:   auVar24._8_8_ = 0;
    1132:   auVar24._0_8_ = uVar134;
    1133:   auVar78._8_8_ = 0;
    1134:   auVar78._0_8_ = *(ulonglong *)(param_1 + 0x90);
    1135:   Var10 = (unkuint9)(ulonglong)Var12 + (unkuint9)SUB168(auVar24 * auVar78,0) +

## FUN_140531d60 */ — reconstrucao/src/decompiled_02.c:1132
reconstrucao/src/../include/ghidra_function_prototypes.h:1132:40: error: unknown type name ‘rsize_t’; did you mean ‘size_t’?

    1129:   Var12 = (unkuint9)(uVar4 + uVar2) + (unkuint9)SUB168(auVar23 * auVar77,8) +
    1130:           (unkuint9)((char)((unkuint9)Var10 >> 0x40) != '\0');
    1131:   auVar24._8_8_ = 0;
    1132:   auVar24._0_8_ = uVar134;
    1133:   auVar78._8_8_ = 0;
    1134:   auVar78._0_8_ = *(ulonglong *)(param_1 + 0x90);
    1135:   Var10 = (unkuint9)(ulonglong)Var12 + (unkuint9)SUB168(auVar24 * auVar78,0) +

## FUN_140531d60 */ — reconstrucao/src/decompiled_02.c:1133
reconstrucao/src/../include/ghidra_function_prototypes.h:1133:1: error: unknown type name ‘errno_t’

    1130:           (unkuint9)((char)((unkuint9)Var10 >> 0x40) != '\0');
    1131:   auVar24._8_8_ = 0;
    1132:   auVar24._0_8_ = uVar134;
    1133:   auVar78._8_8_ = 0;
    1134:   auVar78._0_8_ = *(ulonglong *)(param_1 + 0x90);
    1135:   Var10 = (unkuint9)(ulonglong)Var12 + (unkuint9)SUB168(auVar24 * auVar78,0) +
    1136:           (unkuint9)((char)((unkuint9)Var8 >> 0x40) != '\0');

## FUN_140531d60 */ — reconstrucao/src/decompiled_02.c:1133
reconstrucao/src/../include/ghidra_function_prototypes.h:1133:41: error: unknown type name ‘rsize_t’; did you mean ‘size_t’?

    1130:           (unkuint9)((char)((unkuint9)Var10 >> 0x40) != '\0');
    1131:   auVar24._8_8_ = 0;
    1132:   auVar24._0_8_ = uVar134;
    1133:   auVar78._8_8_ = 0;
    1134:   auVar78._0_8_ = *(ulonglong *)(param_1 + 0x90);
    1135:   Var10 = (unkuint9)(ulonglong)Var12 + (unkuint9)SUB168(auVar24 * auVar78,0) +
    1136:           (unkuint9)((char)((unkuint9)Var8 >> 0x40) != '\0');

## FUN_140531d60 */ — reconstrucao/src/decompiled_02.c:1133
reconstrucao/src/../include/ghidra_function_prototypes.h:1133:76: error: unknown type name ‘rsize_t’; did you mean ‘size_t’?

    1130:           (unkuint9)((char)((unkuint9)Var10 >> 0x40) != '\0');
    1131:   auVar24._8_8_ = 0;
    1132:   auVar24._0_8_ = uVar134;
    1133:   auVar78._8_8_ = 0;
    1134:   auVar78._0_8_ = *(ulonglong *)(param_1 + 0x90);
    1135:   Var10 = (unkuint9)(ulonglong)Var12 + (unkuint9)SUB168(auVar24 * auVar78,0) +
    1136:           (unkuint9)((char)((unkuint9)Var8 >> 0x40) != '\0');

## FUN_140531d60 */ — reconstrucao/src/decompiled_02.c:1134
reconstrucao/src/../include/ghidra_function_prototypes.h:1134:1: error: unknown type name ‘errno_t’

    1131:   auVar24._8_8_ = 0;
    1132:   auVar24._0_8_ = uVar134;
    1133:   auVar78._8_8_ = 0;
    1134:   auVar78._0_8_ = *(ulonglong *)(param_1 + 0x90);
    1135:   Var10 = (unkuint9)(ulonglong)Var12 + (unkuint9)SUB168(auVar24 * auVar78,0) +
    1136:           (unkuint9)((char)((unkuint9)Var8 >> 0x40) != '\0');
    1137:   Var13 = (unkuint9)(uVar127 - uVar134) + (unkuint9)SUB168(auVar24 * auVar78,8) +

## FUN_140531d60 */ — reconstrucao/src/decompiled_02.c:1134
reconstrucao/src/../include/ghidra_function_prototypes.h:1134:41: error: unknown type name ‘rsize_t’; did you mean ‘size_t’?

    1131:   auVar24._8_8_ = 0;
    1132:   auVar24._0_8_ = uVar134;
    1133:   auVar78._8_8_ = 0;
    1134:   auVar78._0_8_ = *(ulonglong *)(param_1 + 0x90);
    1135:   Var10 = (unkuint9)(ulonglong)Var12 + (unkuint9)SUB168(auVar24 * auVar78,0) +
    1136:           (unkuint9)((char)((unkuint9)Var8 >> 0x40) != '\0');
    1137:   Var13 = (unkuint9)(uVar127 - uVar134) + (unkuint9)SUB168(auVar24 * auVar78,8) +

## FUN_140531d60 */ — reconstrucao/src/decompiled_02.c:1134
reconstrucao/src/../include/ghidra_function_prototypes.h:1134:76: error: unknown type name ‘rsize_t’; did you mean ‘size_t’?

    1131:   auVar24._8_8_ = 0;
    1132:   auVar24._0_8_ = uVar134;
    1133:   auVar78._8_8_ = 0;
    1134:   auVar78._0_8_ = *(ulonglong *)(param_1 + 0x90);
    1135:   Var10 = (unkuint9)(ulonglong)Var12 + (unkuint9)SUB168(auVar24 * auVar78,0) +
    1136:           (unkuint9)((char)((unkuint9)Var8 >> 0x40) != '\0');
    1137:   Var13 = (unkuint9)(uVar127 - uVar134) + (unkuint9)SUB168(auVar24 * auVar78,8) +

## FUN_140532320 */ — reconstrucao/src/decompiled_02.c:3380
reconstrucao/src/../include/ghidra_function_prototypes.h:3380:51: error: unknown type name ‘IMAGE_DOS_HEADER’

    3377:          (unkuint9)((char)((unkuint9)Var4 >> 0x40) != '\0');
    3378:   auVar78._8_8_ = 0;
    3379:   auVar78._0_8_ = uVar1;
    3380:   auVar334._8_8_ = 0;
    3381:   auVar334._0_8_ = param_1[3];
    3382:   Var4 = (unkuint9)(ulonglong)Var5 + (unkuint9)SUB168(auVar78 * auVar334,0) +
    3383:          (unkuint9)((char)((unkuint9)Var3 >> 0x40) != '\0');

## FUN_1405412ec */ — reconstrucao/src/decompiled_02.c:17366
reconstrucao/src/../include/ghidra_function_prototypes.h:17366:37: error: unknown type name ‘PSLIST_HEADER’

    17363: undefined8 * FUN_1405412ec(longlong param_1)
    17364: 
    17365: {
    17366:   undefined1 uVar1;
    17367:   char cVar2;
    17368:   undefined8 *puVar3;
    17369:   undefined8 *puVar4;

## FUN_1405412ec */ — reconstrucao/src/decompiled_02.c:17366
reconstrucao/src/../include/ghidra_function_prototypes.h:17366:59: error: unknown type name ‘ULONGLONG’

    17363: undefined8 * FUN_1405412ec(longlong param_1)
    17364: 
    17365: {
    17366:   undefined1 uVar1;
    17367:   char cVar2;
    17368:   undefined8 *puVar3;
    17369:   undefined8 *puVar4;

## FUN_1405412ec */ — reconstrucao/src/decompiled_02.c:17367
reconstrucao/src/../include/ghidra_function_prototypes.h:17367:37: error: unknown type name ‘PSLIST_HEADER’

    17364: 
    17365: {
    17366:   undefined1 uVar1;
    17367:   char cVar2;
    17368:   undefined8 *puVar3;
    17369:   undefined8 *puVar4;
    17370:   

## FUN_140545320 */ — reconstrucao/src/decompiled_02.c:20616
reconstrucao/src/../include/ghidra_function_prototypes.h:20616:55: error: unknown type name ‘_EXCEPTION_RECORD’

    20613:   undefined8 uVar1;
    20614:   
    20615:   uVar1 = FUN_140541388(SystemReserved1[0xf],0,0);
    20616:   FUN_140710f0c(param_2,uVar1,param_3);
    20617:   return;
    20618: }
    20619: 

## FUN_140545320 */ — reconstrucao/src/decompiled_02.c:20619
reconstrucao/src/../include/ghidra_function_prototypes.h:20619:36: error: unknown type name ‘PSLIST_HEADER’

    20616:   FUN_140710f0c(param_2,uVar1,param_3);
    20617:   return;
    20618: }
    20619: 
    20620: /* Ghidra label: FUN_140545364 */
    20621: /* Ghidra address: 140545364 */
    20622: ulonglong FUN_140545364(void)

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

## FUN_14077f3e0 */ — reconstrucao/src/decompiled_03.c:8
reconstrucao/src/../include/ghidra_function_prototypes.h:8:1: error: unknown type name ‘NTSTATUS’

    5: 
    6: /* Ghidra label: FUN_14077f3e0 */
    7: /* Ghidra address: 14077f3e0 */
    8: int FUN_14077f3e0(longlong param_1,undefined4 *param_2,longlong param_3,undefined4 param_4,
    9:                  longlong *param_5)
    10: 
    11: {

## FUN_14077f3e0 */ — reconstrucao/src/decompiled_03.c:8
reconstrucao/src/../include/ghidra_function_prototypes.h:8:46: error: unknown type name ‘HANDLE’

    5: 
    6: /* Ghidra label: FUN_14077f3e0 */
    7: /* Ghidra address: 14077f3e0 */
    8: int FUN_14077f3e0(longlong param_1,undefined4 *param_2,longlong param_3,undefined4 param_4,
    9:                  longlong *param_5)
    10: 
    11: {

## FUN_14077f3e0 */ — reconstrucao/src/decompiled_03.c:9
reconstrucao/src/../include/ghidra_function_prototypes.h:9:1: error: unknown type name ‘NTSTATUS’

    6: /* Ghidra label: FUN_14077f3e0 */
    7: /* Ghidra address: 14077f3e0 */
    8: int FUN_14077f3e0(longlong param_1,undefined4 *param_2,longlong param_3,undefined4 param_4,
    9:                  longlong *param_5)
    10: 
    11: {
    12:   undefined4 uVar1;

## FUN_140780d0c */ — reconstrucao/src/decompiled_03.c:1112
reconstrucao/src/../include/ghidra_function_prototypes.h:1112:1: error: unknown type name ‘errno_t’

    1109:     uStack_54 = param_2;
    1110:     uStack_30 = param_4;
    1111:     FUN_1409e7d20(0x57,&uStack_68,0x60,0,0);
    1112:   }
    1113:   return;
    1114: }
    1115: 

## FUN_140780d0c */ — reconstrucao/src/decompiled_03.c:1113
reconstrucao/src/../include/ghidra_function_prototypes.h:1113:1: error: unknown type name ‘errno_t’

    1110:     uStack_30 = param_4;
    1111:     FUN_1409e7d20(0x57,&uStack_68,0x60,0,0);
    1112:   }
    1113:   return;
    1114: }
    1115: 
    1116: /* Ghidra label: FUN_140780db0 */

## FUN_140780d0c */ — reconstrucao/src/decompiled_03.c:1114
reconstrucao/src/../include/ghidra_function_prototypes.h:1114:1: error: unknown type name ‘errno_t’

    1111:     FUN_1409e7d20(0x57,&uStack_68,0x60,0,0);
    1112:   }
    1113:   return;
    1114: }
    1115: 
    1116: /* Ghidra label: FUN_140780db0 */
    1117: /* Ghidra address: 140780db0 */

## FUN_140780d0c */ — reconstrucao/src/decompiled_03.c:1115
reconstrucao/src/../include/ghidra_function_prototypes.h:1115:1: error: unknown type name ‘errno_t’

    1112:   }
    1113:   return;
    1114: }
    1115: 
    1116: /* Ghidra label: FUN_140780db0 */
    1117: /* Ghidra address: 140780db0 */
    1118: FUN_140780db0(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,

## FUN_140780d0c */ — reconstrucao/src/decompiled_03.c:1116
reconstrucao/src/../include/ghidra_function_prototypes.h:1116:1: error: unknown type name ‘errno_t’

    1113:   return;
    1114: }
    1115: 
    1116: /* Ghidra label: FUN_140780db0 */
    1117: /* Ghidra address: 140780db0 */
    1118: FUN_140780db0(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
    1119:              undefined8 param_5,undefined8 param_6)

## FUN_140780db0 */ — reconstrucao/src/decompiled_03.c:1117
reconstrucao/src/../include/ghidra_function_prototypes.h:1117:1: error: unknown type name ‘errno_t’

    1114: }
    1115: 
    1116: /* Ghidra label: FUN_140780db0 */
    1117: /* Ghidra address: 140780db0 */
    1118: FUN_140780db0(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
    1119:              undefined8 param_5,undefined8 param_6)
    1120: 

## FUN_140780db0 */ — reconstrucao/src/decompiled_03.c:1118
reconstrucao/src/../include/ghidra_function_prototypes.h:1118:1: error: unknown type name ‘errno_t’

    1115: 
    1116: /* Ghidra label: FUN_140780db0 */
    1117: /* Ghidra address: 140780db0 */
    1118: FUN_140780db0(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
    1119:              undefined8 param_5,undefined8 param_6)
    1120: 
    1121: {

## FUN_140780db0 */ — reconstrucao/src/decompiled_03.c:1119
reconstrucao/src/../include/ghidra_function_prototypes.h:1119:1: error: unknown type name ‘errno_t’

    1116: /* Ghidra label: FUN_140780db0 */
    1117: /* Ghidra address: 140780db0 */
    1118: FUN_140780db0(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
    1119:              undefined8 param_5,undefined8 param_6)
    1120: 
    1121: {
    1122:   int iVar1;

## FUN_140780db0 */ — reconstrucao/src/decompiled_03.c:1120
reconstrucao/src/../include/ghidra_function_prototypes.h:1120:1: error: unknown type name ‘errno_t’

    1117: /* Ghidra address: 140780db0 */
    1118: FUN_140780db0(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
    1119:              undefined8 param_5,undefined8 param_6)
    1120: 
    1121: {
    1122:   int iVar1;
    1123:   int aiStack_18 [2];

## FUN_140780db0 */ — reconstrucao/src/decompiled_03.c:1121
reconstrucao/src/../include/ghidra_function_prototypes.h:1121:1: error: unknown type name ‘errno_t’

    1118: FUN_140780db0(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
    1119:              undefined8 param_5,undefined8 param_6)
    1120: 
    1121: {
    1122:   int iVar1;
    1123:   int aiStack_18 [2];
    1124:   undefined4 uStack_10;

## FUN_140780db0 */ — reconstrucao/src/decompiled_03.c:1122
reconstrucao/src/../include/ghidra_function_prototypes.h:1122:1: error: unknown type name ‘errno_t’

    1119:              undefined8 param_5,undefined8 param_6)
    1120: 
    1121: {
    1122:   int iVar1;
    1123:   int aiStack_18 [2];
    1124:   undefined4 uStack_10;
    1125:   undefined4 uStack_c;

## FUN_140780db0 */ — reconstrucao/src/decompiled_03.c:1123
reconstrucao/src/../include/ghidra_function_prototypes.h:1123:1: error: unknown type name ‘errno_t’

    1120: 
    1121: {
    1122:   int iVar1;
    1123:   int aiStack_18 [2];
    1124:   undefined4 uStack_10;
    1125:   undefined4 uStack_c;
    1126:   

## FUN_140780db0 */ — reconstrucao/src/decompiled_03.c:1124
reconstrucao/src/../include/ghidra_function_prototypes.h:1124:1: error: unknown type name ‘errno_t’

    1121: {
    1122:   int iVar1;
    1123:   int aiStack_18 [2];
    1124:   undefined4 uStack_10;
    1125:   undefined4 uStack_c;
    1126:   
    1127:   aiStack_18[0] = 0;

## FUN_140780db0 */ — reconstrucao/src/decompiled_03.c:1125
reconstrucao/src/../include/ghidra_function_prototypes.h:1125:1: error: unknown type name ‘errno_t’

    1122:   int iVar1;
    1123:   int aiStack_18 [2];
    1124:   undefined4 uStack_10;
    1125:   undefined4 uStack_c;
    1126:   
    1127:   aiStack_18[0] = 0;
    1128:   uStack_c = 0;

## FUN_140780db0 */ — reconstrucao/src/decompiled_03.c:1125
reconstrucao/src/../include/ghidra_function_prototypes.h:1125:37: error: unknown type name ‘rsize_t’; did you mean ‘size_t’?

    1122:   int iVar1;
    1123:   int aiStack_18 [2];
    1124:   undefined4 uStack_10;
    1125:   undefined4 uStack_c;
    1126:   
    1127:   aiStack_18[0] = 0;
    1128:   uStack_c = 0;

## FUN_140780db0 */ — reconstrucao/src/decompiled_03.c:1125
reconstrucao/src/../include/ghidra_function_prototypes.h:1125:65: error: unknown type name ‘rsize_t’; did you mean ‘size_t’?

    1122:   int iVar1;
    1123:   int aiStack_18 [2];
    1124:   undefined4 uStack_10;
    1125:   undefined4 uStack_c;
    1126:   
    1127:   aiStack_18[0] = 0;
    1128:   uStack_c = 0;

## FUN_140780db0 */ — reconstrucao/src/decompiled_03.c:1126
reconstrucao/src/../include/ghidra_function_prototypes.h:1126:1: error: unknown type name ‘errno_t’

    1123:   int aiStack_18 [2];
    1124:   undefined4 uStack_10;
    1125:   undefined4 uStack_c;
    1126:   
    1127:   aiStack_18[0] = 0;
    1128:   uStack_c = 0;
    1129:   uStack_10 = 0x25;

## FUN_140780db0 */ — reconstrucao/src/decompiled_03.c:1126
reconstrucao/src/../include/ghidra_function_prototypes.h:1126:38: error: unknown type name ‘rsize_t’; did you mean ‘size_t’?

    1123:   int aiStack_18 [2];
    1124:   undefined4 uStack_10;
    1125:   undefined4 uStack_c;
    1126:   
    1127:   aiStack_18[0] = 0;
    1128:   uStack_c = 0;
    1129:   uStack_10 = 0x25;

## FUN_140780db0 */ — reconstrucao/src/decompiled_03.c:1126
reconstrucao/src/../include/ghidra_function_prototypes.h:1126:66: error: unknown type name ‘rsize_t’; did you mean ‘size_t’?

    1123:   int aiStack_18 [2];
    1124:   undefined4 uStack_10;
    1125:   undefined4 uStack_c;
    1126:   
    1127:   aiStack_18[0] = 0;
    1128:   uStack_c = 0;
    1129:   uStack_10 = 0x25;

## FUN_140780db0 */ — reconstrucao/src/decompiled_03.c:1127
reconstrucao/src/../include/ghidra_function_prototypes.h:1127:1: error: unknown type name ‘errno_t’

    1124:   undefined4 uStack_10;
    1125:   undefined4 uStack_c;
    1126:   
    1127:   aiStack_18[0] = 0;
    1128:   uStack_c = 0;
    1129:   uStack_10 = 0x25;
    1130:   iVar1 = FUN_1409e7d20(0x57,&uStack_10,8,aiStack_18,4);

## FUN_140780db0 */ — reconstrucao/src/decompiled_03.c:1127
reconstrucao/src/../include/ghidra_function_prototypes.h:1127:37: error: unknown type name ‘rsize_t’; did you mean ‘size_t’?

    1124:   undefined4 uStack_10;
    1125:   undefined4 uStack_c;
    1126:   
    1127:   aiStack_18[0] = 0;
    1128:   uStack_c = 0;
    1129:   uStack_10 = 0x25;
    1130:   iVar1 = FUN_1409e7d20(0x57,&uStack_10,8,aiStack_18,4);

## FUN_140780db0 */ — reconstrucao/src/decompiled_03.c:1128
reconstrucao/src/../include/ghidra_function_prototypes.h:1128:1: error: unknown type name ‘errno_t’

    1125:   undefined4 uStack_c;
    1126:   
    1127:   aiStack_18[0] = 0;
    1128:   uStack_c = 0;
    1129:   uStack_10 = 0x25;
    1130:   iVar1 = FUN_1409e7d20(0x57,&uStack_10,8,aiStack_18,4);
    1131:   if (iVar1 < 0) {

## FUN_140780db0 */ — reconstrucao/src/decompiled_03.c:1128
reconstrucao/src/../include/ghidra_function_prototypes.h:1128:37: error: unknown type name ‘rsize_t’; did you mean ‘size_t’?

    1125:   undefined4 uStack_c;
    1126:   
    1127:   aiStack_18[0] = 0;
    1128:   uStack_c = 0;
    1129:   uStack_10 = 0x25;
    1130:   iVar1 = FUN_1409e7d20(0x57,&uStack_10,8,aiStack_18,4);
    1131:   if (iVar1 < 0) {

## FUN_140780db0 */ — reconstrucao/src/decompiled_03.c:1129
reconstrucao/src/../include/ghidra_function_prototypes.h:1129:1: error: unknown type name ‘errno_t’

    1126:   
    1127:   aiStack_18[0] = 0;
    1128:   uStack_c = 0;
    1129:   uStack_10 = 0x25;
    1130:   iVar1 = FUN_1409e7d20(0x57,&uStack_10,8,aiStack_18,4);
    1131:   if (iVar1 < 0) {
    1132:     iVar1 = -1;

## FUN_140780db0 */ — reconstrucao/src/decompiled_03.c:1129
reconstrucao/src/../include/ghidra_function_prototypes.h:1129:38: error: unknown type name ‘rsize_t’; did you mean ‘size_t’?

    1126:   
    1127:   aiStack_18[0] = 0;
    1128:   uStack_c = 0;
    1129:   uStack_10 = 0x25;
    1130:   iVar1 = FUN_1409e7d20(0x57,&uStack_10,8,aiStack_18,4);
    1131:   if (iVar1 < 0) {
    1132:     iVar1 = -1;

## FUN_140780db0 */ — reconstrucao/src/decompiled_03.c:1129
reconstrucao/src/../include/ghidra_function_prototypes.h:1129:70: error: unknown type name ‘rsize_t’; did you mean ‘size_t’?

    1126:   
    1127:   aiStack_18[0] = 0;
    1128:   uStack_c = 0;
    1129:   uStack_10 = 0x25;
    1130:   iVar1 = FUN_1409e7d20(0x57,&uStack_10,8,aiStack_18,4);
    1131:   if (iVar1 < 0) {
    1132:     iVar1 = -1;

## FUN_140780db0 */ — reconstrucao/src/decompiled_03.c:1130
reconstrucao/src/../include/ghidra_function_prototypes.h:1130:1: error: unknown type name ‘errno_t’

    1127:   aiStack_18[0] = 0;
    1128:   uStack_c = 0;
    1129:   uStack_10 = 0x25;
    1130:   iVar1 = FUN_1409e7d20(0x57,&uStack_10,8,aiStack_18,4);
    1131:   if (iVar1 < 0) {
    1132:     iVar1 = -1;
    1133:   }

## FUN_140780db0 */ — reconstrucao/src/decompiled_03.c:1130
reconstrucao/src/../include/ghidra_function_prototypes.h:1130:38: error: unknown type name ‘rsize_t’; did you mean ‘size_t’?

    1127:   aiStack_18[0] = 0;
    1128:   uStack_c = 0;
    1129:   uStack_10 = 0x25;
    1130:   iVar1 = FUN_1409e7d20(0x57,&uStack_10,8,aiStack_18,4);
    1131:   if (iVar1 < 0) {
    1132:     iVar1 = -1;
    1133:   }

## FUN_140780db0 */ — reconstrucao/src/decompiled_03.c:1130
reconstrucao/src/../include/ghidra_function_prototypes.h:1130:70: error: unknown type name ‘rsize_t’; did you mean ‘size_t’?

    1127:   aiStack_18[0] = 0;
    1128:   uStack_c = 0;
    1129:   uStack_10 = 0x25;
    1130:   iVar1 = FUN_1409e7d20(0x57,&uStack_10,8,aiStack_18,4);
    1131:   if (iVar1 < 0) {
    1132:     iVar1 = -1;
    1133:   }

## FUN_140780db0 */ — reconstrucao/src/decompiled_03.c:1131
reconstrucao/src/../include/ghidra_function_prototypes.h:1131:1: error: unknown type name ‘errno_t’

    1128:   uStack_c = 0;
    1129:   uStack_10 = 0x25;
    1130:   iVar1 = FUN_1409e7d20(0x57,&uStack_10,8,aiStack_18,4);
    1131:   if (iVar1 < 0) {
    1132:     iVar1 = -1;
    1133:   }
    1134:   else {

## FUN_140780db0 */ — reconstrucao/src/decompiled_03.c:1131
reconstrucao/src/../include/ghidra_function_prototypes.h:1131:40: error: unknown type name ‘rsize_t’; did you mean ‘size_t’?

    1128:   uStack_c = 0;
    1129:   uStack_10 = 0x25;
    1130:   iVar1 = FUN_1409e7d20(0x57,&uStack_10,8,aiStack_18,4);
    1131:   if (iVar1 < 0) {
    1132:     iVar1 = -1;
    1133:   }
    1134:   else {

## FUN_140780db0 */ — reconstrucao/src/decompiled_03.c:1132
reconstrucao/src/../include/ghidra_function_prototypes.h:1132:1: error: unknown type name ‘errno_t’

    1129:   uStack_10 = 0x25;
    1130:   iVar1 = FUN_1409e7d20(0x57,&uStack_10,8,aiStack_18,4);
    1131:   if (iVar1 < 0) {
    1132:     iVar1 = -1;
    1133:   }
    1134:   else {
    1135:     iVar1 = aiStack_18[0];

## FUN_140780db0 */ — reconstrucao/src/decompiled_03.c:1132
reconstrucao/src/../include/ghidra_function_prototypes.h:1132:40: error: unknown type name ‘rsize_t’; did you mean ‘size_t’?

    1129:   uStack_10 = 0x25;
    1130:   iVar1 = FUN_1409e7d20(0x57,&uStack_10,8,aiStack_18,4);
    1131:   if (iVar1 < 0) {
    1132:     iVar1 = -1;
    1133:   }
    1134:   else {
    1135:     iVar1 = aiStack_18[0];

## FUN_140780db0 */ — reconstrucao/src/decompiled_03.c:1133
reconstrucao/src/../include/ghidra_function_prototypes.h:1133:1: error: unknown type name ‘errno_t’

    1130:   iVar1 = FUN_1409e7d20(0x57,&uStack_10,8,aiStack_18,4);
    1131:   if (iVar1 < 0) {
    1132:     iVar1 = -1;
    1133:   }
    1134:   else {
    1135:     iVar1 = aiStack_18[0];
    1136:     if ((DAT_140e67b50 != '\0') && (aiStack_18[0] == 0)) {

## FUN_140780db0 */ — reconstrucao/src/decompiled_03.c:1133
reconstrucao/src/../include/ghidra_function_prototypes.h:1133:41: error: unknown type name ‘rsize_t’; did you mean ‘size_t’?

    1130:   iVar1 = FUN_1409e7d20(0x57,&uStack_10,8,aiStack_18,4);
    1131:   if (iVar1 < 0) {
    1132:     iVar1 = -1;
    1133:   }
    1134:   else {
    1135:     iVar1 = aiStack_18[0];
    1136:     if ((DAT_140e67b50 != '\0') && (aiStack_18[0] == 0)) {

## FUN_140780db0 */ — reconstrucao/src/decompiled_03.c:1133
reconstrucao/src/../include/ghidra_function_prototypes.h:1133:76: error: unknown type name ‘rsize_t’; did you mean ‘size_t’?

    1130:   iVar1 = FUN_1409e7d20(0x57,&uStack_10,8,aiStack_18,4);
    1131:   if (iVar1 < 0) {
    1132:     iVar1 = -1;
    1133:   }
    1134:   else {
    1135:     iVar1 = aiStack_18[0];
    1136:     if ((DAT_140e67b50 != '\0') && (aiStack_18[0] == 0)) {

## FUN_140780db0 */ — reconstrucao/src/decompiled_03.c:1134
reconstrucao/src/../include/ghidra_function_prototypes.h:1134:1: error: unknown type name ‘errno_t’

    1131:   if (iVar1 < 0) {
    1132:     iVar1 = -1;
    1133:   }
    1134:   else {
    1135:     iVar1 = aiStack_18[0];
    1136:     if ((DAT_140e67b50 != '\0') && (aiStack_18[0] == 0)) {
    1137:                     /* WARNING: Subroutine does not return */

## FUN_140780db0 */ — reconstrucao/src/decompiled_03.c:1134
reconstrucao/src/../include/ghidra_function_prototypes.h:1134:41: error: unknown type name ‘rsize_t’; did you mean ‘size_t’?

    1131:   if (iVar1 < 0) {
    1132:     iVar1 = -1;
    1133:   }
    1134:   else {
    1135:     iVar1 = aiStack_18[0];
    1136:     if ((DAT_140e67b50 != '\0') && (aiStack_18[0] == 0)) {
    1137:                     /* WARNING: Subroutine does not return */

## FUN_140780db0 */ — reconstrucao/src/decompiled_03.c:1134
reconstrucao/src/../include/ghidra_function_prototypes.h:1134:76: error: unknown type name ‘rsize_t’; did you mean ‘size_t’?

    1131:   if (iVar1 < 0) {
    1132:     iVar1 = -1;
    1133:   }
    1134:   else {
    1135:     iVar1 = aiStack_18[0];
    1136:     if ((DAT_140e67b50 != '\0') && (aiStack_18[0] == 0)) {
    1137:                     /* WARNING: Subroutine does not return */

## FUN_140783a08 */ — reconstrucao/src/decompiled_03.c:3380
reconstrucao/src/../include/ghidra_function_prototypes.h:3380:51: error: unknown type name ‘IMAGE_DOS_HEADER’

    3377:   undefined4 uStack_1c;
    3378:   ulonglong uStack_18;
    3379:   
    3380:   uStack_18 = DAT_140e0a740 ^ (ulonglong)auStack_e8;
    3381:   if (5 < DAT_140fd98c8) {
    3382:     auStackX_18[0] = param_3;
    3383:     cVar1 = FUN_14042b0b0(&DAT_140fd98c8,1);

## FUN_1407943f8 */ — reconstrucao/src/decompiled_03.c:17366
reconstrucao/src/../include/ghidra_function_prototypes.h:17366:37: error: unknown type name ‘PSLIST_HEADER’

    17363:       iVar1 = 0;
    17364:     }
    17365:   }
    17366:   *puStack_40 = 0x10;
    17367:   if (lStack_48 != 0) {
    17368:     ObfDereferenceObject();
    17369:   }

## FUN_1407943f8 */ — reconstrucao/src/decompiled_03.c:17366
reconstrucao/src/../include/ghidra_function_prototypes.h:17366:59: error: unknown type name ‘ULONGLONG’

    17363:       iVar1 = 0;
    17364:     }
    17365:   }
    17366:   *puStack_40 = 0x10;
    17367:   if (lStack_48 != 0) {
    17368:     ObfDereferenceObject();
    17369:   }

## FUN_1407943f8 */ — reconstrucao/src/decompiled_03.c:17367
reconstrucao/src/../include/ghidra_function_prototypes.h:17367:37: error: unknown type name ‘PSLIST_HEADER’

    17364:     }
    17365:   }
    17366:   *puStack_40 = 0x10;
    17367:   if (lStack_48 != 0) {
    17368:     ObfDereferenceObject();
    17369:   }
    17370:   return iVar1;

## FUN_14079888c */ — reconstrucao/src/decompiled_03.c:20616
reconstrucao/src/../include/ghidra_function_prototypes.h:20616:55: error: unknown type name ‘_EXCEPTION_RECORD’

    20613:     }
    20614:   }
    20615:   else {
    20616:     uVar7 = uVar3;
    20617:     if (sVar1 == 3) {
    20618:       for (uVar3 = 0; uVar3 < *(uint *)(param_1 + 2); uVar3 = uVar3 + 1) {
    20619:         iVar2 = FUN_140456aec(*(undefined8 *)(param_1[3] + (ulonglong)uVar3 * 8),0xffff,&uStackX_8);

## FUN_14079888c */ — reconstrucao/src/decompiled_03.c:20619
reconstrucao/src/../include/ghidra_function_prototypes.h:20619:36: error: unknown type name ‘PSLIST_HEADER’

    20616:     uVar7 = uVar3;
    20617:     if (sVar1 == 3) {
    20618:       for (uVar3 = 0; uVar3 < *(uint *)(param_1 + 2); uVar3 = uVar3 + 1) {
    20619:         iVar2 = FUN_140456aec(*(undefined8 *)(param_1[3] + (ulonglong)uVar3 * 8),0xffff,&uStackX_8);
    20620:         if (iVar2 < 0) {
    20621:           return iVar2;
    20622:         }

## FUN_14077f3e0 */ — reconstrucao/src/decompiled_03.c:26
reconstrucao/src/decompiled_03.c:26:26: error: implicit declaration of function ‘ExAllocatePool2’; did you mean ‘ExAllocatePool’? [-Wimplicit-function-declaration]

    23:   }
    24:   else {
    25:     auStackX_20[0] = param_4;
    26:     plVar6 = (longlong *)ExAllocatePool2(0x100,0x60,*(undefined4 *)(param_1 + 0x18));
    27:     if (plVar6 == (longlong *)0x0) {
    28:       iVar5 = -0x3fffff66;
    29:     }

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
reconstrucao/src/decompiled_03.c:77:3: error: implicit declaration of function ‘EtwRegister’ [-Wimplicit-function-declaration]

    74: void FUN_14077f4f8(void)
    75: 
    76: {
    77:   EtwRegister(&DAT_14001bcb8,FUN_140a94cf0,0,&DAT_140f07240);
    78:   return;
    79: }
    80: 

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

## FUN_14077f528 */ — reconstrucao/src/decompiled_03.c:86
reconstrucao/src/decompiled_03.c:86:3: error: implicit declaration of function ‘PoRegisterPowerSettingCallback’; did you mean ‘PoUnregisterCoalescingCallback’? [-Wimplicit-function-declaration]

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
reconstrucao/src/decompiled_03.c:95:3: error: implicit declaration of function ‘PoUnregisterPowerSettingCallback’; did you mean ‘PoUnregisterCoalescingCallback’? [-Wimplicit-function-declaration]

    92: void FUN_14077f55c(void)
    93: 
    94: {
    95:   PoUnregisterPowerSettingCallback(DAT_140f06d38);
    96:   return;
    97: }
    98: 

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

## FUN_14077f580 */ — reconstrucao/src/decompiled_03.c:135
reconstrucao/src/decompiled_03.c:135:13: error: implicit declaration of function ‘FUN_1403dcb90’; did you mean ‘FUN_1407dcb90’? [-Wimplicit-function-declaration]

    132:     uStack_3c = param_3[1];
    133:     uStack_38 = param_3[2];
    134:     uStack_34 = param_3[3];
    135:     iVar1 = FUN_1403dcb90(uStack_30,&uStack_30,&uStack_40,param_4,0,&lStack_48);
    136:     lVar3 = lStack_48;
    137:     if (-1 < iVar1) {
    138:       iVar1 = FUN_140a329d0(lStack_48,&puStackX_8);

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
reconstrucao/src/decompiled_03.c:147:5: error: implicit declaration of function ‘FUN_140485460’; did you mean ‘FUN_1404c5460’? [-Wimplicit-function-declaration]

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
reconstrucao/src/decompiled_03.c:311:3: error: implicit declaration of function ‘FUN_14077f250’; did you mean ‘FUN_14070f250’? [-Wimplicit-function-declaration]

    308: void FUN_14077f900(void)
    309: 
    310: {
    311:   FUN_14077f250();
    312:   return;
    313: }
    314: 

## FUN_14077f918 */ — reconstrucao/src/decompiled_03.c:325
reconstrucao/src/decompiled_03.c:325:11: error: implicit declaration of function ‘FUN_1402f5ef0’; did you mean ‘FUN_140255ef0’? [-Wimplicit-function-declaration]

    322:   undefined8 uStack_18;
    323:   undefined8 uStack_10;
    324:   
    325:   lVar2 = FUN_1402f5ef0(&DAT_140f06ba8,0,0);
    326:   LOCK();
    327:   uVar1 = DAT_140f06ba8 & 1;
    328:   DAT_140f06ba8 = DAT_140f06ba8 | 1;

## FUN_14077f918 */ — reconstrucao/src/decompiled_03.c:325
reconstrucao/src/decompiled_03.c:325:26: error: ‘DAT_140f06ba8’ undeclared (first use in this function)

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
reconstrucao/src/decompiled_03.c:331:5: error: implicit declaration of function ‘FUN_1402f5950’; did you mean ‘FUN_1409f5970’? [-Wimplicit-function-declaration]

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
reconstrucao/src/decompiled_03.c:340:5: error: implicit declaration of function ‘KeSetTimer2’; did you mean ‘KeSetTimer’? [-Wimplicit-function-declaration]

    337:   if (DAT_140f06bb8 == 0) {
    338:     uStack_18 = 0;
    339:     uStack_10 = 0xffffffffffffffff;
    340:     KeSetTimer2(&DAT_140f06bc0,0xfffffffffd050f80,0,&uStack_18);
    341:   }
    342:   FUN_1404935fc(&DAT_140f06ba8);
    343:   return;

## FUN_14077f918 */ — reconstrucao/src/decompiled_03.c:340
reconstrucao/src/decompiled_03.c:340:18: error: ‘DAT_140f06bc0’ undeclared (first use in this function)

    337:   if (DAT_140f06bb8 == 0) {
    338:     uStack_18 = 0;
    339:     uStack_10 = 0xffffffffffffffff;
    340:     KeSetTimer2(&DAT_140f06bc0,0xfffffffffd050f80,0,&uStack_18);
    341:   }
    342:   FUN_1404935fc(&DAT_140f06ba8);
    343:   return;

## FUN_14077f9b0 */ — reconstrucao/src/decompiled_03.c:365
reconstrucao/src/decompiled_03.c:365:7: error: implicit declaration of function ‘FUN_1406d1200’; did you mean ‘FUN_1406d1b00’? [-Wimplicit-function-declaration]

    362:   if (lVar2 != 0) {
    363:     lVar3 = ExAllocatePool2(0x100,0x40,0x70687373);
    364:     if (lVar3 != 0) {
    365:       FUN_1406d1200(lVar2,0,0xa0);
    366:       FUN_1406d1200(lVar3,0,0x40);
    367:       AlpcInitializeMessageAttribute(0x20000000,lVar2,0xa0,auStack_10);
    368:       while( true ) {

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
reconstrucao/src/decompiled_03.c:370:17: error: implicit declaration of function ‘ZwAlpcSendWaitReceivePort’ [-Wimplicit-function-declaration]

    367:       AlpcInitializeMessageAttribute(0x20000000,lVar2,0xa0,auStack_10);
    368:       while( true ) {
    369:         uStackX_20 = 0x40;
    370:         iVar1 = ZwAlpcSendWaitReceivePort(DAT_140f06ba0,0,0,0,lVar3,&uStackX_20,lVar2,&uStack_18);
    371:         if (iVar1 != 0) break;
    372:         uVar4 = AlpcGetMessageAttribute(lVar2,0x20000000);
    373:         FUN_14077fb9c(lVar3,uVar4);

## FUN_14077f9b0 */ — reconstrucao/src/decompiled_03.c:370
reconstrucao/src/decompiled_03.c:370:43: error: ‘DAT_140f06ba0’ undeclared (first use in this function)

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

## FUN_140ac2d20 */ — reconstrucao/src/decompiled_04.c:8
reconstrucao/src/../include/ghidra_function_prototypes.h:8:1: error: unknown type name ‘NTSTATUS’

    5: 
    6: /* Ghidra label: FUN_140ac2d20 */
    7: /* Ghidra address: 140ac2d20 */
    8: undefined8 FUN_140ac2d20(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)
    9: 
    10: {
    11:   undefined8 uStack_40;

## FUN_140ac2d20 */ — reconstrucao/src/decompiled_04.c:8
reconstrucao/src/../include/ghidra_function_prototypes.h:8:46: error: unknown type name ‘HANDLE’

    5: 
    6: /* Ghidra label: FUN_140ac2d20 */
    7: /* Ghidra address: 140ac2d20 */
    8: undefined8 FUN_140ac2d20(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)
    9: 
    10: {
    11:   undefined8 uStack_40;

## FUN_140ac2d20 */ — reconstrucao/src/decompiled_04.c:9
reconstrucao/src/../include/ghidra_function_prototypes.h:9:1: error: unknown type name ‘NTSTATUS’

    6: /* Ghidra label: FUN_140ac2d20 */
    7: /* Ghidra address: 140ac2d20 */
    8: undefined8 FUN_140ac2d20(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)
    9: 
    10: {
    11:   undefined8 uStack_40;
    12:   undefined8 uStack_38;

## FUN_140ac41e0 */ — reconstrucao/src/decompiled_04.c:1112
reconstrucao/src/../include/ghidra_function_prototypes.h:1112:1: error: unknown type name ‘errno_t’

    1109: /* Ghidra address: 140ac41e0 */
    1110: uint * FUN_140ac41e0(longlong param_1,uint param_2,longlong param_3,undefined8 param_4,
    1111:                     undefined2 param_5)
    1112: 
    1113: {
    1114:   uint *puVar1;
    1115:   uint uVar2;

## FUN_140ac41e0 */ — reconstrucao/src/decompiled_04.c:1113
reconstrucao/src/../include/ghidra_function_prototypes.h:1113:1: error: unknown type name ‘errno_t’

    1110: uint * FUN_140ac41e0(longlong param_1,uint param_2,longlong param_3,undefined8 param_4,
    1111:                     undefined2 param_5)
    1112: 
    1113: {
    1114:   uint *puVar1;
    1115:   uint uVar2;
    1116:   int iVar3;

## FUN_140ac41e0 */ — reconstrucao/src/decompiled_04.c:1114
reconstrucao/src/../include/ghidra_function_prototypes.h:1114:1: error: unknown type name ‘errno_t’

    1111:                     undefined2 param_5)
    1112: 
    1113: {
    1114:   uint *puVar1;
    1115:   uint uVar2;
    1116:   int iVar3;
    1117:   uint *puVar4;

## FUN_140ac41e0 */ — reconstrucao/src/decompiled_04.c:1115
reconstrucao/src/../include/ghidra_function_prototypes.h:1115:1: error: unknown type name ‘errno_t’

    1112: 
    1113: {
    1114:   uint *puVar1;
    1115:   uint uVar2;
    1116:   int iVar3;
    1117:   uint *puVar4;
    1118:   undefined8 uStack_28;

## FUN_140ac41e0 */ — reconstrucao/src/decompiled_04.c:1116
reconstrucao/src/../include/ghidra_function_prototypes.h:1116:1: error: unknown type name ‘errno_t’

    1113: {
    1114:   uint *puVar1;
    1115:   uint uVar2;
    1116:   int iVar3;
    1117:   uint *puVar4;
    1118:   undefined8 uStack_28;
    1119:   longlong lStack_20;

## FUN_140ac41e0 */ — reconstrucao/src/decompiled_04.c:1117
reconstrucao/src/../include/ghidra_function_prototypes.h:1117:1: error: unknown type name ‘errno_t’

    1114:   uint *puVar1;
    1115:   uint uVar2;
    1116:   int iVar3;
    1117:   uint *puVar4;
    1118:   undefined8 uStack_28;
    1119:   longlong lStack_20;
    1120:   

## FUN_140ac41e0 */ — reconstrucao/src/decompiled_04.c:1118
reconstrucao/src/../include/ghidra_function_prototypes.h:1118:1: error: unknown type name ‘errno_t’

    1115:   uint uVar2;
    1116:   int iVar3;
    1117:   uint *puVar4;
    1118:   undefined8 uStack_28;
    1119:   longlong lStack_20;
    1120:   
    1121:   uStack_28 = 0;

## FUN_140ac41e0 */ — reconstrucao/src/decompiled_04.c:1119
reconstrucao/src/../include/ghidra_function_prototypes.h:1119:1: error: unknown type name ‘errno_t’

    1116:   int iVar3;
    1117:   uint *puVar4;
    1118:   undefined8 uStack_28;
    1119:   longlong lStack_20;
    1120:   
    1121:   uStack_28 = 0;
    1122:   lStack_20 = 0;

## FUN_140ac41e0 */ — reconstrucao/src/decompiled_04.c:1120
reconstrucao/src/../include/ghidra_function_prototypes.h:1120:1: error: unknown type name ‘errno_t’

    1117:   uint *puVar4;
    1118:   undefined8 uStack_28;
    1119:   longlong lStack_20;
    1120:   
    1121:   uStack_28 = 0;
    1122:   lStack_20 = 0;
    1123:   uVar2 = (param_2 >> 9 ^ param_2) * 0x18aa3;

## FUN_140ac41e0 */ — reconstrucao/src/decompiled_04.c:1121
reconstrucao/src/../include/ghidra_function_prototypes.h:1121:1: error: unknown type name ‘errno_t’

    1118:   undefined8 uStack_28;
    1119:   longlong lStack_20;
    1120:   
    1121:   uStack_28 = 0;
    1122:   lStack_20 = 0;
    1123:   uVar2 = (param_2 >> 9 ^ param_2) * 0x18aa3;
    1124:   puVar4 = *(uint **)(*(longlong *)(param_1 + 0x670) + 0x10 +

## FUN_140ac41e0 */ — reconstrucao/src/decompiled_04.c:1122
reconstrucao/src/../include/ghidra_function_prototypes.h:1122:1: error: unknown type name ‘errno_t’

    1119:   longlong lStack_20;
    1120:   
    1121:   uStack_28 = 0;
    1122:   lStack_20 = 0;
    1123:   uVar2 = (param_2 >> 9 ^ param_2) * 0x18aa3;
    1124:   puVar4 = *(uint **)(*(longlong *)(param_1 + 0x670) + 0x10 +
    1125:                      (ulonglong)((uVar2 >> 9 ^ uVar2) & *(int *)(param_1 + 0x678) - 1U) * 0x18);

## FUN_140ac41e0 */ — reconstrucao/src/decompiled_04.c:1123
reconstrucao/src/../include/ghidra_function_prototypes.h:1123:1: error: unknown type name ‘errno_t’

    1120:   
    1121:   uStack_28 = 0;
    1122:   lStack_20 = 0;
    1123:   uVar2 = (param_2 >> 9 ^ param_2) * 0x18aa3;
    1124:   puVar4 = *(uint **)(*(longlong *)(param_1 + 0x670) + 0x10 +
    1125:                      (ulonglong)((uVar2 >> 9 ^ uVar2) & *(int *)(param_1 + 0x678) - 1U) * 0x18);
    1126:   do {

## FUN_140ac41e0 */ — reconstrucao/src/decompiled_04.c:1124
reconstrucao/src/../include/ghidra_function_prototypes.h:1124:1: error: unknown type name ‘errno_t’

    1121:   uStack_28 = 0;
    1122:   lStack_20 = 0;
    1123:   uVar2 = (param_2 >> 9 ^ param_2) * 0x18aa3;
    1124:   puVar4 = *(uint **)(*(longlong *)(param_1 + 0x670) + 0x10 +
    1125:                      (ulonglong)((uVar2 >> 9 ^ uVar2) & *(int *)(param_1 + 0x678) - 1U) * 0x18);
    1126:   do {
    1127:     if (puVar4 == (uint *)0x0) {

## FUN_140ac41e0 */ — reconstrucao/src/decompiled_04.c:1125
reconstrucao/src/../include/ghidra_function_prototypes.h:1125:1: error: unknown type name ‘errno_t’

    1122:   lStack_20 = 0;
    1123:   uVar2 = (param_2 >> 9 ^ param_2) * 0x18aa3;
    1124:   puVar4 = *(uint **)(*(longlong *)(param_1 + 0x670) + 0x10 +
    1125:                      (ulonglong)((uVar2 >> 9 ^ uVar2) & *(int *)(param_1 + 0x678) - 1U) * 0x18);
    1126:   do {
    1127:     if (puVar4 == (uint *)0x0) {
    1128:       return (uint *)0x0;

## FUN_140ac41e0 */ — reconstrucao/src/decompiled_04.c:1125
reconstrucao/src/../include/ghidra_function_prototypes.h:1125:37: error: unknown type name ‘rsize_t’; did you mean ‘size_t’?

    1122:   lStack_20 = 0;
    1123:   uVar2 = (param_2 >> 9 ^ param_2) * 0x18aa3;
    1124:   puVar4 = *(uint **)(*(longlong *)(param_1 + 0x670) + 0x10 +
    1125:                      (ulonglong)((uVar2 >> 9 ^ uVar2) & *(int *)(param_1 + 0x678) - 1U) * 0x18);
    1126:   do {
    1127:     if (puVar4 == (uint *)0x0) {
    1128:       return (uint *)0x0;

## FUN_140ac41e0 */ — reconstrucao/src/decompiled_04.c:1125
reconstrucao/src/../include/ghidra_function_prototypes.h:1125:65: error: unknown type name ‘rsize_t’; did you mean ‘size_t’?

    1122:   lStack_20 = 0;
    1123:   uVar2 = (param_2 >> 9 ^ param_2) * 0x18aa3;
    1124:   puVar4 = *(uint **)(*(longlong *)(param_1 + 0x670) + 0x10 +
    1125:                      (ulonglong)((uVar2 >> 9 ^ uVar2) & *(int *)(param_1 + 0x678) - 1U) * 0x18);
    1126:   do {
    1127:     if (puVar4 == (uint *)0x0) {
    1128:       return (uint *)0x0;

## FUN_140ac41e0 */ — reconstrucao/src/decompiled_04.c:1126
reconstrucao/src/../include/ghidra_function_prototypes.h:1126:1: error: unknown type name ‘errno_t’

    1123:   uVar2 = (param_2 >> 9 ^ param_2) * 0x18aa3;
    1124:   puVar4 = *(uint **)(*(longlong *)(param_1 + 0x670) + 0x10 +
    1125:                      (ulonglong)((uVar2 >> 9 ^ uVar2) & *(int *)(param_1 + 0x678) - 1U) * 0x18);
    1126:   do {
    1127:     if (puVar4 == (uint *)0x0) {
    1128:       return (uint *)0x0;
    1129:     }

## FUN_140ac41e0 */ — reconstrucao/src/decompiled_04.c:1126
reconstrucao/src/../include/ghidra_function_prototypes.h:1126:38: error: unknown type name ‘rsize_t’; did you mean ‘size_t’?

    1123:   uVar2 = (param_2 >> 9 ^ param_2) * 0x18aa3;
    1124:   puVar4 = *(uint **)(*(longlong *)(param_1 + 0x670) + 0x10 +
    1125:                      (ulonglong)((uVar2 >> 9 ^ uVar2) & *(int *)(param_1 + 0x678) - 1U) * 0x18);
    1126:   do {
    1127:     if (puVar4 == (uint *)0x0) {
    1128:       return (uint *)0x0;
    1129:     }

## FUN_140ac41e0 */ — reconstrucao/src/decompiled_04.c:1126
reconstrucao/src/../include/ghidra_function_prototypes.h:1126:66: error: unknown type name ‘rsize_t’; did you mean ‘size_t’?

    1123:   uVar2 = (param_2 >> 9 ^ param_2) * 0x18aa3;
    1124:   puVar4 = *(uint **)(*(longlong *)(param_1 + 0x670) + 0x10 +
    1125:                      (ulonglong)((uVar2 >> 9 ^ uVar2) & *(int *)(param_1 + 0x678) - 1U) * 0x18);
    1126:   do {
    1127:     if (puVar4 == (uint *)0x0) {
    1128:       return (uint *)0x0;
    1129:     }

## FUN_140ac41e0 */ — reconstrucao/src/decompiled_04.c:1127
reconstrucao/src/../include/ghidra_function_prototypes.h:1127:1: error: unknown type name ‘errno_t’

    1124:   puVar4 = *(uint **)(*(longlong *)(param_1 + 0x670) + 0x10 +
    1125:                      (ulonglong)((uVar2 >> 9 ^ uVar2) & *(int *)(param_1 + 0x678) - 1U) * 0x18);
    1126:   do {
    1127:     if (puVar4 == (uint *)0x0) {
    1128:       return (uint *)0x0;
    1129:     }
    1130:     if ((*puVar4 == param_2) && (*(longlong *)(puVar4 + 0xe) == param_3)) {

## FUN_140ac41e0 */ — reconstrucao/src/decompiled_04.c:1127
reconstrucao/src/../include/ghidra_function_prototypes.h:1127:37: error: unknown type name ‘rsize_t’; did you mean ‘size_t’?

    1124:   puVar4 = *(uint **)(*(longlong *)(param_1 + 0x670) + 0x10 +
    1125:                      (ulonglong)((uVar2 >> 9 ^ uVar2) & *(int *)(param_1 + 0x678) - 1U) * 0x18);
    1126:   do {
    1127:     if (puVar4 == (uint *)0x0) {
    1128:       return (uint *)0x0;
    1129:     }
    1130:     if ((*puVar4 == param_2) && (*(longlong *)(puVar4 + 0xe) == param_3)) {

## FUN_140ac41e0 */ — reconstrucao/src/decompiled_04.c:1128
reconstrucao/src/../include/ghidra_function_prototypes.h:1128:1: error: unknown type name ‘errno_t’

    1125:                      (ulonglong)((uVar2 >> 9 ^ uVar2) & *(int *)(param_1 + 0x678) - 1U) * 0x18);
    1126:   do {
    1127:     if (puVar4 == (uint *)0x0) {
    1128:       return (uint *)0x0;
    1129:     }
    1130:     if ((*puVar4 == param_2) && (*(longlong *)(puVar4 + 0xe) == param_3)) {
    1131:       puVar1 = *(uint **)(puVar4 + 0x10);

## FUN_140ac41e0 */ — reconstrucao/src/decompiled_04.c:1128
reconstrucao/src/../include/ghidra_function_prototypes.h:1128:37: error: unknown type name ‘rsize_t’; did you mean ‘size_t’?

    1125:                      (ulonglong)((uVar2 >> 9 ^ uVar2) & *(int *)(param_1 + 0x678) - 1U) * 0x18);
    1126:   do {
    1127:     if (puVar4 == (uint *)0x0) {
    1128:       return (uint *)0x0;
    1129:     }
    1130:     if ((*puVar4 == param_2) && (*(longlong *)(puVar4 + 0xe) == param_3)) {
    1131:       puVar1 = *(uint **)(puVar4 + 0x10);

## FUN_140ac41e0 */ — reconstrucao/src/decompiled_04.c:1129
reconstrucao/src/../include/ghidra_function_prototypes.h:1129:1: error: unknown type name ‘errno_t’

    1126:   do {
    1127:     if (puVar4 == (uint *)0x0) {
    1128:       return (uint *)0x0;
    1129:     }
    1130:     if ((*puVar4 == param_2) && (*(longlong *)(puVar4 + 0xe) == param_3)) {
    1131:       puVar1 = *(uint **)(puVar4 + 0x10);
    1132:       if ((*puVar1 & 1) == 0) {

## FUN_140ac41e0 */ — reconstrucao/src/decompiled_04.c:1129
reconstrucao/src/../include/ghidra_function_prototypes.h:1129:38: error: unknown type name ‘rsize_t’; did you mean ‘size_t’?

    1126:   do {
    1127:     if (puVar4 == (uint *)0x0) {
    1128:       return (uint *)0x0;
    1129:     }
    1130:     if ((*puVar4 == param_2) && (*(longlong *)(puVar4 + 0xe) == param_3)) {
    1131:       puVar1 = *(uint **)(puVar4 + 0x10);
    1132:       if ((*puVar1 & 1) == 0) {

## FUN_140ac41e0 */ — reconstrucao/src/decompiled_04.c:1129
reconstrucao/src/../include/ghidra_function_prototypes.h:1129:70: error: unknown type name ‘rsize_t’; did you mean ‘size_t’?

    1126:   do {
    1127:     if (puVar4 == (uint *)0x0) {
    1128:       return (uint *)0x0;
    1129:     }
    1130:     if ((*puVar4 == param_2) && (*(longlong *)(puVar4 + 0xe) == param_3)) {
    1131:       puVar1 = *(uint **)(puVar4 + 0x10);
    1132:       if ((*puVar1 & 1) == 0) {

## FUN_140ac41e0 */ — reconstrucao/src/decompiled_04.c:1130
reconstrucao/src/../include/ghidra_function_prototypes.h:1130:1: error: unknown type name ‘errno_t’

    1127:     if (puVar4 == (uint *)0x0) {
    1128:       return (uint *)0x0;
    1129:     }
    1130:     if ((*puVar4 == param_2) && (*(longlong *)(puVar4 + 0xe) == param_3)) {
    1131:       puVar1 = *(uint **)(puVar4 + 0x10);
    1132:       if ((*puVar1 & 1) == 0) {
    1133:         uStack_28._0_4_ = CONCAT22((short)puVar1[6],(short)puVar1[6]);

## FUN_140ac41e0 */ — reconstrucao/src/decompiled_04.c:1130
reconstrucao/src/../include/ghidra_function_prototypes.h:1130:38: error: unknown type name ‘rsize_t’; did you mean ‘size_t’?

    1127:     if (puVar4 == (uint *)0x0) {
    1128:       return (uint *)0x0;
    1129:     }
    1130:     if ((*puVar4 == param_2) && (*(longlong *)(puVar4 + 0xe) == param_3)) {
    1131:       puVar1 = *(uint **)(puVar4 + 0x10);
    1132:       if ((*puVar1 & 1) == 0) {
    1133:         uStack_28._0_4_ = CONCAT22((short)puVar1[6],(short)puVar1[6]);

## FUN_140ac41e0 */ — reconstrucao/src/decompiled_04.c:1130
reconstrucao/src/../include/ghidra_function_prototypes.h:1130:70: error: unknown type name ‘rsize_t’; did you mean ‘size_t’?

    1127:     if (puVar4 == (uint *)0x0) {
    1128:       return (uint *)0x0;
    1129:     }
    1130:     if ((*puVar4 == param_2) && (*(longlong *)(puVar4 + 0xe) == param_3)) {
    1131:       puVar1 = *(uint **)(puVar4 + 0x10);
    1132:       if ((*puVar1 & 1) == 0) {
    1133:         uStack_28._0_4_ = CONCAT22((short)puVar1[6],(short)puVar1[6]);

## FUN_140ac41e0 */ — reconstrucao/src/decompiled_04.c:1131
reconstrucao/src/../include/ghidra_function_prototypes.h:1131:1: error: unknown type name ‘errno_t’

    1128:       return (uint *)0x0;
    1129:     }
    1130:     if ((*puVar4 == param_2) && (*(longlong *)(puVar4 + 0xe) == param_3)) {
    1131:       puVar1 = *(uint **)(puVar4 + 0x10);
    1132:       if ((*puVar1 & 1) == 0) {
    1133:         uStack_28._0_4_ = CONCAT22((short)puVar1[6],(short)puVar1[6]);
    1134:         lStack_20 = (longlong)puVar1 + 0x1a;

## FUN_140ac41e0 */ — reconstrucao/src/decompiled_04.c:1131
reconstrucao/src/../include/ghidra_function_prototypes.h:1131:40: error: unknown type name ‘rsize_t’; did you mean ‘size_t’?

    1128:       return (uint *)0x0;
    1129:     }
    1130:     if ((*puVar4 == param_2) && (*(longlong *)(puVar4 + 0xe) == param_3)) {
    1131:       puVar1 = *(uint **)(puVar4 + 0x10);
    1132:       if ((*puVar1 & 1) == 0) {
    1133:         uStack_28._0_4_ = CONCAT22((short)puVar1[6],(short)puVar1[6]);
    1134:         lStack_20 = (longlong)puVar1 + 0x1a;

## FUN_140ac41e0 */ — reconstrucao/src/decompiled_04.c:1132
reconstrucao/src/../include/ghidra_function_prototypes.h:1132:1: error: unknown type name ‘errno_t’

    1129:     }
    1130:     if ((*puVar4 == param_2) && (*(longlong *)(puVar4 + 0xe) == param_3)) {
    1131:       puVar1 = *(uint **)(puVar4 + 0x10);
    1132:       if ((*puVar1 & 1) == 0) {
    1133:         uStack_28._0_4_ = CONCAT22((short)puVar1[6],(short)puVar1[6]);
    1134:         lStack_20 = (longlong)puVar1 + 0x1a;
    1135:         iVar3 = FUN_14096be90(&uStack_28,param_4,param_5,1);

## FUN_140ac41e0 */ — reconstrucao/src/decompiled_04.c:1132
reconstrucao/src/../include/ghidra_function_prototypes.h:1132:40: error: unknown type name ‘rsize_t’; did you mean ‘size_t’?

    1129:     }
    1130:     if ((*puVar4 == param_2) && (*(longlong *)(puVar4 + 0xe) == param_3)) {
    1131:       puVar1 = *(uint **)(puVar4 + 0x10);
    1132:       if ((*puVar1 & 1) == 0) {
    1133:         uStack_28._0_4_ = CONCAT22((short)puVar1[6],(short)puVar1[6]);
    1134:         lStack_20 = (longlong)puVar1 + 0x1a;
    1135:         iVar3 = FUN_14096be90(&uStack_28,param_4,param_5,1);

## FUN_140ac41e0 */ — reconstrucao/src/decompiled_04.c:1133
reconstrucao/src/../include/ghidra_function_prototypes.h:1133:1: error: unknown type name ‘errno_t’

    1130:     if ((*puVar4 == param_2) && (*(longlong *)(puVar4 + 0xe) == param_3)) {
    1131:       puVar1 = *(uint **)(puVar4 + 0x10);
    1132:       if ((*puVar1 & 1) == 0) {
    1133:         uStack_28._0_4_ = CONCAT22((short)puVar1[6],(short)puVar1[6]);
    1134:         lStack_20 = (longlong)puVar1 + 0x1a;
    1135:         iVar3 = FUN_14096be90(&uStack_28,param_4,param_5,1);
    1136:       }

## FUN_140ac41e0 */ — reconstrucao/src/decompiled_04.c:1133
reconstrucao/src/../include/ghidra_function_prototypes.h:1133:41: error: unknown type name ‘rsize_t’; did you mean ‘size_t’?

    1130:     if ((*puVar4 == param_2) && (*(longlong *)(puVar4 + 0xe) == param_3)) {
    1131:       puVar1 = *(uint **)(puVar4 + 0x10);
    1132:       if ((*puVar1 & 1) == 0) {
    1133:         uStack_28._0_4_ = CONCAT22((short)puVar1[6],(short)puVar1[6]);
    1134:         lStack_20 = (longlong)puVar1 + 0x1a;
    1135:         iVar3 = FUN_14096be90(&uStack_28,param_4,param_5,1);
    1136:       }

## FUN_140ac41e0 */ — reconstrucao/src/decompiled_04.c:1133
reconstrucao/src/../include/ghidra_function_prototypes.h:1133:76: error: unknown type name ‘rsize_t’; did you mean ‘size_t’?

    1130:     if ((*puVar4 == param_2) && (*(longlong *)(puVar4 + 0xe) == param_3)) {
    1131:       puVar1 = *(uint **)(puVar4 + 0x10);
    1132:       if ((*puVar1 & 1) == 0) {
    1133:         uStack_28._0_4_ = CONCAT22((short)puVar1[6],(short)puVar1[6]);
    1134:         lStack_20 = (longlong)puVar1 + 0x1a;
    1135:         iVar3 = FUN_14096be90(&uStack_28,param_4,param_5,1);
    1136:       }

## FUN_140ac41e0 */ — reconstrucao/src/decompiled_04.c:1134
reconstrucao/src/../include/ghidra_function_prototypes.h:1134:1: error: unknown type name ‘errno_t’

    1131:       puVar1 = *(uint **)(puVar4 + 0x10);
    1132:       if ((*puVar1 & 1) == 0) {
    1133:         uStack_28._0_4_ = CONCAT22((short)puVar1[6],(short)puVar1[6]);
    1134:         lStack_20 = (longlong)puVar1 + 0x1a;
    1135:         iVar3 = FUN_14096be90(&uStack_28,param_4,param_5,1);
    1136:       }
    1137:       else {

