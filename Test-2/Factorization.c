#include <stdio.h>
#include <math.h>
int main()
{
    int num, i, j;

    printf("please enter a number:");
    scanf("%d", &num);

    for (i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            int isPrime = 1;
            for (j = 2; j < i; j++)
            {
                if (i % j == 0)
                {
                    isPrime = 0;
                    break;
                }
            }
            if(isPrime==1){
                int a=num;
                int count=0;
                while(a%i==0){
                    a/=i;
                    count++;
                }
                printf("%d ^ %d\n",i,count);
            }
        }
    }
}