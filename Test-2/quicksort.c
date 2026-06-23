#include <stdio.h>
#include <stdlib.h>

void swap(int *x, int *y) {
  int temp = *x;
  *x = *y;
  *y = temp;
}

int partition(int a[], int low, int high) {
  int pivot = a[high];
  int i = low;
  for (int j = low; j < high; j++) {
    if (a[j] < pivot) {
      swap(&a[j], &a[i]);
      i++;
    }
  }
  // i++;
  swap(&a[i], &a[high]);
  return i;
}

void quickSort(int a[], int low, int high) {
  if (low <= high) {
    int pivot = partition(a, low, high);
    quickSort(a, low, pivot-1);
    quickSort(a, pivot+1, high);
  }
}

int main() {
  int a[] = { 9, 2, 8, 5, 2, 1, 9, 5, 1 };
  int len = sizeof(a) / sizeof(a[0]);
  quickSort(a, 0, len-1);
  printf("Sorted result: \n");
  for (size_t i = 0; i < len; i++) {
    printf("%d ", a[i]);
  }
  printf("\n");
  return 0;
}