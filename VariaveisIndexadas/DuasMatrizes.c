#include <stdio.h>

int main() {
    int A[12][2], B[2][2], C[12][2];
    int i, j, k;

    // Leitura da matriz A (12x2)
    printf("Digite os elementos da matriz A (12x2):\n");
    for(i = 0; i < 12; i++) {
        for(j = 0; j < 2; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // Leitura da matriz B (2x2)
    printf("Digite os elementos da matriz B (2x2):\n");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    // Multiplicação C = A * B
    for(i = 0; i < 12; i++) {
        for(j = 0; j < 2; j++) {
            C[i][j] = 0;
            for(k = 0; k < 2; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Impressão da matriz C
    printf("\nMatriz C (12x2):\n");
    for(i = 0; i < 12; i++) {
        for(j = 0; j < 2; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}