#include <stdio.h>
int main() {
    int num;
    int bit;
    scanf("%d", &num);
    scanf("%d", &bit);
    int nth_bit = (num >> bit) & 1;
    if(nth_bit){
        printf("1");
    }
    else{
        printf("0");
    }
    return 0;
}