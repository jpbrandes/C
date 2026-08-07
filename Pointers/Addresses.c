#include <stdio.h>


void modify_values(int *integer_pointer, float *float_pointer, char *char_pointer, 
                   int new_integer_value, float new_float_value, char new_char_value) {
    *integer_pointer = new_integer_value;
    *float_pointer = new_float_value;
    *char_pointer = new_char_value;
}


void print_variable_details(const int *integer_pointer, const float *float_pointer, const char *char_pointer) {
    printf("--- Variable Memory Details ---\n");
    printf("Integer Variable:\n");
    printf("  Value: %d\n", *integer_pointer);
    printf("  Address: %p\n\n", (void *)integer_pointer);

    printf("Float Variable:\n");
    printf("  Value: %.2f\n", *float_pointer);
    printf("  Address: %p\n\n", (void *)float_pointer);

    printf("Character Variable:\n");
    printf("  Value: '%c'\n", *char_pointer);
    printf("  Address: %p\n", (void *)char_pointer);
    printf("-------------------------------\n");
}

int main() {
    int integer_variable = 10;
    float float_variable = 5.5f;
    char char_variable = 'A';

    int *integer_pointer = &integer_variable;
    float *float_pointer = &float_variable;
    char *char_pointer = &char_variable;

    printf("BEFORE MODIFICATION:\n");
    print_variable_details(integer_pointer, float_pointer, char_pointer);

    modify_values(integer_pointer, float_pointer, char_pointer, 42, 12.34f, 'Z');

    printf("\nAFTER MODIFICATION:\n");
    print_variable_details(integer_pointer, float_pointer, char_pointer);

    return 0;
}