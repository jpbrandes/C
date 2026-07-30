#include <stdio.h>

int main()
{
    int gradeofStudent;
    int totalSummed = 0, gradesCounter = 0;
    
    printf("Please enter your grades or '-1' to stop : ");
    scanf("%d", &gradeofStudent);
    
    while (gradeofStudent != -1)
    {
        totalSummed = totalSummed + gradeofStudent;
        gradesCounter++;
        printf("Please enter your grades or '-1' to stop: ");
        scanf("%d", &gradeofStudent);
    }
    
    printf("You've entered %d grades! \n", gradesCounter);
    if (gradesCounter != 0)
        printf("And your AVERAGE GRADE is %f \n", (float)totalSummed / gradesCounter);
    
    return 0;
}