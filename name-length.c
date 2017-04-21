/* name-length.c
 * by Nicholas Lamicela, 2017
 * Prompts the user for a string, determines that string's length, and
 * converts it to uppercase.
 */

#include <stdio.h>

int main(){

    char strName[80] = {0};
    int iLength = 0;
    char strNameUpper;

    /* input name from stdin */

    printf("Please enter your name: ");
    scanf("%s",strName);

    /* count letters in name */

    {   
        // temporary scope to count stuff
        int x = 0;
        while(strName[x] != '\0') {
            x++;
        }
        iLength = x;
    } 

    /* convert to uppercase */

    

    printf("Greetings, %s. Your name has %d characters in it.", strName, 
            iLength);

}
