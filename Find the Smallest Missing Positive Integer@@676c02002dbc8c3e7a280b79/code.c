#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int findSmallestMissingPositive(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        // Place arr[i] at the correct index if it's a positive number in the range 1 to n
        while (arr[i] > 0 && arr[i] <= n && arr[arr[i] - 1] != arr[i]) {
            swap(&arr[i], &arr[arr[i] - 1]);
        }
    }

    // Now find the first location where index+1 != value
    for (int i = 0; i < n; i++) {
        if (arr[i] != i + 1)
            return i + 1;
    }

    // If all are in place, the missing number is n+1
    return n + 1;
}

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int result = findSmallestMissingPositive(arr, n);
    printf("%d\n", result);

    return 0;
}
