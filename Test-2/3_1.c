#include <stdio.h>

int main(void) {
  int mm, dd, yy;
  printf("Enter a date (mm/dd/yyyy): ");
  scanf("%d/%d/%d", &mm, &dd, &yy);
  printf("You entered the date %4.4d%2.2d%2.2d\n", yy, mm, dd);
  return 0;
}