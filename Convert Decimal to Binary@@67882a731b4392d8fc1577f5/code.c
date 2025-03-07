// Your code here...
#include <stdio.h>

void decimalToBinary(unsigned int num) {
    int binary[32];  // Array to store binary digits (max 32 bits for unsigned int)
    int i = 0;

    if (num == 0) {
        printf("0");  // Special case when input is 0
        return;
    }

    while (num > 0) {
        binary[i] = num & 1;  // Extract LSB using bitwise AND
        num >>= 1;  // Right shift to process next bit
        i++;
    }

    // Print binary number in reverse order
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
}

int main() {
    unsigned int num;
    scanf("%u", &num);

    decimalToBinary(num);
    printf("\n");

    return 0;
}