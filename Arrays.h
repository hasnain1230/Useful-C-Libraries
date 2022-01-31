#ifndef CTESTPROJECT_ARRAYS_H
#define CTESTPROJECT_ARRAYS_H

#include <stdio.h>

struct Array1D {
    void *arr;
    size_t arraySize;
};

struct Array2D {
    void **arr;
    size_t *arraySize; // {x, y}
};

struct Array3D {
    void ***arr;
    size_t *arraySize; // {x, y, z}
};

struct Array1D create1DArray(size_t arrSize, size_t elementSize);
struct Array2D create2DArray(size_t arrSize[], size_t elementSizes[]); // {size of pointer, size of element}
struct Array3D create3DArray(size_t arrSize[], size_t elementSizes[]); // {size of pointer, size of element}

#endif
