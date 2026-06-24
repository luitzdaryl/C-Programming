#include<stdio.h>

int main(){
    double sales, salary;

      while(1){
      scanf("%lf", &sales);

           if(sales == -1)
              break;
      salary= 200 + (0.09 * sales);
      printf("%.2lf\n", salary);
     }

return 0;
}








