#include<stdio.h>

int main(){
    long long int num;

    while(scanf("%lld", &num)){
        if(num==0){
            break;
        }

        long long int a,c=0,d=1;
        
        int count=0;

        while (num!=0){
            a=num%2;
            if(a==1){
                count++;
            }
            num/=2;
            c+=a*d;
            d*=10;
        }

        // while(c!=0){
        //     if(c % 10==1){
        //         count++;
        //         c/=10;
        //     }else{
        //         c/=10;
        //     }
        // }

        printf("The parity of %x is %d (mod 2).\n", c, count);
    }

    return 0;

}