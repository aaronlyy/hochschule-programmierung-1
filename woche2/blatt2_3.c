#include <stdio.h>

int main() {
  int n;
  printf("Bitte gebe eine Zahl ein: ");
  scanf("%d", &n);

  int remaining = n % 57;

  printf("Rest: %d\n", remaining);

  if (remaining == 0) {
    printf("Scherzkeks!\n");
  }

  return 0;
}