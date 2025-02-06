#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,j,k;
    for(i=1;i<=n;i++){
        for(k=n-1;k<=0;k--){
            printf("%c",' ');
        }
        for(j=1;j<=i;j++){
            printf("%c",'*');
        }
        printf("\n");
    }
    return 0;
}