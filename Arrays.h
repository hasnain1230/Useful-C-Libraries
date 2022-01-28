#ifndef CTESTPROJECT_ARRAYS_H
#define CTESTPROJECT_ARRAYS_H

#include <stdio.h>

void *create1DArray(size_t arrSize, size_t elementSize);
void *create2DArray(size_t arrSize[], size_t elementSize);
void ***create3DArray(size_t arrSize[], size_t elementSize);

#endif //CTESTPROJECT_ARRAYS_H
