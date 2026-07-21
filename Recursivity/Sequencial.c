#include <stdio.h>

void printSequence(int targetNumber, int currentNumber) {

    if (currentNumber > targetNumber) {
        return;
    }

    printf("%d ", currentNumber);

    printSequence(targetNumber, currentNumber + 1);
}

int main(void) {
    int numberN;

    printf("Type a number N: ");
    scanf("%d", &numberN);

    printf("Sequence from 0 to %d:\n", numberN);
    
    printSequence(numberN, 0);
    
    printf("\n");

    return 0;
}