#include <stdio.h>
#include <stdlib.h>
#include "Arrays.h"


struct Array1D create1DArray(size_t arrSize, size_t elementSize) {
    struct Array1D array;
    array.arraySize = arrSize;

    array.arr = calloc(arrSize, elementSize);

    if (array.arr == NULL) {
        perror("Something went wrong with Calloc!");
        exit(1);
    }

    return array;
}

struct Array2D create2DArray(size_t arrSize[], size_t elementSize[]) {
    struct Array2D array;
    array.arr = calloc(arrSize[0], elementSize[0]);
    array.arraySize = arrSize;

    if (array.arr == NULL) {
        perror("Something went wrong with Calloc!");
        exit(1);
    }

    for (int x = 0; x < arrSize[0]; x++) {
        array.arr[x] = calloc(arrSize[1], elementSize[1]);

        if (array.arr[x] == NULL) {
            perror("Something went wrong with Calloc!");
            exit(1);
        }
    }


    return array;
}
