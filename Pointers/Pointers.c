// Pointer is pointing directly to a memory address.

#include <stdio.h>

int main()
{
    int variable = 15;
    int *pointer; // Point is declared with a *.

    pointer = &variable;

    printf("Var content = %d\n", variable);
    printf("Var address = %p\n", &variable); 
    printf("Var content pointed by ptr = %d\n", *pointer);
    printf("Var address pointed by ptr = %p\n", pointer); 
    printf("pointer address = %p\n", &pointer);

    *pointer = 73;

    printf("\n\n");

    printf("Var content = %d\n", variable);
    printf("Var address = %p\n", &variable); 
    printf("Var content pointed by ptr = %d\n", *pointer);
    printf("Var address pointed by ptr = %p\n", pointer); 
    printf("pointer address = %p\n", &pointer);
    
    // Remember of %p - That variable var, is allocated on that memory space, on that space 15 is allocated.


    return 0;
}

// Pointers:
// *ptr: represents the content of the variable address that ptr points to.
// ptr: represents the memory address of the variable.
// &ptr: represents the address of the pointer itself.