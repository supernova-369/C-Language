#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(){
    
    char a='a';
    char b='f';
    char c='7';
    printf("%c \n", toupper(a));
    printf("%c \n", toupper(b));
    printf("%c \n", toupper(c));
    //when you pass a char in lower case it converts it into uppercase but in case you passed uppercase or a no. or something else it will display as it is.
    
    return 0;
}