#include <stdio.h>

int main() {
  int points = 0; // total pairs of points
  float point[20] = {0}; // declare an array to store points
  printf("Enter number of points: ");
  scanf("%d", &points);
  for (int i = 0; i < 2 * points; i++) { // input points
    scanf("%f", &point[i]);              // [x1] [y1] [x2] [y2] ... 
  }

  if (points > 10) { // (point > 10) -> invalid then quit
    printf("invalid number of points\n");
    return 0;
  }

  for (int i = 0; i < 2 * points; i += 2) { // loop through all x and sort
    for (int j = i; j < 2 * points; j += 2) { // loop through all x and sort
      if (point[i] > point[j]) { // sort
        float temp; // swap ([xi][yi]) and ([xj][yj]) <- remember they are pairs
        temp = point[i];
        point[i] = point[j];
        point[j] = temp;
        temp = point[i+1];
        point[i+1] = point[j+1];
        point[j+1] = temp;
      } else if (point[i] == point[j] && point[i+1] > point[j+1]) { // if xi == xj then compare yi and yj
        float temp; // swap ([xi][yi]) and ([xj][yj]) <- remember they are pairs
        temp = point[i];
        point[i] = point[j];
        point[j] = temp;
        temp = point[i+1];
        point[i+1] = point[j+1];
        point[j+1] = temp;
      }
    }
  }

  for (int i = 0; i < 2 * points; i++) { // output the results
    printf("%.2f ", point[i]);
    if (i % 2 == 1) { // next line after a pair
      printf("\n");
    }
  }
  return 0;
}