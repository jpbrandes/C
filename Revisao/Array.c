#include <stdio.h>

int main()  
{  
    int arr[10];  // Declare an array of size 10 to store integer values.
    int i;  
  
    printf("Type 10 numbers for the array: \n");

    // Storing elements in the array.

    for(int i = 0; i < 10; i++){
        printf("Number - %d : ", i);
        scanf("%d", &arr[10]); // The first for stores all the numbers in the array.
    }


    printf("Elements in the array\n"); // That second for loop is goint to show all values stored in that vector. 
    for(int i = 0; i < 10; i++){
        printf("%d", &arr[10]);
    }

	return 0;	
}
