#ifndef WRK_RECON_CONTEXT_H
#define WRK_RECON_CONTEXT_H

#include <stdint.h>

/* Layout x64 extraido do inventario Ghidra: _CONTEXT.
 * Tamanho total confirmado: 1232 bytes; campos inventariados: 46.
 * O armazenamento e opaco nesta etapa: tipos aninhados, unioes e bitfields
 * nao sao reinterpretados como C ate serem validados individualmente.
 */
typedef struct _CONTEXT {
    uint8_t _storage[1232];
} CONTEXT, *PCONTEXT;

#define CONTEXT_SIZE 1232u
/* Campo 0: P1Home | tipo Ghidra: ulong64 | tamanho: 8 */
#define CONTEXT_OFFSET_P1HOME 0u
#define CONTEXT_FIELD_SIZE_P1HOME 8u
/* Campo 1: P2Home | tipo Ghidra: ulong64 | tamanho: 8 */
#define CONTEXT_OFFSET_P2HOME 8u
#define CONTEXT_FIELD_SIZE_P2HOME 8u
/* Campo 2: P3Home | tipo Ghidra: ulong64 | tamanho: 8 */
#define CONTEXT_OFFSET_P3HOME 16u
#define CONTEXT_FIELD_SIZE_P3HOME 8u
/* Campo 3: P4Home | tipo Ghidra: ulong64 | tamanho: 8 */
#define CONTEXT_OFFSET_P4HOME 24u
#define CONTEXT_FIELD_SIZE_P4HOME 8u
/* Campo 4: P5Home | tipo Ghidra: ulong64 | tamanho: 8 */
#define CONTEXT_OFFSET_P5HOME 32u
#define CONTEXT_FIELD_SIZE_P5HOME 8u
/* Campo 5: P6Home | tipo Ghidra: ulong64 | tamanho: 8 */
#define CONTEXT_OFFSET_P6HOME 40u
#define CONTEXT_FIELD_SIZE_P6HOME 8u
/* Campo 6: ContextFlags | tipo Ghidra: ulong | tamanho: 4 */
#define CONTEXT_OFFSET_CONTEXTFLAGS 48u
#define CONTEXT_FIELD_SIZE_CONTEXTFLAGS 4u
/* Campo 7: MxCsr | tipo Ghidra: ulong | tamanho: 4 */
#define CONTEXT_OFFSET_MXCSR 52u
#define CONTEXT_FIELD_SIZE_MXCSR 4u
/* Campo 8: SegCs | tipo Ghidra: ushort | tamanho: 2 */
#define CONTEXT_OFFSET_SEGCS 56u
#define CONTEXT_FIELD_SIZE_SEGCS 2u
/* Campo 9: SegDs | tipo Ghidra: ushort | tamanho: 2 */
#define CONTEXT_OFFSET_SEGDS 58u
#define CONTEXT_FIELD_SIZE_SEGDS 2u
/* Campo 10: SegEs | tipo Ghidra: ushort | tamanho: 2 */
#define CONTEXT_OFFSET_SEGES 60u
#define CONTEXT_FIELD_SIZE_SEGES 2u
/* Campo 11: SegFs | tipo Ghidra: ushort | tamanho: 2 */
#define CONTEXT_OFFSET_SEGFS 62u
#define CONTEXT_FIELD_SIZE_SEGFS 2u
/* Campo 12: SegGs | tipo Ghidra: ushort | tamanho: 2 */
#define CONTEXT_OFFSET_SEGGS 64u
#define CONTEXT_FIELD_SIZE_SEGGS 2u
/* Campo 13: SegSs | tipo Ghidra: ushort | tamanho: 2 */
#define CONTEXT_OFFSET_SEGSS 66u
#define CONTEXT_FIELD_SIZE_SEGSS 2u
/* Campo 14: EFlags | tipo Ghidra: ulong | tamanho: 4 */
#define CONTEXT_OFFSET_EFLAGS 68u
#define CONTEXT_FIELD_SIZE_EFLAGS 4u
/* Campo 15: Dr0 | tipo Ghidra: ulong64 | tamanho: 8 */
#define CONTEXT_OFFSET_DR0 72u
#define CONTEXT_FIELD_SIZE_DR0 8u
/* Campo 16: Dr1 | tipo Ghidra: ulong64 | tamanho: 8 */
#define CONTEXT_OFFSET_DR1 80u
#define CONTEXT_FIELD_SIZE_DR1 8u
/* Campo 17: Dr2 | tipo Ghidra: ulong64 | tamanho: 8 */
#define CONTEXT_OFFSET_DR2 88u
#define CONTEXT_FIELD_SIZE_DR2 8u
/* Campo 18: Dr3 | tipo Ghidra: ulong64 | tamanho: 8 */
#define CONTEXT_OFFSET_DR3 96u
#define CONTEXT_FIELD_SIZE_DR3 8u
/* Campo 19: Dr6 | tipo Ghidra: ulong64 | tamanho: 8 */
#define CONTEXT_OFFSET_DR6 104u
#define CONTEXT_FIELD_SIZE_DR6 8u
/* Campo 20: Dr7 | tipo Ghidra: ulong64 | tamanho: 8 */
#define CONTEXT_OFFSET_DR7 112u
#define CONTEXT_FIELD_SIZE_DR7 8u
/* Campo 21: Rax | tipo Ghidra: ulong64 | tamanho: 8 */
#define CONTEXT_OFFSET_RAX 120u
#define CONTEXT_FIELD_SIZE_RAX 8u
/* Campo 22: Rcx | tipo Ghidra: ulong64 | tamanho: 8 */
#define CONTEXT_OFFSET_RCX 128u
#define CONTEXT_FIELD_SIZE_RCX 8u
/* Campo 23: Rdx | tipo Ghidra: ulong64 | tamanho: 8 */
#define CONTEXT_OFFSET_RDX 136u
#define CONTEXT_FIELD_SIZE_RDX 8u
/* Campo 24: Rbx | tipo Ghidra: ulong64 | tamanho: 8 */
#define CONTEXT_OFFSET_RBX 144u
#define CONTEXT_FIELD_SIZE_RBX 8u
/* Campo 25: Rsp | tipo Ghidra: ulong64 | tamanho: 8 */
#define CONTEXT_OFFSET_RSP 152u
#define CONTEXT_FIELD_SIZE_RSP 8u
/* Campo 26: Rbp | tipo Ghidra: ulong64 | tamanho: 8 */
#define CONTEXT_OFFSET_RBP 160u
#define CONTEXT_FIELD_SIZE_RBP 8u
/* Campo 27: Rsi | tipo Ghidra: ulong64 | tamanho: 8 */
#define CONTEXT_OFFSET_RSI 168u
#define CONTEXT_FIELD_SIZE_RSI 8u
/* Campo 28: Rdi | tipo Ghidra: ulong64 | tamanho: 8 */
#define CONTEXT_OFFSET_RDI 176u
#define CONTEXT_FIELD_SIZE_RDI 8u
/* Campo 29: R8 | tipo Ghidra: ulong64 | tamanho: 8 */
#define CONTEXT_OFFSET_R8 184u
#define CONTEXT_FIELD_SIZE_R8 8u
/* Campo 30: R9 | tipo Ghidra: ulong64 | tamanho: 8 */
#define CONTEXT_OFFSET_R9 192u
#define CONTEXT_FIELD_SIZE_R9 8u
/* Campo 31: R10 | tipo Ghidra: ulong64 | tamanho: 8 */
#define CONTEXT_OFFSET_R10 200u
#define CONTEXT_FIELD_SIZE_R10 8u
/* Campo 32: R11 | tipo Ghidra: ulong64 | tamanho: 8 */
#define CONTEXT_OFFSET_R11 208u
#define CONTEXT_FIELD_SIZE_R11 8u
/* Campo 33: R12 | tipo Ghidra: ulong64 | tamanho: 8 */
#define CONTEXT_OFFSET_R12 216u
#define CONTEXT_FIELD_SIZE_R12 8u
/* Campo 34: R13 | tipo Ghidra: ulong64 | tamanho: 8 */
#define CONTEXT_OFFSET_R13 224u
#define CONTEXT_FIELD_SIZE_R13 8u
/* Campo 35: R14 | tipo Ghidra: ulong64 | tamanho: 8 */
#define CONTEXT_OFFSET_R14 232u
#define CONTEXT_FIELD_SIZE_R14 8u
/* Campo 36: R15 | tipo Ghidra: ulong64 | tamanho: 8 */
#define CONTEXT_OFFSET_R15 240u
#define CONTEXT_FIELD_SIZE_R15 8u
/* Campo 37: Rip | tipo Ghidra: ulong64 | tamanho: 8 */
#define CONTEXT_OFFSET_RIP 248u
#define CONTEXT_FIELD_SIZE_RIP 8u
/* Campo 39: VectorRegister | tipo Ghidra: _M128A[26] | tamanho: 416 */
#define CONTEXT_OFFSET_VECTORREGISTER 768u
#define CONTEXT_FIELD_SIZE_VECTORREGISTER 416u
/* Campo 40: VectorControl | tipo Ghidra: ulong64 | tamanho: 8 */
#define CONTEXT_OFFSET_VECTORCONTROL 1184u
#define CONTEXT_FIELD_SIZE_VECTORCONTROL 8u
/* Campo 41: DebugControl | tipo Ghidra: ulong64 | tamanho: 8 */
#define CONTEXT_OFFSET_DEBUGCONTROL 1192u
#define CONTEXT_FIELD_SIZE_DEBUGCONTROL 8u
/* Campo 42: LastBranchToRip | tipo Ghidra: ulong64 | tamanho: 8 */
#define CONTEXT_OFFSET_LASTBRANCHTORIP 1200u
#define CONTEXT_FIELD_SIZE_LASTBRANCHTORIP 8u
/* Campo 43: LastBranchFromRip | tipo Ghidra: ulong64 | tamanho: 8 */
#define CONTEXT_OFFSET_LASTBRANCHFROMRIP 1208u
#define CONTEXT_FIELD_SIZE_LASTBRANCHFROMRIP 8u
/* Campo 44: LastExceptionToRip | tipo Ghidra: ulong64 | tamanho: 8 */
#define CONTEXT_OFFSET_LASTEXCEPTIONTORIP 1216u
#define CONTEXT_FIELD_SIZE_LASTEXCEPTIONTORIP 8u
/* Campo 45: LastExceptionFromRip | tipo Ghidra: ulong64 | tamanho: 8 */
#define CONTEXT_OFFSET_LASTEXCEPTIONFROMRIP 1224u
#define CONTEXT_FIELD_SIZE_LASTEXCEPTIONFROMRIP 8u

#if defined(__cplusplus)
static_assert(sizeof(CONTEXT) == 1232, "CONTEXT size mismatch");
#else
_Static_assert(sizeof(CONTEXT) == 1232, "CONTEXT size mismatch");
#endif

#endif /* WRK_RECON_CONTEXT_H */
