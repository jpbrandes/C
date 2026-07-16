#include <stdio.h>

int main()
{
    int hours, minutes, seconds; // Variable declaration.

    printf("Type how many seconds you want: "); // A prompt for how many seconds i want.
    scanf("%d", &seconds);

    hours = seconds / 3600;
    minutes = (seconds % 3600) / 60; // Core of the program, that section is the math to seconds be converted in a digital watch.
    seconds = seconds % 60;

    printf("\nSeconds converted to a digital watch: %02d:%02d:%02d.", hours, minutes, seconds); // Seconds converted.

    return 0;
}