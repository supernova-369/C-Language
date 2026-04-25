#include <stdio.h>

void main()
{
    int z,d;
    int *a=&z,*b=&d;
    
    printf("Enter the value for first variable :\n");
    scanf("%d",a);

    printf("Enter the value for second variable :\n");
    scanf("%d",b);

    printf("Thank you for entering valid value here now let's swap the values---\n");

    printf("--- Value before swapping ---\n");
    printf(" a = %d  b = %d \n",*a,*b);

    *a=*a+*b;
    *b=*a-*b;
    *a=*a-*b;

    printf("--- Value after swapping ---\n");
    printf(" a = %d  b = %d ",*a,*b);

}