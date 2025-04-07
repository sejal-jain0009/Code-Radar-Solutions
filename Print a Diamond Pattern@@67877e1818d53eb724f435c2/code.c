#include <stdio.h>

int main() {
    int N, i, j;

    // Input the number of rows for the top half
    scanf("%d", &N);

    // Top half of the diamond
    for (i = 1; i <= N; i++) {
        // Print spaces
        for (j = 1; j <= N - i; j++) {
            printf(" ");
        }
        // Print stars
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    // Bottom half of the diamond
    for (i = N - 1; i >= 1; i--) {
        // Print spaces
        for (j = 1; j <= N - i; j++) {
            printf(" ");
        }
        // Print stars
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
