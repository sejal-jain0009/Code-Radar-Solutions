#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,j;
    for(i=3;i<=1;i--){
        for(j=1;j<=i;j++){
            printf("%c ",'*');
        }
        printf("\n");
    }
    return 0;
}