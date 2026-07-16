#include <stdio.h>
#include <math.h>

int main()
{
    float change, buyedvalue, payedvalue, cents, productvalue;

    printf("What is the product value (in BRL): "); // A product price.
    scanf("%f", &productvalue);
    printf("Product value: BRL %.2f\n", productvalue); // The product value.

    printf("Value that need to be payed: BRL %.2f\n", productvalue); // The value that needs to be payed.
    printf("Payed value (in BRL): "); // Payed value
    scanf("%f", &payedvalue);

    
    printf("\n====CHANGE SYSTEM====\n"); // Starts the change system.

    if(payedvalue < productvalue){
        printf("Insufficient money, you can't buy it.\n");  
    } else if ( payedvalue == productvalue) { // = is for atribution, == is for equality.
        printf("No need change.\n");
    } // A condition system for simple cases.

    change = payedvalue - productvalue;
    printf("Change: BRL %.2f\n", change); // Change value.


if (payedvalue > productvalue) {
        
        // Convert the float change to integer cents to avoid precision errors
        int change_cents = (int)round(change * 100); // That line converts change to int cents.

        // BRL bills in cents
        int bill100 = 10000; // All these bills are predefined notes converted to cents, the reason that is used int cents is to not show erros about floating-point.
        int bill50  = 5000;
        int bill20  = 2000;
        int bill10  = 1000;
        int bill5   = 500;
        int bill2   = 200;

        // BRL coins in cents
        int coin1_real = 100; // Same thing as above, coins value in cents for clarity.
        int coin50_cen = 50;
        int coin25_cen = 25; 
        int coin10_cen = 10;
        int coin5_cen  = 5;
        int coin1_cen  = 1;

        // Calculating bills using division and modulo
        int qty_bill100 = change_cents / bill100;
        change_cents %= bill100;

        int qty_bill50 = change_cents / bill50; // That system works dividing the change_cents using the relative bill.
        change_cents %= bill50;

        int qty_bill20 = change_cents / bill20;
        change_cents %= bill20;

        int qty_bill10 = change_cents / bill10;
        change_cents %= bill10;

        int qty_bill5 = change_cents / bill5;
        change_cents %= bill5;

        int qty_bill2 = change_cents / bill2;
        change_cents %= bill2;

        // Calculating coins
        int qty_coin1_real = change_cents / coin1_real;
        change_cents %= coin1_real;

        int qty_coin50_cen = change_cents / coin50_cen; // That system works dividing the change_cents using the relative coin.
        change_cents %= coin50_cen;

        int qty_coin25_cen = change_cents / coin25_cen;
        change_cents %= coin25_cen;

        int qty_coin10_cen = change_cents / coin10_cen;
        change_cents %= coin10_cen;

        int qty_coin5_cen = change_cents / coin5_cen;
        change_cents %= coin5_cen;

        int qty_coin1_cen = change_cents / coin1_cen;

        // Displaying only the necessary bills and coins
        printf("Please deliver the following change:\n");

        if (qty_bill100 > 0)    printf("- %d x BRL 100 bill(s)\n", qty_bill100); // The if in each line is the important line. If any bill is 0 or less, will not be show.
        if (qty_bill50 > 0)     printf("- %d x BRL 50 bill(s)\n", qty_bill50);
        if (qty_bill20 > 0)     printf("- %d x BRL 20 bill(s)\n", qty_bill20);
        if (qty_bill10 > 0)     printf("- %d x BRL 10 bill(s)\n", qty_bill10);
        if (qty_bill5 > 0)      printf("- %d x BRL 5 bill(s)\n", qty_bill5);
        if (qty_bill2 > 0)      printf("- %d x BRL 2 bill(s)\n", qty_bill2);

        if (qty_coin1_real > 0) printf("- %d x BRL 1 coin(s)\n", qty_coin1_real);
        if (qty_coin50_cen > 0) printf("- %d x 50 centavos coin(s)\n", qty_coin50_cen);
        if (qty_coin25_cen > 0) printf("- %d x 25 centavos coin(s)\n", qty_coin25_cen);
        if (qty_coin10_cen > 0) printf("- %d x 10 centavos coin(s)\n", qty_coin10_cen);
        if (qty_coin5_cen > 0)  printf("- %d x 5 centavos coin(s)\n", qty_coin5_cen);
        if (qty_coin1_cen > 0)  printf("- %d x 1 centavo coin(s)\n", qty_coin1_cen);
    }

    return 0;
}