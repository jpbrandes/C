#include <stdio.h>
#include <stdlib.h>

int **allocate_matrix(size_t rows, size_t columns) {
    int **matrix = (int **)malloc(rows * sizeof(int *));
    if (matrix == NULL) {
        return NULL;
    }

    for (size_t row_index = 0; row_index < rows; row_index++) {
        *(matrix + row_index) = (int *)malloc(columns * sizeof(int));
        if (*(matrix + row_index) == NULL) {
            for (size_t rollback_index = 0; rollback_index < row_index; rollback_index++) {
                free(*(matrix + rollback_index));
            }
            free(matrix);
            return NULL;
        }
    }

    return matrix;
}

int read_matrix_elements(int **matrix, size_t rows, size_t columns) {
    for (size_t row_index = 0; row_index < rows; row_index++) {
        for (size_t column_index = 0; column_index < columns; column_index++) {
            printf("Enter element [%zu][%zu]: ", row_index, column_index);
            if (scanf("%d", *(matrix + row_index) + column_index) != 1) {
                return 0;
            }
        }
    }
    return 1;
}

void print_matrix(int **matrix, size_t rows, size_t columns) {
    printf("\n--- Matrix (%zu x %zu) ---\n", rows, columns);
    for (size_t row_index = 0; row_index < rows; row_index++) {
        for (size_t column_index = 0; column_index < columns; column_index++) {
            printf("%4d ", *(*(matrix + row_index) + column_index));
        }
        printf("\n");
    }
    printf("-------------------------\n");
}

void deallocate_matrix(int ***matrix_pointer, size_t rows) {
    if (matrix_pointer != NULL && *matrix_pointer != NULL) {
        int **matrix = *matrix_pointer;
        for (size_t row_index = 0; row_index < rows; row_index++) {
            free(*(matrix + row_index));
        }
        free(matrix);
        *matrix_pointer = NULL;
    }
}

int main(void) {
    int input_rows, input_columns;

    printf("Enter the number of rows (M): ");
    if (scanf("%d", &input_rows) != 1 || input_rows <= 0) {
        printf("Invalid number of rows.\n");
        return 1;
    }

    printf("Enter the number of columns (N): ");
    if (scanf("%d", &input_columns) != 1 || input_columns <= 0) {
        printf("Invalid number of columns.\n");
        return 1;
    }

    size_t rows = (size_t)input_rows;
    size_t columns = (size_t)input_columns;

    int **dynamic_matrix = allocate_matrix(rows, columns);
    if (dynamic_matrix == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    if (!read_matrix_elements(dynamic_matrix, rows, columns)) {
        printf("Invalid input elements.\n");
        deallocate_matrix(&dynamic_matrix, rows);
        return 1;
    }

    print_matrix(dynamic_matrix, rows, columns);

    deallocate_matrix(&dynamic_matrix, rows);

    return 0;
}