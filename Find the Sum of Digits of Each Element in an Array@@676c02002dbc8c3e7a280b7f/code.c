// Your code here...
#include <stdio.h>

// Function to calculate the sum of digits of a number
int sumOfDigits(int num) {
    int sum = 0;
    num = (num < 0) ? -num : num;  // Handle negative numbers
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int main() {
    int n;

    printf("Enter number of elements in the array: ");
    scanf("%d", &n);

    int arr[n], result[n];

    
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        result[i] = sumOfDigits(arr[i]);
    }

   
    for (int i = 0; i < n; i++) {
        printf("%d ", result[i]);
    }

    printf("\n");
    return 0;
}
