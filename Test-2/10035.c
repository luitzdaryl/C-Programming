#include<stdio.h>

int main(){
    int num1,num2;

    printf("enter two number:");

    while(scanf("%d%d",&num1,&num2)){

        if(num1==0 && num2==0){
            break;
        }

        int carry=0,count=0;

        while(num1>0 || num2>0){
            carry=num1 % 10 + num2 % 10 + carry;
            if(carry>=10){
                count++;
                carry/=10;
            }else{
                carry=0;
            }
            num1/=10;
            num2/=10;
        }

        if(count==0){
            printf("No carry operation.\n");
        }else if(count==1){
            printf("1 carry operation.\n");
        }else {
            printf("%d carries opertions.\n",count);
        }

    }

    return 0;

}