#ifndef MATRIX_OPERATIONS_H
#define MATRIX_OPERATIONS_H

#define SUCCESS 0
#define FAILURE 1

// Function declarations //function prototype
int** allocate_matrix(int rows, int cols);
void get_matrix_input(int** matrix, int rows, int cols);
void multiply_matrices(int** matA, int** matB, int** result, int rowsA, int colsA, int colsB);
void print_matrix(int** matrix, int rows, int cols);
void free_matrix(int** matrix, int rows);

#endif

