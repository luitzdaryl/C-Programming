#include <stdio.h>
#include "stack.h"

int main () {
  char c = '\0';
  bool correct = true;
  printf("Enter parentheses and/or braces: ");
  makeEmpty();
  while (scanf("%c", &c)) {
    // printf("%c", c);
    if (c == '{' || c == '(' || c == '[') {
      push(c);
    } else if (c == '}' || c == ')' || c == ']') {
      int lastc = pop();
      if (c == '}') {
        if (lastc != '{') {
          correct = false;
        }
      } else if (c == ')') {
        if (lastc != '(') {
          correct = false;
        }
      } else if (c == ']') {
        if (lastc != ']') {
          correct = false;
        }
      }
    }
    if (c == 'q') break;
  }
  if (!isEmpty()) correct = false;
  if (!correct) {
    printf("Parentheses/Braces are not nested properly.\n");
  } else {
    printf("Parentheses/Braces are nested properly.\n");
  }
  return 0;
}