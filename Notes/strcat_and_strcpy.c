#include <stdio.h>
#include <string.h> // This headerfile comes with bunch of built in string funcn. Like you can replace a string with eachother combine

int main(){

    char ham[100]="Hey";

    //strcat is a string function in C that is used to join (concatenate) two strings together.     strcat(dest, src) appends src to the end of dest (joins two strings)
    strcat(ham,"Bucky");
    strcat(ham,"you");
    strcat(ham, "smell!");
    printf("%s \n", ham);

    //strcpy is another string function in C that is used to copy one string into another.     strcpy(dest, src) copies src string into dest (overwrites dest content)
    strcpy(ham,"Bucky is awesome!");
    printf("%s \n", ham);

    return 0;
}