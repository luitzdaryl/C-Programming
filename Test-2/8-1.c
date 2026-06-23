#include<stdio.h>

int main(){
    int i,j,arr[10]={0},n;

    printf("please enter a number:");
    scanf("%d",&n);

    while(n>0){
        arr[n%10]++;
        n/=10;
    }

    printf("repeated digits:");

    for(i=0;i<10;i++){
        if(arr[i]>=2){
            printf("%d ",i);
        }
    }

    return 0;   

}