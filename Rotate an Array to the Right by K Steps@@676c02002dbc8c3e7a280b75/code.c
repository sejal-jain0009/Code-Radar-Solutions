#include <stdio.h>

// Function to reverse part of the array
void reverse(int arr[], int start, int end) {
    while(start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

// Main Function
int main() {
    int n, k;

    // Input array size
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    // Input array elements
    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input k (steps to rotate)
    printf("Enter the number of steps to rotate: ");
    scanf("%d", &k);

    // Handle cases where k > n
    k = k % n;

    // Rotate the array to the right by k steps
    reverse(arr, 0, n - 1);
    reverse(arr, 0, k - 1);
    reverse(arr, k, n - 1);

    // Output the result
    printf("Array after rotation:\n");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
