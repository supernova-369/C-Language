//When an array is passed to a function, it decays into a pointer to its first element, 
//so the function cannot know the array size
#include <stdio.h>

/*
    Although 'arr' looks like an array,
    it actually decays to a pointer.
*/
void show(int arr[])
{
    // Inside the function, arr is treated as int *
    printf("sizeof(arr)  = %zu\n", sizeof(arr));
}

int main()
{
    int a[5];

    // Array name 'a' decays to pointer when passed to function
    show(a);

    // Actual size of array in main
    printf("sizeof(a)    = %zu\n", sizeof(a));

    return 0;
}
