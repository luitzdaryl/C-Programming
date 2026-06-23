#include<stdio.h>

int main(){
    int num,division;
    int remain[100]={0};

    while(scanf("%d%d",&num,&division)){
        if(num<=1 || division>num){
            printf("Boring!\n");
        }
        int count=0;
        while(num % division==0 && num>division){
            remain[count++]=num;
            num/=division;
        }
        remain[count]=num;
        if(count==0){
            printf("Boring!\n");
        }else{
            for(int i=0;i<count;i++){
                printf("%d ",remain[i]);
            }
            printf("%d\n",remain[count]);
        }
    }

    return 0;

}