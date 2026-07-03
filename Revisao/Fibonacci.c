#include <stdio.h>

int main() {
    int N;
    long long termo1 = 0, termo2 = 1, proximo; // Long Long armazena inteiros grandes.
    long long soma = 0; 

    printf("Digite o numero de termos (N): ");
    scanf("%d", &N); // Vai ler o número

    if (N <= 0) {
        printf("Por favor, digite um numero maior que 0.\n"); // Verificação sobre o tipo de número para contagem.
        return 0;
    }

    printf("\nSequencia de Fibonacci (%d termos):\n", N);


    for (int i = 1; i <= N; i++) { // O i vai ser incrementado até que o N seja igual ou maior que N
        
        if (i == 1) {

            printf("%lld", termo1);
            soma += termo1; 
        } 
        else if (i == 2) {
            // Segundo termo é sempre 1
            printf(", %lld", termo2);
            soma += termo2; // Aqui ele tá no segundo um.
        } 
        else {

            proximo = termo1 + termo2;
            printf(", %lld", proximo);
            soma += proximo; // Próxima soma é a soma dos dois anteriores.


            termo1 = termo2;
            termo2 = proximo;
        }
    } // 0, 1, 1, 2, 3, 5, 8, 13, 21, 34


    printf("\n\nSoma de todos os termos gerados: %lld\n", soma);

    return 0;
}
