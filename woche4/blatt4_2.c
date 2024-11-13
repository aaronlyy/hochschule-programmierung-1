#include <stdio.h>
#include <stdbool.h>

int main() {
  int x = 1, y = 2;
  bool z = true;

  printf("%d\n", (y++ * 5) + x); // 11
  printf("%d\n", (x * 5) % (++y)); // 1
  printf("%d\n", x++ - y--); // -1
  printf("%d\n", ((x * 5) < y) || (z && (x > y))); // false
  printf("%d\n", x = y = y + 1); // 4


 return 1;
}