#include <stdio.h>
#include <stdlib.h>

int main()
{
    float weight, height, BMI;

    scanf("%f", &weight);
    scanf("%f", &height);

   BMI=weight/(height*height);

   if(BMI<18.5){
    printf("%.2f", BMI);
    printf("\nUnderweight");
   }

   else if(BMI<=24.9){
    printf("%.2f", BMI);
    printf("\nNormal");
   }

   else if(BMI<= 29.9){
    printf("%.2f", BMI);
    printf("\nOverweight");
   }

   else {
    printf("%.2f", BMI);
    printf("\nObese");
   }

    return 0;
}
