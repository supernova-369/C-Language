#include <stdio.h>

int main() 
{
    float A;
    float B;
    
    printf("Enter a no. of your wish it's free:\n");
    scanf("%f", &A);
    
    printf("Enter a no. it's between us:\n");
    scanf("%f", &B);
    
    if (A>B){
        printf("The maximum no. is A");
    }else{
        printf("The maximum no. is B -> %f",B);
    }
    return 0;
}