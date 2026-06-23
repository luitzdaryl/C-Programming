#include <stdio.h>

int GreatestCommonDivisor(int num1, int num2) {
  int flag = (num1 < num2) ? num1 : num2;
  while (flag) {
    if ((num1 % flag == 0) && (num2 % flag == 0)) {
      return flag;
      break;
    }
    --flag;
  }
  return 0;
}

int main(void) {
  int numerator = 0, denomintor = 0;
  printf("Enter a fraction: ");
  scanf("%d/%d", &numerator, &denomintor);
  int d = GreatestCommonDivisor(numerator, denomintor);
  numerator /= d;
  denomintor /= d;
  printf("In lowest terms: %d/%d\n", numerator, denomintor);
  return 0;
}