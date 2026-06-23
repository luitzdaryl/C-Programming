#include<stdio.h>

int main(){
    unsigned long long N,row,last_num=0;

    while(scanf("%lld",&N)!=EOF){
        row=(N+1)/2;
        last_num=row*row*2-1;

        // printf("%lld %lld",row,last_num);

        printf("%lld\n",last_num+(last_num-2)+(last_num-4));
    }

    return 0;

}