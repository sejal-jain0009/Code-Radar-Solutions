// Your code here...
#include <stdio.h>

int findFirstPeak(int arr[], int n) {
    if (n == 0) return -1;

    // Check first element
    if (n == 1 || arr[0] > arr[1])
        return arr[0];

    // Check middle elements
    for (int i = 1; i < n - 1; i++) {
        if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1])
            return arr[i];
    }

    // Check last element
    if (arr[n - 1] > arr[n - 2])
        return arr[n - 1];

    return -1; // No peak found
}

int main() {
    int n;

    // printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // printf("Enter the array elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int peak = findFirstPeak(arr, n);

    if (peak != -1)
        printf("%d\n", peak);
    else
        printf("-1");

    return 0;
}
