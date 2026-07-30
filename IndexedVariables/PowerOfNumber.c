#include <stdio.h>
#include <stdlib.h>

int main()
{
    int base_of_the_number, power_of_the_number, auxiliary_power, result_operation = 1;

    printf("Enter the base of the number: ");
    scanf("%d",  &base_of_the_number);

    printf("Enter the power of the number: ");
    scanf("%d", &power_of_the_number);
    
    auxiliary_power = power_of_the_number;
     // This is because, if we use the variable power_of_the_number the while loop is gonna change it, and the result is gonna fail. This is why we have a temporary power variable.

    while (power_of_the_number > 0)
    {
        result_operation = result_operation * base_of_the_number;
        power_of_the_number--;
    }

    printf("%d ^ %d = %d.\n", base_of_the_number, auxiliary_power, result_operation);

    return 0;
}
