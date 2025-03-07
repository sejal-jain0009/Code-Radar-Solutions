#include <stdio.h>

void decimalToBinary(int n) {
    // Iterate through each bit of the number starting from the most significant bit
    for (int i = 31; i >= 0; i--) {
        // Shift the bit to the rightmost position and use bitwise AND with 1
        int bit = (n >> i) & 1;
        // Print the bit
        printf("%d", bit);
    }
    printf("\n");
}

int main() {
    int num;

    // Input decimal number
    scanf("%d", &num);

    printf("Binary representation: ");
    decimalToBinary(num);

    return 0;
}