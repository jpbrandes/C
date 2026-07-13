#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL,"English"); // Locale set to english

    int i, v[10];
    for(i = 0; i <=9; i++) { 
        printf("Enter the value for position %d: ", i); // Each position is gonna have their value.
        scanf("%d", &v[i]);
    }
    for(i = 0; i<=9; i++){
        printf("v[%d] = %d\n", i, v[i]); // Loop to print each value.
    }
    return 0;
}
