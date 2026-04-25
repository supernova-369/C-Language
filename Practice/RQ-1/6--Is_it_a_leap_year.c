#include <stdio.h>
#include <stdlib.h>

int main(){
    int year;
    printf("Enter which year you want to check for leap year : \n");
    scanf("%d", &year);

    if (year%400==0){
        printf("Awesome that's a leap year!");
    }else if (year%100==0){
        printf("The year you want to check is a just an another year nothing special.");
    } else if (year%4==0){
        printf("Wow! , It's a leap year!");
    } else{
        printf("YoU are such a Nerd.");
    }
    return 0;
}
