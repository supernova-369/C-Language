#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x, y;
    printf("Enter the value of x :");
    scanf("%f",&x);

    printf("Enter the value of y :");
    scanf("%f",&y);

    printf("X   = %f \t\t\t Y = %f\n",x,y);
    
    float sum=x+y;
    float division=x/y;
    float difference=x-y;
    float prod=x*y;

    printf("Sum = %f \t\t Difference = %f\n",sum, difference);
    printf("Product = %f \t\t Division = %f\n",prod, division);    

    return 0;
}