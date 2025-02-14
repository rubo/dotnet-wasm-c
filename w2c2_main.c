#include <stdio.h>
#include "w2c2_base.h"
#include "../wasi/wasi.h"

void
trap(
    Trap trap
) {
    fprintf(stderr, "TRAP: %s\n", trapDescription(trap));
    abort();
}

wasmMemory*
wasiMemory(
    void* instance
) {
    return NULL;
}