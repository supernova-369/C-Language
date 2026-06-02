#include <stdio.h>

int main()
{
    int size = 6; // This makes the code dynamic
    int arr[size][size]; //Array is declared dynamically
    int num = 1; //This will increase the numerbers in the spiral
    int N = size - 1 ; 

    for(int i = 0; i < size/2; i++, N--) // N-- is the most required part otherwise you will mess it up
    //four conditions ain't allowed but the last N-- could be added after comma not semi-colon
    {
        //Left to right
        for(int j = i; j <= N; j++, num++)
        {
            arr[i][j] = num;
        }

        //Top to Bottom
        for(int j = i + 1; j <= N; j++, num++)
        {
            arr[j][N] = num;
        }

        //Right to Left 
        for(int j = N - 1; j >= i; j--, num++)
        {
            arr[N][j] = num;
        }

        //Bottom to top
        for(int j = N - 1; j > i; j--, num++)
        {
            arr[j][i] = num;
        }
    }   

    //for displaying spiral 
    for(int i = 0; i < size; i++)
    {
        for(int j = 0; j < size; j++)
        {
            printf("  %3d", arr[i][j]);
        }
        printf(" \n");
    }

    return 0;
}