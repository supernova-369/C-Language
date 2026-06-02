#include <stdio.h>

void swapRows(int a[100][100], int cols, int r1, int r2)
{
    for (int j = 0; j < cols; j++)
    {
        int temp = *(*(a + r1) + j);
        *(*(a + r1) + j) = *(*(a + r2) + j);
        *(*(a + r2) + j) = temp;
    }
}

int main()
{
    int a[100][100];
    int rows, cols;
    int *ptr;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < rows; i++)
    {
        ptr = *(a + i);
        for (int j = 0; j < cols; j++)
        {
            scanf("%d", (ptr + j));   // ✅ FIXED
        }
    }

    int r1, r2;

    printf("Enter two rows to swap (0-based index): ");
    scanf("%d %d", &r1, &r2);

    if (r1 < 0 || r1 >= rows || r2 < 0 || r2 >= rows)
    {
        printf("Invalid row indices!\n");
        return 1;
    }

    swapRows(a, cols, r1, r2);

    printf("Matrix after swapping rows:\n");
    for (int i = 0; i < rows; i++)
    {
        ptr = *(a + i);
        for (int j = 0; j < cols; j++)
        {
            printf("%d ", *(ptr + j));
        }
        printf("\n");
    }

    return 0;
}