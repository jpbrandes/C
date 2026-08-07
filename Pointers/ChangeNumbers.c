#include <stdio.h>


void swap_values(int *first_number, int *second_number) {
    int temporary_value = *first_number;
    *first_number = *second_number;
    *second_number = temporary_value;
}

int main() {
    int first_number, second_number;

    printf("Enter the first integer: ");
    if (scanf("%d", &first_number) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    printf("Enter the second integer: ");
    if (scanf("%d", &second_number) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    printf("\nBefore swap:\n");
    printf("First number: %d\n", first_number);
    printf("Second number: %d\n", second_number);

    swap_values(&first_number, &second_number);

    printf("\nAfter swap:\n");
    printf("First number: %d\n", first_number);
    printf("Second number: %d\n", second_number);

    return 0;
}