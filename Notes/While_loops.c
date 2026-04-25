#include <stdio.h>

int main(){
    int day=1;
    float amount =0.1;
    while(day<=30){
        amount*=2;
        printf("Day: %d \t Amount: $%.2f \n", day,amount);
       
        //amount =amount*2
        ++day;
    }
    return 0;
}