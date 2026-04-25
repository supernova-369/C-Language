#include <stdio.h>
#include <math.h>

int main() 
{
    int N;
    printf("Enter till which number you want summation:\n");
    scanf(" %d", &N);
    
    N=(N*(1+N))/2;
    printf("The sum of first N natural number is %d", N);

    return 0;
}