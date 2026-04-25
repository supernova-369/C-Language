#include <stdio.h>

int main() {
    int array[5][5];
    int rows = 5;
    int columns = 5;

    // Outer loop iterates over each row
    for (int i = 0; i < rows; i++) {
        // Inner loop iterates over each column
        for (int j = 0; j < columns; j++) {
            // Check if the current indices are on the diagonal (row index == column index)
            if (i == j) {
                array[i][j] = 1;
            } else {
                array[i][j] = 0;
            }
        }
    }

    printf("Here is your (identity matrix) 5 x 5 array\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }

    return 0;
}
