#include <stdio.h>

int calculate_array_sum(const int *array_pointer, int array_size) {
    int total_sum = 0;
    const int *end_pointer = array_pointer + array_size;

    while (array_pointer < end_pointer) {
        total_sum += *array_pointer;
        array_pointer++;
    }

    return total_sum;
}

int read_array_elements(int *array_pointer, int array_size) {
    for (int index = 0; index < array_size; index++) {
        printf("Enter element %d: ", index + 1);
        if (scanf("%d", array_pointer + index) != 1) {
            return 0;
        }
    }
    return 1;
}

int main(void) {
    int array_size;

    printf("Enter the number of elements: ");
    if (scanf("%d", &array_size) != 1 || array_size <= 0) {
        printf("Invalid array size.\n");
        return 1;
    }

    int numbers_array[array_size];

    if (!read_array_elements(numbers_array, array_size)) {
        printf("Invalid input elements.\n");
        return 1;
    }

    int total_sum = calculate_array_sum(numbers_array, array_size);

    printf("Sum of all elements: %d\n", total_sum);

    return 0;
}