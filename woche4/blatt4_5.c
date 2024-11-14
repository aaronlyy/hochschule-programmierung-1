#include <stdio.h>

int main() {
  if (0.1 + 0.2 == 0.3) {
    printf("true\n");
  }
  else {
    printf("false\n");
  }

  if (0.1 + 0.3 == 0.4) {
    printf("true\n");
  } else {
    printf("false\n");
  }

  float n = 0.0f;

  for (int i = 1; i < 10000; i++) {
    n += 1.0f / i;
  }

  printf("%.16f\n", n);
  n = 0.0;

  for (int i = 1; i < 100000; i++) {
    n += 1.0f / i;
  }

  printf("%.16f\n", n);
  n = 0.0;

  for (int i = 1; i < 1000000; i++) {
    n += 1.0f / i;
  }
  printf("%.16f\n", n);

 // ------

  double d = 0.0;

  for (int i = 1; i < 10000; i++) {
    d += 1.0f / i;
  }
  printf("%.16f\n", d);
  d = 0.0;

    for (int i = 1; i < 100000; i++) {
    d += 1.0f / i;
  }
  printf("%.16f\n", d);
  d = 0.0;

    for (int i = 1; i < 1000000; i++) {
    d += 1.0f / i;
  }
  printf("%.16f\n", d);
  
}