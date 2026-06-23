#include<stdio.h>

int main(){

    int i,j,arr[10]={0},n;

    printf("please enter a number:");
    scanf("%d",&n);

    while(n>0){
        arr[n%10]++;
        n/=10;
    }

    printf("digit:        0  1  2  3  4  5  6  7  8  9\n");
    printf("occurrences:");

    for(i=0;i<10;i++){
        printf("%3d",arr[i]);
    }
    
}