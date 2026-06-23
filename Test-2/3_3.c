#include <stdio.h>

int main(void) {
  int gs1 = 0, group = 0, publish = 0, item = 0, check = 0;
  printf("Enter ISBN: ");
  scanf("%d-%d-%d-%d-%d", &gs1, &group, &publish, &item, &check);
  printf("GS1 prefix: %d\n", gs1);
  printf("Group Identifier: %d\n", group);
  printf("Publisher code: %d\n", publish);
  printf("Item number: %d\n", item);
  printf("Check digit: %d\n", check);
  return 0;
}