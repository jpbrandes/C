#include <stdio.h>
#include <stdlib.h>

int *allocate_integer_array(size_t array_size) {
    int *allocated_memory = (int *)malloc(array_size * sizeof(int));
    return allocated_memory;
}

int read_array_elements(int *array_pointer, size_t array_size) {
    for (size_t index = 0; index < array_size; index++) {
        printf("Enter element %zu: ", index + 1);
        if (scanf("%d", array_pointer + index) != 1) {
            return 0;
        }
    }
    return 1;
}

void print_array_elements(const int *array_pointer, size_t array_size) {
    printf("\n--- Array Elements ---\n");
    for (size_t index = 0; index < array_size; index++) {
        printf("Element %zu: %d\n", index + 1, *(array_pointer + index));
    }
    printf("----------------------\n");
}

void deallocate_integer_array(int **array_pointer) {
    if (array_pointer != NULL && *array_pointer != NULL) {
        free(*array_pointer);
        *array_pointer = NULL;
    }
}

int main(void) {
    int input_size;

    printf("Enter the size of the array (N): ");
    if (scanf("%d", &input_size) != 1 || input_size <= 0) {
        printf("Invalid array size.\n");
        return 1;
    }

    size_t array_size = (size_t)input_size;
    int *dynamic_array = allocate_integer_array(array_size);

    if (dynamic_array == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    if (!read_array_elements(dynamic_array, array_size)) {
        printf("Invalid input elements.\n");
        deallocate_integer_array(&dynamic_array);
        return 1;
    }

    print_array_elements(dynamic_array, array_size);

    deallocate_integer_array(&dynamic_array);

    return 0;
}