#include<stdio.h>
int main(){
    int points=0;
    float point[20]={0};

    printf("enter number of points:");
    scanf("%d",&points);

    for(int i=0;i<2*points;i++){
        scanf("%f",&point[i]);
    }

    if(points>10){
        printf("invalid number of point");
        return 0;
    }

    for(int i=0;i<2*points;i+=2){
        for(int j=i;j<2*points;j+=2){
            if(point[i]>point[j]){
                float tem=point[i];
                point[i]=point[j];
                point[j]=tem;
                tem=point[i+1];
                point[i+1]=point[j+1];
                point[j+1]=tem;
            }else if(point[i]==point[j]&&point[i+1]>point[j+1]){
                float tem=point[i];
                point[i]=point[j];
                point[j]=tem;
                tem=point[i+1];
                point[i+1]=point[j+1];
                point[j+1]=tem;
            }
        }
    }

    printf("sorted result:\n");
    
    for (int i = 0; i < 2 * points; i++) {
        printf("%.2f ", point[i]);
        if (i % 2 == 1) {
            printf("\n");
            }
    }
    return 0;
}