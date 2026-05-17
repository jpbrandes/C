#include <stdio.h>

int main() {
    int A[30], B[30];
    int i;

    // Leitura do conjunto A
    printf("Digite os 30 numeros do conjunto A:\n");
    for(i = 0; i < 30; i++) {
        scanf("%d", &A[i]);
    }

    // Multiplica os elementos de A por 3 e armazena em B
    for(i = 0; i < 30; i++) {
        B[i] = A[i] * 3;
    }

    // Exibe o conjunto B
    printf("\nConjunto B:\n");
    for(i = 0; i < 30; i++) {
        printf("B[%d] = %d\n", i, B[i]);
    }

    return 0;
}