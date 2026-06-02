#include <stdio.h>

int main()
{
    //If array contains numeric value
    int rows, cols;

    printf("Enter rows and cols: ");
    scanf("%d %d", &rows, &cols);

    int numerics[rows][cols];  

    int *p;

    printf("Enter the values in the array:\n");
    for(p = &numerics[0][0]; p <= &numerics[rows-1][cols-1]; p++)
    {
        scanf("%d", p);
    }

    int count = 0;
    printf("The Array you created:\n");
    for(p = &numerics[0][0]; p <= &numerics[rows-1][cols-1]; p++)
    {
        printf("%d ", *p);
         count++;

        if(count % cols == 0)
        {
            printf("\n");
        }
    }

    return 0;
}