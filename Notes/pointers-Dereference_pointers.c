#include <stdio.h>

int main() {

    int tuna = 19;
    int *ptuna = &tuna;
    //*ptuna   means ptuna is a pointer (not a normal integer)
    //Part	Meaning  int	type of data ptuna will point to (an integer)
    //=  store that address inside the pointer

    printf("Address \t Name \t Value \n");

    // print pointer, name string, and value of tuna
    printf("%p \t %s \t %d \n", ptuna, "tuna", tuna);

    // print address of tuna variable and stored pointer address
    printf("%p \t %p \n", &tuna, ptuna);

    printf("\n *ptuna: %d \n", *ptuna);

    *ptuna = 71;  // change tuna via pointer
    printf("\n *ptuna : %d \n", *ptuna);
    printf("\n tuna : %d \n", tuna); // show that tuna actually changed

    return 0;
}

/*
tuna → box
🏷 &tuna → address written on the box
🔑 ptuna → key that tells where the box is
*ptuna → opens the box and looks inside
*/