#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    int index[100001];

    // Initialize all indices to -1
    for (int i = 0; i < 100001; i++) {
        index[i] = -1;
    }

    // Read the array
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int firstRepeating = -1;

    for (int i = 0; i < n; i++) {
        if (index[arr[i]] == -1) {
            index[arr[i]] = i;
        } else {
            // Found a repeat; check if it’s the first repeating
            if (firstRepeating == -1 || index[arr[i]] < index[firstRepeating]) {
                firstRepeating = arr[i];
            }
        }
    }

    if (firstRepeating == -1)
        printf("-1\n");
    else
        printf("%d\n", firstRepeating);

    return 0;
}