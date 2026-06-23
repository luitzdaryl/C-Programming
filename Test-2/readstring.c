#include <stdio.h>
#include <stdlib.h>
#include <string.h>

const char *filename = "./input.txt";
int ROW = 10;
int LEN = 100;

int main() {
  FILE* f = fopen(filename, "r");
  char **strings = (char**) malloc(ROW * sizeof(char*));
  size_t size = 0;
  for (int i = 0; i < ROW; i++) {
    strings[i] = (char*) malloc(LEN * sizeof(char));
  }
  
  do {
    fscanf(f, "%s", strings[size++]);
    if (size >= ROW) {
      ROW *= 2;
      char **temp = (char**) malloc(ROW * sizeof(char*));
      for (int i = 0; i < ROW; i++) {
        temp[i] = (char*) malloc(LEN * sizeof(char));
        if (i < size) {
          temp[i] = strings[i];
        }
      }
      strings = temp;
    }  
  } while (strcmp(strings[size-1], "") != 0);
  size--;

  for (int i = 0; i < size; i++) {
        printf("%s\n", strings[i]);
  }

  return 0;
  
}