#include<stdio.h>

int main(){
    int n,m,sum=0,count=0;

    printf("please enter first number:");
    scanf("%d",&n);

    printf("please enter second number:");
    scanf("%d",&m);

    while(sum<m){
        sum+=n++;
        count++;
    }

    printf("%d",count);
}
