// Your code here...
#include<stdio.h>
int main() {
    int num;

    // Input the integer number
    scanf("%d", &num);

    // Perform bitwise NOT operation
    int flipped = ~num;

    // Output the result
    printf("%d\n", flipped);

    return 0;
}