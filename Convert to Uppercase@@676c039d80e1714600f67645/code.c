// Your code here...
// Your code here...
#include <stdio.h>
#include <ctype.h>

int main() {
    char str[200];
    int i = 0;

    // Read the string
    fgets(str, sizeof(str), stdin);

    // Convert to uppercase
    while (str[i] != '\0') {
        str[i] = toupper(str[i]);
        i++;
    }

    // Output the result
    printf("%s", str);

    return 0;
}