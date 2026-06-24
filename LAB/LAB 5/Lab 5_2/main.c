#include <stdio.h>

int main(){


    int integerNumber;
    int i=2;

    scanf("%d",&integerNumber);

    for(int i=2; i<=integerNumber;){

        if (integerNumber%i==0){

            integerNumber = integerNumber/i;

            printf("%d\n",i);
        }

        else{
            i++;
        }
    }
return 0;

}
