#include <stdio.h>

int main(void) {
  unsigned int num;
  printf("Enter a two-digit number: ");
  scanf("%d", &num);
  printf("The reversal is: ");
  while (num) {
    printf("%d", num % 10);
    num /= 10; 
  }
  printf("\n");
  return 0;
}