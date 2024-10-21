#include <stdio.h>

int main() {
  int a = 34;
  int b = 98;

  int area = a * b;
  int circumference = 2 * (a + b);

  printf("Der Flächeninhalt beträgt %d und der Umfang beträgt %d.\n", area, circumference);

  return 0;
}