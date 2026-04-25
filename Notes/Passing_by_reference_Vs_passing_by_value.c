#include <stdio.h>
#include <stdlib.h>

void passbyvalue(int i);
void passbyaddress(int *i);

int main(){
    int tuna =20;
    
    passbyvalue(tuna);
    printf("Passing by value, tuna is now %d\n", tuna);
    
    passbyaddress(&tuna);
    printf("passing by address , tuna is now %d \n", tuna);
    
    return 0;
}

void passbyvalue(int i){
    i=99;
    return;
}

void passbyaddress(int *i){
    *i=64;
    return;
}