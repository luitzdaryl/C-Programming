#include<stdio.h>

//Sides of a triangle

int main()
{
    float a,b,c;

    scanf("%f%f%f",&a,&b,&c);

    if(b+c>a && a+c>b && a+b>c)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");

    }

    return 0;
}
