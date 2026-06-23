#include<stdio.h>
#include<time.h>
#include "FileHandler.h"

void RandomPath(char maze[12][12]){
    srand((unsigned)time(NULL));
    int y=rand() % 10+1,x=0,dire;

    for(int i=0;i<12;i++){
        for(int j=0;j<12;j++){
            maze[j][i]='#';
        }
    }

    maze[y][x]='.';
    x=1;
    maze[y][x]='.';

    for(int i=1;i<10;i++){
        do{
            dire=rand()%3;  //0:up 1:down 2:right
            if(dire==0 && y>1){
                y-=1;
            }else if(dire==1 && y<10){
                y+=1;
            }
            maze[y][x]='.';
        }while(dire != 2);

        x++;
        maze[y][x]='.';

    }

    x++;
    maze[y][x]='.';

}

int checkWall(char maze[12][12], int x, int y) {
  if (x < 0 || x > 11 || y < 0 || y > 11) return 1;   //1: wall   0: no wall
  if (maze[y][x] == '#') return 1;
  else return 0;
}

int traverse(char maze[12][12]) {
  int x = 0, y = 0, entry = 0, exit = 0; 
  int t = 0;
  int dir = 1; // 0: up, 1: right, 2: down; 3: left

  for (int i = 0; i < 12; i++) {
    if (maze[i][0] == '.') { 
      entry = i;
      y = i;
    }
    if (maze[i][11] == '.') exit = i;
  }

  // printf("entry: %d, exit: %d\n", entry, exit);
  maze[y][x] = 'X';
  
  while(1) {    //Infinite loop
    if (++t > 1000) return 0;   //if it didn't fdinish until 1000 times then it has no solution.
    if(x == 10 && y == exit) {
      maze[y][x+1] = 'X';
      return 1;
    }

    if (dir == 1) {
      if (!checkWall(maze, x+1, y)) {
        x++;
      }

      if (!checkWall(maze, x, y+1)/* && maze[y+1][x] != 'X'*/) dir = 2; 
      else if (!checkWall(maze, x+1, y)/* && maze[y][x+1] != 'X'*/) dir = 1;
      else if (!checkWall(maze, x, y-1)/* && maze[y-1][x] != 'X'*/) dir = 0;
      else dir = 3;
    } else if (dir == 0) {
      if (!checkWall(maze, x, y-1)) {
        y--;
      }

      if (!checkWall(maze, x+1, y)/* && maze[y][x+1] != 'X'*/) dir = 1;
      else if (!checkWall(maze, x, y-1)/* && maze[y-1][x] != 'X'*/) dir = 0;
      else if (!checkWall(maze, x-1, y)/* && maze[y][x-1] != 'X'*/) dir = 3;
      else dir = 2; 
    } else if (dir == 2) {
      if (!checkWall(maze, x, y+1)) {
        y++;
      }
      if (!checkWall(maze, x-1, y)/* && maze[y][x-1] != 'X'*/) dir = 3;
      else if (!checkWall(maze, x, y+1)/* && maze[y+1][x] != 'X'*/) dir = 2; 
      else if (!checkWall(maze, x+1, y)/* && maze[y][x+1] != 'X'*/) dir = 1;
      else dir = 0;
    } else if (dir == 3) {
      if (!checkWall(maze, x-1, y)) {
        x--;
      }
      if (!checkWall(maze, x, y-1)/* && maze[y-1][x] != 'X'*/) dir = 0;
      else if (!checkWall(maze, x-1, y)/* && maze[y][x-1] != 'X'*/) dir = 3;
      else if (!checkWall(maze, x, y+1)/* && maze[y+1][x] != 'X'*/) dir = 2; 
      else dir = 1;
    }

    maze[y][x] = 'X';
    // if (!checkWall(maze, x+1, y+1) && maze[y][x+1] != 'X') dir = 1;
    // else if (!checkWall(maze, x, y+1) && maze[y+1][x] != 'X') dir = 2;
    // else if (!checkWall(maze, x, y-1) && maze[y-1][x] != 'X') dir = 0;
    // else if (!checkWall(maze, x-1, y) && maze[y][x-1] != 'X') dir = 3;

  }

}

void random(char maze[12][12]){

    srand((unsigned)time(NULL));
    int entry=rand()%12;
    int exit=rand()%12;
    
    for(int i=0;i<12;i++){
        for(int j=0;j<12;j++){
            if(j==0 && i==entry){
                maze[i][j]='.';
            }else if(j==0 && i != entry){
                maze[i][j]='#';
            }else if(i==0 || i==11){
                maze[i][j]='#';
            }else if (j==11 && i== exit){
                maze[i][j]='.';
            }else if (j==11 && i != exit){
                maze[i][j]='#';
            }else {
                maze[i][j]=((rand() % 2 ) == 0) ?'#':'.';
            }
        }
    }
}

void print (char maze[12][12]){

  for(int i=0;i<12;i++){
      for(int j=0;j<12;j++){
          printf("%c",maze[i][j]);
      }
      printf("\n");
  }

}

int main(){
    char maze[12][12]={{0}};

    char *str = readAllTextFromFile("./maze2.txt");

    for(int i=0;i<12;i++){
        for(int j=0;j<12;j++){
            maze[i][j]=str[i*13 + j];
            printf("%c", str[i*13 + j]);
        }
        printf("\n");
    }

    printf("\n");

    //random(maze);
    //RandomPath(maze);
    //print(maze);

    if(!traverse(maze)){
        printf("There is no solution.\n");
    }

    print(maze);
    
    return 0;

}