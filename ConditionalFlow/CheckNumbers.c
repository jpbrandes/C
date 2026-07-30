#include <stdio.h>

int main()
{
    int number1, number2;

    printf("Type the first number: ");
    scanf("%d", &number1);
    printf("Type the second number: ");
    scanf("%d", &number2);

    if(number1 == number2){
        printf("They are equal.\n");
    } else{
        printf("They are different.\n");
    }
    return 0;
}