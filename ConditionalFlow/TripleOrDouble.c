#include <stdio.h>

int main()
{
    int number1;

    printf("Type the first number: ");
    scanf("%d", &number1);
    
    if(number1 >= 10 && number1 <= 99){
        printf("This digit is a two digit value.\n");
    } else if(number1 >= 100 && number1 <= 999){
        printf("This number is a three digit value.\n");
    } else {
        printf("This number isn't three or two digit.\n");
    }

    return 0;
}