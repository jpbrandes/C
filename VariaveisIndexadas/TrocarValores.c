#include <stdio.h>

int main() {
    int A[20], B[20];
    int i, temp;

    // Leitura do conjunto A
    printf("Digite os 20 numeros do conjunto A:\n");
    for(i = 0; i < 20; i++) {
        scanf("%d", &A[i]);
    }

    // Leitura do conjunto B
    printf("Digite os 20 numeros do conjunto B:\n");
    for(i = 0; i < 20; i++) {
        scanf("%d", &B[i]);
    }

    // Troca dos valores entre A e B
    for(i = 0; i < 20; i++) {
        temp = A[i];
        A[i] = B[i];
        B[i] = temp;
    }

    // Exibe o novo conjunto A
    printf("\nNovo conjunto A:\n");
    for(i = 0; i < 20; i++) {
        printf("A[%d] = %d\n", i, A[i]);
    }

    // Exibe o novo conjunto B
    printf("\nNovo conjunto B:\n");
    for(i = 0; i < 20; i++) {
        printf("B[%d] = %d\n", i, B[i]);
    }

    return 0;
}