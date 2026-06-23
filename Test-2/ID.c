#include<stdio.h>

int main(){
    int id,sum=0,i;
    char a;
    int alpha[26] = {10, 11, 12, 13, 14, 15, 16, 17, 34, 18 , 19, 20, 21, 22, 35, 23,24,25,26,27,28,29,32,30,31,33};

    printf("enter ID number:");
    scanf("%c%d", &a, &id);

    int num = alpha[a-65];

    sum+=num%10*9;
    sum+=num/10;

    sum+=id%10;

    id/=10;
    id=(int)id;

    for(i=1;i<=8;i++){
        sum+=id%10*i;
        id/=10;
    }

    if(sum%10==0){
        printf("real");
    }else{
        printf("fake");
    }

}