#include<stdio.h>

int main(){
    int testcase,num,arr[100]={0};

    printf("How many cases do you have?");
    scanf("%d",&testcase);

    while(testcase--){
        scanf("%d",&num);
        for(int i=1;i<=num;i++){
            int j=i;
            while(j!=0){
                int k=j % 10;
                arr[k]++;
                j/=10;
            }
        }
        for(int i=0;i<9;i++){
            printf("%d ",arr[i]);
        }
        printf("\n");

        for(int i=0;i<9;i++){
            arr[i]=0;
        }
    }

    return 0;

}