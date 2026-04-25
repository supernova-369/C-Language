#include <stdio.h>
#include <string.h> // This headerfile comes with bunch of built in string funcn. Like you can replace a string with eachother combine
#include <ctype.h>
#include <math.h>

int main(){
    
    char catsName[50];
    char catsFood[25];
    char sentence[75]=" ";

    puts("What the cats dumb name?");
    fgets(catsName, sizeof(catsName), stdin);  
    //gets() can cause buffer overflow — if the user types more than the buffer size, the program crashes or becomes insecure.  
    
    puts("what does he eat?");
    fgets(catsFood, sizeof(catsFood), stdin);
    /*
    stdin the standard input stream (your keyboard)
    sizeof(catsName) the maximum number of characters fgets should read (here, 50). This prevents overflow.
    */

    // Remove trailing '\n' from catsName and catsFood if present
    catsName[strcspn(catsName, "\n")] = '\0';
    catsFood[strcspn(catsFood, "\n")] = '\0';
      
    strcat(sentence, catsName);
    strcat(sentence, " loves to eat " );
    strcat(sentence, catsFood);
    
    puts(sentence);
    
    return 0;
}
    