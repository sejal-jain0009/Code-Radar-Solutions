// Your code here...
#include <stdio.h>

int setNthBit(int num, int bit) {
    return num | (1 << bit);  // Set the nth bit using bitwise OR
}

int main() {
    int num, bit;

    // Taking input
    scanf("%d", &num);
    scanf("%d", &bit);

    // Check if the bit position is valid (for a 32-bit integer)
    if (bit < 0 || bit >= 32) {
        return 1;
    }

    // Set the nth bit
    int result = setNthBit(num, bit);
    
    // Print results
    printf("%d\n",result);

    return 0;
}