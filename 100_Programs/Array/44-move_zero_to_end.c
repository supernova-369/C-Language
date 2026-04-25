#include<stdio.h>

int main()
{
    int n, array[100];
    
    printf("How many elements do you want to enter in the array? ");
    scanf("%d", &n);

    printf("Enter %d integers to add in the array ", n);
    for(int i=0; i<n; i++)
    {
        scanf("%d", &array[i]);
    }

    // Zero Removing Process 
    int count=0;
    for(int i=0; i<n; i++)
    {
        if(array[i] != 0)
        {
            //count = 0
            // i = 0
            // array[count]=array[i]=whatever user entered for the first index
            array[count] = array[i];
            count++;
        }
        /*
        This loop traverse an array and checks if it the number on that index is not equal to zero
        and then add it into arra[count] and increases the value of count
        */
        }

    //Zero Adding Process at the end
    while(count < n)
    {
        array[count++] = 0;
    }

    printf("{");
    for(int i=0; i<n; i++)
    {
        printf(" %d", array[i]);
    }
    printf(" }");

    return 0;
}