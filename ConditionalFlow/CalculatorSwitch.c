#include <stdio.h>

int main()
{
    int number1, number2;
    char MathOperation;

    printf("Type the math operation that you want to use: ");
    scanf("%c", &MathOperation);
    printf("The operation choosed is: %c.\n", MathOperation);

    printf("Type the first number: ");
    scanf("%d", &number1);
    printf("The first number choosed is: %d.\n", number1);

    printf("Type the second number: ");
    scanf("%d", &number2);
    printf("The second number choosed is: %d.\n", number2);
    
    switch(MathOperation) // Switch case is used for one only variable. You have multiple cases, and a default case. Default case can be de error message.
    {
        case '+':
            printf("%d %c %d = %d.\n", number1, MathOperation, number2, number1 + number2); 
            break;
        
        case '-':
            printf("%d %c %d = %d.\n", number1, MathOperation, number2, number1 - number2);
            break;
        
        case '%':
            if(number2 == 0){
                printf("You can't divide by zero. Try again.\n");
            } else {
                printf("%d %c %d = %d.\n", number1, MathOperation, number2, number1 % number2);
            }
            break;
            
        case '/':
            if(number2 == 0){
                printf("You can't divide by zero. Try again.\n");
            } else {
                printf("%d %c %d = %d.\n", number1, MathOperation, number2, number1 / number2);
            }
            break;        
    
        case '*':
            printf("%d %c %d = %d.\n", number1, MathOperation, number2, number1 * number2);
            break;
        
        default:
            printf("Wrong mathematical operation. Try again.\n");
            break; // Erro message.
    }

    return 0;
}                               