#include <stdio.h>

int main() {
    float M[20][20];
    int i, j;

    // Leitura da matriz 20x20
    printf("Digite os elementos da matriz 20x20:\n");
    for(i = 0; i < 20; i++) {
        for(j = 0; j < 20; j++) {
            scanf("%f", &M[i][j]);
        }
    }

    // Modificação da matriz
    for(i = 0; i < 20; i++) {
        float diag = M[i][i];

        // Evita divisão por zero
        if(diag == 0) {
            printf("Diagonal zero na linha %d. Divisao nao pode ser realizada.\n", i);
            continue;
        }

        for(j = 0; j < 20; j++) {
            M[i][j] = M[i][j] / diag;
        }
    }

    // Impressão da matriz modificada
    printf("\nMatriz modificada:\n");
    for(i = 0; i < 20; i++) {
        for(j = 0; j < 20; j++) {
            printf("%.2f ", M[i][j]);
        }
        printf("\n");
    }

    return 0;
}