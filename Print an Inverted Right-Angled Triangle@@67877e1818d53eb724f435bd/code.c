#include<stdio.h>
int main()
{
    int s;
    scanf("%d",&s);
    int i,j;
    for(i=1;i<=s;i++){
        for(j=i;j>=1;j--)
        {
            printf("%c ",'*');
        }
        printf("\n");
    }
    return 0;
}