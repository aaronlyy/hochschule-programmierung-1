#include <stdio.h>

int ggt(int a, int b);

int main() {
  printf("%d\n", ggt(6, 9));
}

int ggt(int a, int b) {
  while (a != b) {
    if (a > b) {
      a -= b;
    }
    else if (b > a) {
      b -= a;
    }
  }
  if (a < 0) {
    a *= -1;
  }
  return a;
}