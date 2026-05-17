#include <stdio.h>

int main() {
    int MAT[4][5];
    int SOMALINHA[4];
    int i, j;
    int TOTAL = 0;

    // Leitura da matriz 4x5
    printf("Digite os elementos da matriz 4x5:\n");
    for(i = 0; i < 4; i++) {
        for(j = 0; j < 5; j++) {
            scanf("%d", &MAT[i][j]);
        }
    }

    // Soma de cada linha
    for(i = 0; i < 4; i++) {
        SOMALINHA[i] = 0;
        for(j = 0; j < 5; j++) {
            SOMALINHA[i] += MAT[i][j];
        }
    }

    // Soma do vetor SOMALINHA
    for(i = 0; i < 4; i++) {
        TOTAL += SOMALINHA[i];
    }

    // Impressão do resultado final
    printf("\nTOTAL = %d\n", TOTAL);

    return 0;
}