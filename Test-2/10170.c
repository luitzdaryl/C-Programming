#include<stdio.h>

int main(){
    long long first_people,day;

    while(scanf("%lld%lld",&first_people,&day)){
        long long i=first_people,sum=0;
        while(1){
            sum+=i;
            if(sum>=day){
                printf("%lld\n",i);
                break;
            }
            i++;
        }
    }

    return 0;

}