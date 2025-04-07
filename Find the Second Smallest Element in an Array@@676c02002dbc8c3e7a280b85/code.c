// Your code here...
#include <stdio.h>
#include <limits.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    if (n < 2) {
        printf("-1");
        return 0;
    }

    int smallest = INT_MAX, second_smallest = INT_MAX;

    for (int i = 0; i < n; i++) {
        if (arr[i] < smallest) {
            second_smallest = smallest;
            smallest = arr[i];
        } else if (arr[i] > smallest && arr[i] < second_smallest) {
            second_smallest = arr[i];
        }
    }

    if (second_smallest == INT_MAX) {
        printf("-1");
    } else {
        printf("%d", second_smallest);
    }

    return 0;
}