#include <stdio.h>

int main()
{
    int first_array[3][3], second_array[3][3], sumofbotharrays[3][3];
    int *first, *second, *summation;
    
    printf("Enter the elements first Array (3 X 3): ");
    for(int i=0; i<3; i++)
    {
        first = *(first_array + i);
        for(int j=0; j<3; j++)
        {
            scanf(" %d", (first + j) );
        }
    }

    printf("Enter the elements of 2D Array (3 X 3): ");
    for(int i=0; i<3; i++)
    {
        second = *(second_array + i);
        for(int j=0; j<3; j++)
        {
            scanf("%d", (second + j));
        }
    }

    printf("The First 2D Array created is \n{\n");
    for(int i=0; i<3; i++)
    {
        first =*(first_array + i); //points to row i
        for(int j=0; j<3; j++)
        {
            printf(" %d", *(first + j));
        }
        printf("\n");
    }
    printf(" }\n");

    printf("The Second 2D Array created is \n{\n");
    for(int i=0; i<3; i++)
    {
        second = *(second_array + i); //points to row i
        for(int j=0; j<3; j++)
        {
            printf(" %d", *(second + j));
        }
        printf("\n");
    }
    printf(" }\n");

    printf("The sum of both the arrays is : \n{");
    for(int i=0; i<3; i++)
    {
        first = *(first_array + i);
        second = *(second_array +i);
        summation = *(sumofbotharrays + i);
        for(int j=0; j<3; j++)
        {
            printf(" %d", *(summation + j) = *(first + j) + *(second + j) );
        }
        if(i<2)
            printf("\n");
    }
    printf(" }");
    

    return 0;
}
