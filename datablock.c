#include <stdlib.h>
#include "datablock.h"

datablock * datablock_alloc(uint64_t id, uint64_t len)
{
    size_t size = offsetof(datablock, data) + sizeof(char) * len;
    datablock *block = (datablock *)malloc(size);
    if (!block)
        return NULL;
    block->id = id;
    block->len = len;
    return block;
}

void datablock_dealloc(datablock * block)
{
    free(block);
}
