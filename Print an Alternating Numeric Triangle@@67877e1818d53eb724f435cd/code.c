#include <stdio.h>

int main() {
    int N, i, j, start;

    // Input the number of rows
    scanf("%d", &N);

    for (i = 1; i <= N; i++) {
        // Alternate starting point: 1 if row is odd, 0 if even
        start = (i % 2 == 0) ? 0 : 1;

        for (j = 1; j <= i; j++) {
            printf("%d ", start);
            start = 1 - start; // Toggle between 1 and 0
        }

        printf("\n");
    }

    return 0;
}
