// Your code here...
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isPalindrome(char str[]) {
    int start = 0;
    int end = strlen(str) - 1;

    while (start < end) {
        // Skip non-alphanumeric characters and convert to lowercase
        while (start < end && !isalnum(str[start])) start++;
        while (start < end && !isalnum(str[end])) end--;

        if (tolower(str[start]) != tolower(str[end])) {
            return 0; // Not a palindrome
        }

        start++;
        end--;
    }

    return 1; // Is a palindrome
}

int main() {
    char str[100];

    
    fgets(str, sizeof(str), stdin);

    // Remove newline character if present
    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }

    if (isPalindrome(str)) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}
