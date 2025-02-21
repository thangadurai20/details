#include <stdio.h>
#include <stdlib.h>
#include "matrix_operations.h"

void free_matrix(int** matrix, int rows) {
    for (int i = 0; i < rows; i++) {
        free(matrix[i]);  
    }
    free(matrix);  
}

