#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    float p;
    float t;
    float r;

    printf("What's the principal amount of the loan ?");
    scanf("%f", &p);

    printf("What's the duration of time for the compeletion of loan ?");
    scanf("%f", &t);

    printf("What's the rate of interest on amount of the loan ?");
    scanf("%f", &r);

    float cmpd_int = pow((1+ (r/100)), t);
    float a = p*cmpd_int ;
    printf("The total compound interest for amount taken is %f ",a );

    return 0;
}