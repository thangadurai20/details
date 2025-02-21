#include <stdio.h>
#include "matrix_operations.h"


void print_matrix(int** matrix, int rows, int cols) {
    printf("Resultant Matrix (%d x %d):\n", rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

