#include <stdio.h>
#include <stdlib.h>

int main()
{
    int row = 0, cols = 0; 

    printf("Enter the number of Rows in the table : ");
    scanf("%d", &row);

    printf("Enter the number of Cols in the table : ");
    scanf("%d", &cols);

    char **grades = malloc(row * sizeof(char *));// ** --> Because it's 2D array if there would be 3D array you are supposed to do ***
    for(int i = 0; i < row; i++)
    {
        grades[i] = malloc(cols * sizeof(char));
    }

    if(grades == NULL)
    {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Input
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            printf("Enter grade [%d][%d]: ", i, j);
            scanf(" %c", &grades[i * cols + j]);
        }
    }

    // Output
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            printf("%c ", grades[i * cols + j]);
        }
        printf("\n");
    }

    free(grades);
    grades = NULL;

    return 0;
}