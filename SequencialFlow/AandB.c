#include <stdio.h>

int main() {
    int a, b;

    printf("Enter the value of A: ");
    scanf("%d", &a);

    printf("Enter the value of B: ");
    scanf("%d", &b);

    printf("The value of A is: %d\n", a);
    printf("The value of B is: %d\n", b);
    printf("------------------------------\n");
    printf("The value of A is: %d\n", b);
    printf("The value of B is: %d\n", a);
    return 0;
    
}
