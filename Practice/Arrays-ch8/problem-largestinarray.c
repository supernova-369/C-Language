#include <stdio.h>

int main()
{
    int temp,swapped;
    int arr[3][3];
    printf("Enter the elements in the array : ");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d", &arr[i][j]);                
        }
    }

    printf("This is the array you entered :\n");     
    printf("{\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf(" %4d,",arr[i][j]);
        }
        printf("\n");
    }
    printf(" }\n");

    printf("Sorted array is\n");
    while (1){
        swapped=0;
        for (int i=0; i<3 ; i++){
            for(int j=0;j<3;j++){
                if (arr[i][j]>arr[i][j+1]){
                    int temp =arr[i][j];
                    arr[i][j]=arr[i][j+1];
                    arr[i][j+1]=temp;
                    swapped=1;
                }
            }
        }
        if (swapped==0){
           break;
        }
   }
    
    printf("{\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf(" %4d,",arr[i][j]);
        }
        printf("\n");
    }
    printf(" }");

    return 0;
}