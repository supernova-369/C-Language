#include<stdio.h>
#include<stdlib.h>
#include<math.h>

unsigned long factorial(int n)
{
    if(n == 0 || n == 1)
    {
        return 1;
    }

    return n*factorial(n-1);
}

int main()
{
    int num, sum=0, rem, a;

    printf("Enter the number: ");
    scanf("%d", &num);
    int krishnamurthy=num;

    while(num>0)
    {
        rem=num%10;
        a=factorial(rem);
        sum += a;
        num=num/10;
    }

    printf("Sum of factorial of 3 digit of the number : %d", sum);
    if(sum==krishnamurthy)
    {
        printf("\nKrishnamurthy Number");
    }
    else
    {
        printf("\nSomething random");
    }

    return 0;
}