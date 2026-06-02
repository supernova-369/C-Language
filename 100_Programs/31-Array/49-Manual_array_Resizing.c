#include <stdio.h>
#include <stdlib.h>

int main() {
    int capacity = 2;   // initial capacity
    int size = 0;       // current number of elements

    int *arr = (int *)malloc(capacity * sizeof(int));

    if(arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    int n, value;

    printf("How many elements to insert: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        scanf("%d", &value);

        // Resize if needed
        if(size == capacity) {
            capacity *= 2;  // double capacity

            int *temp = (int *)realloc(arr, capacity * sizeof(int));

            if(temp == NULL) {
                printf("Reallocation failed\n");
                free(arr);
                return 1;
            }

            arr = temp;
        }

        arr[size++] = value;
    }

    // Print array
    printf("Array elements:\n");
    for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    printf("\nFinal size: %d\n", size);
    printf("Final capacity: %d\n", capacity);

    free(arr);
    return 0;
}