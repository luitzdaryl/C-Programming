#include <stdio.h>
#include <math.h>

int main () {
  int lower = 0, upper = 0;
  scanf("%d%d", &lower, &upper);
  for (int i = lower; i <= upper; i++) {
    int x = i;
    int y = i;
    int digits = 0;
    int sum = 0;

    while (x > 0) {
      x /= 10;
      digits++;
    }

    while (y > 0) {
      sum += pow(y % 10, digits);
      y /= 10;
    }

    if (sum == i) {
      printf("%d ", i);
    }
  }
  printf("\n");
  return 0;
}