// Your code here...
#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    char toReplace, replaceWith;

    // Read the string
    fgets(str, sizeof(str), stdin);

    // Remove newline character from fgets (if present)
    int len = strlen(str);
    if (str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }

    // Read the character to replace and the replacement character
    scanf(" %c", &toReplace);
    scanf(" %c", &replaceWith);

    // Replace characters
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == toReplace) {
            str[i] = replaceWith;
        }
    }

    // Output the modified string
    printf("%s\n", str);

    return 0;
}