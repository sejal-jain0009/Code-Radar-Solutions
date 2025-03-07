// Your code here...
#include <stdio.h>

int main() {
    int x, y;

    // Input numbers
    scanf("%d %d", &x, &y);

    // Swapping using XOR
    x = x ^ y;
    y = x ^ y;
    x = x ^ y;

    printf("%d %d\n", x, y);

    return 0;
}