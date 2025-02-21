#include <stdio.h>
#include <stdlib.h>
#include "matrix_operations.h"

void get_matrix_input(int** matrix, int rows, int cols) {
    printf("Enter elements for a %d x %d matrix:\n", rows, cols);
    
    //serial numbers
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Matrix[%d][%d]: ", i + 1, j + 1); 
            if (scanf("%d", &matrix[i][j]) != 1) {
                printf("Invalid input! Exiting...\n");
                exit(FAILURE);  
            }
        }
    }
}

