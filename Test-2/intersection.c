#include<stdio.h>

int main(){
    int arr1[5]={0},arr2[5]={0};
    int i,j;

    printf("enter array 1:");
    for(i=0;i<5;i++){
        scanf("%d",&arr1[i]);
    }

    printf("enter array 2:");
    for(i=0;i<5;i++){
        scanf("%d",&arr2[i]);
    }


    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            if(arr1[i]==arr2[j]){
                printf("%d",arr1[i]);
            }
        }
    }

    return 0;

}