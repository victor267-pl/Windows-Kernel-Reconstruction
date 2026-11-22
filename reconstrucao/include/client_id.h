/*
 * Reconstrucao parcial de tipos do NT kernel.
 *
 * Fonte de evidencias:
 * - Inventario Ghidra enviado ao repositorio: _CLIENT_ID, tamanho 16 bytes,
 *   quantidade de campos 2 (x64).
 * - Layout semantico conhecido do tipo CLIENT_ID: identificadores de processo
 *   e thread, cada um com largura de HANDLE.
 *
 * Esta definicao reproduz o layout ABI x64, nao declara ser o header original
 * da Microsoft. uintptr_t evita conflito com typedefs de Windows.h.
 */
#ifndef WRK_CLIENT_ID_H
#define WRK_CLIENT_ID_H

#include <stdint.h>

#if !defined(_WIN64) && UINTPTR_MAX != UINT64_MAX
#error "Este layout foi reconstruido para Windows x64."
#endif

typedef struct _CLIENT_ID {
    uintptr_t UniqueProcess;
    uintptr_t UniqueThread;
} CLIENT_ID, *PCLIENT_ID;

#if defined(__cplusplus)
static_assert(sizeof(CLIENT_ID) == 16, "CLIENT_ID deve ocupar 16 bytes em x64");
#else
_Static_assert(sizeof(CLIENT_ID) == 16, "CLIENT_ID deve ocupar 16 bytes em x64");
#endif

#endif /* WRK_CLIENT_ID_H */
