/* Words counter from the terminal */

#include <stdio.h>

#define PLACESIZE 1000

int main(void) {
    int amount = 0;
    char placeForText[PLACESIZE];

    printf("Insert your text:\n");
    scanf("%s\n", placeForText);
    
    /*
    for(;;){
        ++amount; 
    }
    */

    printf("Amount of words in your text: %d\n", amount);
    return 0;
}
