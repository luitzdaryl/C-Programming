#include<stdio.h>
int main(){
    int num,a,b,c=0,d=1;

    printf("please enter a number:");
    scanf("%d",&num);

    while(num!=0){
        a=num%2;
        num/=2;
        c+=a*d;
        d*=10;
    }

    printf("binary=%d",c);
    
}