#include <stdio.h>

int main()
{
    int a[100][100];
    int rows, cols;
    int *ptr;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    // Input
    printf("Enter elements:\n");
    for(int i = 0; i < rows; i++)
    {
        ptr = *(a + i);
        for(int j = 0; j < cols; j++)
        {
            scanf("%d", (ptr + j));
        }
    }

    // 🔹 1. Add 5 to each element
    for(int i = 0; i < rows; i++)
    {
        ptr = *(a + i);
        for(int j = 0; j < cols; j++)
        {
            *(ptr + j) += 5;
        }
    }

    // 🔹 2. Multiply each element by 2
    for(int i = 0; i < rows; i++)
    {
        ptr = *(a + i);
        for(int j = 0; j < cols; j++)
        {
            *(ptr + j) *= 2;
        }
    }

    // 🔹 3. Convert even numbers to 0
    for(int i = 0; i < rows; i++)
    {
        ptr = *(a + i);
        for(int j = 0; j < cols; j++)
        {
            if(*(ptr + j) % 2 == 0)
            {
                *(ptr + j) = 0;
            }
        }
    }

    // 🔹 4. Modify diagonal elements (+10)
    for(int i = 0; i < rows; i++)
    {
        if(i < cols)   // to avoid out-of-bound
        {
            *(*(a + i) + i) += 10;
        }
    }

    // Output
    printf("Modified Matrix:\n");
    for(int i = 0; i < rows; i++)
    {
        ptr = *(a + i);
        for(int j = 0; j < cols; j++)
        {
            printf("%d ", *(ptr + j));
        }
        printf("\n");
    }

    return 0;
}