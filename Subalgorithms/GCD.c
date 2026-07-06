#include <stdio.h>
// Subroutine (function) to calculate the GCD
int calculateGCD(int a, int b) {
    int remainder;
    while (b != 0) {
        remainder = a % b;
        a = b;
        b = remainder;
    }
    return a;
}
int main() {
    int num1, num2, gcd;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    gcd = calculateGCD(num1, num2);
    printf("The GCD of %d and %d is: %d\n", num1, num2, gcd);
    return 0;
}
