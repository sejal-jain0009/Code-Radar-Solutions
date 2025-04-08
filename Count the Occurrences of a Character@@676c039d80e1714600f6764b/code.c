// Your code here...
// Your code here...
#include <stdio.h>
#include <string.h>

int main() {
    char str[200], ch;
    int count = 0;

    // Read the string
    fgets(str, sizeof(str), stdin);

    // Remove newline if present
    str[strcspn(str, "\n")] = '\0';

    // Read the character to count
    scanf(" %c", &ch);

    // Count occurrences
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) {
            count++;
        }
    }

    // Output the result
    printf("%d\n", count);

    return 0;
}