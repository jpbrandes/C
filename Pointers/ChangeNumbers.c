#include <stdio.h>

void swap_values(int *first_number, int *second_number) {
    int temporary_value = *first_number;
    *first_number = *second_number;
    *second_number = temporary_value;
}

int DataEntry(int *first_number, int *second_number) {
    printf("Enter the first integer: ");
    if (scanf("%d", first_number) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    printf("Enter the second integer: ");
    if (scanf("%d", second_number) != 1) {
        printf("Invalid input.\n");
        return 1;
    }
    return 0;
}

int SwapShow(int *first_number, int *second_number) {
    printf("\nBefore swap:\n");
    printf("First number: %d\n", *first_number);
    printf("Second number: %d\n", *second_number);

    swap_values(first_number, second_number);

    printf("\nAfter swap:\n");
    printf("First number: %d\n", *first_number);
    printf("Second number: %d\n", *second_number);

    return 0;
}

int main() {
    int first_number = 0;
    int second_number = 0;

    if (DataEntry(&first_number, &second_number) != 0) {
        return 1; 

    SwapShow(&first_number, &second_number);

    return 0;
}
