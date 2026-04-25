#include <stdio.h>

int factorial(int n) {
    if (n == 0)
        return 1;          // base condition
    else
        return n * factorial(n - 1);  // recursive call
}

int main() {
    int x;
    printf("Enter the number you want factorial of ");
    scanf("%d",&x);
    int f = factorial(x);
    printf("Factorial = %d", f);
    return 0;
}
