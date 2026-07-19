#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int play_again = 1;  // guessing_attempt is a accumulator variable.
    
    srand(time(NULL)); // Always inicialize with a seed when you have a random condition.

    while(play_again == 1) // the first while is just to know if the user want to play again or not.
    {
        
        int guessing_attempt = 0, attempt, distance_of_guess;
        int secret_number = rand() % 100 + 1;  // Related to seed, this will randomize the number.

        while(guessing_attempt < 3)
        {
            printf("Type your guess: ");
            scanf("%d", &attempt);

            if(attempt == secret_number)
            {
                printf("Correct guess!\n");
                break;
            }

            if(attempt < secret_number)
            {
                printf("The secret number is greater than your guess.\n");
            }

            else
            {
                printf("The secret number is less than your guess.\n");
            }

            distance_of_guess = abs(attempt - secret_number);

            if(distance_of_guess <= 10)
            {
                printf("You are close!\n");
            }
            else
            {
                printf("You are far!\n");
            }
            
            guessing_attempt++;
        } 

        if(guessing_attempt == 3)
        {
            printf("You lost! The number was %d.\n", secret_number);
        }

        printf("Play again? (1 = yes / 0 = no): ");
        scanf("%d", &play_again);
     
    }   
    return 0;
}