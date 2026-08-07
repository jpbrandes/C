#include <stdio.h>

void find_min_max(const int *array_pointer, int array_size, int *minimum_value, int *maximum_value) {
    if (array_size <= 0) {
        return;
    }

    *minimum_value = *array_pointer;
    *maximum_value = *array_pointer;

    for (int index = 1; index < array_size; index++) {
        int current_value = *(array_pointer + index);

        if (current_value < *minimum_value) {
            *minimum_value = current_value;
        }

        if (current_value > *maximum_value) {
            *maximum_value = current_value;
        }
    }
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

    int minimum_value;
    int maximum_value;

    find_min_max(numbers_array, array_size, &minimum_value, &maximum_value);

    printf("Minimum value: %d\n", minimum_value);
    printf("Maximum value: %d\n", maximum_value);

    return 0;
}