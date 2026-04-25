#include <stdio.h>

int main() {
    int rows = 5;

    // Outer loop for rows
    for (int i = 1; i <= rows; i++) {

        // Inner loop 1 for leading 
        // white spaces
        for (int j = 0; j < rows - i; j++) 
            printf(" ");
        
        // coefficient
        int C = 1; 

        // Inner loop 2 for 
        // printing numbers
        for (int k = 1; k <= i; k++) {
            printf(" %d", C);
            C = C * (i - k) / k;
        }
        printf("\n");
    }
    return 0;
}