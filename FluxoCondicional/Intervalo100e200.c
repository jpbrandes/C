#include <stdio.h>

int main() {
    int numero;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);
    
    if (numero >= 100 && numero <= 200) {
        printf("O número %d está entre 100 e 200.\n", numero);
    } else {
        printf("O número %d não está entre 100 e 200.\n", numero);
    }
    return 0;
}