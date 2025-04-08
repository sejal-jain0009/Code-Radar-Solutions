// Your code here...
// Your code here...
#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    int freq1[26] = {0}, freq2[26] = {0};
    int i, isAnagram = 1;

    // Input two strings
    fgets(str1, sizeof(str1), stdin);
    fgets(str2, sizeof(str2), stdin);

    // Remove newline characters if present
    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';

    // Count frequency of each character in both strings
    for (i = 0; str1[i] != '\0'; i++) {
        freq1[str1[i] - 'a']++;
    }
    for (i = 0; str2[i] != '\0'; i++) {
        freq2[str2[i] - 'a']++;
    }

    // Compare frequency arrays
    for (i = 0; i < 26; i++) {
        if (freq1[i] != freq2[i]) {
            isAnagram = 0;
            break;
        }
    }

    if (isAnagram)
        printf("Yes\n");
    else
        printf("No\n");

    return 0;
}