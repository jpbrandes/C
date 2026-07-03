#include <stdio.h>

int main (){
    int number, i, cube;

    printf("Digite quantos numeros você quer elevar ao cubo: ");
    scanf("%d", &number);

    cube = i * i * i;

    for(i = 1; i <= number; i++) {
        printf("\nO cubo de %d é igual a %d", i, i * i * i);
    }
    
    return 0;

}