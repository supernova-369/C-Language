#include <stdio.h>
#include <math.h>

int main()
{
    int sum=0;
    int f=1;
    int n;
    printf("Enter the last term : \n ");
    scanf("%d", &n);
    for (int i=1;i<=n;++i){
        f=f*i;
        sum+=f;
    }
    printf("The sum till the last term you entered  is %d \n",sum );

    return 0;
}
