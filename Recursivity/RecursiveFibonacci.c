#include <stdio.h>

int CalculateFibbonacci(int numberN) {
   if(numberN == 0){
      return 0;
   } else if(numberN == 1) {
      return 1;
   } else {
      return (CalculateFibbonacci(numberN-1) + CalculateFibbonacci(numberN-2)); // Fibonacci is naturaly recursive, that is the function that calculates de fibonacci sequence.
   }
}

int main() {
   int numberN;
   int loopCounter;

   printf("Type a N number for the sequence: ");
   scanf("%d", &numberN);
	
   printf("Fibbonacci of %d: " , numberN);
	
   for(loopCounter = 0; loopCounter < numberN; loopCounter++) {
      printf("%d ",CalculateFibbonacci(loopCounter)); // Fibonacci function called inside a for loop.           
   }
}