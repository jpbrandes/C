#include <stdio.h>
#define ARRAY_SIZE 5


void read_array_elements(int *array_pointer, int array_size) {
    for (int index = 0; index < array_size; index++) {
        printf("Enter element %d: ", index + 1);
        if (scanf("%d", (array_pointer + index)) != 1) {
            printf("Invalid input.\n");
        }
    }
}


void double_array_values(int *array_pointer, int array_size) {
    for (int index = 0; index < array_size; index++) {
        *(array_pointer + index) = *(array_pointer + index) * 2;
    }
}


void print_array_elements(const int *array_pointer, int array_size) {
    printf("\n--- Doubled Values ---\n");
    for (int index = 0; index < array_size; index++) {
        printf("Element %d: %d\n", index + 1, *(array_pointer + index));
    }
    printf("----------------------\n");
}

int main(void) {
    int numbers[ARRAY_SIZE];

    read_array_elements(numbers, ARRAY_SIZE);

    double_array_values(numbers, ARRAY_SIZE);

    print_array_elements(numbers, ARRAY_SIZE);

    return 0;
}