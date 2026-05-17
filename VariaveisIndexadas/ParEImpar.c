#include <stdio.h>

int main() {
    int A[100], B[100];
    int i;

    // Leitura do conjunto A
    printf("Digite os 100 numeros do conjunto A:\n");
    for(i = 0; i < 100; i++) {
        scanf("%d", &A[i]);
    }

    // Geração do conjunto B
    for(i = 0; i < 100; i++) {
        if(A[i] % 2 == 0) {
            B[i] = A[i] * 5; // Se for par
        } else {
            B[i] = A[i] + 5; // Se for ímpar
        }
    }

    // Exibição do conjunto B
    printf("\nConjunto B:\n");
    for(i = 0; i < 100; i++) {
        printf("B[%d] = %d\n", i, B[i]);
    }

    return 0;
}