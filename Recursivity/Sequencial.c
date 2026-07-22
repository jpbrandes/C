#include <stdio.h>

void printSequence(int targetNumber, int currentNumber) {

    if (currentNumber > targetNumber) {
        return;
    }

    printf("%d ", currentNumber);

    printSequence(targetNumber, currentNumber + 1); // Recursive function that counts number.
}

int main(void) {
    int numberN;

    printf("Type a number N: ");
    scanf("%d", &numberN);

    printf("Sequence from 0 to %d:\n", numberN);
    
    printSequence(numberN, 0); // Function called.
    
    printf("\n");

    return 0;
}