#include <stdio.h>

int main() 
{
    printf("Hey! honey I'm home come loook what I brought for you...\n");
    printf("wOw!! mommy it's a Pizzza. umm... I want to find the area of this pizza.\n");
    
    float a;
    printf("I measured the radius of the pizza and it's \n");
    scanf(" %f", &a);
    float area;
    area= 3.14*a*a;
    printf("Mommy the area of this pizza is %f", area);
    return 0;
}