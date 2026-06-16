#include <stdio.h>

int main() {
    int N;
    long long termo1 = 0, termo2 = 1, proximo;
    long long soma = 0;

    printf("Digite o numero de termos (N): ");
    scanf("%d", &N);

    if (N <= 0) {
        printf("Por favor, digite um numero maior que 0.\n");
        return 0;
    }

    printf("\nSequencia de Fibonacci (%d termos):\n", N);


    for (int i = 1; i <= N; i++) {
        
        if (i == 1) {

            printf("%lld", termo1);
            soma += termo1;
        } 
        else if (i == 2) {
            // Segundo termo é sempre 1
            printf(", %lld", termo2);
            soma += termo2;
        } 
        else {

            proximo = termo1 + termo2;
            printf(", %lld", proximo);
            soma += proximo;


            termo1 = termo2;
            termo2 = proximo;
        }
    }


    printf("\n\nSoma de todos os termos gerados: %lld\n", soma);

    return 0;
}
