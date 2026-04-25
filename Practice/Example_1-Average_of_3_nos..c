#include <stdio.h>

int main() 
{
    int A;
    int B;
    int C;
    
    printf("Enter a number: \n");
    scanf(" %d", &A);
    
    printf("what's your favourite no. : \n");
    scanf(" %d", &B);
    
    printf("what's your girl's favourite no. : \n");
    scanf(" %d", &C);
    
    /*int sum = A + B + C;
    int avg;
    avg=sum/3;*/
    int avg=(A + B + C)/3;
    printf("The average of numbers you entered is %d", avg);
    
    return 0;
}