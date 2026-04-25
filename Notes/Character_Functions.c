#include <stdio.h>
#include <ctype.h> //It gives a bunch of built in characters. we can check if it is character or a no
#include <string.h>
#include <math.h>

int main()
{
    
    char tuna ='$';
    //this is for special characters only 
    if (isalpha(tuna)){
        printf("%c is a letter",tuna);
        // %c space isn't must
    }
    else{
        if (isdigit(tuna)){
            printf("%c is a number", tuna);
        }else{
            printf("%c is a OMG WTF is that?!",tuna);
        }
    }
    
    return 0;
}