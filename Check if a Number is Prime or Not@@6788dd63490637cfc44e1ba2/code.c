#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int i;
    for( i>1;i<a;i++){
        if(a%i==0){
            break;
        }
        printf("Prime");

        else{
            printf("Not Prime");
        }
    }
    return 0;
}