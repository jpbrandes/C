#include <stdio.h>

float DifferenceBetweenTwoNumbers(float number1, float number2, float result_of_function_operation){

    result_of_function_operation = number1 - number2;

    return result_of_function_operation;
}

float SumOfTwoNumbers(float number1, float number2, float result_of_function_operation){
    
    result_of_function_operation = number1 + number2;

    return result_of_function_operation;

}

int main(){

    float first_number, second_number, result_of_operation;

    printf("Type the first number: ");
    scanf("%f", &first_number);

    printf("Type the second number: ");
    scanf("%f", &second_number);

    printf("The result of addition is %.2f\n", SumOfTwoNumbers(first_number, second_number, result_of_operation));
    printf("The result of subtracion is %.2f\n", DifferenceBetweenTwoNumbers(first_number, second_number, result_of_operation));

    return 0;

}