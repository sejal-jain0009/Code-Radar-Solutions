#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    char c;
    int i,j;
    for(i=1;i<=n;i++){
        c='A';
        for(j=1;j<=i;j++){
            printf("%c ",c);
            c++;
        }
        printf("\n");
    }
    return 0;
}