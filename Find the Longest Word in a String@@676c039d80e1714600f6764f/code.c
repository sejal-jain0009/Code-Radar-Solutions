// Your code here...
// Your code here...
#include <stdio.h>
#include <string.h>

int main() {
    char str[200], longest[200];
    int i = 0, start = 0, maxLen = 0;

    fgets(str, sizeof(str), stdin);

    // Remove newline if present
    str[strcspn(str, "\n")] = '\0';

    while (1) {
        if (str[i] == ' ' || str[i] == '\0') {
            int len = i - start;
            if (len > maxLen) {
                maxLen = len;
                strncpy(longest, &str[start], len);
                longest[len] = '\0';
            }
            start = i + 1;
        }

        if (str[i] == '\0') break;
        i++;
    }

    printf("%s\n", longest);

    return 0;
}