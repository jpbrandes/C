#include <stdio.h>

int main() {
    setlocale(LC_ALL,"Portuguese");
    int i, n;


    printf("Digite o valor N: ");
    scanf("%d", &n);

    int v[n];


    for(i = 0; i < n; i++) {
        printf("Informe o valor da posicao %d: ", i);
        scanf("%d", &v[i]);
    }

    for(i = 0; i < n; i++){

        if(v[i] < 0) {
            printf("O numero %d e menor que zero.\n", v[i]);
        }
        else if (v[i] > 0) {
            printf("O numero %d e maior que zero.\n", v[i]);
        }
        else {
            printf("O numero %d e igual a zero.\n", v[i]);
        }
    }

    return 0;
}
