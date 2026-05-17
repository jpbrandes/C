#include <stdio.h>

int main() {
    int N, i, j;

    printf("Digite a dimensao N da matriz quadrada: ");
    scanf("%d", &N);

    int MAT[N][N];

    // Leitura da matriz
    printf("Digite os elementos da matriz %dx%d:\n", N, N);
    for(i = 0; i < N; i++) {
        for(j = 0; j < N; j++) {
            scanf("%d", &MAT[i][j]);
        }
    }

    printf("\nElementos acima da diagonal principal:\n");
    for(i = 0; i < N; i++) {
        for(j = i + 1; j < N; j++) {
            printf("%d ", MAT[i][j]);
        }
    }

    printf("\n\nElementos abaixo da diagonal principal:\n");
    for(i = 1; i < N; i++) {
        for(j = 0; j < i; j++) {
            printf("%d ", MAT[i][j]);
        }
    }

    printf("\n");

    return 0;
}