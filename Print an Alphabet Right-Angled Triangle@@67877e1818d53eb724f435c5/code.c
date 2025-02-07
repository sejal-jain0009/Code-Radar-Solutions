#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    char c;
    char f = (c>='A'&&c<='Z');
    int i,j;
    for (i=1;i<=n;i++){
        for(j=1;j<=i;j++)
        {
            printf("%c ",f);
            f++;
        }
        printf("\n";)
    }
    return 0;
}