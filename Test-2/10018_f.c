#include<stdio.h>

int main(){
    FILE *f;

    if ((f = fopen("./10018.txt", "r")) == NULL){
        printf("無法開啟檔案!\n");
        return 1;
    }

    int testcases;
    int num,reversed=0,count=0,testcase,remain=0;

    fscanf(f,"%d\n",&testcases);

    while(testcases--){
        fscanf(f,"%d\n",&num);

        int n=num;

        do{
            while(n!=0){
                remain=n%10;
                reversed=reversed*10+remain;
                n/=10;
            }

            if(num==reversed){
                break;
            }
            
            num+=reversed;
            count++;
            n=num;
            reversed=0;
            remain=0;

        }while(num!=reversed);

        if(count==0){
            printf("%d %d\n",++count,reversed*2);
        }else{
            printf("%d %d\n",count,reversed);
        }

        reversed=0;
        count=0;
        remain=0;
    }

    return 0;

}