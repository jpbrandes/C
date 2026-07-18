#include <stdio.h>
#include <string.h>

#define CORRECT_PASSWORD "eng2024" 

int main()
{
    int number_attempts = 0, correct_attempt = 0;
    char data_entry[50]; 

    while (number_attempts < 3 && !correct_attempt) { 
        printf("Type your password: ");
        scanf("%s", data_entry); 

        if (strcmp(data_entry, CORRECT_PASSWORD) == 0) {
            correct_attempt = 1; 
        } 
        else {
            number_attempts++; 
            
            if (number_attempts < 3) {
                printf("Incorrect password. Attempts remaining: %d\n", 3 - number_attempts);
            }
        }
    } // That while block will execute while number_attempts are below 3, besides that he will verify if the attempt(data_entry) is equal to correct_attempt.

    if (correct_attempt) {
        printf("Correct password. Welcome!\n"); 
    } 
    else {
        printf("System blocked. You exceed the attempts limit.\n");
    }

    return 0;
}