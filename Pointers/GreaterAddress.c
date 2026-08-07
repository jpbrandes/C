#include <stdio.h>
#include <stdint.h>


void display_greater_address(const int *first_pointer, const int *second_pointer) {
    uintptr_t first_address = (uintptr_t)first_pointer;
    uintptr_t second_address = (uintptr_t)second_pointer;

    printf("\n--- Memory Address Comparison ---\n");
    printf("Address of First Variable  (first_number) : %p\n", (void *)first_pointer);
    printf("Address of Second Variable (second_number): %p\n", (void *)second_pointer);
    printf("----------------------------------\n");

    if (first_address > second_address) {
        printf("The FIRST variable has the greater memory address.\n");
    } else if (second_address > first_address) {
        printf("The SECOND variable has the greater memory address.\n");
    } else {
        printf("Both variables share the exact same memory address.\n");
    }
}

int main() {
    int first_number;
    int second_number;

    printf("Enter the first integer: ");
    if (scanf("%d", &first_number) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    printf("Enter the second integer: ");
    if (scanf("%d", &second_number) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    display_greater_address(&first_number, &second_number);

    return 0;
}