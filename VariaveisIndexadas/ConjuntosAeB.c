#include <stdio.h>

int main() {
    int A[50], B[50];
    float C[50];
    int i;

    // Leitura do conjunto A
    printf("Digite os 50 numeros do conjunto A:\n");
    for(i = 0; i < 50; i++) {
        scanf("%d", &A[i]);
    }

    // Leitura do conjunto B
    printf("Digite os 50 numeros do conjunto B:\n");
    for(i = 0; i < 50; i++) {
        scanf("%d", &B[i]);
    }

    // Calcula a média entre os elementos de A e B
    for(i = 0; i < 50; i++) {
        C[i] = (A[i] + B[i]) / 2.0;
    }

    // Exibe o conjunto C
    printf("\nConjunto C (medias):\n");
    for(i = 0; i < 50; i++) {
        printf("C[%d] = %.2f\n", i, C[i]);
    }

    return 0; // O segredo é o for.
}