#include <stdio.h>

int main() {
    int i, j, n;

    // Ask user for the number of rows in the pyramid
    scanf("%d", &n);

    // Loop for each row
    for(i = 1; i <= n; i++) {
        // Loop to print spaces before stars
        for(j = 1; j <= n - i; j++) {
            printf(" ");
        }
        
        // Loop to print stars
        for(j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }

        // Move to the next line after each row
        printf("\n");
    }

    return 0;
}
