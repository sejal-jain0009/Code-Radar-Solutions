// Your code here...
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX 1000

// To compare substrings during qsort
int cmpfunc(const void *a, const void *b) {
    return strcmp(*(const char **)a, *(const char **)b);
}

int main() {
    char str[MAX];
    scanf("%s", str);

    int len = strlen(str);
    char *substrings[MAX * MAX];
    int count = 0;

    // Generate all substrings
    for (int i = 0; i < len; i++) {
        for (int j = 1; j <= len - i; j++) {
            char *temp = (char *)malloc(j + 1);
            strncpy(temp, str + i, j);
            temp[j] = '\0';
            substrings[count++] = temp;
        }
    }

    // Sort all substrings
    qsort(substrings, count, sizeof(char *), cmpfunc);

    // Count distinct substrings
    int uniqueCount = 1;  // First one is always unique
    for (int i = 1; i < count; i++) {
        if (strcmp(substrings[i], substrings[i - 1]) != 0) {
            uniqueCount++;
        }
    }

    printf("%d\n", uniqueCount);

    // Free memory
    for (int i = 0; i < count; i++) {
        free(substrings[i]);
    }

    return 0;
}