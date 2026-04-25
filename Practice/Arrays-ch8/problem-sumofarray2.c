#include <stdio.h>

int main()
{
    int sum=0;
    int arr[3][3];
    //int arr[i][j];
    printf("Enter the elements in the array : ");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d", &arr[i][j]);                
        }
    }

    //Either this or that 
    printf("{\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf(" %4d,",arr[i][j]);
        }
        printf("\n");
    }
    printf(" }");

    /*printf("{ ");
    for (int i = 0; i < 3; i++) {
        printf("[");
        for (int j = 0; j < 3; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("] ");
    }   
    printf("}\n");
    */

    printf("\nThe Sum of this 3 x 3 arrays is ");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            sum += arr[i][j];
        };
    };
    printf("%d",sum);

    return 0;
}