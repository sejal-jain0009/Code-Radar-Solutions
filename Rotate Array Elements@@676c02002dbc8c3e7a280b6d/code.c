#include <stdio.h>

// Function to reverse elements from index 'start' to 'end'
void reverse(int arr[], int start, int end) {
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

// Function to rotate array to the right by k positions
void rotateRight(int arr[], int n, int k) {
    k = k % n; // In case k > n
    if (k == 0) return;

    // Step 1: Reverse the whole array
    reverse(arr, 0, n - 1);

    // Step 2: Reverse first k elements
    reverse(arr, 0, k - 1);

    // Step 3: Reverse the remaining elements
    reverse(arr, k, n - 1);
}

int main() {
    int n, k;

    // Input the size of the array
    
    scanf("%d", &n);

    int arr[n];

    // Input array elements
   
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input rotation value

    scanf("%d", &k);

    // Rotate the array
    rotateRight(arr, n, k);

    // Output the rotated array
    for (int i = 0; i < n; i++) {
        printf("%d\n ", arr[i]);
    }
    printf("\n");

    return 0;
}
