// Your code here...
// Your code here...
#include <stdio.h>

// Function to check if a number is a palindrome
int isPalindrome(int num) {
    int original = num, reversed = 0;

    // Handle negative numbers as non-palindromic
    if (num < 0)
        return 0;

    while (num > 0) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }

    return original == reversed;
}

int main() {
    int n;
    scanf("%d", &n);

    int arr[n], count = 0;

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (isPalindrome(arr[i])) {
            count++;
        }
    }

    printf("%d\n", count);
    return 0;
}