#include<stdio.h>

int main(){
    FILE *f;

    if((f=fopen("./10931.txt","r"))==NULL){
        printf("failed to open file");
        return 1;
    }

    int num;

    while(fscanf(f,"%d\n",&num)!=EOF){
        if(num==0){
            break;
        }

        long long int a,c=0,d=1;

        while (num!=0){
            a=num%2;
            num/=2;
            c+=a*d;
            d*=10;
        }
        
        long long int bin=c;
        int count=0;

        while(c!=0){
            if(c % 10==1){
                count++;
                c/=10;
            }else{
                c/=10;
            }
        }

        printf("The parity of %d is %d (mod 2).\n",bin,count);
    }

    return 0;
}