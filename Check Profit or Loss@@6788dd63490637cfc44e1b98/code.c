#include<stdio.h>
int main()
{
    int cp,sp;
    scanf("%d",&cp);
    scanf("%d",&sp);
    if(cp>sp)
    printf("Loss");
    else if(sp==cp)
    printf("No Profit No Loss");
    else
    printf("Profit");
    return 0;
}