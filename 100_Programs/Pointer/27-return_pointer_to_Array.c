#include <stdio.h>

/*
    Function returns a pointer to an array of 5 integers
*/
int (*getArray(void))[5]
{
    // static → memory survives after function returns
    static int arr[5] = {1, 2, 3, 4, 5};

    return &arr;   // return pointer to entire array
}

int main()
{
    int (*p)[5] = getArray();  // receive pointer-to-array

    // Access elements
    for (int i = 0; i < 5; i++)
        printf("%d ", (*p)[i]);

    return 0;
}

/*
int (*getArray(void))[5]

Read it inside-out:

getArray → function
*getArray() → returns a pointer
(*getArray())[5] → pointer to array of 5 ints
int → element type
*/

/*
❌ This is wrong:

int (*bad(void))[5]
{
    int arr[5];   // local array (stack)
    return &arr;  // ❌ dangling pointer
}


✔️ Correct options:

static array
dynamically allocated array (malloc)
array passed from caller
*/

/*
Alternative: return dynamically allocated array

int (*getArray(void))[5]
{
    int (*arr)[5] = malloc(sizeof *arr);
    return arr;
}
⚠️ Caller must call free().
*/

/*
Arrays cannot be returned, only pointers can
Return type must be pointer-to-array
Use static or malloc to avoid dangling pointers
int * ≠ int (*)[5] (very important!)
*/