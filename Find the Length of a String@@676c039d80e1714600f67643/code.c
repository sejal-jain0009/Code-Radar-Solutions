// Your code here...
// Your code here...
#include <stdio.h>

int main() {
    char str[100];
    int length = 0, i = 0;

    fgets(str, sizeof(str), stdin);  // Reads input with spaces

    while (str[i] != '\0') {
        if (str[i] != '\n') {  // Exclude newline from length
            length++;
        }
        i++;
    }

    printf("%d\n", length);

    return 0;
}