#include<stdio.h>

int main(){
    int i,n,j;

    printf("enter the layer:");
    scanf("%d",&n);

    printf("*\n");

    for(i=0;i<=n-3;i++){
        printf("*");
        for(j=1;j<=i;j++){
            printf(" ");
        }
        printf("*\n");
    }

    for(i=1;i<=n;i++){
        printf("*");
    }

    printf("\n");

    return 0;

}