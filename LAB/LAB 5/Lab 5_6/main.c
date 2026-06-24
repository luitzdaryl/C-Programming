#include <stdio.h>
#include <stdlib.h>

int main(){

    int userValue, max, count=0;

    scanf("%d",&userValue);
    max=userValue;

    while(userValue!=0){
          if(userValue>max){
            max=userValue;
               count=1;
          }
         else if(userValue==max)count++;
          scanf("%d",&userValue);

    }

    printf("%d\n%d", max,count);

    return 0;
}
