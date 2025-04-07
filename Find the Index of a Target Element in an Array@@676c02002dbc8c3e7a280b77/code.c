#include <stdio.h>

int main() {
    int n, target;

    // Input array size
    
    scanf("%d", &n);

    int arr[n];

    // Input array elements
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input target element
    
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
        printf("%d\n", index);
    else
        printf("-1\n");

    return 0;
}
