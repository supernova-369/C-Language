#include <stdio.h>
#include <stdlib.h>

int main() 
{
    
    int age;
    int year1;
    int year2;
    printf("Enter a year \n");
    scanf(" %d", &year1);
    
    printf("Enter another year \n");
    scanf(" %d", &year2);
    
    age = year1 - year2;
    printf(" %d \n", age);
    age= abs(age);
    //abs() never returns a negative value.
    printf(" %d \n", age);

    return 0;
}