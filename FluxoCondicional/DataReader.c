#include <stdio.h>
#include <string.h>
int main() {
    char name[100];
    char gender;
    int total_men = 0;
    int total_women = 0;
    int i;
    // Loop to read data for 30 people
    for (i = 1; i <= 30; i++) {
        printf("--- Person %d ---\n", i);
        
        printf("Enter the name: ");
        // fgets used to allow names with spaces
        fgets(name, sizeof(name), stdin);
        name[strcspn(name, "\n")] = '\0'; // Removes the newline character (\n) from the end
        // Loop to ensure the gender is entered correctly
        do {
            printf("Enter the gender (M/F): ");
            scanf(" %c", &gender); // The space before %c clears the enter buffer
            
            if (gender == 'M' || gender == 'm') {
                total_men++;
                printf("Name: %s | Gender: Male\n\n", name);
            } else if (gender == 'F' || gender == 'f') {
                total_women++;
                printf("Name: %s | Gender: Female\n\n", name);
            } else {
                printf("Invalid option! Enter only M or F.\n");
            }
        } while (gender != 'M' && gender != 'm' && gender != 'F' && gender != 'f');
    }
    // Display totals at the end
    printf("==============================\n");
    printf("OVERALL SUMMARY:\n");
    printf("Total men: %d\n", total_men);
    printf("Total women: %d\n", total_women);
    printf("==============================\n");
    return 0;
}
