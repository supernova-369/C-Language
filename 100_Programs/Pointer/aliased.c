#include <stdio.h>

int main()
{
    //example 1
    int a=10;
    int *p;
    p=&a;
    printf("%d\n",*p);
    printf("%d\n",*(p+0));
    printf("%d\n",p[0]);
}
