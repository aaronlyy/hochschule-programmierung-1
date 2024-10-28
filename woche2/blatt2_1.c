#include <stdio.h>

int main() {
  int a, b;

  printf("Zahl 1: ");
  scanf("%d", &a);
  printf("Zahl 2: ");
  scanf("%d", &b);

  int area = a * b;
  int circumference = 2 * (a + b);

  printf("Der Flächeninhalt beträgt %d und der Umfang beträgt %d.\n", area, circumference);

  return 0;
}