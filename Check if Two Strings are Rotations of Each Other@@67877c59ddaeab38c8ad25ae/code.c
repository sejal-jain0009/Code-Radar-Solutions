// Your code here...
// Your code here...
#include <stdio.h>
#include <string.h>

int isRotation(char str1[], char str2[]) {
    char temp[400];

    // Check if lengths are equal
    if (strlen(str1) != strlen(str2))
        return 0;

    // Concatenate str1 with itself
    strcpy(temp, str1);
    strcat(temp, str1);

    // Check if str2 is a substring of temp
    if (strstr(temp, str2) != NULL)
        return 1;
    else
        return 0;
}

int main() {
    char str1[200], str2[200];

    // Read two strings
    fgets(str1, sizeof(str1), stdin);
    fgets(str2, sizeof(str2), stdin);

    // Remove newlines
    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';

    if (isRotation(str1, str2))
        printf("Yes\n");
    else
        printf("No\n");

    return 0;
}