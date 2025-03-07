#include <stdio.h>

void toggleNthBit(int *num, int n) {
    // Create a mask with 1 at the nth position
    int mask = 1 << n;
    
    // Toggle the nth bit using XOR operation
    *num = *num ^ mask;
}

int main() {
    int num, n;

    // Input number and the bit position to toggle
    scanf("%d", &num);
    scanf("%d", &n);

    
    // Toggle the nth bit
    toggleNthBit(&num, n);

    // After toggling
    printf(" %d\n", num);

    return 0;
}
