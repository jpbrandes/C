#include <stdio.h>

int power(int staticBase, int exponentN) {
    if (exponentN == 0) {
        return 1;
    }

    return staticBase * power(staticBase, exponentN - 1); // That function is going to calculate the power of a number, but, if expoent is equal 0, is gonna return 1.
}

int main()
{
    int exponentN, staticBase = 2;

    printf("Type an integer to calculate the number: "); 
    scanf("%d", &exponentN);

    int result = power(staticBase, exponentN); // Notes that power is called again, that is recursivity.

    printf("%d raised to %d = %d\n", staticBase, exponentN, result);

    return 0;
}
