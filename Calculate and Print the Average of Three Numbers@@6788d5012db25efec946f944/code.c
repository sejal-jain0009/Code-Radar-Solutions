#include<stdio.h>
int main()
{
    float a,b,c;
    scanf("%f",&a);
    scanf("%f",&b);
    scanf("%f",&c);
    float sum;
    sum=(a+b+c)/3;
    printf("Average: %.2f",sum);
    return 0;
}