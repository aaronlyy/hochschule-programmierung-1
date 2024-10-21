#include <stdio.h>

int main() {
  int i = 34, j;
  int zahl = 67;

  j = i + zahl;

  j = j + 1;

  printf("j hat den wert von %d\n", j);
  printf("zahl hat den wert von %d\n", zahl);

  return 0;
}