#include <stdio.h>
#include <math.h>

void add()
{
    int a=20;
    int b=10;
    int c=a+b;
    printf("SUMMATION of both integers is %d\n", c);
}

void sub()
{
    int a=20;
    int b=10;
    int c=a-b;
    printf("SUBTRACTION of both number is %d", c);
}

int main()
{
    add();
    sub();
    return 0;
}