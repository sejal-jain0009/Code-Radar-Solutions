// Your code here...
#include <stdio.h>

int main() {
    int rows, i, j, space;
    scanf("%d", &rows);

    for(i = 1; i <= rows; i++) {
        // Print leading spaces
        for(space = 1; space <= rows - i; space++) {
            printf(" ");
        }
        // Print numbers from 1 to i
        for(j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}