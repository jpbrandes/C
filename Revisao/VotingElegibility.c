#include <stdio.h>

int main(){
    int idadepermitida = 18;

    printf("Digite sua idade: ");
    scanf("%d", &idadepermitida);

    if(18 <= idadepermitida) {
        printf("Você pode votar.");
    } else {
        printf("Você não pode votar.");
    }

    return 0;
}