#include <stdio.h>
#include <limits.h>

void mm(int array[], unsigned int size);

int main() {
  int array[] = {-3, -2, -1, 0, 1, 2, 3};
  mm(array, 7);
}

void mm(int array[], unsigned int size) {
  int min = INT_MAX;
  int max = INT_MIN;
  for (int i = 0; i < size; i++) {
    if (array[i] > max) {
      max = array[i];
    }
    if (array[i] < min) {
      min = array[i];
    }
  }
  printf("Min: %d, Max: %d\n", min, max);
}