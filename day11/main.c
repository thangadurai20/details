#include <stdio.h>
#include "matrix_operations.h"

int main() {
    int rowsA, colsA, rowsB, colsB;

    // Input matrix dimensions
    printf("Dimensions of Matrix A (rows cols): ");
    if (scanf("%d %d", &rowsA, &colsA) != 2) {
        printf("Invalid input for matrix A dimensions!\n");
        return FAILURE;
    }

    printf("Dimensions of Matrix B (rows cols): ");
    if (scanf("%d %d", &rowsB, &colsB) != 2) {
        printf("Invalid input for matrix B dimensions!\n");
        return FAILURE;
    }

    // Check matrix multiplication compatibility
    if (colsA != rowsB) {
        printf("Matrix multiplication not possible. Columns of A must match rows of B.\n");
        return FAILURE;
    }

    // Allocate memory for matrices
    int** matA = allocate_matrix(rowsA, colsA);
    int** matB = allocate_matrix(rowsB, colsB);
    int** result = allocate_matrix(rowsA, colsB);

    // Get matrix input from the user
    printf("Enter elements of Matrix A:\n");
    get_matrix_input(matA, rowsA, colsA);

    printf("Enter elements of Matrix B:\n");
    get_matrix_input(matB, rowsB, colsB);

    // Perform matrix multiplication
    multiply_matrices(matA, matB, result, rowsA, colsA, colsB);

    // Print the resultant matrix
    print_matrix(result, rowsA, colsB);

    // Free allocated memory
    free_matrix(matA, rowsA);
    free_matrix(matB, rowsB);
    free_matrix(result, rowsA);

    return SUCCESS;
}

