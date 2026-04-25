#include <stdio.h>
#include <stdlib.h>

int main() {
    int * points;
    points = (int *) malloc (5 * sizeof(int));
    free(points);
    
    return 0;
}

/*malloc() → allocate memory

calloc(), realloc()

free() → release memory
--
int *points;

Here you declare a pointer to int named points.
👉 It will later hold the address of dynamically allocated memory.
--

points = (int *) malloc(5 * sizeof(int));

This line allocates memory dynamically on the heap.

malloc(n) → allocates a block of n bytes in memory.

5 * sizeof(int) → calculates how many bytes are needed for 5 integers.
If sizeof(int) = 4 bytes, then total = 5 * 4 = 20 bytes.

(int *) → typecasts the returned pointer (optional in C, required in C++).
malloc() returns a void *, which can point to any type.
--
free(points);

This releases the memory previously allocated with malloc(). */