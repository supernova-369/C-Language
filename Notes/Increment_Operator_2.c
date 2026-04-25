#include <stdio.h>

int main(){
    int a=5,b=10,answer=0;
    //add one to a here(it changes the eqn value first and then run)
    answer=++a*b;
    printf("Answer: %d \n", answer);
    
    a=5, b=10, answer=0;
    answer=a++ *b;
    //add one to it runs equation with current value and then changes the value of a it doesn't affect a*b
    printf("Answer %d \n", answer);
    printf(" %d",a);

    return 0;
}