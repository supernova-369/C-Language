#include<stdio.h>
#include<stdlib.h>

int main()
{
    char alphabet ='c';
    void *ptr2;     //VOID Pointer Or General purpose pointer
    ptr2 = &alphabet;
    printf("%c", *((char*)ptr2));

    int number =24;
    int *ptr;       //WILD Pointer DO NOT dereference it unless you wanna involve in real shhii

    ptr = NULL;     // NULL Pointer Keep in mind that this is a value and not a data type otherwise
                    // you will mix up void and null pointers and mixing this two pulls a real pain in ass.

    ptr = (int*)calloc(5,4);
    //CODE

    free(ptr);      //Dangling pointer
    ptr = NULL;
    printf("%d", *((int*)ptr));

    return 0;
}

//calloc() -- Contiguous Allocation ---> For Arrays
//malloc() -- Memory Allocation ---> Allocates a single, 
                                    //contiguous block of memory of the specified size in bytes. 