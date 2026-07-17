#include <stdio.h>
#include <locale.h>
int main(){
	
	setlocale(LC_ALL, "English");
	int array[12], positionX, positionY, sum;
	
	printf("Enter 12 values for the array\n");
	for(int i = 0; i < 12; i++) {
		printf("Position %d: ", i);
		scanf("%d", &array[i]); // I can read a value and it will be inserted into the array
		// Everything done here is inserting random values that will be used in the array.
	}
	
	//  The point here is that the values x and y will correspond to the array indices, and inside the index will be the number chosen above.
	printf("\nEnter the value for position X (0 to 11): ");
	scanf("%d", &positionX);
	printf("\nEnter the value for position Y (0 to 11): ");
	scanf("%d", &positionY);  
	
	sum = array[positionX] + array[positionY];
	
	printf("The sum of the values contained in indices %d and %d is: %d", positionX, positionY, sum); // Displays the summed values through the indices
}
