// Your code here...
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isVowel(char ch) {
    ch = tolower(ch);
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}

int main() {
    char str[100], ch;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character if exists
    str[strcspn(str, "\n")] = '\0';

    
    scanf(" %c", &ch); // Notice the space before %c to consume any leftover newline

    for (int i = 0; str[i] != '\0'; i++) {
        if (isVowel(str[i])) {
            str[i] = ch;
        }
    }

    printf("%s\n", str);

    return 0;
}
