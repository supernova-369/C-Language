#include <stdio.h>

void swap_columns(int rows, int c1, int c2, int a[100][100])
{
    for(int i=0; i<rows; i++)
    {
        int temp = a[i][c1];
        a[i][c1] = a[i][c2];
        a[i][c2] = temp;
    }
}

int main()
{
    int a[100][100];
    int rows, cols;
    int *ptr;

    //Asking rows and columns
    printf("Howw many rows and columns in the array (OR Matrix) ? ");
    scanf("%d %d", &rows, &cols);

    //Taking the input
    printf("Enter elements in the array : ");
    for(int i = 0; i < rows; i++)
    {
        ptr = *(a+i);
        for(int j = 0; j < cols; j++)
        {
            scanf(" %d", (ptr + j));
        }
    }

    //printing the array
    printf(" {\n");
    for(int i = 0; i < rows; i++)
    {
        ptr = *(a+i);
        for(int j = 0; j < cols; j++)
        {
            printf(" %d",  *(ptr + j));
        }
        printf("\n");
    }
    printf(" }\n");

    //swapping the columns
    int c1, c2;

    printf("Which columns you want to swap mention its index (0-based index) :");
    scanf("%d %d", &c1, &c2);

    swap_columns(rows, c1, c2, a);

    //Columns Swapped 
    printf("SWAP is done as per your command :D\n");
    printf("{\n");
    for(int i=0; i<rows; i++)
    {
        ptr=*(a + i);
        for(int j=0; j<cols; j++)
        {
            printf(" %d", *(ptr +j));
        }
        printf("\n");
    }
    printf("}");

    return 0;
}