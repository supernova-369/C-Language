#include <stdio.h>
#include <math.h>

int main(){
    // the formula for first n natural even nos. is n(n+1)
    // the formula for first n natural odd nos. is n^2
    int n, s;
    printf("The number of first even numbers you want to add: ");
    scanf("%d", &n);
    int a=n+1;
    s=n*a;
    printf("The sum of the first %d natural numbers is %d", n, s);
    return 0;
}