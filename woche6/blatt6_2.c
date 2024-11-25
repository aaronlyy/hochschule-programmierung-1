#include <stdio.h>

int round10(int n);
int roundSum(int a, int b, int c);

int main() {

  int a = 14;
  int b = 35;
  int c = 23;

  printf("%d", roundSum(a, b, c)); // should be 70

}

int round10(int n) {
  int remainder = n % 10;

  if (remainder >= 5) {
    return n + (10 - remainder);
  }
  else if (remainder > 0) {
    return n - remainder;
  }

  return n;
}

int roundSum(int a, int b, int c) {
  return round10(a) + round10(b) + round10(c);
}