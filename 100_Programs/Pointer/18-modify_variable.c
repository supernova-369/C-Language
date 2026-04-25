#include <stdio.h>

void modify(int *z, int *x)
{
    *x= *x-5;
    /*
    for *x++;
    ++ has higher precedence than *
    So this is interpreted as:
    *(x++)
    Meaning: the pointer moves, not the value
    */
    *z= *z +6;
    /*
    ✔ *x = something; → modifies original variable
    ✖ x = something; → modifies pointer only
    ✖ *x + something; → no modification
    ✖ *x++ → pointer moves, value unchanged
    */
    printf("%d\n%d",*x,*z);
}
int main()
{
    int a,b;
    int *x=&a,*z=&b;
    
    printf("Enter the values for a and b : ");
    scanf ("%d %d", &a,&b);

    printf("Values of the variables are modified : ");
    modify(z,x);


    return 0;
}
// /if you pass only the value, the function can change only a local copy, 
//and the original variable remains unchanged