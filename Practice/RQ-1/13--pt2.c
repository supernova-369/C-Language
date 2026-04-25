#include <stdio.h>
#include <math.h>

int main()
{

    int sum=0;
    int n;
    printf("Enter the last term : \n ");
    scanf("%d", &n);
    for (int i=1;i<n+1;++i){
        sum+=i*(i+1);
    }
        printf("The sum till the last term you entered  is %d",sum);

            return 0;
}
