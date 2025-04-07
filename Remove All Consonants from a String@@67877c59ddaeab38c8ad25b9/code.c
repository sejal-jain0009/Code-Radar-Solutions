// Your code here...
#include <stdio.h>
#include <ctype.h>

int isVowel(char ch) {
    ch = tolower(ch);
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}

int main() {
    char str[100], result[100];
    int i, j = 0;

    
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) {
        char ch = str[i];

        if (!isalpha(ch) || isVowel(ch)) {
            result[j++] = ch;
        }
    }

    result[j] = '\0';

    printf("%s\n", result);

    return 0;
}
