#include <stdio.h>

int main() {
    int n;

    scanf("%d", &n);

    if (n <= 0) {
        return 1;
    }

    int arr[n];

    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int max = arr[0];
    int min = arr[0];

    for(int i = 1; i < n; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
        if(arr[i] < min) {
            min = arr[i];
        }
    }

    printf("%d\n", max);
    printf("%d\n", min);

    return 0;
}
