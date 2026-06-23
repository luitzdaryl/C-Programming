#include <stdbool.h>

#define STACK_SIZE 100

int contents[STACK_SIZE];
int top = 0;

void makeEmpty(void) {
  top = 0;
  return;
}

bool isEmpty(void) {
  return (top == 0);
}

bool isFull(void) {
  return (top == STACK_SIZE);
}

void push(int i) {
  if (!isFull()) {
    contents[top++] = i;
  }
  return;
}

int pop(void) {
  if (!isEmpty()) {
    return contents[--top];
  }
}
