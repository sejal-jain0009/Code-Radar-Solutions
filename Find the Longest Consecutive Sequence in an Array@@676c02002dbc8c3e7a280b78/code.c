#include <stdio.h>
#include <stdlib.h>

// Comparison function for qsort
int compare(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}

int longestConsecutive(int arr[], int n) {
    if (n == 0) return 0;

    // Sort the array
    qsort(arr, n, sizeof(int), compare);

    int maxLen = 1, currLen = 1;

    for (int i = 1; i < n; i++) {
        // Skip duplicates
        if (arr[i] == arr[i - 1]) continue;

        if (arr[i] == arr[i - 1] + 1) {
            currLen++;
        } else {
            if (currLen > maxLen)
                maxLen = currLen;
            currLen = 1;
        }
    }

    if (currLen > maxLen)
        maxLen = currLen;

    return maxLen;
}

int main() {
    int n;

    // Input array size

    scanf("%d", &n);

    int arr[n];

    // Input array elements
   
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int result = longestConsecutive(arr, n);
    printf("%d\n", result);

    return 0;
}
