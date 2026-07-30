#include <stdio.h>

int main()
{
    int numberofAsterisks, counting_variable = 0;

    printf("Type the number os asterisks you want to see: ");
    scanf("%d", &numberofAsterisks);

    while(counting_variable < numberofAsterisks){

        printf("*");
        counting_variable += 1; // A accumulator variable, that will store each loop repetion until the while condition be false.
    }

    return 0;
}