#include <stdio.h>

int main()
{
    ((int*) 0x41A020)[0] = 2; // Yes this is possible! you can store using address because array is an address.


    /*
    - when used with an array it tells me the amount of memory allocated to hold the series of the data items with which the array is inialized.
    - Some people use sizeof() to calculate the length of the array when it's passed to a function
    */

    //Don't Array decay to pointer when passed through function 
    /*
    inialized array is a high level object with a list of typed items but when an array is passed to a function that high level information
    magically vanishes and the array equally magically turned into a pointer --> This is what everyone tries to explain while complicating 
    things but the truth is much simpler.

    The array never changes it's always an address and that is what is passed to a function the function may assign that value that address
    to a pointer parameter but the array itself never changes because it's an address.  
    */

    /*
    A Lvalue in c is an expression that refers to a memory location that can be assigned to, like a container that can hold a value.

    A Rvalue, on the other hand, is an expression that has a value that can be assigned to an Lvalue, 
    like a value that can be Poured into a container. 
    */

    int arr[5] = {42, 1337, -21, 0, 8};

    printf("%p\n%p\n", (void *)(&arr + 1 ), (void *)(arr + 1));
    // When (&arr + 1) is used, it make us jump a full array.
    // When (arr + 1) is used, it just do it simply what we really  wanted that is just increased index.
    return 0; 
}