#include <stdio.h>

int main()
{
    int x;
    char a;
    double b;
    float u;
    void *ptr;
    
    ptr=&a;
    printf("Enter the character : \n");
    scanf("%c",&a);
    printf("The character is %c\n", *((char*)ptr));
    
    ptr=&x;
    printf("Enter the integer : \n");
    scanf("%d",&x);
    printf("The integer is %d\n", *((int*)ptr));

    ptr=&b;
    printf("Enter the large integer : \n");
    scanf("%ld",&b);
    printf("The large integer is %ld\n", *((double*)ptr));

    ptr=&u;
    printf("Enter the float : \n");
    scanf("%f",&u);
    printf("The float is %f\n", *((float*)ptr));
    
    return 0;
}