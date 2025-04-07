#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n); // Input array size

    int arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]); // Input array elements
    }

    int duplicate = -1;
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(arr[i] == arr[j]) {
                duplicate = arr[i];
                break;
            }
        }
        if(duplicate != -1)
            break;
    }

    if(duplicate != -1)
        printf("%d\n", duplicate); // Output the duplicate

    return 0;
}