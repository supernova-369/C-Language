#include <stdio.h>

void add(int x);
void array_add(int array[]);
void array_add_ptr(int *array);

int main()
{
    int a = 5;
    add(a);
    printf("a : %d\n", a);

    int myarray[5] = {1,2,3,4,5};
    array_add(myarray);
    printf("Myarray[0] : %d\n", myarray[0]);

    array_add_ptr(myarray);
    printf("myarray[0]: %d\n", myarray[0]);
    //you will get the same output because
    //array acts as ptr when passed through function

    printf("Myarray : %p\n", myarray);

    return 0;
} 

void array_add_ptr(int *array)
{
    printf("array: %p\n", array);
    array[0] = array[0] + 1;
}

void array_add(int array[])
{
    printf("array : %p\n", array);
    array[0] = array[0] + 1;
}

void add(int x)
{
    printf("X : %d\n",x);
    x = x + 1;
    // a = 5 output won't show a = 6.
    // X is not representing a or attached to it. a was used to set the value of x 
    //because we have a as an arguement here just the value is used, a is replaced with 5.
}