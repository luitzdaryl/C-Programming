#include <stdio.h>
#define DaysInAWeek 7
int main(void) {
  int totald = 0, startd = 0;
  printf("Enter number of days in month: ");
  scanf("%d", &totald);
  printf("Enter starting day of the week: ");
  scanf("%d", &startd);

  for (int i = 1; i < startd; i++) {
    printf("   ");
  }
  for (int i = 1; i <= totald; i++) {
    printf("%3d", i);
    if (i % DaysInAWeek == ((DaysInAWeek+1)-startd)) {
      printf("\n");
    }
  }
  printf("\n");
  return 0;
}