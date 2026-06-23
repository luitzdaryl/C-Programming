#include <stdio.h>

int main() {
  int layer = 0; // total layers
  printf("Enter layer: ");
  scanf("%d", &layer);
  
  if (n <= 0) { // (n <= 0) -> invalid then quit
    printf("invalid input\n");
    return 0;
  }

  for (int i = 0; i < layer; i++) { // loop layer times (rows) (i: 0 ~ layer-1)
    for (int j = 0; j < i; j++) { // loop i times (spaces) 
      printf(" ");
    }
    for (int j = 0; j < (2 * (layer - i) - 1); j++) { // loop 2*i - 1 times (stars)
      printf("*");
    }
    printf("\n"); // next line each row
  }
  return 0;
}