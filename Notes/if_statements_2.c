#include <stdio.h>

int main (){
    int age;
    char gender;
    
    printf("How old are you ? \n");
    scanf("%d",&age);
    
    printf("what is your gender?(m/f) \n");
    scanf(" %c", &gender);
    // Space is must before     %c
    if (age>18){
        printf("You may enter this website\n");
        if (gender=='m'){
            printf("dude");
        }
        if (gender=='f'){
            printf("m'lady");
        }
        if (age<18){
            printf("Nothing to see here!");
        }
    }
}