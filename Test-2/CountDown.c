#include<stdio.h>

int n=0;
int i;

void countdown(int n){

        printf("T minus %d is counting.\n",n);

}

int main(){

    printf("please enter a number:");
    scanf("%d",&n);

    for(i=n;i>0;i--){
        countdown(i);
    }

    return 0;

}