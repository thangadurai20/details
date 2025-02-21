#include <stdio.h>
#include <stdlib.h>
#include "matrix_operations.h"


int** allocate_matrix(int rows, int cols) {
    int** matrix = (int**)malloc(rows * sizeof(int*)); 
    if (matrix == NULL) {
        printf("Memory allocation failed for matrix rows!\n");
        exit(FAILURE);
    }

    for (int i = 0; i < rows; i++) {
        matrix[i] = (int*)malloc(cols * sizeof(int)); 
        if (matrix[i] == NULL) {
            printf("Memory allocation failed for matrix columns!\n");
            exit(FAILURE);
        }
    }
    return matrix;
}

