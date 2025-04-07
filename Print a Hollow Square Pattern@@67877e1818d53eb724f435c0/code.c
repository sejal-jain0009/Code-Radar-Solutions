#include <stdio.h>

int main() {
    int N, i, j;

    // Input the size of the square
    scanf("%d", &N);

    // Loop through rows
    for (i = 0; i < N; i++) {
        // Loop through columns
        for (j = 0; j < N; j++) {
            // Print star if on border, otherwise print space
            if (i == 0 || i == N - 1 || j == 0 || j == N - 1) {
                printf("* ");
            } else {
                printf("  ");
            }
        }
        // Move to the next line
        printf("\n");
    }

    return 0;
}
