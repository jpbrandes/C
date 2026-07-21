#include <stdio.h>

void printSequence(int number)
{
    if (number < 0)
    {
        return;
    }

    printf("%d ", number); // That function calculates a sequence if number is only positive, if the number is zero, the sequence stops.

    printSequence(number - 1);
}

int main()

{
    int numberN;

    printf("Type a number N for the sequence starts: ");

    scanf("%d", &numberN);

    printf("The sequence is:\n");

    printSequence(numberN); // Function called again.

    printf("\n");

    return 0;
}
