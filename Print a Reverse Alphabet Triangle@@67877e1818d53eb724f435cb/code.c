#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,j;
    char s;
    for(i=n;i>=1;i--){
        s='A';
        for(j=1;j<=i;j++)
        {
            printf("%c ",s);
            s++;
        }
        printf("\n");
    }
    return 0;
}