#include <stdio.h>

int main() {
    double numeros[80]; // Declaração do vetor para armazenar 80 números
    int i;

    for(i = 0; i < 80; i++) {
        printf("Digite oitenta numeros %d: ", i + 1);
        scanf("%lf", &numeros[i]); // Lê os números e armazena no vetor
        if(numeros[i] > 10 && numeros[i] < 150) {
            printf("Os numeros %.2lf estão entre 10 e 150.\n", numeros[i]);
        } else {
            printf("Os numeros %.2lf nao estão entre 10 e 150.\n", numeros[i]);
        }
    }

    printf("Os números que pertencem ao intervalo entre 10 e 150 são:\n");
    for(i = 0; i < 80; i++) {
        if(numeros[i] > 10 && numeros[i] < 150) {
            printf("%.2lf / ", numeros[i]);
        }
    }
    printf("\n");

}