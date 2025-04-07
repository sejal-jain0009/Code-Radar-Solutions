#include <stdio.h>

int main() {
    int n;
    
    // Input number of row
    scanf("%d", &n);

    // Loop through rows
    for (int i = 1; i <= n; i++) {
        // Print numbers from 1 to i
        for (int j = 1; j <= i; j++) {
            printf(" %d ", j);
        }
        printf("\n");
    }

    return 0;
}
