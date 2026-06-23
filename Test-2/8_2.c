#include <stdio.h>

int main() {
  int num = 0, seen[10] = {0};
  printf("Enter a number: ");
  scanf("%d", &num);
  while (num > 0) {
    seen[num%10]++;
    num /= 10;
  }
  printf("Digits:       "); // 12
  for (int i = 0; i < 10; i++) {
    printf("%3d", i);
  } 
  printf("\nOccurrences:  ");
  for (int i = 0; i < (sizeof(seen) / sizeof(seen[0])); i++) {
    printf("%3d", seen[i]);
  }
  printf("\n");
  return 0;
}