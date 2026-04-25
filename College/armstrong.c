#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    int num, sum=0 , rem, a;

    printf("Enter a 3-digit number : \n");
    scanf("%d", &num);
    int armstrong = num;

    while (num>0)
    {
        rem = num % 10;//remainder
        a = rem * rem * rem;
        sum = sum+a;//add it 
        num = num/10;//Remove the last digit by integer division (shift right)
    }

    printf("The sum of the 3 numbers of the 3 digit number is %d \n", sum);
    if (sum==armstrong){
        printf("The number entered is an armstrong number.\n");
    } else {
        printf("Its something random.\n");
    }
    // num/100 gives quotient
    // num%100 gives remainder
    return 0;
}
