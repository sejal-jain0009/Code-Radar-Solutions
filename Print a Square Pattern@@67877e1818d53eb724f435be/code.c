#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,j;
    for(i=1;i<=3;i++){
        for(j=3;j<=i;j++){
            printf("%c ",'*');
        }
        printf("\n");
    }
    return 0;
}