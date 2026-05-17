#include <stdio.h>
#include <string.h>

int main() {
    char palavra[21];
    int i, j, ehPalindromo = 1;

    printf("Digite uma palavra ou frase (ate 20 letras, sem espacos): ");
    scanf("%20s", palavra);

    j = strlen(palavra) - 1;

    for(i = 0; i < j; i++, j--) {
        if(palavra[i] != palavra[j]) {
            ehPalindromo = 0;
            break;
        }
    }

    if(ehPalindromo) {
        printf("\nEh palindromo.\n");
    } else {
        printf("\nNao eh palindromo.\n");
    }

    return 0;
}