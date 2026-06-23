#include<stdio.h>
int main(){
    int num,i,j,c=0, arr[100]={0};

    printf("enter numbers(the last number must be 0):");

    do{
        scanf("%d",&arr[c]);
        c++;
    }while(arr[c-1]!=0);

    c-=1;

    for(i=0;i<=c-1;i++){
        for(j=0;j<c-1-i;j++){
            if(arr[j]>arr[j+1]){
                int t=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=t;
            }
        }
    }

    for(i=0;i<c;i++){
        printf("%d ",arr[i]);
    }
    
}