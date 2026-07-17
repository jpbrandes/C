#include <stdio.h>
int main() {
    float matrixA[3][5], matrixB[3][5], matrixSums[3][5];
    int lines, colunes;
    // Reading matrix A
    printf("Enter the elements of matrix A (3x5):\n");
    for(lines = 0; lines < 3; lines++) {
        for(colunes = 0; colunes < 5; colunes++) {
            scanf("%f", &matrixA[lines][colunes]);
        }
    }
    // Reading matrix B
    printf("\nEnter the elements of matrix B (3x5):\n");
    for(lines = 0; lines < 3; lines++) {
        for(colunes = 0; colunes < 5; colunes++) {
            scanf("%f", &matrixB[lines][colunes]);
        }
    }
    // Sum of the matrices
    for(lines = 0; lines < 3; lines++) {
        for(colunes = 0; colunes < 5; colunes++) {
            matrixSums[lines][colunes] = matrixA[lines][colunes] + matrixB[lines][colunes];
        }
    }
    // Printing the sum matrix
    printf("\nSum Matrix (A + B):\n");
    for(lines = 0; lines < 3; lines++) {
        for(colunes = 0; colunes < 5; colunes++) {
            printf("%.2f ", matrixSums[lines][colunes]);
        }
        printf("\n");
    }
    return 0;
}
