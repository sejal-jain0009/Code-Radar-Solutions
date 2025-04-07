// Your code here...
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int largestEven;
    int found = 0; // flag to track even numbers

    for(int i = 0; i < n; i++) {
        if(arr[i] % 2 == 0) {
            if(!found || arr[i] > largestEven) {
                largestEven = arr[i];
                found = 1;
            }
        }
    }

    if(found) {
        printf("%d\n", largestEven);
    } else {
        printf("-1\n");
    }

    return 0;
}