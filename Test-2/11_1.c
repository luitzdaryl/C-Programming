#include <stdio.h>

void payAmount(int dollars, int *twenties, int *tens, int *fives, int *ones) {
  
  *twenties = dollars / 20;
  dollars %= 20;
  *tens = dollars / 10;
  dollars %= 10;
  *fives = dollars / 5;
  dollars %= 5;
  *ones = dollars;
}

int main() {
  int amount = 0;
  int *twenties, *tens, *fives, *ones;
  int twenty = 0, ten = 0, five = 0, one = 0;
  twenties = &twenty;
  tens = &ten;
  fives = &five;
  ones = &one;
  printf("Enter an amount: ");
  scanf("%d", &amount);
  payAmount(amount, twenties, tens, fives, ones);
  printf("$20: %d\n$10: %d\n$5: %d\n$1: %d\n", *twenties, *tens, *fives, *ones);
  return 0;
}