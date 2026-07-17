#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL,"English"); // Locale set to english

    int positionValue, vector[10];
    for(positionValue = 0; positionValue <=9; positionValue++) { 
        printf("Enter the value for position %d: ", positionValue); // Each position is gonna have their value.
        scanf("%d", &vector[positionValue]);
    }
    for(positionValue = 0; positionValue<=9; positionValue++){
        printf("v[%d] = %d\n", positionValue, vector[positionValue]); // Loop to print each value.
    }
    return 0;
}
