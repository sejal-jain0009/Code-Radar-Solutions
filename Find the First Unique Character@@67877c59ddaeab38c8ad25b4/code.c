// Your code here...
#include <stdio.h>
#include <string.h>

#define MAX 256 // For all possible ASCII characters

int main() {
    char str[1000];
    int freq[MAX] = {0};

    
    fgets(str, sizeof(str), stdin);

    // Remove newline if present
    str[strcspn(str, "\n")] = '\0';

    // Count frequency of each character
    for (int i = 0; str[i] != '\0'; i++) {
        freq[(unsigned char)str[i]]++;
    }

    // Find the first non-repeating character
    for (int i = 0; str[i] != '\0'; i++) {
        if (freq[(unsigned char)str[i]] == 1) {
            printf("'%c'\n", str[i]);
            return 0;
        }
    }

   
    return 0;
}
