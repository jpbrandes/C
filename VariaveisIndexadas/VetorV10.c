#include <stdio.h>

int main() {
    int v[10];
    int i;
    int primeiro;

    // Leitura do vetor
    printf("Digite os 10 elementos do vetor:\n");
    for(i = 0; i < 10; i++) {
        scanf("%d", &v[i]);
    }

    // Guarda o primeiro elemento
    primeiro = v[0];

    // Rotação à esquerda
    for(i = 0; i < 9; i++) {
        v[i] = v[i + 1];
    }

    // Coloca o primeiro no final
    v[9] = primeiro;

    // Impressão do vetor rotacionado
    printf("\nVetor rotacionado:\n");
    for(i = 0; i < 10; i++) {
        printf("%d ", v[i]);
    }

    printf("\n");

    return 0;
}