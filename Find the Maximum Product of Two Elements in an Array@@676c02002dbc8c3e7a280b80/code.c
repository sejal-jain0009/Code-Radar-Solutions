// Your code here...
#include <stdio.h>

int main() {
    int n;

    scanf("%d", &n);

    if (n < 2) {
        
        return 1;
    }

    int arr[n];
   

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int max1 = arr[0], max2 = arr[1];
    int min1 = arr[0], min2 = arr[1];

    // Initialize the max and min values correctly
    if (max1 < max2) {
        int temp = max1;
        max1 = max2;
        max2 = temp;
    }

    if (min1 > min2) {
        int temp = min1;
        min1 = min2;
        min2 = temp;
    }

    for (int i = 2; i < n; i++) {
        if (arr[i] > max1) {
            max2 = max1;
            max1 = arr[i];
        } else if (arr[i] > max2) {
            max2 = arr[i];
        }

        if (arr[i] < min1) {
            min2 = min1;
            min1 = arr[i];
        } else if (arr[i] < min2) {
            min2 = arr[i];
        }
    }

    int product1 = max1 * max2;
    int product2 = min1 * min2;

    int maxProduct = (product1 > product2) ? product1 : product2;

    printf("%d\n", maxProduct);

    return 0;
}
