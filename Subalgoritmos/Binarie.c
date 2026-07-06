#include <stdio.h>
// Subroutine: prints a number in binary
void printBinary(int n) {
    int bin[32];
    int i = 0;
    int j;
    if (n == 0) {
        printf("0");
        return;
    }
    while (n > 0) {
        bin[i] = n % 2;
        n = n / 2;
        i++;
    }
    // prints in reverse
    for (j = i - 1; j >= 0; j--) {
        printf("%d", bin[j]);
    }
}
int main() {
    int n;
    printf("Enter a decimal number: ");
    scanf("%d", &n);
    printf("Binary: ");
    printBinary(n);
    printf("\n");
    return 0;
}
