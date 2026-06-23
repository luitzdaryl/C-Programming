#include<stdio.h>

int main(){
    int i=2,num,ans=0;

    printf("enter a number:");
    scanf("%d",&num);

    if(num<=1){
        printf("input must be higher than 1");
        return 0;
    }

    while(i<=num){
        ans+=(i+1)*(i-1);
        i++;    
    }

    printf("%d",ans);

}