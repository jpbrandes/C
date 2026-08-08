#include <stdio.h>

void ReadTwoNumbers(float *First_Number, float *Second_Number) {
    printf("Type the first number: ");
    scanf("%f", First_Number);
    printf("Type the second number: ");
    scanf("%f", Second_Number);
}

float SumFunction(float First_Number, float Second_Number) {
    return First_Number + Second_Number;
}

void ShowResult(float function_result) {
    printf("The sum of the numbers is: %.2f\n", function_result);
}

int main() {
    float Number1, Number2, SumResult;

    ReadTwoNumbers(&Number1, &Number2);
    SumResult = SumFunction(Number1, Number2);
    ShowResult(SumResult);

    return 0;
}