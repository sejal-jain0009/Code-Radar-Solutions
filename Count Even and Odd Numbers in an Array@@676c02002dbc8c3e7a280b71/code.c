#include <stdio.h>

int main() {
    int n;

    // Input array size
    scanf("%d", &n);

    int arr[n];
    int evenCount = 0, oddCount = 0;

    // Input array elements
    
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);

        // Check if even or odd
        if (arr[i] % 2 == 0)
            evenCount++;
        else
            oddCount++;
    }

    // Output the result
    printf("%d %d", evenCount,oddCount);

    return 0;
}
