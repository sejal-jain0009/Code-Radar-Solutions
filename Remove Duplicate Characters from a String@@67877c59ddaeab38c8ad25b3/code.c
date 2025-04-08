// Your code here...
/ Your code here...
#include <stdio.h>

int main() {
    char str[1000];
    int seen[256] = {0};  // To track characters (ASCII size)

    fgets(str, sizeof(str), stdin);  // Read input with spaces

    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        if (!seen[(unsigned char)ch]) {
            printf("%c", ch);
            seen[(unsigned char)ch] = 1;
        }
    }

    return 0;
}