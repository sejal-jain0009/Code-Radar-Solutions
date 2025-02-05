#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);

    // Edge case: numbers less than or equal to 1 are not prime
    if (a <= 1) {
        printf("Not Prime");
        return 0;
    }

    int i;
    for (i = 2; i < a; i++) {
        if (a % i == 0) {
            // If divisible by any number other than 1 and itself, it's not prime
            printf("Not Prime");
            return 0;  // exit the program as we already know it's not prime
        }
    }
    // If no divisors were found, it's a prime number
    printf("Prime");
    return 0;
}
