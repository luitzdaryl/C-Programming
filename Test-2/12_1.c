#include <stdio.h>

#define MAX 100

int main() {
  char mes[MAX] = { 0 };
  char *p;
  // printf("%d", p);
  char c;
  p = &mes[0];
  printf("%d", p);
  printf("Enter a message: ");
  do {
    c = getchar();
    *(p++) = c;
  } while (c != '\n');
  p--;
  printf("Reversal is: ");
  while (*(--p)) {
    printf("%c", *p);
  }
  printf("\n");
  return 0;
}