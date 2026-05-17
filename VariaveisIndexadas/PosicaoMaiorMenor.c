#include <stdio.h>

int main() {
    int N, i;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &N);

    int v[N];

    // Leitura do vetor
    printf("Digite os elementos do vetor:\n");
    for(i = 0; i < N; i++) {
        scanf("%d", &v[i]);
    }

    int posMaior = 0;
    int posMenor = 0;

    // Procura maior e menor posição
    for(i = 1; i < N; i++) {
        if(v[i] > v[posMaior]) {
            posMaior = i;
        }
        if(v[i] < v[posMenor]) {
            posMenor = i;
        }
    }

    printf("\nPosicao do maior elemento: %d (valor = %d)\n", posMaior, v[posMaior]);
    printf("Posicao do menor elemento: %d (valor = %d)\n", posMenor, v[posMenor]);

    return 0;
}