#include <stdio.h>

int main() {
    
    int tuna =20 ;
    printf("Address \t Name \t Value \n");
    int *ptuna = &tuna; // ptuna stores the address of tuna (pointer pointing to tuna)

    printf("%p \t %s \t %d \n", ptuna, "tuna", tuna);
    printf("%p \t %s \t %p \n", &ptuna, "ptuna",ptuna);
    /*%p stands for “pointer”.

It prints the address stored in a pointer variable.

The output is typically shown in hexadecimal form.*/
    return 0;
}