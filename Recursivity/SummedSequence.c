#include <stdio.h>

int sumSequence(int numberN) {
    if (numberN == 0) {
        return 0;
    }

    return numberN + sumSequence(numberN - 1); // That function is gonna calculate the number of each repetition summed with the number - 1.
}

int main()
{
    int numberN;

    printf("Type a number N: ");
    scanf("%d", &numberN);

    int totalSum = sumSequence(numberN); // Sequence called again.

    printf("The sum from %d down to 0 is: %d\n", numberN, totalSum);

    return 0;
}
