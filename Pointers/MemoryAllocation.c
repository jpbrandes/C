#include <stdio.h>
#include <stdlib.h>

#define INITIAL_CAPACITY 2
#define TERMINATION_VALUE -1

int *allocate_initial_buffer(size_t capacity) {
    int *buffer = (int *)malloc(capacity * sizeof(int));
    return buffer; // A function that allocate buffer with initial capacity.
}

int resize_buffer(int **buffer_pointer, size_t new_capacity) {
    int *reallocated_memory = (int *)realloc(*buffer_pointer, new_capacity * sizeof(int));
    if (reallocated_memory == NULL) {
        return 0; // The function will resize buffer when the capacity for store numbers is out of space.
    }
    *buffer_pointer = reallocated_memory;
    return 1;
}

void print_buffer_elements(const int *buffer, size_t count) {
    printf("\n--- Stored Elements (%zu items) ---\n", count);
    for (size_t index = 0; index < count; index++) {
        printf("Element %zu: %d\n", index + 1, *(buffer + index));
    }
    printf("----------------------------------\n"); // A function that prints every element that you type using a for loop.
}

void deallocate_buffer(int **buffer_pointer) {
    if (buffer_pointer != NULL && *buffer_pointer != NULL) {
        free(*buffer_pointer);
        *buffer_pointer = NULL;
    }
}

int main(void) {
    size_t capacity = INITIAL_CAPACITY; // Initial capacity defined above.
    size_t count = 0; // Counter variable

    int *dynamic_array = allocate_initial_buffer(capacity); // The integer dynamic array will be stored in initial buffer, that are linked with inicial capacity.
    if (dynamic_array == NULL) {
        printf("Initial memory allocation failed.\n");
        return 1;
    }

    printf("Enter integers (type %d to stop):\n", TERMINATION_VALUE);

    while (1) {
        int input_value;
        printf("Enter value: ");
        if (scanf("%d", &input_value) != 1) {
            printf("Invalid input.\n");
            deallocate_buffer(&dynamic_array); // The deallocate_buffer function, will receive the dynamic_array address.
            return 1;
        }

        if (input_value == TERMINATION_VALUE) { // A data processing while loop, it will read a integer value and
            break;
        }

        if (count == capacity) {
            size_t new_capacity = capacity * 2;
            if (!resize_buffer(&dynamic_array, new_capacity)) {
                printf("Memory reallocation failed.\n"); // When counting is the same with capacity, new_capacity variable with recieve the double of capacity.
                deallocate_buffer(&dynamic_array); // Allocation failed will send the dynamic_array address to the function, so the buffer will be desacolated.
                return 1;
            }
            capacity = new_capacity;
            printf("-> Buffer capacity doubled to %zu\n", capacity); // Capacity will have the new_capacity attributed to the original capacity.
        }

        *(dynamic_array + count) = input_value;
        count++;
    }

    if (count > 0) {
        print_buffer_elements(dynamic_array, count);
    } else {
        printf("\nNo numbers were entered.\n"); // Just a condition that check if if a number was typed
    }

    deallocate_buffer(&dynamic_array); //

    return 0;
}
