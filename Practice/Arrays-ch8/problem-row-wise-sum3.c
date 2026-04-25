#include <stdio.h>

int main()
{
    int sum=0;
    int arr[3][3];
    //int arr[i][j];
    //i is the number of rows
    //j is the number of columns
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

printf("}\n");

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            sum += arr[i][j];
        };
        printf("The sum of this row is %d\n",sum);
        sum=0;
    };

    return 0;
}