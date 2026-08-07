#include <stdio.h>

void update_value_via_double_pointer(int **double_pointer, int new_value) {
    **double_pointer = new_value;
}


void print_hierarchy_details(int value, const int *single_pointer, const int * const *double_pointer) {
    printf("--- Variable Hierarchy ---\n");
    printf("Value of x: %d\n", value);
    printf("Address of x (&x): %p\n", (void *)&value);
    printf("Value stored in p1 (address of x): %p\n", (void *)single_pointer);
    printf("Address of p1 (&p1): %p\n", (void *)&single_pointer);
    printf("Value stored in p2 (address of p1): %p\n", (void *)double_pointer);
    printf("--------------------------\n");
}

int main() {
    int x = 100;

    int *p1 = &x;

    int **p2 = &p1;

    printf("BEFORE MODIFICATION:\n");
    printf("Value of x: %d\n\n", x);

    int new_value = 500;
    update_value_via_double_pointer(p2, new_value);

    printf("AFTER MODIFICATION (via p2):\n");
    printf("Updated value of x: %d\n\n", x);

    print_hierarchy_details(x, p1, p2);

    return 0;
}