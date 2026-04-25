#include <stdio.h>
#include <stdlib.h>

int main() {
    // 1. Allocate memory
    int *ptr = (int *)malloc(sizeof(int));
    *ptr = 100;
    printf("Before free: %d\n", *ptr);

    // 2. Free the memory
    free(ptr);
    // ptr is now a dangling pointer because it still holds the address 
    // of the freed memory, but is no longer allowed to access it.

    // 3. Observation: Accessing freed memory (Undefined Behavior)
    printf("After free: %d\n", *ptr); // Likely garbage value

    return 0;
}
