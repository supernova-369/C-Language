#include <stdio.h>

void main()
{
    int a,b,c,d;
    printf("Enter the first number : ");
    scanf("%d",&a);

    printf("Enter the second number : ");
    scanf("%d",&b);
    
    // you have 2 options
    //first : --> assign a new variable and then print bitwise operator
    c = a & b;
    d = a | b;
    printf("Bitwise operator AND : %d\n",c);
    printf("Bitwise operator OR : %d\n",d);
    
    //second : --> print the bitwise operators without new variables as shown below
    printf("Bitwise left shift : %d\n", a<<2);
    printf("Bitwise right shift : %d\n", b>>1);
}