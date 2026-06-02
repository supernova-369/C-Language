#include <stdio.h>


int main()
{
    int arr[50][50], rows, cols;
    
    printf("Enter rows and cols for array: ");
    scanf("%d %d", &rows, &cols);

    printf("Enter elements of the array:\n");
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }


    //Converting
    int flat[2500], index = 0;

    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            flat[index] = arr[i][j];
            index++;
        }
    } 

    //Sorting
    int n = rows * cols;
    
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = 0; j < n - i - 1; j++)
        {
            if(flat[j] > flat[j + 1])
            {
                int temp = flat[j];
                flat[j] = flat[j + 1];
                flat[j + 1] = temp;
            }
        }
    }

    printf(" Maximum(Or Largest) Element in the array you entered is %d", flat[n - 1]);

    return 0;
}