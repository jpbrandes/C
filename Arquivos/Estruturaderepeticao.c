#include <stdio.h>

/*
int main()

 int  n, i = 0;

   printf("Digite um numero N: ");
   scanf("%d", &n);

   for (i = 0; i < n; i+=1) {
      printf("%d\n", i);
   }
}
*/

/*
int main() {
    int n, i;

    printf("Digite um numero N: ");
    scanf("%d", &n);

    for (i = n; i >=0; i--) {
        printf("%d\n", i); // Comentário de ajuda: o problema que estava matando esse código era o fato que o segundo printf estava com a variável que iria ser lida errada, e isso dava erro.
    }
    return 0;
}
Teste */

int main() {
    int N, i;
    printf("Digite um número N: ");
    scanf("%d", &N);

    for (i = N; i <= N; ) {
        printf("%d\n", i); // Continuar aqui
    }
}
