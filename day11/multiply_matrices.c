#include <stdio.h>
#include "matrix_operations.h"


void multiply_matrices(int** matA, int** matB, int** result, int rowsA, int colsA, int colsB) {
    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < colsB; j++) {
            result[i][j] = 0;  
            for (int k = 0; k < colsA; k++) {
                result[i][j] += matA[i][k] * matB[k][j];  
            }
        }
    }
}

