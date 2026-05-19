#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL,"Portuguese");
    int i, v[10];

    for(i = 0; i <=9; i++) {
        printf("Informe o valor da posição %d: ", i);
        scanf("%d", &v[i]);

    }
    for(i = 0; i<=9; i++){
        printf("v[%d] = %d\n", i, v[i]);
    }
    return 0;
}
