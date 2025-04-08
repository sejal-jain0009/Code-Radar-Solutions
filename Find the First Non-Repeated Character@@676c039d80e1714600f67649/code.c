// Your code here...
// Your code here...
#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    int freq[256] = {0};  // Supports all ASCII characters
    int i;

    // Read input string
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';  // Remove newline

    // Count frequency of each character
    for (i = 0; str[i] != '\0'; i++) {
        freq[(unsigned char)str[i]]++;
    }

    // Find the first non-repeated character
    for (i = 0; str[i] != '\0'; i++) {
        if (freq[(unsigned char)str[i]] == 1) {
            printf("%c\n", str[i]);
            return 0;
        }
    }

    // If no non-repeated character found
    printf("-\n");
    return 0;
}