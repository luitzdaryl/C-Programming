#include <stdio.h>
#include <stdlib.h>

void reduce(int numerator, int denominator, int *num_p, int *deno_p) {
  int gcd_max = numerator < denominator ? numerator : denominator;
  int gcd = 1;
  for (int i = 2; i < gcd_max; i++) {
    if (numerator % i == 0 && denominator % i == 0) gcd = i;
  }
  *num_p = numerator /= gcd;
  *deno_p = denominator /= gcd;
}

int main () {
  int numerator = 0, denominator = 0;
  int *num_p, *deno_p, numer = 0, denom = 0;
  num_p = &numer;
  deno_p = &denom;
  printf("Enter a fraction: ");
  scanf("%d/%d", &numerator, &denominator);
  reduce(numerator, denominator, num_p, deno_p);
  printf("Reduced fraction: ");
  printf("%d/%d\n", *num_p, *deno_p);
}