#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

int main()
{
    char input[257] = "Say hay HH kldkkd";

    // Write an answer using printf(). DON'T FORGET THE TRAILING \n
    // To debug: fprintf(stderr, "Debug messages...\n");
    int i= 0;
    while(input[i])
    {
        
        if(islower(input[i]))
                input[i] = toupper(input[i]);
        i++;
        if(input[i]!=' ')
            i++;

    }
    printf("%s",input);

    return 0;
}