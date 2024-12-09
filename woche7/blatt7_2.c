#include <stdio.h>
#include <limits.h>
#include <stdbool.h>

bool firstLast8(int arr[], int n);

int main() {
  int arr[] = {8, -2, -1, 0, 1, 2, 4};
  printf("8 an erster oder letzter Stelle: %s", firstLast8(arr, 7) ? "True\n": "False\n");
}

bool firstLast8(int arr[], int n) {
  if (arr[0] == 8 || arr[n - 1] == 0) {
    return true;
  }
  return false;
}