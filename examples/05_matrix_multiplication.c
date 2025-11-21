#include <stdio.h>
#include <stdlib.h>

void read_matrix(int rows, int cols, int matrix[rows][cols], const char *name) {
    printf("Enter values for %s (%d x %d):\n", name, rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (scanf("%d", &matrix[i][j]) != 1) {
                fprintf(stderr, "Invalid input while reading %s.\n", name);
                exit(EXIT_FAILURE);
            }
        }
    }
}

void multiply_matrices(int a_rows, int a_cols, int b_cols,
                       int a[a_rows][a_cols], int b[a_cols][b_cols],
                       int result[a_rows][b_cols]) {
    for (int i = 0; i < a_rows; i++) {
        for (int j = 0; j < b_cols; j++) {
            result[i][j] = 0;
            for (int k = 0; k < a_cols; k++) {
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}

void print_matrix(int rows, int cols, int matrix[rows][cols], const char *name) {
    printf("%s (%d x %d):\n", name, rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%6d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main(void) {
    int a_rows = 0, a_cols = 0, b_rows = 0, b_cols = 0;

    printf("Enter rows and columns for matrix A: ");
    if (scanf("%d %d", &a_rows, &a_cols) != 2 || a_rows <= 0 || a_cols <= 0) {
        fprintf(stderr, "Invalid dimensions for matrix A.\n");
        return 1;
    }

    printf("Enter rows and columns for matrix B: ");
    if (scanf("%d %d", &b_rows, &b_cols) != 2 || b_rows <= 0 || b_cols <= 0) {
        fprintf(stderr, "Invalid dimensions for matrix B.\n");
        return 1;
    }

    if (a_cols != b_rows) {
        fprintf(stderr, "Cannot multiply: columns of A must equal rows of B.\n");
        return 1;
    }

    int (*a)[a_cols] = malloc((size_t)a_rows * (size_t)a_cols * sizeof(int));
    int (*b)[b_cols] = malloc((size_t)b_rows * (size_t)b_cols * sizeof(int));
    int (*result)[b_cols] = calloc((size_t)a_rows * (size_t)b_cols, sizeof(int));

    if (a == NULL || b == NULL || result == NULL) {
        perror("Memory allocation failed");
        free(a);
        free(b);
        free(result);
        return 1;
    }

    read_matrix(a_rows, a_cols, a, "matrix A");
    read_matrix(b_rows, b_cols, b, "matrix B");

    multiply_matrices(a_rows, a_cols, b_cols, a, b, result);

    print_matrix(a_rows, a_cols, a, "Matrix A");
    print_matrix(b_rows, b_cols, b, "Matrix B");
    print_matrix(a_rows, b_cols, result, "Product");

    free(a);
    free(b);
    free(result);
    return 0;
}
