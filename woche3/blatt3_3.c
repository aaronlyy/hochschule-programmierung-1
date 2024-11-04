#include <stdio.h>

int main() {
  int x;
  for (x = 0; x <= 100; x++) {
    if (x*x*x - 73*x*x + 1655*x - 11951 == 0) {
      printf("Nullstelle gefunden: %d\n", x);
    }
  }
}