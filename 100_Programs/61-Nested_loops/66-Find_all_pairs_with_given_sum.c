#include <stdio.h>

void findPairs(int arr[], int n, int target) {
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(arr[i] + arr[j] == target) {
                printf("(%d, %d)\n", arr[i], arr[j]);
            }
        }
    }
}

int main() {
    int n;
    int target;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int num[n];

    printf("Enter target sum: ");
    scanf("%d", &target);

    printf("Enter elements:\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &num[i]);
    }

    findPairs(num, n, target);

    return 0;
}