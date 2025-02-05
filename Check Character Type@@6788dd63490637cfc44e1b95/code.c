#include<stdio.h>
int main()
{
    char c[5];
    scanf("%s",c);
    if (c>='a' &&c<='z'){
        if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
        {printf("Vowel");}
        else
        {printf("Consonant");}
    }
    else if (c>=0 &&c<=9)
    {printf("Digit");}
    else
    {printf("Special Character");}
    return 0;
}