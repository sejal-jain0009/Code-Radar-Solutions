// Your code here...
// Your code here...
#include <stdio.h>
int countLeadingZeros(unsigned int num) {
    if (num == 0) return 32; // Special case: all bits are 0

    int count = 0;
    unsigned int mask = 1 << 31; // Mask for the most significant bit (MSB)

    while ((num & mask) == 0) { // Check MSB first, then shift right
        count++;
        mask >>= 1;
    }
    return count;
}

int main() {
    unsigned int num;
    scanf("%u", &num);

    int leadingZeros = countLeadingZeros(num);
    printf("%d\n", leadingZeros);

    return 0;
}