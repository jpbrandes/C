#include <stdio.h>

int main() {
    int N; // Declaração de variável

    do {
        printf("Digite um numero de 0 a 10: ");
        scanf("%d", &N);

        if (N < 0 || N > 10) {
            printf("Numero invalido! Tente novamente.\n\n");
        }
    } while (N < 0 || N > 10); // Estrutura de repetição

    printf("\n--- Tabuada do %d ---\n", N);


    for (int i = 1; i <= 10; i++) { // Loop até 10 
        printf("%d x %d = %d\n", N, i, N * i);
    }

    printf("-------------------\n");

    return 0;
}
