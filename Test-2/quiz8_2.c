#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "FileHandler.h"

int size = 0; // n * n maze

void randomMaze(char **maze) {
  int entry = rand() % size;
  int exit = rand() % size;
  for (int i = 0; i < size; i++) {
    for (int j = 0; j < size; j++) {
      if (j == 0 || j == size-1) {
        if (j == 0 && i == entry) {
          *(*(maze+i)+j) = '.';
        } else if (j == 0 && i != entry) {
          *(*(maze+i)+j) = '#';
        } else if (j == size-1 && i == exit) {
          *(*(maze+i)+j) = '.';
        } else if (j == size-1 && i != exit) {
          *(*(maze+i)+j) = '#';
        }
      } else {
        *(*(maze+i)+j) = ((rand() % 2) == 0) ? '#' : '.';
      }
    }
  }
}

void randomPathMaze(char **maze) {
  int y = rand() % (size - 2) + 1, x = 0, dir;
  for (int i = 0; i < size; i++) {
    for (int j = 0; j < size; j++) {
      maze[i][j] = '#';
    }
  }
  *(*(maze+y)+x) = '.';
  x = 1;
  *(*(maze+y)+x) = '.';
  for (int i = 1; i < size-2; i++) {
    do {
      dir = rand() % 3; // 0: up, 2:right, 1: down
      if (dir == 0 && y > 1) {
        y -= 1;
      } else if (dir == 1 && y < size-2) {
        y += 1;
      }
      *(*(maze+y)+x) = '.';
    } while (dir != 2);
    x++;
    *(*(maze+y)+x) = '.';
  }
  x++;
  *(*(maze+y)+x) = '.';
}

int checkWall(char **maze, int x, int y) {
  if (x < 0 || x > size-1 || y < 0 || y > size-1) return 1;
  if (maze[y][x] == '#') return 1;
  else return 0;
}

int traverseMaze(char **maze) {
  int x = 0, y = 0, entry = 0, exit = 0; 
  int t = 0;
  int dir = 1; // 0: up, 1: right, 2: down; 3: left
  /* find entry and exit */
  for (int i = 0; i < size; i++) {
    if (maze[i][0] == '.') { 
      entry = i;
      y = i;
    }
    if (maze[i][size-1] == '.') exit = i;
  }

  maze[y][x] = 'X';
  while(1) {
    if (++t > size*100) return 0;
    if(x == size-2 && y == exit) {
      maze[y][x+1] = 'X';
      return 1;
    }

    if (dir == 1) {
      if (!checkWall(maze, x+1, y)) {
        x++;
      }

      if (!checkWall(maze, x, y+1)) dir = 2; 
      else if (!checkWall(maze, x+1, y)) dir = 1;
      else if (!checkWall(maze, x, y-1)) dir = 0;
      else dir = 3;
    } else if (dir == 0) {
      if (!checkWall(maze, x, y-1)) {
        y--;
      }

      if (!checkWall(maze, x+1, y)) dir = 1;
      else if (!checkWall(maze, x, y-1)) dir = 0;
      else if (!checkWall(maze, x-1, y)) dir = 3;
      else dir = 2; 
    } else if (dir == 2) {
      if (!checkWall(maze, x, y+1)) {
        y++;
      }
      if (!checkWall(maze, x-1, y)) dir = 3;
      else if (!checkWall(maze, x, y+1)) dir = 2; 
      else if (!checkWall(maze, x+1, y)) dir = 1;
      else dir = 0;
    } else if (dir == 3) {
      if (!checkWall(maze, x-1, y)) {
        x--;
      }
      if (!checkWall(maze, x, y-1)) dir = 0;
      else if (!checkWall(maze, x-1, y)) dir = 3;
      else if (!checkWall(maze, x, y+1)) dir = 2; 
      else dir = 1;
    }
    maze[y][x] = 'X';
  }
}

void printMaze(char **maze) {
  for (int i = 0; i < size; i++) {
    for (int j = 0; j < size; j++) {
      printf("%c", maze[i][j]);
    }
    printf("\n");
  }
}

char * readAllTextFromFile(char path[]) {
	char buffer[128];

	FILE *fp;
	int err = fopen_s(&fp, path, "r");

	if (err != 0) {
		printf("'%s' file open error!\n", path);
		return NULL;
	}

	size_t len = sizeof(buffer);
	char *context = malloc(len);
	context[0] = '\0';

	while (fgets(buffer, sizeof(buffer), fp) != NULL) {
		size_t len_used = strlen(context);
		size_t chunk_used = strlen(buffer);

		//realloc memory size if file too large
		if (len - len_used < chunk_used) {
			len *= 2;
			if ((context = realloc(context, len)) == NULL) {
				perror("Unable to reallocate memory for the line buffer.");
				free(context);
				exit(1);
			}
		}
		// Copy the chunk to the end of the line buffer
		strncpy(context + len_used, buffer, len - len_used);
		len_used += chunk_used;
	}
	fclose(fp);
	
	return context;
}

int main() {
  /* random seed */
  srand((unsigned) time(NULL));
  size=12;
  /* enter size of maze (n * n) */
  // printf("Enter n*n maze: ");
  // scanf("%d", &size);
  
  /* read data from input file */
  char *str = readAllTextFromFile("./maze2.txt");
  
  /* memory allocate */
  char **maze = (char **) calloc(size, sizeof(char*));
  for (int i = 0; i < size; i++) {
    maze[i] = (char *) calloc(size, sizeof(char));
  }
  
  /* readFile */
  int r = 0, q = 0;
  while (1) {
    if (str[q] == '.' || str[q] == '#' || str[q] == 'X') { // qualified char
      maze[r/size][r%size] = str[q];
      r++;
    }
    if (r >= (size * size)) break;
    q++;
  }
  
  // printf("Original maze: \n");
  // printMaze(maze);
  // printf("\n------------------\n");
  
  // /* Q1 : random a maze */
  // randomMaze(maze); 

  /* Q2 : random a maze with a solution */ 
  // randomPathMaze(maze);

  // /* Q3 : traverse a maze */
    if (!traverseMaze(maze))
        printf("There is no solution.\n");

  // printf("Traversed maze: \n");
  printMaze(maze);

  /* free memory */
  free(maze);

  system("pause");
  return 0;
}