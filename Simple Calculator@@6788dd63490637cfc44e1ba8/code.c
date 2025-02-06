#include <stdio.h>
int main() {
    int a;
    int b;
    char c;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf(" %c", &c);
    switch(c){
        case '+' : printf("%d",a+b);
        break;
        case '-' : printf("%d",a-b);
        break;
        case '*' : printf("%d",a*b);
        break;
        case '/' :
        if (b != 0)  // Check for division by zero
                printf("%d", a / b);
            else
                printf("error ");
        break;
        default : printf("Invalid");
    } 

    return 0;
}