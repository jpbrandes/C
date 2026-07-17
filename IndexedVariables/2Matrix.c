#include <stdio.h>
int main() {
    int MatrixA[12][2], MatrixB[2][2], MatrixC[12][2];
    int lines, colunes, common_index;
    // Reading matrix A (12x2)
    printf("Enter the elements of matrix A (12x2):\n");
    for(lines = 0; lines < 12; lines++) {
        for(colunes = 0; colunes < 2; colunes++) {
            scanf("%d", &MatrixA[lines][colunes]);
        }
    }
    // Reading matrix B (2x2)
    printf("Enter the elements of matrix B (2x2):\n");
    for(lines = 0; lines < 2; lines++) {
        for(colunes = 0; colunes < 2; colunes++) {
            scanf("%d", &MatrixB[lines][colunes]);
        }
    }
    // Multiplication C = A * B
    for(lines = 0; lines < 12; lines++) {
        for(colunes = 0; colunes < 2; colunes++) {
            MatrixC[lines][colunes] = 0;
            for(common_index = 0; common_index < 2; common_index++) {
                MatrixC[lines][colunes] += MatrixA[lines][common_index] * MatrixB[common_index][colunes];
            }
        }
    }
    // Printing matrix C
    printf("\nMatrix C (12x2):\n");
    for(lines = 0; lines < 12; lines++) {
        for(colunes = 0; colunes < 2; colunes++) {
            printf("%d ", MatrixC[lines][colunes]);
        }
        printf("\n");
    }
    return 0;
}
