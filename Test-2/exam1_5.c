#include <stdio.h>

int main() {
  char mes[80] = {'\0'}; // string to store the message
  int shift = 0;
  int len = 0;
  printf("Enter message to be encrtpted: ");
  do { // input the message to mes
    scanf("%c", &mes[len++]);
  } while (mes[len-1] != '\n');
  len--; // len correcting
  
  printf("Enter shift amount(1~26): ");
  scanf("%d", &shift); // input shift amount

  printf("Encrypted message: ");
  for (int i = 0; i < len; i++) { // loop each char of the message (string)
    if (mes[i] >= 'a' && mes[i] <= 'z') { // if lower case
      mes[i] = ((mes[i] - 97) + shift) % 26 + 97; // encrypt the character (wrap around)
    } else if (mes[i] >= 'A' && mes[i] <= 'Z') { // if upper case
      mes[i] = ((mes[i] - 65) + shift) % 26 + 65; // encrypt the character (wrap around)
    }
    printf("%c", mes[i]); // print the character out
  }
  printf("\n");

  return 0;
}