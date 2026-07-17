#include <stdio.h>
// Subroutine: prints a number in binary
void printBinary(int decimalNumber) {
    int bin[32];
    int progressiveLoop = 0;
    int decrementLoop;
    if (decimalNumber == 0) {
        printf("0");
        return;
    }
    while (decimalNumber > 0) {
        bin[progressiveLoop] = decimalNumber % 2;
        decimalNumber = decimalNumber / 2;
        progressiveLoop++;
    }
    // prints in reverse
    for (decrementLoop = progressiveLoop - 1; decrementLoop >= 0; decrementLoop--) {
        printf("%d", bin[decrementLoop]);
    }
}
int main() {
    int decimalNumber;
    printf("Enter a decimal number: ");
    scanf("%d", &decimalNumber);
    printf("Binary: ");
    printBinary(decimalNumber);
    printf("\n");
    return 0;
}
