// Your code here...
#include <stdio.h>
#include <string.h>

int isBinaryString(const char *str) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != '0' && str[i] != '1') {
            return 0; // Not a binary string
        }
    }
    return 1; // It's a binary string
}

int main() {
    char str[100];

    
    scanf("%s", str);

    if (isBinaryString(str)) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}
