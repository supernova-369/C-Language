#include <stdio.h>

int main()
{
    int a[10][10], b[10][10], result[10][10];
    int r1, c1, r2, c2, sum = 0;

    printf("Enter rows and cols of matrix A : ");
    scanf("%d %d", &r1, &c1);

    printf("Enter rows and cols of matrix B : ");
    scanf("%d %d", &r2, &c2);

    if(c1 != r2)
    {
        printf(" Multiplication of this kinda matrix isn't Possible.");
        return 0;
    }
    else if (r1 == 0 || c1 == 0 || r2 == 0 || c2 == 0)
    {
        printf("Matrix Doesn't Exist!\n");
        return 0;
    }
    

    printf("Enter Matrix A : \n");
    for(int i = 0; i < r1; i++)
    {
        for(int j = 0; j < c1; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter Matrix B :\n");
    for(int i = 0; i < r2; i++)
    {
        for(int j = 0; j < c2; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    for(int i = 0; i < r1; i++)
    {
        for(int j = 0; j < c2; j++)
        {
            sum = 0;
            result[i][j] = 0;
            for(int k = 0; k < c1; k++)
            {
                sum += (a[i][k] * b[k][j]);
            }
            result[i][j] = sum; 
        }

    }

    printf("Result Matrix :\n");
    for(int i = 0; i < r1; i++)
    {
        for(int j = 0; j < c2; j++)
        {
            printf("%3d", result[i][j]);
        }printf("\n");
    }

    return 0;
}