#include <stdio.h>

int main()
{
    int n=0;

    printf("How much integer should be in your array ? \n");
    scanf("%d",&n);
    
    if(n < 2)
    {
        printf("At least 2 elements are required.\n");
        return 0;
    }

    int a[n];

    printf("Enter %d integer : ",n);
    for(int i=0;i<n;i++)
    {
        scanf(" %d", &a[i]);
    }
 
    printf("{ ");
    for(int j=0;j<n;j++)
    {
        printf(" %d", a[j]);
    }
    printf(" }\n");

    int f1,f2;
    int i = 0;
    f1 = a[0];

    while(i < n && a[i] == f1)
    {
        i++;
        printf("i %d",i);
    };   

    if(i == n)
    {
        printf("No second largest element (all elements equal)\n");
        return 0;
    }

    f2 = a[i];

    if(f2 > f1)
        {
            int temp = f1;
            f1 = f2;
            f2 = temp;
        }

    for(int i=2;i<n;i++)
    {
        if(a[i] > f1){
            f2 = f1;
            f1 = a[i];
        }
        else if(a[i] < f1 && a[i] > f2)
        {
            f2 = a[i];
        }
    }

    printf("The Second largest number in the array is %d\n",f2);
    printf("The largest number in the array is %d\n",f1);

    return 0;
}