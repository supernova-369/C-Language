#include <stdio.h>
#include <math.h>

int main()
{
    int n, a, d, sumsquare;

    printf("Enter the first term (a): ");
    scanf("%d", &a);

    printf("Enter the common difference (d): ");
    scanf("%d", &d);

    printf("Enter the number of terms (n): ");
    scanf("%d", &n);

    int l = a + (n - 1) * d;
    int sum = (n * (a + l)) / 2;

    for (int i=a;i<=l;i+=d){
            printf( " %d ",i);
            sumsquare+= i*i ;
    }

    printf("\nThe last term of the AP is: %d\n", l);
    printf("The sum of the AP is: %d\n", sum);
    printf("The sum of the AP is: %d\n", sumsquare);
    return 0;
}