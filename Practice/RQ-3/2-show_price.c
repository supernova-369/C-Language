#include <stdio.h>

int main()
{
    float rice, sugar;

    printf("Enter the price of rice and sugar\n");
    scanf("%f\n",&rice);
    scanf("%f",&sugar);    

    printf("***List Of Items***\n");
    printf("Items \t Price\n");
    printf("Rice \t Rs %.2f\n",rice);
    printf("Sugar \t Rs %.2f\n",sugar);
    return 0;
}