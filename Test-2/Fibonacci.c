#include<stdio.h>

int main(){
    int n;
    long long fibo[1000]={0};

    printf("enter a number:");
    scanf("%d",&n);

    if(n<0){
        printf("input invalid");
        return 0;
    }

    fibo[0]=0;
    fibo[1]=1;

    for(int i=2;i<=n;i++){
        fibo[i]=fibo[i-1]+fibo[i-2];
    }

    if(n%10==1){
        printf("%dst Fabonacci number is: %lld",n,fibo[n]);
    }else if(n%10==2){
        printf("%dnd Fabonacci number is: %lld",n,fibo[n]);
    }else if (n%10==3){
        printf("%drd Fabonacci number is: %lld",n,fibo[n]);
    }else{
        printf("%dth Fabonacci number is: %lld",n,fibo[n]);
    }

    return 0;
    
}