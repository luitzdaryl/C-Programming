#include <stdio.h>
#include <stdlib.h>

int isPerfect(int num); // function prototype

int main()
{
    int perfectNumber=1;
    int fact;//to store the factors

    while(perfectNumber<1000){//from 1 to 1000
       if(isPerfect(perfectNumber)>1){
            printf("%d ",perfectNumber);
       }

       for(fact=1;fact<isPerfect(perfectNumber);fact++){
            if (isPerfect(perfectNumber)%fact==0){//factor checker
                 printf("%d ",fact);
               }
       }
      if (isPerfect(perfectNumber)>1){
        printf("\n");
    }
           perfectNumber++;
    }

    return 0;
}

int isPerfect(int num)
{
   int sum=0; // Initialization the sum to zero
   int fact; // factor of the number

   for(fact=1;fact<num;fact++){
        if(num%fact==0){//to check the factor
          sum+=fact;
       }
   }

    if (num==1){
        return 1;
    }
    else  if (sum==num){//to check if the sum is equal to the number

         return num;
    }
    else
         return 1;

}
