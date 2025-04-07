// Your code here...
// Your code here...
#include <stdio.h>

int main() {
    char str[200];
    int i = 0, words = 0, inWord = 0;

    fgets(str, sizeof(str), stdin);  // Reads input with spaces

    while (str[i] != '\0') {
        if (str[i] != ' ' && str[i] != '\n') {
            if (inWord == 0) {
                words++;
                inWord = 1;
            }
        } else {
            inWord = 0;
        }
        i++;
    }

    printf("%d\n", words);

    return 0;
}