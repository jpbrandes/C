#include <stdio.h>

int main() {
    int loop_progress = 0;  

    printf("The sequence numbers from 0 to 10:\n");
    while (loop_progress <= 10) {
        printf("%d ", loop_progress);  
        loop_progress++;  
    }

    printf("\n==============================");  

    loop_progress = 10;  

    printf("\nThe sequence numbers from 10 to 0:\n");
	while (loop_progress >= 0) {
        printf("%d ", loop_progress); 
        loop_progress--; 
    }

    return 0; 
}
