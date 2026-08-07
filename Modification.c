#include <stdio.h>

// Modifies the original integer value using a pointer-to-pointer (double pointer)
void updateValueWithDoublePointer(int **double_pointer, int new_value) {
    **double_pointer = new_value; // Accesses x through p1 and assigns the new value
}

// Prints the value of the variable and the addresses stored in each pointer
void printPointerDetails(int variable, int *pointer, int **double_pointer) {
    printf("Value of integer x: %d\n", variable);
    printf("Address of integer x (stored in p1): %p\n", (void*)pointer);
    printf("Address of p1 (stored in p2): %p\n", (void*)double_pointer);
}

int main() {
    // 1. Declare the integer variable
    int IntegerX = 10;

    // 2. Declare pointer p1 pointing to x
    int *p1 = &IntegerX;

    // 3. Declare double pointer p2 pointing to p1
    int **p2 = &p1;

    printf("Before Modification\n");
    printPointerDetails(IntegerX, p1, p2);

    // 4. Modify x using ONLY the double pointer p2 via function
    updateValueWithDoublePointer(p2, 99);

    printf("\nAfter Modification\n");
    printPointerDetails(IntegerX, p1, p2);

    return 0;
}
