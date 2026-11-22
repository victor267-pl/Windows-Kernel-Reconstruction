#ifndef NT_GHIDRA_GLOBAL_DECLARATIONS_H
#define NT_GHIDRA_GLOBAL_DECLARATIONS_H

#include <stdint.h>

/*
 * Evidence-backed candidate from the exact ntoskrnl.exe analyzed in this
 * repository. VA 0x140e0a740 is file-backed in .data, begins with the x64
 * MSVC default security-cookie value 0x00002B992DDFA232, and is XORed with
 * stack-local addresses throughout the decompilation.
 *
 * This is a high-confidence semantic identification, not a recovered
 * Microsoft symbol name or proof that the full reconstructed image links.
 */
extern uint64_t DAT_140e0a740;

#endif
