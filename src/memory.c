#include <odin/memory/memory.h>
#include <mimalloc.h>

void *
odin_malloc(size_t size) {
    return mi_malloc(size);
}

void *
odin_calloc(size_t s, size_t c) {
    return mi_calloc(s, c);
}

void *
odin_realloc(void *ptr, size_t new_size) {
    return mi_realloc(ptr, new_size);
}

void
odin_free(void *ptr) {
    return mi_free(ptr);
}
