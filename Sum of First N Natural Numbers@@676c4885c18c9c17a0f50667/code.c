#include<stdio.h>
int main()
{
    int n;
    scanf("%d",n);
    int sum;
    for(int i=1;i<=n;i++)
    sum=0;
    {
        sum=sum+i;
    }
    printf("%d",sum);
    return 0;
}