#include <stdio.h>

int main(void) {
  int num1 = 0, num2 = 0;
  printf("Enter two integers: ");
  scanf("%d%d", &num1, &num2);
  
  int start = (num1 < num2) ? num1 : num2;
  while (start) {
    if ((num1 % start == 0) && (num2 % start == 0)) {
      printf("Greatest common divisor: %d\n", start);
      break;
    }
    --start;
  }

  return 0;
}