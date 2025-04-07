#include <stdio.h>

int main() {
    int N, i, j, space;

    // Input the number of row
    scanf("%d", &N);

    for (i = 1; i <= N; i++) {
        // Print spaces
        for (space = 1; space <= N - i; space++) {
            printf(" ");
        }

        // Print numbers from 1 to i
        for (j = 1; j <= i; j++) {
            printf("%d ", j);
        }

        // Move to the next line
        printf("\n");
    }

    return 0;
}
