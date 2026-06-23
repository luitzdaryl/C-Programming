#include<stdio.h>
#include<math.h>
int main(){
    int upper_limit,lower_limit,i,j;

    printf("please enter lower limit:");
    scanf("%d",&lower_limit);

    printf("please enter upper limit:");
    scanf("%d",&upper_limit);

    for(i=lower_limit;i<=upper_limit;i++){
        int isPrime = 1;
        for(j=2;j<i;j++){
            if(i%j==0){
                isPrime = 0;
                break;
            }
        }
        if(isPrime==1){
            printf("%d ",i);
        }
    }
}