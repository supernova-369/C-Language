#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    // 1. Allocate memory on the heap
    char *ptr = (char *)malloc(16);
    strcpy(ptr, "Original Data");
    printf("Before free: %s\n", ptr);

    // 2. Free the memory
    free(ptr);
    printf("Memory freed.\n");

    // 3. USE-AFTER-FREE: Accessing the pointer after it is freed
    // The pointer 'ptr' is now a "dangling pointer".
    printf("After free: %s\n", ptr); // Dangerous!

    // 4. Mitigation: Nullify the pointer
    ptr = NULL; 
    
    return 0;
}
