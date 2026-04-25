#include <stdio.h>

int main()
{
    int arr[2][2];
    //int arr[i][j];
    printf("Enter the elements in the first array : ");
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            scanf("%d", &arr[i][j]);                
        }
    }

    int shit[2][2];
    printf("Enter the elements in the second array : ");
    for(int k=0;k<2;k++){
        for(int l=0;l<2;l++){
            scanf("%d", &shit[k][l]);                
        }
    }

    printf("The first Array :\n");
    printf("{\n");
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf(" %d,",arr[i][j]);
        }
        printf("\n");
    }
    printf("}\n");

    printf("The second Array :\n");
    printf("{\n");
    for(int k=0;k<2;k++){
        for(int l=0;l<2;l++){
            printf(" %d,",shit[k][l]);
        }
        printf("\n");
    }
    printf("}\n");

    int third[2][2];
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            third[i][j]=arr[i][j]+shit[i][j];
        }
    }

    printf("The Third Array :\n");
    printf("{\n");
    for(int k=0;k<2;k++){
        for(int l=0;l<2;l++){
            printf(" %d,",third[k][l]);
        }
        printf("\n");
    }
    printf("}\n");

    return 0;
}