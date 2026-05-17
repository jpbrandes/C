#include <stdio.h>

int main() {
    int N, i, j;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &N);

    int v[N], usado[N];

    // Inicializa vetor de controle
    for(i = 0; i < N; i++) {
        usado[i] = 0;
    }

    // Leitura do vetor
    printf("Digite os elementos do vetor:\n");
    for(i = 0; i < N; i++) {
        scanf("%d", &v[i]);
    }

    // Frequência sem repetição
    printf("\nNumero - Frequencia\n");

    for(i = 0; i < N; i++) {

        if(usado[i] == 1)
            continue;

        int freq = 1;
        for(j = i + 1; j < N; j++) {
            if(v[i] == v[j]) {
                freq++;
                usado[j] = 1; // marca como já contado
            }
        }

        printf("%d - %d\n", v[i], freq);
    }

    return 0;
}