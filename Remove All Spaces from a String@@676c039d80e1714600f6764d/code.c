// Your code here...
// Your code here...
#include <stdio.h>

int main() {
    char str[200];
    int i = 0, j = 0;

    // Read the string with spaces
    fgets(str, sizeof(str), stdin);

    // Remove newline character if present
    while (str[i] != '\0') {
        if (str[i] == '\n') {
            str[i] = '\0';
            break;
        }
        i++;
    }

    // Remove all spaces
    i = 0;
    while (str[i] != '\0') {
        if (str[i] != ' ') {
            str[j++] = str[i];
        }
        i++;
    }

    str[j] = '\0';  // Null-terminate the final string

    // Output the result
    printf("%s\n", str);

    return 0;
}