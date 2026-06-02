#include <stdio.h>

// Swap function
void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void rotate90degclk(int m, int n, int a[m][n])
{
    // Step 1: Transpose
    for(int i = 0; i < m; ++i)
    {
        for(int j = i; j < n; ++j)
        {
            swap(&a[i][j], &a[j][i]);
        }
    }

    // Step 2: Reverse each row
    for(int i = 0; i < m; i++)
    {
        int l = 0, r = n - 1;
        while(l < r)
        {
            swap(&a[i][l], &a[i][r]);
            l++;
            r--;
        }
    }
}

int main()
{
    int m = 3, n = 3;
    int a[m][n];

    printf("Input the elements in the array:\n");
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("The array created is:\n");
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    rotate90degclk(m, n, a);

    printf("The rotated array is:\n");
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}