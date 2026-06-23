#include<stdio.h>

int main(){
    int n1,n2,i;

    printf("enter a fraction:");
    scanf("%d/%d",&n1,&n2);

    if(n2%n1==0){
        printf("in lowest term: %d/%d",n1/n1,n2/n1);
    }
    else{
        for(i=n1;i>=2;i--){
            if(n1%i==0&&n2%i==0){
                printf("in lowest terms: %d/%d",n1/i,n2/i);
                break;
            }
        }
    }
}