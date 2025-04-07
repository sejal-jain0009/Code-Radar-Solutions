// Your code here...
#include <stdio.h>
#include <stdlib.h>

// Comparison function for qsort
int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int main() {
    int n;
    scanf("%d", &n);

    if (n < 2) {
        printf("-1\n");
        return 0;
    }

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    qsort(arr, n, sizeof(int), compare);  // Sort the array

    int minDiff = abs(arr[1] - arr[0]);
    int first = arr[0], second = arr[1];

    for (int i = 1; i < n - 1; i++) {
        int diff = abs(arr[i + 1] - arr[i]);
        if (diff < minDiff) {
            minDiff = diff;
            first = arr[i];
            second = arr[i + 1];
        }
    }

    printf("%d %d\n", first, second);
    return 0;
}