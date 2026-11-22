#ifndef NT_GHIDRA_TYPES_H
#define NT_GHIDRA_TYPES_H
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>
#include "ghidra_scalar_helpers.h"
/* Evidence-backed Ghidra integer widths used by scalar concatenation code.
 * 3-byte and 7-byte integers are widened to native containers; CONCATxx
 * helpers mask the exact source width. The 9-byte temporaries carry 65-bit
 * sums/carries and therefore require a wider host integer type.
 */
typedef uint8_t undefined;
typedef uint32_t uint3;
typedef uint3 undefined3; /* 24-bit Ghidra scalar stored in a 32-bit container. */
typedef uint64_t int7;
typedef uint64_t uint7;
typedef uint64_t undefined7;
#if defined(__SIZEOF_INT128__)
typedef __int128 unkint9;
typedef unsigned __int128 unkuint9;
#else
#error "This reconstruction requires a compiler with 128-bit integer support for 65-bit Ghidra arithmetic"
#endif
typedef uintptr_t code(); /* generic decompiler function type; return register is 64-bit on x64 */
typedef uint8_t undefined1;
typedef uint16_t undefined2;
typedef uint32_t undefined4;
typedef uint64_t undefined8;
typedef uint8_t byte;
typedef uint16_t ushort;
typedef uint32_t uint;
typedef uint64_t ulonglong;
typedef int64_t longlong;
typedef int32_t int32;
typedef uint32_t uint32;
typedef int64_t int64;
typedef uint64_t uint64;
typedef uintptr_t UINT_PTR;
typedef intptr_t INT_PTR;
#ifndef __fastcall
#define __fastcall
#endif
#ifndef __cdecl
#define __cdecl
#endif
#ifndef __stdcall
#define __stdcall
#endif
#endif
