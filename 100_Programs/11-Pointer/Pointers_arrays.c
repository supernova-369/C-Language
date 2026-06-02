#include <stdio.h>
#include <stdlib.h>

int main()
{
    int array[5];

    array[2] = 5;

    /*
        array:
        - Array name decays to pointer to first element
        - Type: int *
        - Points to &array[0]
    */
    printf("     array : %zu\n", array);

    /*
        array + 1:
        - Pointer arithmetic on int *
        - Advances by sizeof(int)
        - Points to &array[1]
    */
    printf(" array + 1 : %zu\n\n", array + 1);

    /*
        &array:
        - Address of the entire array
        - Type: int (*)[5]
        - Same address as 'array' but different type
    */
    printf("&array : %zu\n", &array);

    /*
        &array + 1:
        - Pointer arithmetic on pointer-to-array
        - Advances by sizeof(array) = 5 * sizeof(int)
        - Points past the whole array
    */
    printf("&array + 1 : %zu\n\n", &array + 1);

    /* ===================== 2D ARRAY ===================== */

    int matrix[3][5] =
    {
        {0, 1, 2, 3, 4},
        {5, 6, 7, 8, 9},
        {10,11,12,13,14}
    };

    /*
        matrix[1]:
        - Refers to the second row
        - Decays to pointer to its first element
        - Type: int *
        - Points to &matrix[1][0]
    */
    printf("       matrix[1] : %zu\n", matrix[1]);

    /*
        matrix[1] + 1:
        - Pointer arithmetic on int *
        - Advances by sizeof(int)
        - Points to &matrix[1][1]
    */
    printf("   matrix[1] + 1 : %zu\n\n", matrix[1] + 1);

    /*
        *(matrix[1] + 1):
        - Dereferences the pointer
        - Accesses matrix[1][1]
        - Value printed: 6
    */
    printf("*(matrix[1] + 1) : %zu\n\n", *(matrix[1] + 1));

    /*
        &matrix[1]:
        - Address of the entire second row
        - Type: int (*)[5]
        - Points to the whole row, not a single element
    */
    printf("       &matrix[1] : %zu\n", &matrix[1]);

    /*
        &matrix[1] + 1:
        - Pointer arithmetic on pointer-to-array
        - Advances by sizeof(one row) = 5 * sizeof(int)
        - Points to the next row: &matrix[2]
    */
    printf("    &matrix[1] + 1: %zu\n\n", &matrix[1] + 1);

    /*
        *(&matrix[1] + 1):
        - Dereference pointer-to-array
        - Yields the entire third row
        - Decays to pointer to first element of matrix[2]
        - Equivalent to &matrix[2][0]
    */
    printf("*(*(&matrix[1] + 1)) : %zu\n\n", *(*(&matrix[1] + 1)));

    /*
        (int *)&matrix[1]:
        - Casts pointer-to-array into int *
        - Points to matrix[1][0]

        (int *)&matrix[1] + 1:
        - Advances by sizeof(int)
        - Points to matrix[1][1]
    */
    int *pointer = (int *)&matrix[1] + 1;

    /*
        pointer:
        - Address of matrix[1][1]
    */
    printf("pointer: %zu\n", pointer);

    /*
        *pointer:
        - Dereferences pointer
        - Value stored at matrix[1][1] → 6
    */
    printf("*pointer: %zu\n", *pointer);

    return 0;
}
