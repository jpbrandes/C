#include <stdio.h>

int main()
{
    int table_number, multiplicand, multiplier;

    printf("Type the number of the multiplication table: "); 
    scanf("%d", &table_number);
    

    printf("\nMultiplication table of %d: \n", table_number);

    for(multiplicand = 0; multiplicand <= 10; multiplicand++){
        printf("\n%d x %d = %d", table_number, multiplicand, table_number * multiplicand); 
    }

    printf("\n\n=======================================\n\n");

    for(multiplicand = 1; multiplicand <= table_number; multiplicand++){

        for(multiplier = 1; multiplier <= 10; multiplier++){  
            printf("%d x %d = %d\n", multiplicand, multiplier, multiplicand * multiplier); 
        }

        printf("\n");
    }
    return 0;
}