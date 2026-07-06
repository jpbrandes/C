// Pointer is pointing directly to a memory address.

#include <stdio.h>

int main()
{
    int var = 15;
    int *ptr; // Point is declared with a *.

    ptr = &var;

    printf("Var content = %d\n", var);
    printf("Var address = %p\n", &var); 
    printf("Var content pointed by ptr = %d\n", *ptr);
    printf("Var address pointed by ptr = %p\n", ptr); 
    printf("pointer address = %p\n", &ptr);

    *ptr = 73;

    printf("\n\n");

    printf("Var content = %d\n", var);
    printf("Var address = %p\n", &var); 
    printf("Var content pointed by ptr = %d\n", *ptr);
    printf("Var address pointed by ptr = %p\n", ptr); 
    printf("pointer address = %p\n", &ptr);
    
    // Remember of %p - That variable var, is allocated on that memory space, on that space 15 is allocated.


    return 0;
}

// Pointers:
// *ptr: represents the content of the variable address that ptr points to.
// ptr: represents the memory address of the variable.
// &ptr: represents the address of the pointer itself.