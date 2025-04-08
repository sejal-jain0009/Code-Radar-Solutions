// Your code here...
// Your code here...
#include <stdio.h>
#include <ctype.h>

int main() {
    char str[200];
    int i = 0;

    // Read the string
    fgets(str, sizeof(str), stdin);

    // Toggle case
    while (str[i] != '\0') {
        if (islower(str[i])) {
            str[i] = toupper(str[i]);
        } else if (isupper(str[i])) {
            str[i] = tolower(str[i]);
        }
        i++;
    }

    // Output the result
    printf("%s", str);

    return 0;
}