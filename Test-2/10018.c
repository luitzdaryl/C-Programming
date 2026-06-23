#include<stdio.h>

int main(){
    int num,reversed=0,count=0,testcase,remain=0;

    printf("How many testcases do you have?");
    scanf("%d",&testcase);

    while(testcase--){
        scanf("%d",&num);

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