// Your code here...
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[100];
    int count = 0;

    
    fgets(str, sizeof(str), stdin);

    // Remove newline character if present
    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }

    for (int i = 0; str[i] != '\0'; i++) {
        char ch = tolower(str[i]); // convert to lowercase for easy comparison
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            count++;
        }
    }

    printf("%d\n", count);

    return 0;
}
