#include <stdio.h>

int main() {
  int a, b;

  printf("Ziffer 1: ");
  scanf("%d", &a);

  printf("Ziffer 2: ");
  scanf("%d", &b);

  if (a % 10 == b % 10) {
    printf("Letzte Ziffer gleich\n");
  }
}