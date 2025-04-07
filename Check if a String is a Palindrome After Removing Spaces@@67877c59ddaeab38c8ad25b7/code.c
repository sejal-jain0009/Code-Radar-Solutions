// Your code here...
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isPalindrome(char str[]) {
    char cleaned[100];
    int i, j = 0;

    // Remove spaces and store cleaned version
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ') {
            cleaned[j++] = str[i];
        }
    }
    cleaned[j] = '\0';

    // Check for palindrome
    int start = 0, end = j - 1;
    while (start < end) {
        if (cleaned[start] != cleaned[end]) {
            return 0; // Not a palindrome
        }
        start++;
        end--;
    }

    return 1; // It's a palindrome
}

int main() {
    char str[100];

    fgets(str, sizeof(str), stdin);

    // Remove trailing newline if present
    str[strcspn(str, "\n")] = '\0';

    if (isPalindrome(str)) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}
