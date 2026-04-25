#include <stdio.h>

int main(){
    char name[14] = "buckyRoberts";
    printf("My name is %s \n", name);
    name[2] = 'z';
    printf("My name is %s \n", name);
    return 0;
}
    /* 
    %d --> whole nos. or (Integers)
    %s --> for strings (null- terminated char arrays)
    %c --> for single characters 
    %f --> for floating point numbers 
    */
