#include <stdio.h>
#include <locale.h>
int main() {
    setlocale(LC_ALL,"English");
    int progressionTerm, positionValue;
    printf("Enter the value N: ");
    scanf("%d", &positionValue);
    int vector[positionValue];
    for(progressionTerm = 0; progressionTerm < positionValue; progressionTerm++) {
        printf("Enter the value for position %d: ", progressionTerm);
        scanf("%d", &vector[progressionTerm]);
    }
    for(progressionTerm = 0; progressionTerm < positionValue; progressionTerm++){
        if(vector[progressionTerm] < 0) {
            printf("The number %d is less than zero.\n", vector[progressionTerm]);
        }
        else if (vector[progressionTerm] > 0) {
            printf("The number %d is greater than zero.\n", vector[progressionTerm]);
        }
        else {
            printf("The number %d is equal to zero.\n", vector[progressionTerm]);
        }
    }
    return 0;
}
