#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,j,k;
    for(i=1;i<=n;i++){
        for(k=1;k<=n-i;k++){
            printf(" ");
        }
        for(j=1;j<=i;j++){
            printf("%c",'*');
        }
        for(int m=1;m<=n-i;m++){
        printf("%c",'*');
    }}
    printf("\n");
    return 0;
}