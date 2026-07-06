#include <stdio.h>

int main() {
    int num;

    printf("Type a int number: ");
    scanf("%d", &num);
    
    if (num >= 100 && num <= 200) {
        printf("Number %d is between 100 and 200.\n", num);
    } else {
        printf("Numbee %d is not between 100 and 200.\n", num);
    }
    return 0;
}
