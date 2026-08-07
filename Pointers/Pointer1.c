#include <stdio.h>


void initialize_data(int *number_array, int *variable_d) {
    number_array[0] = 92;
    number_array[1] = 81;
    number_array[2] = 70;
    number_array[3] = 69;
    number_array[4] = 58;

    *variable_d = 0; 
}

void update_value_via_pointer(int *pointer_to_d, int new_value) {
    *pointer_to_d = new_value;
}

void print_memory_map(const int *number_array, int array_size, int variable_d, const int *pointer_to_d) {
    printf("=== ARRAY: num[] ===\n");
    for (int index = 0; index < array_size; index++) {
        printf("num[%d] | Value: %2d | Address: %p\n", index, number_array[index], (void *)&number_array[index]);
    }

    printf("\n=== VARIABLE AND POINTER ===\n");
    printf("Variable 'd'   | Value: %d  | Address: %p\n", variable_d, (void *)&variable_d);
    printf("Pointer  'p_d' | Stored Address: %p | Dereferenced Value: %d | Address of p_d: %p\n", 
           (void *)pointer_to_d, *pointer_to_d, (void *)&pointer_to_d);
    printf("============================\n");
}

int main() {
    int num[5];
    int d;
    int *p_d = &d; 

    initialize_data(num, &d);

    printf("BEFORE MODIFICATION:\n");
    print_memory_map(num, 5, d, p_d);

    update_value_via_pointer(p_d, 5);

    printf("\nAFTER MODIFICATION (d changed from 0 to 5 via p_d):\n");
    print_memory_map(num, 5, d, p_d);

    return 0;
}