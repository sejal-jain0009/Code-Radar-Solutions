#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    
    fgets(str, sizeof(str), stdin);

    // Remove newline character if fgets captures it
    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
        len--;
    }

    // Reverse the string in place
    int start = 0, end = len - 1;
    char temp;

    while (start < end) {
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        start++;
        end--;
    }

    printf("%s\n", str);

    return 0;
}
