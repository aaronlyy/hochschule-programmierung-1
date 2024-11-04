#include <stdio.h>

int main() {
  int n;

  printf("Zahl eingeben: ");
  scanf("%d", &n);

  int sum;

  while (n >= 10) {
    sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    n = sum;
  }
  printf("Die iterierte Quersumme beträgt %d\n", n);
}