#include <stdio.h>
#include <limits.h>

int main() {
    int n;

    // Input size of array
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    if(n < 2) {
        printf("-1\n"); // Not enough elements
        return 0;
    }

    int arr[n];

    // Input elements
    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int first = INT_MIN, second = INT_MIN;

    // Find the first and second largest elements
    for(int i = 0; i < n; i++) {
        if(arr[i] > first) {
            second = first;
            first = arr[i];
        } else if(arr[i] > second && arr[i] < first) {
            second = arr[i];
        }
    }

    // Output the result
    if(second == INT_MIN) {
        printf("-1\n"); // No second largest element
    } else {
        printf("Second largest element is: %d\n", second);
    }

    return 0;
}
