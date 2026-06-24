#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,temp, num1, num2, num3;
    num=152;

    while(num<=900)
    {
        num1=num-((num/10)*10);
        num2=(num/10)-((num/100)*10);
        num3=(num/100)-((num/1000)*10);
        temp=(num1*num1*num1)+(num2*num2*num2)+(num3*num3*num3);

        if (temp==num)
        {
            printf("%d\n",temp);
        }
        num++;
    }

    return 0;
}
