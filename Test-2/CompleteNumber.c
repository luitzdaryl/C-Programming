#include<stdio.h>

int main(void){

  int i,a,sum,num;

    printf("enter upper limit:");
    scanf("%d",&num);

    for(i=1;i<=num;i++){
        sum=0;
        for(a=1;a<i;a++){
            if(i%a==0){
                sum+=a;
            }
        }
        if(sum==i){
            printf("%d \n",i);
        }
    }

  return 0;

}