#include<stdio.h>

int main(){
    FILE *f;

    if ((f = fopen("./1225.txt", "r")) == NULL){
        printf("無法開啟檔案!\n");
        return 1;
    }

    int testcases,num,arr[100]={0};

    fscanf(f,"%d\n",&testcases);

    while(testcases--){
        fscanf(f,"%d\n",&num);
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