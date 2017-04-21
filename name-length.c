/* name-length.c
 * by Nicholas Lamicela, 2017
 * Prompts the user for a string, determines that string's length, and
 * converts it to uppercase.
 */

#include <stdio.h>

int main(){

    char name[80] = {0};
    int length = 0;

    /* input name from stdin */

    printf("Please enter your name: ");
    scanf("%s",name);

    /* count letters in name */

    {   
        // temporary scope to count stuff
        int x = 0;
        while(name[x] != '\0') {
            x++;
        }
        length = x;
    } 

    printf("Greetings, %s. Your name has %d characters in it.", name, length);

}
