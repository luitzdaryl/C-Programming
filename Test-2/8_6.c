#include <stdio.h>
#define SIZE 100

int main() {
  char mes[SIZE];
  printf("Enter message: ");
  scanf("%[^\n]", mes);
  printf("In B1FF-speak: ");
  for (int i = 0; i < SIZE; i++) {
    if(mes[i] == '\0') break;
    switch (mes[i])
    {
      case 'A':
        mes[i] = '4';
        break;
      case 'B':
        mes[i] = '8';
        break;
      case 'E':
        mes[i] = '3';
        break;
      case 'I':
        mes[i] = '1';
        break;
      case 'O':
        mes[i] = '0';
        break;
      case 'S':
        mes[i] = '5';
        break;
      case 'a':
        mes[i] = '4';
        break;
      case 'b':
        mes[i] = '8';
        break;
      case 'e':
        mes[i] = '3';
        break;
      case 'i':
        mes[i] = '1';
        break;
      case 'o':
        mes[i] = '0';
        break;
      case 's':
        mes[i] = '5';
        break;
    }
    printf("%c", mes[i]);
  }
  for(int i = 0; i < 10; i++) {
    printf("!");
  }
  printf("\n");
  return 0;
}