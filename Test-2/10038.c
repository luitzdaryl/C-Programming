#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
    int num,jolly[3000]={0},check[1000]={0};

    printf("How many numbers do you have?");
    scanf("%d",&num);

    for(int i=0;i<num;i++){
        scanf("%d",&jolly[i]);
    }

    int flag=1;
    int jump[3000]={0};

    for(int i=1;i<num;i++){
        if(abs(jolly[i] - jolly[i-1]) >= num || abs(jolly[i] - jolly[i-1]) <= 0 || jump[abs(jolly[i] - jolly[i-1])] ){
            flag=0;
            break;
        }
        jump[abs(jolly[i] - jolly[i-1])] = 1;
    }

    if(flag){
        printf("jolly\n");
    }else{
        printf("Not jolly\n");
    }

    return 0;

}