#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int k=n-1;k>=1;k--){
            printf("%c",' ');
        }
        for(int j=n;j<=i;j++){
            printf("%c",'*');
        }
        printf("\n");
    }
}