#include <stdio.h>

int main()
{
    int array[100];
    int length, index = 0;

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
  
    index =floor(length/2);

    if(length%2==0)
    {
        printf("Equilibrium index doesn't exist");
    }
    else
    {
        printf("The equilibrium index of the array is %d", index);
    }

    return 0;
}