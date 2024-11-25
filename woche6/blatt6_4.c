#include <stdio.h>

int ggt(int a, int b);
int kgv(int a, int b);

int main() {

  int a = 12;
  int b = 18;

  printf("%d\n", kgv(a, b));

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

int kgv(int a, int b) {
  if (a < 0) {
    a *= -1;
  }
  if (b < 0) {
    b *= -1;
  }
  return (a * b) / ggt(a, b);
}