#include <stdio.h>

int main()
{
    int number1, number2, number3, biggest_value, lowest_value;

    printf("Type the first number: ");
    scanf("%d", &number1);
    printf("The number one is: %d\n", number1);

    printf("Type the second number: ");
    scanf("%d", &number2);
    printf("The second number one is: %d\n", number2);

    printf("Type the third number: ");
    scanf("%d", &number3);
    printf("The third number is: %d\n", number3);


    biggest_value = number1;
    lowest_value = number2;

    if(biggest_value < lowest_value)
    {
        biggest_value = number2;
        lowest_value = number1;
    }

    if(biggest_value < number3)
        biggest_value = number3;
    
    if(number3 < lowest_value)
        lowest_value = number3; // Careful with too much if, else. Its not so many conditions depending of the program.

        printf("The biggest number between these three elements is: %d\n.", biggest_value);
        printf("The lowest value between these three number is: %d.\n", lowest_value);

    return 0;
}