#include <stdio.h>

int main()
{
    int array[100];
    int length, low = 0, index = 0;

    printf("How many integers do you want to enter ? ");
    scanf("%d",&length);

    printf("Enter %d integers: ",length);
    for(int i=0;i<length; i++)
    {
        scanf(" %d", &array[i]);
    }

    printf("ARRAY YOU ENTERED-->");
    printf(" {");
    for(int i=0; i<length; i++)
    {
        printf(" %d", array[i]);
    }
    printf(" }\n");
    
    int high = length;
    
    while( low<high)
    {
        low++;
        high--;
        index++;
    }

    if(length%2 ==0)
    {
        printf("NO Equilibrium index exists.");
    }
    else
    {
        printf("The Equilibrium index of array is : %d", index-1);
    }

    return 0;
}