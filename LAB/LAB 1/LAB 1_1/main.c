#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b, Sum, Sub, Mul, Div, Mod;

    printf("================---===================\n");
    printf("Enter 2 numbers separated by space. Eg. 3 2, etc...\n");
    printf("================---===================\n");

    scanf("%d%d", &a,&b);

    Sum=a+b; //sum
    Sub=a-b; //difference
    Mul=a*b; //product
    Div=a/b; //quotient
    Mod=a%b; //remainder

    printf("%d\n", Sum);
    printf("%d\n", Mul);
    printf("%d\n", Sub);
    printf("%d\n", Div);
    printf("%d\n", Mod);
    return 0;
}
