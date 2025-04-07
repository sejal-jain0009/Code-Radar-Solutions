// Your code here...
#include <stdio.h>

void findLeaders(int arr[], int n) {
    int leaders[n];  // To store the leaders
    int index = 0;

    int maxFromRight = arr[n - 1];
    leaders[index++] = maxFromRight;

    for (int i = n - 2; i >= 0; i--) {
        if (arr[i] >= maxFromRight) {
            maxFromRight = arr[i];
            leaders[index++] = maxFromRight;
        }
    }

    // Print leaders in correct order (reverse the array)
    for (int i = index - 1; i >= 0; i--) {
        printf("%d ", leaders[i]);
    }
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    findLeaders(arr, n);

    return 0;
}