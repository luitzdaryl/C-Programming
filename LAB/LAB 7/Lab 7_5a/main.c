#include <stdio.h>

unsigned long long int fibbonacci(unsigned int n){
unsigned long long int fib, a=0, b=1;
   if(n==1)
     return a;
   if(n==2)
return b;
else
{
for(int i=2;i<=n;i++)
{
   fib=a+b;
   a=b;
   b=fib;
}
return fib;
}

}
int main()
{
unsigned int n;

scanf("%d",&n);

unsigned long long int x=fibbonacci(n);

printf("%llu",x);

return 0;
}
