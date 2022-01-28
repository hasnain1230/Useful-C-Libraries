#include <stdio.h>
#include <stdlib.h>
#include "Arrays.h"

void *create1DArray(size_t arrSize, size_t elementSize) {
    void *returnArr = calloc(arrSize, elementSize);

    if (returnArr == NULL) {
        perror("Something went wrong with Calloc!");
        exit(1);
    }

    return calloc(arrSize, elementSize);
}

void *create2DArray(size_t arrSize[], size_t elementSize) { // Not working! To be fixed later! ~!!~
    void **returnArr = calloc(arrSize[0], sizeof(void **));

    if (returnArr == NULL) {
        perror("Something went wrong with Calloc!");
        exit(1);
    }

    for (int x = 0; x < arrSize[0]; x++) {
        returnArr = calloc(arrSize[1], elementSize);

        if (returnArr == NULL) {
            perror("Something went wrong with Calloc!");
            exit(1);
        }
    }


    return returnArr;
}
