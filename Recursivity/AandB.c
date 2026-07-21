#include <stdio.h>

int calculateInterval(int numberA, int numberB) {
    if (numberA == numberB) {
        return numberA;
    }

    return numberA + calculateInterval(numberA + 1, numberB); // A recursive function.
}

int main()
{
    int numberA, numberB;

    printf("Type number A (start): ");
    scanf("%d", &numberA); 

    printf("Type number B (end): ");
    scanf("%d", &numberB);  

    int totalSum = calculateInterval(numberA, numberB); // Recursive fuction called.

    printf("The sum between %d and %d is: %d\n", numberA, numberB, totalSum);

    return 0;
}