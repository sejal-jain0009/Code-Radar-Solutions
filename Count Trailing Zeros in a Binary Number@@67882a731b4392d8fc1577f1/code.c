#include <stdio.h>

int countTrailingZeroes(int num) {
    int count = 0;
    
    // Loop until num becomes zero or num is odd
    while (num > 0 && (num & 1) == 0) {
        count++;
        num >>= 1; // Right shift the number to check the next bit
    }

    return count;
}

int main() {
    int num;
    scanf("%d", &num);

    // Count and print the number of trailing zeroes
    int trailingZeroes = countTrailingZeroes(num);
    printf("The number of trailing zeroes in the binary representation of %d is: %d\n", num, trailingZeroes);

    return 0;
}
