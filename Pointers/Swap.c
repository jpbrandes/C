#include <stdio.h>


void swap_integers(int *x_pointer, int *y_pointer) {
    int temporary_value = *x_pointer;
    *x_pointer = *y_pointer;
    *y_pointer = temporary_value;
}


int read_two_integers(int *first_number, int *second_number) {
    printf("Enter two numbers: ");
    if (scanf("%d %d", first_number, second_number) != 2) {
        return 0;
    }
    return 1;
}

int main(void) {
    int first_number, second_number;

    if (!read_two_integers(&first_number, &second_number)) {
        printf("Invalid input. Please enter valid integers.\n");
        return 1;
    }

    printf("You entered: %d and %d\n", first_number, second_number);

    swap_integers(&first_number, &second_number);

    printf("Swapped, they are: %d and %d\n", first_number, second_number);

    return 0;
}