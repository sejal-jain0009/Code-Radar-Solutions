// Your code here...
// Your code here...
#include <stdio.h>
#include <ctype.h>

int main() {
    char str[200];
    int freq[26] = {0};  // Frequency array for a-z
    int i, max = 0;
    char mostFreq;

    // printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Count frequency of each lowercase letter
    for (i = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i])) {
            char ch = tolower(str[i]);  // Convert to lowercase for consistency
            freq[ch - 'a']++;
        }
    }

    // Find the character with the highest frequency
    for (i = 0; i < 26; i++) {
        if (freq[i] > max) {
            max = freq[i];
            mostFreq = 'a' + i;
        }
    }

    printf("%c\n", mostFreq);

    return 0;
}
