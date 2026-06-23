#include<stdio.h>
#include<math.h>
#include<string.h>

int main(){
    int num,testcases,b1=0,b2=0,dec,hex,bin=0,carry=1,x1;

    printf("How many testcases do you have?");
    scanf("%d",&testcases);

    while(testcases--){
        scanf("%d",&num);

        dec=num;
        hex=num;

        while(dec!=0){
            x1=dec % 2;

            if(x1==1){
                b1++;
            }

            dec/=2;
            bin+=x1*carry;
            carry*=10;
        }
        printf("%d ",b1);

        x1=0;
        bin=0;
        carry=0;
        b1=0;
        dec=0;

        int len=0;

        while(num!=0){
            num/=10;
            len++;
        }

        // printf("%d",len);

        for(int i=0;i<len;i++){
            dec+=(hex % 10)*pow(16,i);
            hex/=10;
        }

        while(dec!=0){
            x1=dec % 2;

            if(x1==1){
                b2++;
            }

            dec/=2;
            bin+=x1*carry;
            carry*=10;
        }

        printf("%d\n",b2);

        x1=0;
        bin=0;
        carry=0;
        b2=0;
        dec=0;

    }

    return 0;

}