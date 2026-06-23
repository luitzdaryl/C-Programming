#include <stdio.h>
#include <stdlib.h>
#include <string.h>

float evaluate_RPN_expression(char *s) {
  float stack[50] = { 0 };
  int size = 0;
  while (*s != '=') {
    if (*s >= '0' && *s <= '9') {
      stack[size++] = *s - 48;
    } else {
      float temp = 0;
      switch (*s) {
        case '+' :
          temp = stack[size-2] + stack[size-1];
          break;
        case '-' :
          temp = stack[size-2] - stack[size-1];
          break;
        case '*' :
          temp = stack[size-2] * stack[size-1];
          break;
        case '/' :
          temp = stack[size-2] / stack[size-1];
          break;
      }
      stack[size-1] = 0;
      stack[size-2] = temp;
      size--;
    }
    s++;
  }
  return stack[0];
}

int main() {
  char *rpn = (char *) calloc(100, sizeof(char));
  char c;
  int len = 0;
  printf("Enter an RPN expression: ");
  do {
    scanf("%c", &c);
    if (c != ' ' && c != '\n') {
      *(rpn+(len++)) = c;
    }
  } while (c != '\n');
  
  printf("Value of expression: %.2f\n", evaluate_RPN_expression(rpn));

  return 0;
}