#include<stdio.h>
#include<math.h>
int main(){
    int num,reversed=0,a,b=0,c=0;

    printf("please enter a number:");
    scanf("%d",&num);

    b=num;

    while(b!=0){
        b/=10;
        c++;
    }

    while(num!=0){
        a=num%10;
        reversed+=a*pow(10,c-1);
        num/=10;
        c--;
    }

    printf("reversed=%d",reversed);

}