#include <stdio.h>

int main() {
    int n, target;

    // Input array size
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    // Input array elements
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input target element
    printf("Enter the target element: ");
    scanf("%d", &target);

    // Search for the target
    int index = -1;
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            index = i;
            break; // first occurrence found
        }
    }

    // Output result
    if (index != -1)
        printf("First occurrence of %d is at index %d\n", target, index);
    else
        printf("-1\n");

    return 0;
}
