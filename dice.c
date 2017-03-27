/* dice.c
 * by Nicholas Lamicela, 2017
 * Exercise 3-3
 * Roll two six-sided dice and add their values. If the total is 7 or 11, the
 * player wins.
 */

#include <stdio.h>  // input and output
#include <stdlib.h> // random numbers
#include <time.h>   // system time, to seed the rng

int main() {
    // initialize random number generator
    srand(time(NULL));

    printf("\tNick's Super Dice Game v0.0.3c\n");
    printf("\tRolling...\n");

    // roll two dice
    int d1, d2, sum;
    d1 = rand() % 6 + 1;
    d2 = rand() % 6 + 1;
    sum = d1 + d2;

    printf("Your numbers are %d and %d. Your total is %d. ", d1, d2, sum);
    
    if (sum == 7 || sum == 11) {
        printf("You win!\n");
    } else {
        printf("Thanks for playing.\n");
    }
}
