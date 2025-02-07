#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int s;
    int i,j;
    for(i=1;i<=n;i++){
        s=1;
        for(j=1;j<=i;j++){
            printf("%d ",s);
            s++;
        } 
        printf("\n");
    }
    return 0;
}