#include<stdio.h>

void max_min(int a[],int *max,int *min){

    int i;

    *max=*min=a[0];

    for(i=0;i<10;i++){
        if(a[i]>*max){
            *max=a[i];
        }else if (a[i]<*min){
            *min=a[i];
        }
    }
}

int main(){
    int num[10],i;
    int big,small;

    printf("enter 10 number:");

    for(i=0;i<10;i++){
        scanf("%d",&num[i]);
    }

    max_min(num,&big,&small);

    printf("Largest: %d\n",big);
    printf("Smallest: %d\n",small);

}