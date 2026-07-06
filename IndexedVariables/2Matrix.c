#include <stdio.h>
int main() {
    int A[12][2], B[2][2], C[12][2];
    int i, j, k;
    // Reading matrix A (12x2)
    printf("Enter the elements of matrix A (12x2):\n");
    for(i = 0; i < 12; i++) {
        for(j = 0; j < 2; j++) {
            scanf("%d", &A[i][j]);
        }
    }
    // Reading matrix B (2x2)
    printf("Enter the elements of matrix B (2x2):\n");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            scanf("%d", &B[i][j]);
        }
    }
    // Multiplication C = A * B
    for(i = 0; i < 12; i++) {
        for(j = 0; j < 2; j++) {
            C[i][j] = 0;
            for(k = 0; k < 2; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    // Printing matrix C
    printf("\nMatrix C (12x2):\n");
    for(i = 0; i < 12; i++) {
        for(j = 0; j < 2; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }
    return 0;
}
