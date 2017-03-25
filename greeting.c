/* greeting.c
 * By Nicholas Lamicela, 2017
 * Exercise 2-3
 * Reads in a user's name and displays it back to them in a nice greeting.
 */

#include <stdio.h>

int main(){
    // Note: I am fully aware this is a poor strategy. I haven't gone over
    // arrays or strings yet and I'm just making this up as I go, sorry!
    char c1, c2, c3, c4, c5, c6, c7, c8;
    c1 = ' ';
    c2 = ' ';
    c3 = ' ';
    c4 = ' ';
    c5 = ' ';
    c6 = ' ';
    c7 = ' ';
    c8 = ' ';
    printf("Please enter your name (8 chars max): ");
    scanf("%c%c%c%c%c%c%c%c", &c1, &c2, &c3, &c4, &c5, &c6, &c7, &c8);
    printf("Nice to meet you, %c%c%c%c%c%c%c%c! Have a great day!", 
            c1, c2, c3, c4, c5, c6, c7, c8);
}
