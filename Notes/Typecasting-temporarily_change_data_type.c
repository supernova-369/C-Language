#include <stdio.h>

int main (){
    float avgprofit;
    int priceofpumpkin=10;
    int sales=59;
    int daysworked=7;
    avgprofit=((float)priceofpumpkin*(float)sales)/(float)daysworked;
    //int--> float
    //float--> int
    printf("average daily profit: $%.2f", avgprofit);
    // $%.2f This means the final output will be shown till 2 decimal  places and round off till that, you can change how many decimal places you want to see
    //In this line only price of pumpkin will act as a float instead of int

}
/*Typecasting in C means converting one data type into another manually by 
writing the desired data type in parentheses before a variable or value.*/