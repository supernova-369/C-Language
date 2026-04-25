//***********YE HE AAM ZINDAGI***********
// #include <stdio.h>

// int main()
// {
//     int n,swapped;

//     printf("How many numbers you want in your array : ");
//     scanf("%d",&n);
//     int a[n];
    
//     printf("Enter %d integers to add in the array : ",n);
    
//     for (int i=0;i<n;i++)
//     {
//         scanf("%d", &a[i]);
//     }

//     while (1){
//         swapped=0;
        
//         for (int i=0; i<n-1 ; i++){
//             if (a[i]>a[i+1]){
//                 int temp =a[i];
//                 a[i]=a[i+1];
//                 a[i+1]=temp;
//                 swapped=1;
//              }
//         }
//         if (swapped==0){
//             break;
//         }
//     }
//     printf("The largest number in the array is %d",a[n-1]);

//     return 0;
// }

//*********YE HE MENTOS ZINDAGI*********
#include <stdio.h>

//"(int*)This function will return an address of an integer.”
int* maxElement(int arr[], int n)
//When you pass an array to a function, it automatically becomes a pointer.
//so *arr=arr[]
{
    int *max = arr;   // assume first element is max

    for (int i = 1; i < n; i++)
    {
        if (arr[i] > *max)
        //“Go to the address stored in max and fetch the value stored there.”
            max = &arr[i];   // store address of larger element
    }
    /*
    *max = arr[i];
    This means:
    “Go to the address currently stored in max and overwrite the value there.”
    That would change the array contents, not update which element is maximum.
    */

    return max;   // return address, not value
}

int main()
{
    int arr[] = {10, 45, 23, 67, 12};
    int n = sizeof(arr) / sizeof(arr[0]);
    /*
    Why arr[0] specifically?

    Any element would work: arr[1], arr[2], etc.
    arr[0] is used because:
    It always exists
    It is clear and standard practice
    */

    //this is just to check the size of the array and use it below
   
    int *p = maxElement(arr, n);

    printf("Maximum value = %d\n", *p);
    printf("Address = %p\n", (void*)p);
    /*
    Because the C standard says:
    %p expects an argument of type void *.
    */

    return 0;
}
