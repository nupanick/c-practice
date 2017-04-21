/* name-length.c
 * by Nicholas Lamicela, 2017
 * Prompts the user for a string, determines that string's length, and
 * converts it to uppercase.
 */

#include <stdio.h>
#include <ctype.h>

int main(){

    char strName[80] = {0};
    int iLength = 0;
    char strNameUpper[80] = {0};

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
    } // end temp

    /* convert to uppercase */

    {
        // temporary scope for string manips again
        int x = 0;
        int c = strName[x];
        while(c != '\0'){
            strNameUpper[x] = toupper(c);
            x++;
            c = strName[x];
        }
    } // end temp

    {   
        // temporary scope for making a long string literal (?!)
        char *strMsg = "Greetings, %s. Your name has %d characters in it. "
                       "In all caps, it is %s.";
        printf(strMsg, strName, iLength, strNameUpper);
    } // end temp
} // end
