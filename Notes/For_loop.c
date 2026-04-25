#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int main(){
    int bacon;
    for (bacon=1, bacon<=10;bacon++;) 
    //for (bacon=0; bacon<=100;bacon+=8) it will increase by 8
    {
        printf("Bacon is %d \n", bacon);
    }
}