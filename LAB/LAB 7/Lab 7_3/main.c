#include <stdio.h>

double Power(double base,int exponent){
      if(exponent== 1)
         return base;

         else
           return base * Power(base,exponent-1);
}

int main()
{
int y;
double x;

   scanf("%lf %d",&x,&y);

   printf("%.4lf\n",Power(x,y));

return 0;
}

