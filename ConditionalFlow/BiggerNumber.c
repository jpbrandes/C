#include <stdio.h>

int main() {
    int number1, number2;

    printf("Enter the first integer: ");
    scanf("%d", &number1);
    printf("Enter the second integer: ");
    scanf("%d", &number2);

    if (number1 > number2) {
        printf("The first number (%d) is greater than the second (%d).\n", number1, number2);
    } else if (number2 > number1) {
        printf("The second number (%d) is greater than the first (%d).\n", number2, number1);
    } else {
        printf("The numbers are equal (%d).\n", number1);
    }

    return 0;
}
