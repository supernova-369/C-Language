#include <stdio.h>

// Define 'Integer' as an alias for 'int'
typedef int Integer;

// Define 'Decimal' as an alias for 'float'
typedef float Decimal;

int main() {
    // Declare variables using the new type aliases
    Integer quantity = 10;
    Decimal price = 19.99;

    printf("Quantity: %d\n", quantity);
    printf("Price: %.2f\n", price);

    return 0;
}