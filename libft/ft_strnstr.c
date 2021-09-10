#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

int main()
{
    char sentence[1025] = "Hello! : write about strtok  lkkWe are    ";
    char * token = strtok(sentence, " ");
    char tab[254][256];
    int i = 0;
    while( strcmp("write",token)) {
      token = strtok(NULL, " ");
         }
   token[strlen(token)-1] = '1';
   token = strtok(NULL, " ");
   
   while (token)
   {

        if(token[-2]!= 49)
         printf(" ");
      printf("%s",token);
      token = strtok(NULL, " ");
   }
   

    return 0;
}