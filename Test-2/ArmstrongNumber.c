#include<stdio.h>
#include<math.h>
int main(){
    int num,i,c=0,sum=0,upper_limit,lower_limit;

    printf("please enter lower limit:");
    scanf("%d",&lower_limit);

    printf("please enter upper limit:");
    scanf("%d",&upper_limit);

    for(i=lower_limit;i<=upper_limit;i++){

        int num = i;
        int a = i;
        c = 0;
        sum = 0;

        while(a!=0){
            a/=10;
            c++;
            
        }

        while(num!=0){
            int b=num%10;
            double q = pow(b,c);
            sum +=q;
            num/=10;
        }
        if(sum==i){
            printf("%d ",i);
        }
    }
}