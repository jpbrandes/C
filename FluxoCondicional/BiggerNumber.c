#include <stdio.h>

int main() {
    int num1, num2;

    printf("Enter the first integer: ");
    scanf("%d", &num1);
    printf("Enter the second integer: ");
    scanf("%d", &num2);

    if (num1 > num2) {
        printf("The first number (%d) is greater than the second (%d).\n", num1, num2);
    } else if (num2 > num1) {
        printf("The second number (%d) is greater than the first (%d).\n", num2, num1);
    } else {
        printf("The numbers are equal (%d).\n", num1);
    }

    return 0;
}
