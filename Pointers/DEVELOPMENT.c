// Primeiro passo, declarar as variáveis no main, feito
// Associar ponteiros as variáveis declaradas no main, feito
// CONTINUAR DESENVOLVIMENTO

#include <stdio.h>
#include <stdlib.h>

int IntegerFunction(int integer_number, int *integer_pointer){
    integer_pointer = &integer_number;
    printf("Variable address: %p.\n", &integer_number);

    return &integer_number;
}

float FloatFunction(float float_variable, float *float_pointer){
    float_pointer = &float_variable;
    printf("Variable address: %p.\n", &float_variable);

    return &float_variable;
}

char CharFunction(char char_variable, char *char_pointer){
    char_pointer = &char_variable;
    printf("Variable address: %p.\n", &char_variable);

    return &char_variable;
}

void DoubleValueOfPointers(int *integer_pointer, char *char_pointer, float *float_pointer){
    *integer_pointer = *integer_pointer * 2;
    *char_pointer = *char_pointer * 2;
    *float_pointer = *float_pointer * 2;

}


int main()
{
    char char_variable, *char_pointer;
    int integer_number, *int_pointer;
    float float_variable, *float_pointer;

    char_pointer = &char_variable;
    int_pointer = &integer_number;
    float_pointer = &float_variable;

    
    printf("Type a character to store in the char variable: ");
    scanf("%c", &char_variable);

    printf("Type a number to store in the integer variable: ");
    scanf("%d", &integer_number);

    printf("Type a number to store in the float variable: ");
    scanf("%f", &float_variable);

    printf("Numbers/Characters stored: %d, %.2f, %c.", integer_number, float_variable, char_variable);

    printf("\n====Variable addresses====\n");

    printf(CharFunction(&char_variable, *char_pointer));
    printf();    

    return 0;
}
