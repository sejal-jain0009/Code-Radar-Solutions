// Your code here..
#include <stdio.h>

void moveZerosToEnd(int arr[], int n) {
    int index = 0; // Index to place non-zero elements

    // Traverse the array and move non-zero elements forward
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            arr[index++] = arr[i];
        }
    }

    // Fill the remaining positions with zeros
    while (index < n) {
        arr[index++] = 0;
    }
}

int main() {
    int n;

   
    scanf("%d", &n);

    int arr[n];
 

    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    moveZerosToEnd(arr, n);

    
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    printf("\n");
    return 0;
}
