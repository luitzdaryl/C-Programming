#include<stdio.h>

int main(){
    int origin=0,reversed=0,remain=0;

    printf("please enter a number:");
    scanf("%d",&origin);
    
    int n=origin;

    while(n!=0){
        remain=n%10;
        reversed=reversed*10+remain;
        n/=10;
    }

    if(origin==reversed){
        printf("%d is a palindrome.",origin);
    }else{
        printf("%d is not a palindrome.",origin);
    }
}