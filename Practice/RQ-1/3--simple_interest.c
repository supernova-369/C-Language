#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int principal;
    int time;
    int rate;

    printf("what's your principal amount on this loan? (in rupees) \n");
    scanf("%d", &principal);

    printf("what's duration for this loan amount to be paid? (in yr) \n");
    scanf("%d", &time);

    printf("what's rate of interest on this loan amount? \n");
    scanf("%d", &rate);

    int simple_int = (principal*time*rate)/100;
    printf("The simple interest on this loan in the given time is %d ", simple_int);


    return 0;
}