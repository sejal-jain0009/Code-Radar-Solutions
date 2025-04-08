// Your code here...
// Your code here...
#include <stdio.h>
#include <string.h>

int main() {
    char str[200], sub[100];
    int i, j, found = 0;

    // Read main string and substring
    fgets(str, sizeof(str), stdin);
    fgets(sub, sizeof(sub), stdin);

    // Remove newlines
    str[strcspn(str, "\n")] = '\0';
    sub[strcspn(sub, "\n")] = '\0';

    int lenStr = strlen(str);
    int lenSub = strlen(sub);

    for (i = 0; i <= lenStr - lenSub; i++) {
        for (j = 0; j < lenSub; j++) {
            if (str[i + j] != sub[j])
                break;
        }
        if (j == lenSub) {
            found = 1;
            break;
        }
    }

    if (found)
        printf("Yes\n");
    else
        printf("No\n");

    return 0;
}