// Your code here...
// Your code here...
#include <stdio.h>
#include <string.h>

void reverseWord(char str[], int start, int end) {
    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

int main() {
    char str[200];
    int i = 0, start = 0;

    // Read the full string (with spaces)
    fgets(str, sizeof(str), stdin);

    // Remove newline if present
    str[strcspn(str, "\n")] = '\0';

    while (str[i] != '\0') {
        if (str[i] == ' ') {
            reverseWord(str, start, i - 1);
            start = i + 1;
        }
        i++;
    }

    // Reverse the last word
    reverseWord(str, start, i - 1);

    // Output the modified string
    printf("%s\n", str);

    return 0;
}