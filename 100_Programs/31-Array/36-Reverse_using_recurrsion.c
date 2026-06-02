#include <stdio.h>

void reverse(int array[], int low, int high);

void reverse_array(int array[], int length);

int main()
{
    //low :0
    //high:length-1
    int array[100];
    int length;

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

    //reverse(array, 0, length-1);

    reverse_array(array, length);

    printf("REVERSED ARRAY -->");
    printf(" {");
    for(int i=0; i<length; i++)
    {
        printf(" %d", array[i]);
    }
    printf(" }");

    return 0;
}

void reverse_array(int array[], int length)
{
    reverse(array, 0, length-1);
    //The above statment calls the reverse function so then it runs and as we can see (array, 0, len-1) are the values of low and high respectively 
}

void reverse(int array[], int low, int high)
{
    if(low<high)
    {
        int temp = array[low];
        array[low] = array[high];
        array[high]=temp;
        reverse(array,low+1, high-1);
    }
}