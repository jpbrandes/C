#include <stdio.h>
int main() {
    float A[3][5], B[3][5], S[3][5];
    int i, j;
    // Reading matrix A
    printf("Enter the elements of matrix A (3x5):\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 5; j++) {
            scanf("%f", &A[i][j]);
        }
    }
    // Reading matrix B
    printf("\nEnter the elements of matrix B (3x5):\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 5; j++) {
            scanf("%f", &B[i][j]);
        }
    }
    // Sum of the matrices
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 5; j++) {
            S[i][j] = A[i][j] + B[i][j];
        }
    }
    // Printing the sum matrix
    printf("\nSum Matrix (A + B):\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 5; j++) {
            printf("%.2f ", S[i][j]);
        }
        printf("\n");
    }
    return 0;
}
