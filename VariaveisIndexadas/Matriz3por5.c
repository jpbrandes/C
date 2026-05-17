#include <stdio.h>

int main() {
    float A[3][5], B[3][5], S[3][5];
    int i, j;

    // Leitura da matriz A
    printf("Digite os elementos da matriz A (3x5):\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 5; j++) {
            scanf("%f", &A[i][j]);
        }
    }

    // Leitura da matriz B
    printf("\nDigite os elementos da matriz B (3x5):\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 5; j++) {
            scanf("%f", &B[i][j]);
        }
    }

    // Soma das matrizes
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 5; j++) {
            S[i][j] = A[i][j] + B[i][j];
        }
    }

    // Impressão da matriz soma
    printf("\nMatriz Soma (A + B):\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 5; j++) {
            printf("%.2f ", S[i][j]);
        }
        printf("\n");
    }

    return 0;
}