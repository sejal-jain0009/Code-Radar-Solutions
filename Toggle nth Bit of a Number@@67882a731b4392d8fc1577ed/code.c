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
    printf("Enter the number: ");
    scanf("%d", &num);
    printf("Enter the bit position (n): ");
    scanf("%d", &n);

    // Before toggling
    printf("Before toggling, number = %d\n", num);
    
    // Toggle the nth bit
    toggleNthBit(&num, n);

    // After toggling
    printf("After toggling, number = %d\n", num);

    return 0;
}
