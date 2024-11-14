#include <stdio.h>


int main() {
  double pi = 1;
  double divider = 3;
  char sw = -1;

  // calculate 1 000 000 times
  for (int i = 1; i <= 1000000; i++) {
    pi += (1 / divider) * sw;

    // printf("%s 1/%.f\n", (sw == 1 ? "+" : "-"), divider);

    divider += 2;
    sw *= -1;
  }

  printf("%f", pi * 4);
}