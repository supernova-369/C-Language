#include <stdio.h>

int main()
{
    int val[]={1,2,3,4,5,6,7,8,9,10};
    int *poi=&val[0];
    for(int i=0;i<10;i++)
    {
        printf(" %d",*poi);
        poi++;
    }
    return 0;
}