#include <stdio.h>

int main()
{
    int StudentGrade;
    int totalSum = 0, gradesCounter = 0;
    
    printf("Please enter your grades or '-1' to stop : ");
    scanf("%d", &StudentGrade);
    
    while (StudentGrade != -1)
    {
        totalSum = totalSum + StudentGrade;
        gradesCounter++;
        printf("Please enter your grades or '-1' to stop: ");
        scanf("%d", &StudentGrade);
    }
    
    printf("You've entered %d grades! \n", gradesCounter);
    if (gradesCounter != 0)
        printf("And your AVERAGE GRADE is %f \n", (float)totalSum / gradesCounter);
    
    return 0;
}