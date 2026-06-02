#include <stdio.h>

void modify_2d(int arr[][3]);
void modify_2d_ptr(int (*arr)[3]);

int main()
{
    int matrix[2][3] = {
        {1,2,3},
        {4,5,6}
    };

    printf("Before modification: %d\n", matrix[0][0]);

    modify_2d(matrix);
    printf("After modify_2d: %d\n", matrix[0][0]);

    modify_2d_ptr(matrix);
    printf("After modify_2d_ptr: %d\n", matrix[0][0]);

    printf("Address of matrix: %p\n", matrix);
    printf("Address of first row: %p\n", matrix[0]);

    return 0;
}

void modify_2d(int arr[][3])
{
    printf("In modify_2d -> arr: %p\n", arr);
    arr[0][0] += 1;
}

void modify_2d_ptr(int (*arr)[3])
{
    printf("In modify_2d_ptr -> arr: %p\n", arr);
    arr[0][0] += 1;
}

/*
Why column size is required
This is not optional:

int arr[][3]   // ✔ valid
int arr[][]    // ❌ invalid

Because the compiler must know:

arr[i][j] → *( *(arr + i) + j )

To compute arr + i, it needs row size (3 * sizeof(int)).
*/