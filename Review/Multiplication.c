#include <stdio.h>

int main()
{
    int n, i, j, mult, result;

    printf("Type the number of the multiplication table: "); // Represents the number of multiplication table that user want to see.
    scanf("%d", &n);

    result = n * i; // Multiplication operation
    
    printf("\nMultiplication table of %d: \n", n);

    for(i = 0; i <= 10; i++){
        printf("\n%d x %d = %d", n, i, n * i); // That makes a single multiplication table.
    }

    printf("\n\n=======================================\n\n");

    for(i = 1; i <= n; i++){

        for(j = 1; j <= 10; j++){  
            printf("%d x %d = %d\n", i, j, i * j); // There is two for loops here. The first one locks the multiplication table to n value typed before. The second loop operates the 1 to 10 multiplications.
        }

        printf("\n");
    }
    return 0;
}