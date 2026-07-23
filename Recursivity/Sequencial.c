#include <stdio.h>

void CalculateSequence(int targetNumber, int currentNumber) {

    if (currentNumber > targetNumber) {
        return;
    }

    printf("%d ", currentNumber);

    CalculateSequence(targetNumber, currentNumber + 1); // Recursive function that counts number.
}

int main(void) {
    int numberN;

    printf("Type a number N: ");
    scanf("%d", &numberN);

    printf("Sequence from 0 to %d:\n", numberN);
    
    CalculateSequence(numberN, 0); // Function called.
    
    printf("\n");

    return 0;
}