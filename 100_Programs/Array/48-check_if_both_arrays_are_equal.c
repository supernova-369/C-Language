#include <stdio.h>
#include <stdlib.h>

// Comparator function for qsort
int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int arraysEqual(int a[], int b[], int n) {
    qsort(a, n, sizeof(int), compare);
    qsort(b, n, sizeof(int), compare);

    for (int i = 0; i < n; i++) {
        if (a[i] != b[i])
            return 0; // Not equal
    }
    return 1; // Equal
}

int main() {
    int a[] = {3, 1, 2};
    int b[] = {2, 3, 1};
    int n = 3;

    if (arraysEqual(a, b, n))
        printf("Arrays are equal\n");
    else
        printf("Arrays are not equal\n");

    return 0;
}