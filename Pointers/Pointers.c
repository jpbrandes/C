// Pointer is pointing directly to a memory address.

#include <stdio.h>

int main()
{
    int variable = 15;
    int *pointer; // Point is declared with a *.

    pointer = &variable; // Pointing to variable address.

    printf("Variable content = %d\n", variable); // Just the content.
    printf("Variable address = %p\n", &variable);  // Variable Address.
    printf("Variable content pointed by ptr = %d\n", *pointer); // Content pointed to the pointer.
    printf("Variable address pointed by ptr = %p\n", pointer);  // Addres pointed by pointer.
    printf("pointer address = %p\n", &pointer);

    *pointer = 73;

    printf("\n\n");

    printf("Variable content = %d\n", variable);
    printf("Variable address = %p\n", &variable); 
    printf("Variable content pointed by ptr = %d\n", *pointer);
    printf("Variable address pointed by ptr = %p\n", pointer); 
    printf("pointer address = %p\n", &pointer);
    
    // Remember of %p - That variable var, is allocated on that memory space, on that space 15 is allocated.


    return 0;
}

// Pointers:
// *ptr: represents the content of the variable address that ptr points to.
// ptr: represents the memory address of the variable.
// &ptr: represents the address of the pointer itself.