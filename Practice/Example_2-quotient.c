#include <stdio.h>

int main() 
{
    float A;
    float B;
    
    printf("Enter your first number: \n");
    scanf("%f", &A);
    
    printf("Enter your first number: \n");
    scanf("%f", &B);
    
    float C;
    if (B!=0){
        C=A/B;
        printf("The Quotient is %f", C);
    }
    return 0;
}