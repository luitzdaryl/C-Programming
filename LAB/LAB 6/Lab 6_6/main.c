#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
   double userValue, y = 1, squareRoot;
   int progClose = 0; // to terminate the program when the absolute value of the difference
                     //between the old value of y and the new value of y is less than the product of .00001 and new y.

   scanf("%lf", &userValue);

   do {
      squareRoot = ((y + (userValue / y)) / 2);
      if (fabs(y - squareRoot) < (.00001 * y))
         progClose = 1;
      y = squareRoot;
      }

   while (progClose != 1);
   printf("%.5f\n", squareRoot);

   return 0;
}
