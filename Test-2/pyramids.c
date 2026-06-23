#include<stdio.h>
int main(){
    int i,j,layer;

    printf("please enter layer:");
    scanf("%d",&layer);

    printf("(A)\n");

    for(i=1;i<=layer;i++){
        for(j=1;j<=layer-i;j++){
            printf(" ");
        }
        for(j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }

    printf("(B)\n");

    for(i=1;i<=layer;i++){
        for(j=2;j<=i;j++){
            printf(" ");
        }
        for(j=layer;j>=i;j--){
            printf("*");
        }
        printf("\n");
    }

    printf("(C)\n");

    for(i=1;i<=layer;i++){
        for(j=1;j<=i;j++){
            printf("*");
        }
        for(j=layer-i;j>=1;j--){
            printf(" ");
        }
        printf("\n");
    }

    printf("(D)\n");

    for(i=1;i<=layer;i++){
        for(j=1;j<=layer-i+1;j++){
            printf("*");
        }
        for(j=2;j<=i;j++){
            printf(" ");
        }
        printf("\n");
    }
}