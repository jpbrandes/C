#include <stdio.h>
#include <string.h>
int main() {
    char gender;
    int age;
    char name[100];
    char health[20];
    char candidates[100];
   for(int i = 1; i <= 100; i++) {
        printf("--- Candidate %d ---\n", i);
        
        printf("Enter the candidate's name: ");
        fgets(name, sizeof(name), stdin);
        name[strcspn(name, "\n")] = '\0'; // Removes the newline character (\n) from the end
        printf("Enter the candidate's age: ");
        scanf("%d", &age);
        printf("Enter the candidate's gender (M/F): ");
        scanf(" %c", &gender); // The space before %c clears the enter buffer
        printf("Enter the candidate's health (Good/Bad): ");
        scanf("%s", health);
        if (gender == 'M' || gender == 'm') {
            if (age >= 18 && age <= 30 && (strcmp(health, "Good") == 0 || strcmp(health, "good") == 0)) {
                printf("Candidate %s is fit for military service.\n\n", name);
            } else {
                printf("Candidate %s is not fit for military service.\n\n", name);
            }
        } else {
            printf("Candidate %s is not fit for military service (only men are accepted).\n\n", name);
        }
    }
} // The secret to the conditional flow is putting everything inside the for loop so it can read the data for 100 candidates, and inside the for loop placing the conditions to check whether the candidate is fit or not for military service.
// The program checks if the candidate is male, is between 18 and 30 years old, and has good health. If all conditions are met, the candidate is considered fit for military service. Otherwise, they are considered not fit.
// Without the for loop, everything would have to be done manually.
