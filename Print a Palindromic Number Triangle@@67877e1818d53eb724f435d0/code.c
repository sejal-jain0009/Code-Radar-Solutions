#include <stdio.h>

int main() {
    int N, i, j;

    // Input number of rows
   
    scanf("%d", &N);

    for (i = 1; i <= N; i++) {
        // Print spaces to center the numbers
        for (j = 1; j <= N - i; j++) {
            printf(" ");
        }

        // Print increasing numbers from 1 to i
        for (j = 1; j <= i; j++) {
            printf("%d", j);
        }

        // Print decreasing numbers from i-1 to 1
        for (j = i - 1; j >= 1; j--) {
            printf("%d", j);
        }

        printf("\n");
    }

    return 0;
}
