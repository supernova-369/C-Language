#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i, j;
    int arr[100], n;

    printf("How much integers do you want to enter in the array ?");
    scanf("%d",&n);

    printf("Enter %d integers \n", n);
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
  
    printf("-------Array --> \n");
    printf(" { ");
    for (i=0; i<n;i++)
    {
        printf("%d ", arr[i]);
    }
    printf("} \n");


    for(i = 0; i < n; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(arr[i] == arr[j])
            {
                printf("%d is a duplicate value.\n", arr[i]);
            }
        }
    }
}