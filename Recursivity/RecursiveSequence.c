#include <stdio.h>

void CalculateSequence(int numberN)
{
    if (numberN < 0)
    {
        return;
    }

    printf("%d ", numberN); // That function calculates a sequence if number is only positive, if the number is zero, the sequence stops.

    CalculateSequence(numberN - 1);
}

int main()

{
    int numberN;

    printf("Type a number N for the sequence starts: ");

    scanf("%d", &numberN);

    printf("The sequence is:\n");

    CalculateSequence(numberN); // Function called again.

    printf("\n");

    return 0;
}
