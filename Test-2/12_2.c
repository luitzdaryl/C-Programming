#include <stdio.h>

int main() {
  char *mes;
  char c;
  int len;

  do {
    scanf("%c", &c);
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
      mes[len++] = c;
  } while (c != '\n');
  
  for (int i = 0; i < strlen(mes); i++) {
    printf("%c", mes[i]);
  }
  return 0;
}