/*
There are two methods to check if the arrays are equal or not 
1}
Sort both the arrays and then check index to index and if any index doesn't match then they ain't equal

2}
without sorting any array the way you check for prime nos. like checking each index.
vo check karega duplicate values inside itself then
first array ka 1st index second array ke saare index check karega and if matches more than once without any duplicate value then it is not equal
BUT SINCE THIS IS TOOO! LENGTHY METHOD WE WILL BE DOING WITH THE FIRST ONE BUT IT IS IMPORTANT TO CHECK EACH POSSIBLE WAY.
*/

#include <stdio.h>

void check_if_array_equal(int arr[][50], int arr1[][50], int rows, int cols);

void bubble_sort(int arr[], int n);

int main()
{
    int a[50][50], b[50][50];
    int rows_a, cols_a, rows_b, cols_b;

    printf("Enter rows and cols for first array: ");
    scanf("%d %d", &rows_a, &cols_a);

    printf("Enter elements of first array:\n");
    for(int i = 0; i < rows_a; i++)
    {
        for(int j = 0; j < cols_a; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter rows and cols for second array: ");
    scanf("%d %d", &rows_b, &cols_b);

    printf("Enter elements of second array:\n");
    for(int i = 0; i < rows_b; i++)
    {
        for(int j = 0; j < cols_b; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    if(rows_a != rows_b || cols_a != cols_b)
    {
        printf("Arrays are NOT equal (different sizes).\n");
        return 0;
    }

    check_if_array_equal(a, b, rows_a, cols_a);

    return 0;
}

void check_if_array_equal(int arr[][50], int arr1[][50], int rows, int cols)
{
    int n = rows * cols;

    int flat1[2500], flat2[2500];  // max 50*50
    int index = 0;

    // Converted 2-D arrays to 1-D
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            flat1[index] = arr[i][j];
            flat2[index] = arr1[i][j];
            index++;
        }
    }

    // Sort both arrays using bubble sort
    bubble_sort(flat1, n);
    bubble_sort(flat2, n);

    // Comparing Arrays
    for(int i = 0; i < n; i++)
    {
        if(flat1[i] != flat2[i])
        {
            printf("Arrays are NOT equal (ignoring order).\n");
            return;
        }
    }

    printf("Arrays are equal (ignoring order).\n");
}

void bubble_sort(int arr[], int n)
{
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = 0; j < n - i - 1; j++)
        {
            if(arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}