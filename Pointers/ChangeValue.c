#include <stdio.h>

void ChangeValuesBetweenPointers(int *number1, int *number2){

int auxiliary_variable = *number1;
    *number1 = *number2;
    *number2 = auxiliary_variable;
}

int main()
{
    int first_number, second_number;

    printf("Type the first number: ");
    scanf("%d", &first_number);

    printf("Type the second number: ");
    scanf("%d", &second_number);

    ChangeValuesBetweenPointers(&first_number, &second_number);

    printf("First number - %d:\n", first_number);
    printf("Second number - %d:\n", second_number);

    return 0;
}