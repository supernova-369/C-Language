#include <stdio.h>

int main()
{
    int array[10], sum_of_int_in_array = 0;
    printf("Enter integers in the array : ");
    for(int i=0; i<10; i++)
    {
        scanf("%d", &array[i]);
        sum_of_int_in_array += array[i];
    }

    printf("Array you created: {");
    for(int j=0; j<10; j++)
    {
        printf(" %d", array[j]);
    }
    printf(" }");

    printf("\nSum of all(10) integers in the Array is %d", sum_of_int_in_array);

    return 0;
}