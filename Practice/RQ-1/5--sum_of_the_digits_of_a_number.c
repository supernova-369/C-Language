#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    int num, sum=0, rem;

    printf("Enter a 3-digit number : \n");
    scanf("%d", &num);

    while (num>0){
    /*
        if num = 325
        5 will be separated first 
    then 2 will be and at last 3
    In between 5+2+3 will be the sequence like everytime a number separates it gets added to number before it
    */
            rem = num % 10;
            sum = sum+rem;
            num = num/10;
        }
    printf("The sum of the 3 numbers of the 3 digit number is %d", sum);
    // num/100 gives quotient
    // num%100 gives remainder
    return 0;
}