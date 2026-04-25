#include <stdio.h>

// Recursive function to find nth Fibonacci number
int fib(int n) {
    if (n <= 1)
        return n;                     // base condition
    else
        return fib(n - 1) + fib(n - 2); // recursive call
}

int main() {
    int n, i;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    // Handling negative input
    if (n < 0) {
        printf("Error: Fibonacci series is not defined for negative numbers.\n");
        return 1;
    }
    
    if (n == 0) 
    {
        printf("Fibonacci series has no terms (n = 0).\n");
        return 0;
    }

    printf("Fibonacci series:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", fib(i));
    }

    return 0;
}