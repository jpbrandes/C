#include <stdio.h>

int main() {
    int letter_a, letter_b;

    printf("Enter the value of A: ");
    scanf("%d", &letter_a);

    printf("Enter the value of B: ");
    scanf("%d", &letter_b);

    printf("The value of A is: %d\n", letter_a);
    printf("The value of B is: %d\n", letter_b);
    printf("------------------------------\n");
    printf("The value of A is: %d\n", letter_b);
    printf("The value of B is: %d\n", letter_a);
    return 0;
    
}
