#include <stdio.h>

int main()
{
    int arr[100],n,a;
    printf("How much integers do you want to enter in the array ?");
    scanf("%d",&n);

    if(n < 2)
    {
        printf("At least 2 elements are required.\n");
        return 0;
    }

    printf("Enter %d integers : ", n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("By how much do you want to rotate this array ? ");
    scanf("%d",&a);

    printf("\n---------Array before rotation------------");
    printf("{ ");
    for(int j=0;j<n;j++)
    {
        printf(" %d", arr[j]);
    }
    printf(" }\n");

    //-------------Rotation Process----------- 
    int temp=arr[0];
    for(int i=0;i<a;i++)
    {
        for(int k=0;k<n;k++)
        {
            arr[k]=arr[k+1];
        }
        arr[n-1]=temp;
        temp=arr[0];
    }

    printf("\n------------Array After rotation------------");
    printf("{ ");
    for(int j=0;j<n;j++)
    {
        printf(" %d", arr[j]);
    }
    printf(" }\n");


    return 0;
}