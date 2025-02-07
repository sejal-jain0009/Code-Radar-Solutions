#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    char c='A';
    int i,j;
    for (i=1;i<=n;i++){
        for(j=1;j<=i;j++)
        {
            printf("%c ",c);
        c++;
        }
        printf("\n";)
    }
    return 0;
}