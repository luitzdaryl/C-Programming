#include<stdio.h>

int main(){
    int i,j,k,m1[3][3],m2[3][3],sum=0;

    printf("please enter the first matrix:");

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&m1[i][j]);
        }
    }

    printf("please enter the second matrix:");

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&m2[i][j]);
        }
    }

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            for(k=0;k<3;k++){
                sum+=m1[i][k]*m2[k][j];
            }
            printf("%03d ",sum);
        }
        printf("\n");
    }

    return 0;
}