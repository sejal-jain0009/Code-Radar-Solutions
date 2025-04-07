#include <stdio.h>

// Function to find majority element using Boyer-Moore Voting Algorithm
int findMajorityElement(int arr[], int n) {
    int count = 0, candidate = -1;

    // Phase 1: Find a candidate
    for (int i = 0; i < n; i++) {
        if (count == 0) {
            candidate = arr[i];
            count = 1;
        } else if (arr[i] == candidate) {
            count++;
        } else {
            count--;
        }
    }

    // Phase 2: Verify the candidate
    count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == candidate) {
            count++;
        }
    }

    return (count > n / 2) ? candidate : -1;
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

    // Find and print the majority element
    int result = findMajorityElement(arr, n);
    printf("%d\n", result);

    return 0;
}
