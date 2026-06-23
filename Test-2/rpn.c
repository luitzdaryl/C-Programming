#include <stdio.h>
#include "stack.h"

int main(void) {
  char c = '\0';
  printf("Enter an RPN expression: ");
  makeEmpty();
  while (scanf(" %c", &c)) {
    if (c == 'q') break;
    if ((c >= 48) && (c <= 57)) {
      push(c - 48);
      continue;
    }
    int num1 = pop();
    int num2 = pop();
    switch (c) {
      case '+': 
        push(num2 + num1);
        break;
      case '-':
        push(num2 - num1);
        break;
      case '*':
        push(num2 * num1);
        break;
      case '/':
        push(num2 / num1);
        break;
      case '=':
        printf("Value of expression: %d\n", pop());
        return 0;
    }
  }
  return 0;
}