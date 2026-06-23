#include<stdio.h>
int main(){
    int times,number,sum=1,i;

    printf("how many times will you print:");
    scanf("%d",&times);

    for(i=0;i<times;i++){
        sum = 1;
        printf("please enter the number:");
        scanf("%d",&number);
            while(number!=0){
                int a=number%10;
                sum*=a;
                number/=10;
            }
        printf("%d\n",sum);
    }
}