#include <stdio.h>

int main(){
    char name[14] = "buckyRoberts";
    printf("My name is %s \n", name);
    name[2] = 'z';
    printf("My name is %s \n", name);
    return 0;
}