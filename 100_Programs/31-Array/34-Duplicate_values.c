#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(void)
{
    int i, j, k=0;
    int arr[100], r[100], n;

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



    for(i=0; i<n; i++)
    {
        int value = arr[i];
        bool isUnique = true;
        for(j =0; j<k; j++)
        {
            if(r[j] == value)
            {
                isUnique = false;
                break;
            }
        }
        if(isUnique) {   
            r[k] = value;
            k++;
        }
    }

    printf("-------Removed Duplicate Values from Array --> \n");
    printf(" { ");
    for (i=0; i<k;i++)
    {
        printf("%d ", r[i]);
    }
    printf("} \n");
    
}