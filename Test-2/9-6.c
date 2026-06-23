#include<stdio.h>
#include<math.h>

int ans=0;
int x=0;

void calculate(int x){

    ans=3*pow(x,5)+2*pow(x,4)-5*pow(x,3)-pow(x,2)+7*x-6;
    printf("ans=%d",ans);

}

int main(){

    ans=0;
    x=0;

    printf("x=");
    scanf("%d",&x);

    calculate(x);

    return 0;

}