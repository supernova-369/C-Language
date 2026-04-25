#include <stdio.h>

int main()
{
    int read[3][3];

    printf("Enter the elements of 2D Array : ");
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            scanf("%d", &read[i][j]);
        }
    }

    int* ptr;

    printf("The 2D Array created is \n{\n");
    for(int i=0; i<3; i++)
    {
        ptr=*(read + i); //points to row i
        for(int j=0; j<3; j++)
        {
            printf(" %d", *(ptr + j));
        }
        printf("\n");
    }
    printf(" }");

    return 0;

}