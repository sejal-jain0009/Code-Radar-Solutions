#include<stdio.h>
int main(){
    int N;
    scanf("%d", &N);
    if((N >> 31) & 1){
        printf("Set");
    }
    else{
        printf("Not Set");
    }
    return 0; 
}