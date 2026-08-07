#include <stdio.h>

typedef struct {
    int number;
    char character;
} EasyStruct;

void demonstrate_primitive_pointers(void) {
    int integer_value = 5;
    char character_value = 'G';

    int *integer_pointer = &integer_value;
    char *character_pointer = &character_value;

    printf("--- Part 1: Primitive Pointer Manipulation ---\n");
    printf("Value = %d, Char = %c\n", *integer_pointer, *character_pointer);

    *integer_pointer = *integer_pointer + 5;
    *character_pointer = 'H';

    printf("Value = %d, Char = %c\n", integer_value, character_value);

    integer_value = integer_value + 5;
    character_value = 'H';

    printf("Final Direct State -> Value = %d, Char = %c\n\n", integer_value, character_value);
}


void update_struct_via_pointer(EasyStruct *struct_pointer, int new_number, char new_character) {
    (*struct_pointer).number = new_number;

    struct_pointer->character = new_character;
}

void print_struct_details(const EasyStruct *struct_pointer) {
    printf("--- Part 2: Structure Pointer Details ---\n");
    printf("Struct Number   : %d\n", struct_pointer->number);
    printf("Struct Character: %c\n", struct_pointer->character);
    printf("----------------------------------------\n");
}

int main(void) {
    demonstrate_primitive_pointers();

    EasyStruct easy_instance;
    EasyStruct *easy_pointer = &easy_instance;

    update_struct_via_pointer(easy_pointer, 32, 'A');
    print_struct_details(easy_pointer);

    return 0;
}