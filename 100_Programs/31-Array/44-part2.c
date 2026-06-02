#include<stdio.h>

void shift_zeros(int array[], int n);

int main(void)
{
    int n, array[100];
    
    printf("How many elements do you want to enter in the array? ");
    scanf("%d", &n);

    printf("Enter %d integers to add in the array ", n);
    for(int i=0; i<n; i++)
    {
        scanf("%d", &array[i]);
    }

    printf("Array you entered is : {");
    for(int i=0; i<n; i++)
    {
        printf(" %d", array[i]);
    }
    printf(" }");

    shift_zeros(array, n);

    printf("\nArray with zeros separated is {");
    for(int k=0; k<n; k++)
    {
        printf(" %d",array[k]);
    }
    printf(" }");

    return 0;
}

void shift_zeros(int array[], int n)
{
    int count = 0;
    for(int j=0; j<n; j++)
    {
        if(array[j]!=0)
        {
            array[count] = array[j];
            count++;
        }
    }

    for(int j=count; j<n; j++)
    {
        array[j] = 0;
    }
}