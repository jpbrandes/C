#include <stdio.h>

int main ()
{
    float grades[20], sum = 0, low, big;
    int i, averagegrade, count_above = 0; // Accumulator variables.

    printf("Type 20 grades: ");

    for(i = 0; i <= 19; i++){ // Remember, you can put a loop variable inside a vector to each i loop be stored in the vector.
        scanf("%f", &grades[i]);
        sum = sum + grades[i];

        if(i == 0){
            big = grades[20];
            low = grades[20];
        } else {
            if(grades[i] > big){ // This section is important. These two conditional steps makes the comparision between grades easier.
                low = grades[i];
            }
        }

    }

    averagegrade = sum / 20;

    for(i = 0; i < 20; i++){
        if(grades[i] > averagegrade){ // That second for loop counts how many grades are high grades.
            count_above++; 
        }
    }

    printf("The average class grade is: %.2f.\n", averagegrade);
    printf("The highest grade is: %.2f.\n", big);
    printf("The lowest grade is: %.2f.\n", low);
    printf("Number of students above average: %d.\n", count_above);



    return 0;
}