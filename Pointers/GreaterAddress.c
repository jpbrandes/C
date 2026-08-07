#include <stdio.h>

// Function that receives pointers to the original variables
void printGreaterAddress(int *ptr1, int *ptr2) {
    if (ptr1 > ptr2) {
        printf("Address %p is GREATER than %p\n", (void*)ptr1, (void*)ptr2);
    } else if (ptr2 > ptr1) {
        printf("Address %p is GREATER than %p\n", (void*)ptr2, (void*)ptr1);
    } else {
        printf("Both addresses are identical: %p\n", (void*)ptr1);
    }
}

int main() {
    int variable1, variable2;

    // We pass the memory addresses using the '&' operator
    printGreaterAddress(&variable1, &variable2);
    printGreaterAddress(&variable2, &variable1);

    return 0;
}
