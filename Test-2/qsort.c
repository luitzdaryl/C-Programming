#include <stdio.h>
#include <stdlib.h>

void swap(int *x, int *y) {
  int t = *x;
  *x = *y;
  *y = t;
}

int *partition(int *low, int *high) {
  int *pivot = high;
  int *i = low;
  for (int *j = low; j < high; j++) {
    if (*j < *pivot) {
      swap(i, j);
      i++;
    }
  }
  swap(i, pivot);
  return i;
}

void quickSort(int *low, int *high) {
  if (low >= high) return;

  int *pivot = partition(low, high);
  quickSort(low, pivot - 1);
  quickSort(pivot + 1, high);
}

int main() {
  int size = 0;
  int *arr = NULL;
  printf("Enter size of an array: ");
  scanf("%d", &size);
  printf("Enter array of numbers: ");
  arr = malloc(sizeof(int) * size);
  for (int i = 0; i < size; i++)
    scanf("%d", arr+i);
  
  
  quickSort(arr, arr+size-1);

  for (int i = 0; i < size; i++) 
    printf("%d ", arr[i]);
  
  printf("\n");
  
  free(arr);
  return 0;
}