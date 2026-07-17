#include <stdio.h>

int main()
{
    int multiplication_tables = 10;
    int multiplicand; 
    int multiplier;   
    int product;

    printf("   |");
    for (multiplier = 1; multiplier <= multiplication_tables; multiplier++) {
        printf("%5d", multiplier);
    }
    printf("\n");

    printf("---+--------------------------------------------------\n");

    for (multiplicand = 1; multiplicand <= multiplication_tables; multiplicand++) {
        
        printf("%2d |", multiplicand);

        for (multiplier = 1; multiplier <= multiplication_tables; multiplier++) {
            product = multiplicand * multiplier;
            
            printf("%5d", product);
        }
        
        printf("\n");
    }

    return 0;
}