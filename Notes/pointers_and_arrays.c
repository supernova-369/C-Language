#include <stdio.h>

int main() {
    
    int i;
    int meatballs[5]={7,9,43,21,3};
    printf("Element \t Address \t Value \n");
   
    for (i=0; i<5 ; i++){
        printf("meatballs[%d] \t %p \t %d \n",i, &meatballs[i], meatballs[i]);
    }
    //array names are just pointers to the first element
    printf("\n meatballs \t \t %p \n", meatballs);
    
    //This address and first element of array are the same
    
    //dereference it
    printf("\n *meatballs\t\t %d \n", *meatballs);
//* reads the value at that position
    printf("\n *(meatballs+2) \t \t %d \n", *(meatballs+1));
//meatballs + number moves through the array
    
    // deference is just decodimg address to it's value
    
    return 0;
}