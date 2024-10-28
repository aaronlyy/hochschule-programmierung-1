#include <stdio.h>

int main() {

  // a = 1gk
  // b = 5kg

  int a, b, n;
  int m = 5;

  printf("Kleine Schokoriegel: ");
  scanf("%d", &a);

  printf("Grosse Schokoriegel: ");
  scanf("%d", &b);

  printf("Kilogramm Schokolade: ");
  scanf("%d", &n);

  int actualBigBars;
  int remainingBigBars;
  int neededBigBars = n / 5;

  int neededSmallBars = n % 5;
  int actualSmallBars;

  if (neededBigBars > b) {
      actualBigBars = b;
      remainingBigBars = neededBigBars - b;
      neededSmallBars += remainingBigBars * 5;
  }
  else {
      actualBigBars = neededBigBars;
  }

  if (neededSmallBars > a) {
      printf("-1\n");
      return -1;
  }
    
  actualSmallBars = neededSmallBars;

  printf("Es müssen %d kleine Schokoriegel gegessen werden. (%d grosse)\n", actualSmallBars, actualBigBars);

  return 0;
}