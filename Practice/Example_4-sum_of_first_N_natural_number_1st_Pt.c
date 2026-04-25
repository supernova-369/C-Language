#include <stdio.h>
#include <stdlib.h>
int main() {
    int i, n, sum=0 ;
    printf("Enter any number:\n");
    scanf("%d", &n);
    
    for(i=0 ; i<n+1; i++)
    {
        sum+=i;
    }
    printf("The sum of first %d number is %d",n, sum);
    return 0;
}