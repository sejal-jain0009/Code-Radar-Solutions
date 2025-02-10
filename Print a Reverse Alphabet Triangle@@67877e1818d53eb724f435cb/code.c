#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,j;
    char n;
    for(i=n;i>=1;i--){
        n='A';
        for(j=i;j<=i;j++)
        {
            printf("%c",n);
            n++;
        }
        printf("\n");
    }
    return 0;

}