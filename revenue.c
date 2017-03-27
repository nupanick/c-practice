/* revenue.c
 * by Nick Lamicela, 2017
 * Exercise 2-4
 * Simple math thing. I'm tired and this is just floats practice.
 */

#include <stdio.h>

int main(){
    float fRevenue = 0;
    float fQuantity = 0;
    float fPrice = 0;

    printf("\tNick's Super Polynomial Calculator v0.0.2b\n");
    printf("\tCalculating: Total Revenue = Price * Quantity.\n");

    printf("Price    = ");
    scanf("%f", &fPrice);
    printf("Quantity = ");
    scanf("%f", &fQuantity);

    fRevenue = fPrice * fQuantity;
    printf("Your revenue is $%.2f.\n", fRevenue);
}
