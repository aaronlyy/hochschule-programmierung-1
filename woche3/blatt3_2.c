#include <stdio.h>

int main() {

  for (int i = 100; i <= 200; i++) {
    printf("%d\n", i);
  }
  printf("\n");

  for (int j = 111; j <= 222; j++) {
    if (j % 2 == 0) {
      printf("%d\n", j);
    }
  }
  printf("\n");

  int m = 0;
  for (int k = 0; k <= 1000; k += 3) {
    m += k;
  }
  printf("%d\n\n", m);

  int n;
  int n_original;
  int found = 0;
  scanf("%d", &n);
  n_original = n;
  while (n > 0) {
    if (n % 10 == 7) {
      found += 1;
    }
    n /= 10;
  }
  if (found) {
    printf("true\n");
    printf("Die Zahl 7 kommt %d mal in der Zahl %d vor.\n", found, n_original);
  }
  else {
    printf("false\n");
  }
}