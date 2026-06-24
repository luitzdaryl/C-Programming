#include <stdio.h>

//Prime number
int main() {

   int loop, number;
   int prime = 1;

   scanf("%d",&number);

   for(loop = 2; loop < number; loop++) {
      if((number % loop) == 0) {
         prime = 0;
      }
   }

   if (prime == 1)
      printf("Yes");
   else
      printf("No", number);
   return 0;
}
