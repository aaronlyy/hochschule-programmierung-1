#include <stdio.h>

unsigned int countOdds(int f[], int n);

int main() {
  int arr1[] = {3, -5, 0, 6, 12, -9, 8, 15, 21, -3};
  int arr2[] = {10, 25, -14, 7, 0, 3, -8, 19, 42, 31};
  int arr3[] = {-3, -7, -11, 2, 6, 10, 14, 18};
  int arr4[] = {100, -50, 30, 20, -10, 5, -15, 40, 60};
  printf("Odds: %u\n", countOdds(arr1, 10));
  printf("Odds: %u\n", countOdds(arr2, 10));
  printf("Odds: %u\n", countOdds(arr3, 8));
  printf("Odds: %u\n", countOdds(arr4, 9));
}

unsigned int countOdds(int f[], int n) {
  unsigned int counter = 0;
  for (int i = 0; i < n; i++) {
    if (f[i] % 2 != 0) {
      counter++;
    }
  }
  return counter;
}