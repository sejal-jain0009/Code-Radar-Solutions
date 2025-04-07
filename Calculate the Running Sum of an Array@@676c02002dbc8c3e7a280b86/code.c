// Your code here...
// Your code here...
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n], runningSum[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    runningSum[0] = arr[0];
    printf("%d ", runningSum[0]);

    for (int i = 1; i < n; i++) {
        runningSum[i] = runningSum[i - 1] + arr[i];
        printf("%d ", runningSum[i]);
    }

    return 0;
}