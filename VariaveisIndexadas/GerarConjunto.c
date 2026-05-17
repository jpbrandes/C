#include <stdio.h>

int main() {
    int A[15], B[15], C[30];
    int i;

    // Leitura do conjunto A
    printf("Digite os 15 numeros do conjunto A:\n");
    for(i = 0; i < 15; i++) {
        scanf("%d", &A[i]);
    }

    // Leitura do conjunto B
    printf("Digite os 15 numeros do conjunto B:\n");
    for(i = 0; i < 15; i++) {
        scanf("%d", &B[i]);
    }

    // Copia os elementos de A para C
    for(i = 0; i < 15; i++) {
        C[i] = A[i];
    }

    // Copia os elementos de B para C
    for(i = 0; i < 15; i++) {
        C[i + 15] = B[i];
    }

    // Exibe o conjunto C
    printf("\nConjunto C:\n");
    for(i = 0; i < 30; i++) {
        printf("C[%d] = %d\n", i, C[i]);
    }

    return 0;
}