#include <stdio.h>
#include <stdlib.h>

int main(){

   int x,number=0;

   while(number*number*number<12000){

            x=pow(number,3);
            number++;
        }

        printf("%d\n",number);
    return 0;
}
