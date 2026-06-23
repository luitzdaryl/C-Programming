#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void decompose(float num, float *fraction, int *integer) {
  *integer = floor(num);
  *fraction = num - *integer;
}

void findMaxMin(int a[], int n, int *max, int *min) {
  *min = *max = a[0];
  for (int i = 0; i < n; i++) {
    if (a[i] > *max) {
      *max = a[i];
    }
    if (*min > a[i]) {
      *min = a[i];
    }
  }
}

int main(int argc, char **argv) {
  char *string = malloc(sizeof(char) * 100);
  scanf("%s", string);
  int n = sizeof(string) / sizeof(string[0]);
  for (int i = 0; i < n; i++) {
    // printf("%c ", string[i]);
    // printf("%c ", *(string + i));
    printf("%c ", *(string++));
  }
  printf("\n");

  int i = 0, *p;
  float frac = 0;
  int integer = 0;
  p = &i;

  printf("i : %d, i's address: %p, p : %d, p's address: %p\n", i, &i, *p, p);

  i = 3;
  printf("i : %d, i's address: %p, p : %d, p's address: %p\n", i, &i, *p, p);

  decompose(6.83, &frac, &integer);
  printf("Integer part: %d, fraction part: %.3f\n", integer, frac);

  int a[] = {8, 9, 10, 55, 12, 4, 77};
  int size = sizeof(a) / sizeof(a[0]);
  
  int max = 0, min = 0;
  findMaxMin(a, size, &max, &min);
  printf("Array: \n");
  for (int i = 0; i < size; i++) {
    printf("%d ", a[i]);
  }
  printf("\nMaxium value is: %d, Minium value is: %d\n", max, min);

  return 0;
}