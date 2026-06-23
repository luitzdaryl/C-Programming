#include <stdio.h>
#include <math.h>

int main() {
  int n, p;
  scanf("%d%d", &n, &p);
  for (int i = 1; i <= p; i++) {
    printf("%d ^ %d = %f\n", n, i, pow(n, i));
  }
  return 0;
}