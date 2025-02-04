#include<stdio.h>
int main()
{
    char s;
    scanf("%c",&s);
    if(s>='a' && s<='z')
    printf("Lowercase");
    else
    printf("Uppercase");
    return 0;
}