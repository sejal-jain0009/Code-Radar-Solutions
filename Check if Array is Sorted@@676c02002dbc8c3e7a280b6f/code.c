#include <stdio.h>

int main() {
    int n;

    // Input size of the array
  
    scanf("%d", &n);

    int arr[n];

    // Input array elements
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Check if the array is sorted
    int isSorted = 1; // Assume array is sorted

    for (int i = 1; i < n; i++) {
        if (arr[i] < arr[i - 1]) {
            isSorted = 0; // Found a decreasing pair
            break;
        }
    }

    // Output result
    if (isSorted)
        printf("Sorted");
    else
        printf("Not Sorted.\n");

    return 0;
}
