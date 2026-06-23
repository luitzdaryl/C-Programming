#include <stdio.h>

void numfunction(long long n){
    if(n/10000000){
        numfunction(n/10000000);
        printf(" kuti");
        n%=10000000;
    }
    if(n/100000){
        printf(" %lld lakh", n/100000);
        n%=100000;
    }
    if(n/1000){
        printf(" %lld hajar", n/1000);
        n%=1000;
    }
    if(n/100){
        printf(" %lld shata", n/100);
        n%=100;
    }
    if(n!=0) printf(" %lld", n);
}

int main(){
    long long n;
    int count=1;

    while(scanf("%lld", &n)!=EOF){
        printf("%4d. ", count);
        if(n==0){
            printf("%d", n);
        }else {
            numfunction(n);
        }
        printf("\n");
        count++;
    }

    return 0;

}