#include<stdio.h>
#include <stdbool.h>

bool PrimeNumber(int n)
{
    int i, count=0;
    for(i=1; i<=sqrt(n); i++) {
        if(n%i==0) count++;
    }
    if(count==1) return true;
    else return false;
}

int main()
{
    int i;

   for(i=2;i<=1200-2;i++){
    if(PrimeNumber(i)&& PrimeNumber(i+2))
        printf("%d %d\n",i, i+2);
    }

    return 0;
}


