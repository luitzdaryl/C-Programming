#include<stdio.h>

//Enforcing privacy with cryptograpghy

int main()
{
    int n;
    int a,b,c,d,a1,b1,c1,d1,a2,b2,c2,d2;

    scanf("%d",&n);
    d=n%10;
    n/=10;
    c=n%10;
    n/=10;
    b=n%10;
    n/=10;
    a=n;

    a1=a+7;
    b1=b+7;
    c1=c+7;
    d1=d+7;
    a2=a1%10;
    b2=b1%10;
    c2=c1%10;
    d2=d1%10;

    printf("%d%d%d%d\n\n",c2,d2,a2,b2);

    return 0;
}
