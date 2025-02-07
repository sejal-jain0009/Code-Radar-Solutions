#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,j;
    int s;
    s=1;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            printf("%d ",s);
            s++;
        } 
        printf("\n");
    }
    return 0;
}