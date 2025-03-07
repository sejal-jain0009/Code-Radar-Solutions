#include <stdio.h>

int findLowestSetBit(int num) {
    // The expression num & -num isolates the lowest set bit.
    return (num & -num);
}

int main() {
    int num;

    // Input the number
    scanf("%d", &num);

    // Find and print the position of the lowest set bit
    if (num == 0) {
        printf("There is no set bit (1) in the number.\n");
    } else {
        // Find the position of the lowest set bit
        int position = 0;
        int lowestSetBit = findLowestSetBit(num);

        // Loop to find the position (0-indexed)
        while (lowestSetBit > 1) {
            lowestSetBit >>= 1;
            position++;
        }

        printf("%d\n", position);
    }

    return 0;
}