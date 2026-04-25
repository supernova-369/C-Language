#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    printf("You want to add N numbers of this mathematical series(1 x 2 + 2 x 3 + 3 x 4... N)\n ");
    scanf("%d", &n);;
    int a = (n*(n+1)*(n+2))/3 ;
    printf("The sum of this series till %d terms is %d \n",n , a);

    return 0;
}

// formula - S = [n(n+1)(n+2)]/3

