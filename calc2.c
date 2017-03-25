/* calc2.c
 * by Nicholas Lamicela, 2017
 * Exercise 2-2
 * Calculates (a-b)(x-y) with input values for a,b,x,y.
 */

#include <stdio.h>

int main(){
    
    // values to be stored later
    int a,b,x,y;
    a=0;
    b=0;
    x=0;
    y=0;

    printf("\tNick's Super Polynomial Calculator v0.0.2a\n");
    printf("Calculating: (a-b)(x-y) = ?\n");
    
    // input a
    printf("a =");
    scanf("%d", &a);
    
    // input b
    printf("\nb =");
    scanf("%d", &b);
    
    // input x
    printf("\nx =");
    scanf("%d", &x);
    
    // input y
    printf("\ny =");
    scanf("%d", &y);

    printf("(a-b)(x-y)=%d\n", (a-b)*(x-y));
}

