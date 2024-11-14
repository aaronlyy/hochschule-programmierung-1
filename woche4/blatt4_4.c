#include <stdio.h>


int main() {

  // leibniz reihe

  double pi = 1;
  double divider = 3;
  char sw = -1;
  
  for (int i = 1; i <= 1000000; i++) {
    pi += (1 / divider) * sw;

    divider += 2;
    sw *= -1;
  }

  printf("%.16f\n", pi * 4);

  // wallisches produkt

  double pi2 = 1.0;

  for (int i = 1; i <= 1000000; i++) {
      pi2 *= (2.0 * i) / (2.0 * i - 1);
      pi2 *= (2.0 * i) / (2.0 * i + 1);
  }

  printf("%.16f\n", pi2 * 2);
  
}