#include <stdio.h>

int main()
{
    int read[3][3], sum=0;

    printf("Enter the elements of 2D Array (3 X 3): ");
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
            sum += *(ptr + j);
        }
        printf("\n");
    }
    printf(" }\n");
    printf("The Sum of all elements in the array is : %d ",sum);

    return 0;
}
