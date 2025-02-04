#include<stdio.h>
int main()
{
    char s;
    scanf("%c",&s);
    if(s>='a' && s<='z')
    printf("Lowercase");
    else if (s>='A' &&s<='Z')
    printf("Uppercase");
    else
    printf("Not an alphabet");
    return 0;
}