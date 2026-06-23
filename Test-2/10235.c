#include<stdio.h>

int main(){
    int num,reversed=0,remain=0;

    while(scanf("%d",&num)){
        int ans=num;
        int isPrime=1;
        for(int i=2;i<num/2;i++){
            if(num % i == 0){
                isPrime=0;
                break;
            }
        }
        while(num!=0){
            remain = num % 10;
            reversed = reversed * 10 + remain;
            num /= 10;
        }
        int flag=1;
        for(int i=2;i<reversed/2;i++){
            if(reversed % i == 0){
                flag=0;
                break;
            }
        }
        if(isPrime==1 && flag==1){
            printf("%d is emirp.\n",ans);
        }else if(isPrime==1 && flag==0){
            printf("%d is prime.\n",ans);
        }else {
            printf("%d ia not prime.\n",ans);
        }
    }

    return 0;

}