#include <stdio.h>

int main()
{
    int n;

    printf("How many numbers you want in your array : ");
    scanf("%d",&n);
    int a[n];
    
    printf("Enter %d integers to add in the array : ",n);
    
    for (int i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }

    int *ptr = &a[n-1];
    
    for(int i=0;i<n;i++)
    {
        printf(" %d",*ptr);
        ptr--;
    } 
    return 0;
}