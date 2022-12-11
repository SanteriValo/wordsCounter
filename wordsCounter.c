/* Words counter from the terminal */

#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define PLACESIZE 10000


int main() {
     char placeForText[PLACESIZE];
     int counter = 0;

     printf("Insert your text:\n");
     fgets(placeForText, PLACESIZE, stdin);

     char* symbol = strtok(placeForText, " ");
     while (symbol != NULL) {
          counter++;
          symbol = strtok(NULL, " ");
          }

     printf("Amount of words in your text: %d\n", counter);
     
     return 0;
     }
