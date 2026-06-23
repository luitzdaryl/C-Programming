#include<stdio.h>

int main(){
    int n,i,j;

    printf("please enter layer:");
    scanf("%d",&n);

    if(n>=10||n<=0){
        printf("input invalid");
        return 0;
    }

    for(i=0;i<n;i++){
        for(j=0;j<i;j++){
            printf(" ");
        }
        for(j=0;j<(n-i)*2-1;j++){
                printf("*");
        }
        printf("\n");
    }
}