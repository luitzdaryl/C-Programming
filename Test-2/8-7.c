#include<stdio.h>
int main(){
    int m[5][5]={{0}};
    int i,j;

    printf("enter row:");

    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            scanf("%d",&m[i][j]);
        }
    }

    int sum=0;

    printf("row total:");

    for(i=0;i<5;i++){
        sum=0;
        for(j=0;j<5;j++){
            sum+=m[i][j];
        }
        printf("%d ",sum);
    }

    printf("\ncolumn total:");

    for(i=0;i<5;i++){
        sum=0;
        for(j=0;j<5;j++){
            sum+=m[j][i];
        }
        printf("%d ",sum);
    }

}