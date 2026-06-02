#include <stdio.h>
#include <stdlib.h>

void arithmetic(int (*arr)[100], int rows, int cols);

int main()
{
    int a[100][100];
    int rows, cols  ;
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

    arithmetic(a, rows, cols);

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

void arithmetic(int (*arr)[100], int rows, int cols)
{
    int operation;
    int *ptr;

    printf("Enter which operation you want to perform :\n1. Add 5 to each element\n2. Multiply each element by 2\n3. Convert even numbers to 0\n4. Modify Diagonal Element (+10)\n");
    scanf("%d", &operation);

    switch (operation)
    {
        case 1 :
            // 🔹 1. Add 5 to each element
            for(int i = 0; i < rows; i++)
            {
                ptr = *(arr + i);
                for(int j = 0; j < cols; j++)
                {
                    *(ptr + j) += 5;
                }
            }
            break;

        case 2 :
            // 🔹 2. Multiply each element by 2
            for(int i = 0; i < rows; i++)
            {
                ptr = *(arr + i);
                for(int j = 0; j < cols; j++)
                {
                    *(ptr + j) *= 2;
                }
            }
            break;

        case 3 :     
            // 🔹 3. Convert even numbers to 0
            for(int i = 0; i < rows; i++)
            {
                ptr = *(arr + i);
                for(int j = 0; j < cols; j++)
                {
                    if(*(ptr + j) % 2 == 0)
                    {
                        *(ptr + j) = 0;
                    }
                }
            }
            break;

        case 4 :
            // 🔹 4. Modify diagonal elements (+10)
            for(int i = 0; i < rows; i++)
            {
                if(i < cols)   // to avoid out-of-bound
                {
                    *(*(arr + i) + i) += 10;
                }
            }
            break;

        default :
            printf("InValid Input!");
    }

}