#include <stdio.h>

int main()
{
    int addition[2][2];
    int first_array[2][2] = {
        {1, 2},
        {3, 4}
    };

    int second_array[2][2] = {
        {5, 6},
        {7, 8}
    };

    // Addition logic 
    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 2; j++)
        {
            addition[i][j] = first_array[i][j] + second_array[i][j];
        }
    }

    printf("Result of addition:\n");
    for (int i = 0; i < 2; i++) {           
        for (int j = 0; j < 2; j++) {       
            printf("%d ", addition[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}