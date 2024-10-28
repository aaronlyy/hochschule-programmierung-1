#include <stdio.h>

int main() {
  int a, b = 5, c, d;
  a = b / 2;
  printf("a: %d, b: %d, c: %d, d: %d\n", a, b, c, d);


  c = b % 2;
  printf("a: %d, b: %d, c: %d, d: %d\n", a, b, c, d);

  d = 1 - (b - 1);
  printf("a: %d, b: %d, c: %d, d: %d\n", a, b, c, d);

  b = b * -3;
  printf("a: %d, b: %d, c: %d, d: %d\n", a, b, c, d);

  d = d % 3;
  printf("a: %d, b: %d, c: %d, d: %d\n", a, b, c, d);

  c = c + b * d + 4;
  printf("a: %d, b: %d, c: %d, d: %d\n", a, b, c, d);

  a = b * d;
  printf("a: %d, b: %d, c: %d, d: %d\n", a, b, c, d);

  a = 0; b = 2; c = 3; d = 4;
  printf("a: %d, b: %d, c: %d, d: %d\n", a, b, c, d);

  a = (b + 2) * 2 * c + 1;
  printf("a: %d, b: %d, c: %d, d: %d\n", a, b, c, d);

  a = b * d * c * (-1);
  printf("a: %d, b: %d, c: %d, d: %d\n", a, b, c, d);

  return 0;
}