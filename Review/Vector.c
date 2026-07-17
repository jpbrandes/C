#include <stdio.h>

int main ()
{
    float grades[20], sum = 0, low, big;
    int grade_by_grades, averagegrade, count_above = 0; // Accumulator variables.

    printf("Type 20 grades: ");

    for(grade_by_grades = 0; grade_by_grades <= 19; grade_by_grades++){ // Remember, you can put a loop variable inside a vector to each i loop be stored in the vector.
        scanf("%f", &grades[grade_by_grades]);
        sum = sum + grades[grade_by_grades];

        if(grade_by_grades == 0){
            big = grades[20];
            low = grades[20];
        } else {
            if(grades[grade_by_grades] > big){ // This section is important. These two conditional steps makes the comparision between grades easier.
                low = grades[grade_by_grades];
            }
        }

    }

    averagegrade = sum / 20;

    for(grade_by_grades = 0; grade_by_grades < 20; grade_by_grades++){
        if(grades[grade_by_grades] > averagegrade){ // That second for loop counts how many grades are high grades.
            count_above++; 
        }
    }

    printf("The average class grade is: %.2f.\n", averagegrade);
    printf("The highest grade is: %.2f.\n", big);
    printf("The lowest grade is: %.2f.\n", low);
    printf("Number of students above average: %d.\n", count_above);



    return 0;
}