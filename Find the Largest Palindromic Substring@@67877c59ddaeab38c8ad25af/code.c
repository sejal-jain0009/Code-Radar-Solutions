// Your code here...
#include <stdio.h>
#include <string.h>

int expandAroundCenter(char str[], int left, int right) {
    while (left >= 0 && right < strlen(str) && str[left] == str[right]) {
        left--;
        right++;
    }
    return right - left - 1; // Actual length of palindrome
}

int main() {
    char str[200];
    int start = 0, maxLen = 1;

    // Read input
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    int len = strlen(str);

    for (int i = 0; i < len; i++) {
        int len1 = expandAroundCenter(str, i, i);     // Odd-length
        int len2 = expandAroundCenter(str, i, i + 1); // Even-length
        int currLen = (len1 > len2) ? len1 : len2;

        if (currLen > maxLen) {
            maxLen = currLen;
            start = i - (currLen - 1) / 2;
        }
    }

    // Print the longest palindromic substring
    for (int i = start; i < start + maxLen; i++) {
        putchar(str[i]);
    }
    printf("\n");

    return 0;
}