#include<stdio.h>

int main()
{
    int n, array[100], occurrences=0;

    printf("How many elements do you want to enter in the array ? ");
    scanf("%d", &n);

    printf("Enter %d Elements in the array : ", n);
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    printf("The Array you entered is : ");
    printf("{");
    for(int i = 0; i < n; i++)
    {
        printf(" %d", array[i]);
    }
    printf(" }\n");



    int max_value=0,  max_occurrence=0;

    for (int i = 0; i < n; i++)
    {
        for(int j = 1; j < n; j++)
        {
            if(array[i] == array[j])
            {
                occurrences++;
            }
            if(occurrences > max_occurrence)
            {
                max_occurrence = occurrences;
                max_value = array[i];
            }
        }
        occurrences = 0;
    }
    
    printf("Max Occurred number is : %d\n", max_occurrence);
    printf("Value : %d\n", max_value);

    return 0;
}