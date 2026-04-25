#include <stdio.h>

int main(void){

    int i;      // iterator for first array
    int j;      // iterator for second array
    int n;      // size of first array
    int s;      // size of second array
    int k = 1;  // iterator for merged array
    int m = 5;  // a number less then size of the first array
    int arr[100];
    int b[50];
   
    //------------ First Array Input ------------
    printf("How much integers do you want to enter in the array ?");
    scanf("%d",&n);

    printf("Enter %d integers \n", n);
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    
    //------------ Second Array Input ------------
    printf("How much integer should be in your second array ? \n");
    scanf("%d",&s);

    printf("Enter %d integers \n", s);
    for(int j=0; j<s; j++)
    {
        scanf("%d", &b[j]);
    }

  
    //------------ Display Both Arrays ------------
    printf("---------First Array --> \n");
    printf(" { ");
    for (i=0; i<n;i++)
    {
        printf("%d ", arr[i]);
    }
    printf("} \n");
    
    printf("---------Second Array --> \n");
    printf(" { ");
    for (j=0; j<s;j++)
    {
        printf("%d ", b[j]);
    }
    printf("} \n");
    

    //------------ Main Logic to Merge Both Arrays ------------
    for(i=0; i<s; i++)
    {
        //m=5 k=1
        for(j=m; j>=k; j--)
        {
            printf("-");
            arr[j+1]=arr[j];
        }
        arr[k]=b[i];
        k=k+2;
        m=m+1;
    }

    //------------ Display Merged Array ------------
    printf(" { ");
    for (i=0; i<n+s;i++)
    {
        printf("%d ", arr[i]);
    }
    printf("} \n");
    return 0;
}