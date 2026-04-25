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

    printf("Fibonacci series:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", fib(i));
    }

    return 0;
}
