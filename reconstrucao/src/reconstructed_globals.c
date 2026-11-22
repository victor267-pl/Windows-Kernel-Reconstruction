#include "../include/ghidra_global_declarations.h"

/*
 * Initial value recovered from the exact PE image at VA 0x140e0a740.
 * Runtime initialization behavior still needs to be reconstructed and tested.
 */
uint64_t DAT_140e0a740 = UINT64_C(0x00002B992DDFA232);

/* These .data globals lie in the PE zero-fill tail and start as NULL/zero. */
uint32_t *DAT_140fc7ad0 = 0;
uintptr_t DAT_140f0cf28 = 0;
