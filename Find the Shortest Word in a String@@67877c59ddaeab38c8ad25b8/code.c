// Your code here...
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[200];
    char shortest[100];
    int minLength = 100;
    

    fgets(str, sizeof(str), stdin);
    
    // Remove trailing newline if exists
    str[strcspn(str, "\n")] = '\0';

    int i = 0, start = 0;
    while (str[i] != '\0') {
        // Skip any spaces at the beginning
        while (isspace(str[i])) {
            i++;
        }

        start = i;

        // Move till the end of the word
        while (str[i] != '\0' && !isspace(str[i])) {
            i++;
        }

        int length = i - start;

        if (length > 0 && length < minLength) {
            minLength = length;
            strncpy(shortest, &str[start], length);
            shortest[length] = '\0'; // Null terminate the word
        }
    }

    if (minLength < 100) {
        printf("%s\n", shortest);
    } else {
        printf("No words found in the string.\n");
    }

    return 0;
}
