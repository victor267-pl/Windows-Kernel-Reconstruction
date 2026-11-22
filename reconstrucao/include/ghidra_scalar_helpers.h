#ifndef NT_GHIDRA_SCALAR_HELPERS_H
#define NT_GHIDRA_SCALAR_HELPERS_H

/*
 * Scalar Ghidra p-code helpers.
 * These implement only concatenations whose result fits in 64 bits.
 * Vector helpers (for example CONCAT816, ZEXT816, SUB168) are deliberately
 * excluded until the corresponding auVar vector types are reconstructed.
 */
#include <stdint.h>

#define GHIDRA_LOW_MASK_BYTES(n) ((n) >= 8 ? UINT64_MAX : ((UINT64_C(1) << (8u * (n))) - UINT64_C(1)))
#define GHIDRA_CONCAT(hi, lo, lo_bytes) \
    ((((uint64_t)(hi)) << (8u * (lo_bytes))) | (((uint64_t)(lo)) & GHIDRA_LOW_MASK_BYTES(lo_bytes)))

#define CONCAT11(hi,lo) GHIDRA_CONCAT((hi),(lo),1)
#define CONCAT12(hi,lo) GHIDRA_CONCAT((hi),(lo),2)
#define CONCAT13(hi,lo) GHIDRA_CONCAT((hi),(lo),3)
#define CONCAT14(hi,lo) GHIDRA_CONCAT((hi),(lo),4)
#define CONCAT16(hi,lo) GHIDRA_CONCAT((hi),(lo),6)
#define CONCAT17(hi,lo) GHIDRA_CONCAT((hi),(lo),7)
#define CONCAT21(hi,lo) GHIDRA_CONCAT((hi),(lo),1)
#define CONCAT22(hi,lo) GHIDRA_CONCAT((hi),(lo),2)
#define CONCAT24(hi,lo) GHIDRA_CONCAT((hi),(lo),4)
#define CONCAT26(hi,lo) GHIDRA_CONCAT((hi),(lo),6)
#define CONCAT31(hi,lo) GHIDRA_CONCAT((hi),(lo),1)
#define CONCAT35(hi,lo) GHIDRA_CONCAT((hi),(lo),5)
#define CONCAT42(hi,lo) GHIDRA_CONCAT((hi),(lo),2)
#define CONCAT44(hi,lo) GHIDRA_CONCAT((hi),(lo),4)
#define CONCAT53(hi,lo) GHIDRA_CONCAT((hi),(lo),3)
#define CONCAT62(hi,lo) GHIDRA_CONCAT((hi),(lo),2)
#define CONCAT71(hi,lo) GHIDRA_CONCAT((hi),(lo),1)

/* Extract a 32-bit lane from a scalar 64-bit value. */
#define SUB84(value, byte_offset) ((uint32_t)(((uint64_t)(value) >> (8u * (byte_offset))) & UINT32_MAX))

#if defined(__GNUC__) || defined(__clang__)
#define POPCOUNT(value) __builtin_popcountll((unsigned long long)(value))
#endif

#endif
