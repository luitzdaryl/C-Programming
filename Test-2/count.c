#include<stdio.h>

int n;

void count(int i){
    if(i<=n){
        printf("%d\n",i);
        count(i+1);
    }
}

int main(){

    printf("enter a number:");
    scanf("%d",&n);

    count(1);

    return 0;

}