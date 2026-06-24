#include <stdio.h>
#include <stdlib.h>

int main(){

  int numberHours=0;
  double hourlyRate=0, salary=0;
	scanf("%d", &numberHours);
    while(1){
        if(numberHours==-1)
            break;
        scanf("%lf", &hourlyRate);
        if(numberHours <=40){
            salary= (hourlyRate * numberHours);
            printf("%.2lf\n", salary);
        }
        else if(numberHours > 40){
            salary= (hourlyRate * 40 ) + (1.5 * (numberHours - 40)*hourlyRate);
            printf("%.2lf\n", salary);
        }
        scanf("%d", &numberHours);
   }
    return 0;
}

