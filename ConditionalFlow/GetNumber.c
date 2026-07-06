#include <stdio.h>

int main() {
    int number;

    printf("Enter an integer: ");
    scanf("%d", &number);
    if(number < 25) {
        printf("The number %d is less than 25.\n", number);
    } else if(number > 25) {
        printf("The number %d is greater than 25.\n", number);
    } else {
        printf("The number %d is equal to 25.\n", number);
    }

    if (number < 80) {
        printf("The number %d is less than 80.\n", number);
    }

    if(number == 45) {
        printf("The number %d is equal to 45.\n", number);
    }

    return 0;
}
