#include <stdio.h>

int main() {
    int num, bit;
    
    // Taking input for the number and the bit position
    scanf("%d", &num);
    scanf("%d", &bit);

    // Clear the nth bit using bitwise AND with NOT of (1 << bit)
    num = num & ~(1 << bit);

    // Print the modified number
    printf("%d", num);
    
    return 0;
}