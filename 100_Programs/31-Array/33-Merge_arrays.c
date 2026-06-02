#include <stdio.h>
#include <stdlib.h>

void merge(int arr[], int n, int b[], int m, int merged[]);


int main(void){

   int i,j, swapped;
   int arr[100], b[100], n, m;
   int merged[200];

   printf("How much integers do you want to enter in the array ?");
   scanf("%d",&n);

   printf("Enter %d integers \n", n);
   for(int i=0; i<n; i++)
   {
      scanf("%d", &arr[i]);
   }

   printf("How much integer should be in your second array ? \n");
   scanf("%d",&m);

   printf("Enter %d integers \n", m);
   for(int j=0; j<m; j++)
   {
      scanf("%d", &b[j]);
   }
  
   printf("---------First Array --> \n");
   printf(" { ");
   for (i=0; i<n;i++)
   {
      printf("%d ", arr[i]);
   }
   printf("} \n");
    
   printf("---------Second Array --> \n");
   printf(" { ");
   for (j=0; j<m;j++)
   {
      printf("%d ", b[j]);
   }
   printf("} \n");
   
   while (1)
   {
       swapped=0;
       
         for (i=0; i<n-1 ; i++)
         {
            if (arr[i]>arr[i+1])
            {
               int temp =arr[i];
               arr[i]=arr[i+1];
               arr[i+1]=temp;
               swapped=1;
            }
         }
         if (swapped==0){
            break;
         }
   }

   printf("\nFirst Array is Sorted ---->>: \n");
   printf(" { ");
   for (i=0; i<n;i++)
   {
      printf("%d ", arr[i]);
   }
   printf("} \n");
   
   while(1)
   {
      swapped=0;
      for(j=0;j<m-1;j++)
      {
         if(b[j]>b[j+1])
         {
            int temp = b[j];
            b[j] = b[j+1];
            b[j+1]=temp;
            swapped=1;
         }
      }
      if(swapped==0)
      {
         break;
      }
   }



   printf("\nSecond Array is Sorted ---->>: \n");
   printf(" { ");
   for (j=0; j<m;j++)
   {
      printf("%d ", b[j]);
   }
   printf("} \n");

   merge(arr, n, b, m, merged);

   printf("\nMerged Sorted Array is ---->>: \n");
   printf(" { ");
   for (int i = 0; i < n + m; i++)
   {
      printf("%d ", merged[i]);
   }
   printf(" } ");
   
   return 0;
}

void merge(int arr[], int n, int b[], int m, int merged[])
{
   int i=0, j=0, k=0;
   
   while(i<n && j<m)
   {
      if(arr[i] < b[j])
      {
         merged[k] = arr[i];
         k++;
         i++;
      }
      else
      {
         merged[k] = b[j];
         k++;
         j++;
      }
   }

   while(i<m)
   {
      merged[k] = arr[i];
      k++;
      i++;
   }

   while(j<n)
   {
      merged[k] = b[j];
      k++;
      j++;
   }
}