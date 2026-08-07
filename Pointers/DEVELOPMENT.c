#include <stdio.h>
#include <stdlib.h>

// Modifies the integer value using its pointer
void setIntegerValue(int *integer_pointer, int function_value) {
    *integer_pointer = function_value;
}

// Modifies the float value using its pointer
void setFloatValue(float *float_pointer, float function_value) {
    *float_pointer = function_value;
}

// Modifies the char value using its pointer
void setCharValue(char *char_pointer, char function_value) {
    *char_pointer = function_value;
}

// Displays the variable's value and its memory address (%p)
void printIntegerAddress(int *integer_pointer) {
    printf("Integer - Value: %d | Address: %p\n", *integer_pointer, (void*)integer_pointer);
}

void printFloatAddress(float *float_pointer) {
    printf("Float   - Value: %.2f | Address: %p\n", *float_pointer, (void*)float_pointer);
}

void printCharAddress(char *char_pointer) {
    printf("Char    - Value: %c | Address: %p\n", *char_pointer, (void*)char_pointer); // This void between () is called casting
}

int main()
{
    // Step 1: Declare variables and pointers
    char char_variable, *char_pointer;
    int integer_number, *integer_pointer;
    float float_variable, *float_pointer;

    // Step 2: Associate pointers to the variables
    char_pointer = &char_variable;
    integer_pointer = &integer_number;
    float_pointer = &float_variable;

    // Step 3: Modify values using ONLY functions with pointers
    setCharValue(char_pointer, 'A');
    setIntegerValue(integer_pointer, 42);
    setFloatValue(float_pointer, 3.14f);

    // Step 4: Display values and addresses
    printf("==== Variable Addresses ====\n\n");

    printCharAddress(char_pointer);
    printIntegerAddress(integer_pointer);
    printFloatAddress(float_pointer);

    return 0;
}
