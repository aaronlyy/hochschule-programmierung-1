#include <stdio.h>

int main() {

  int a, b;

  printf("Bitte gebe zwei Zahlen ein, wobei die erste kleiner ist als die Zweite\n\n");
  
  while (1) {
    printf("Zahl 1: ");
    scanf("%d", &a);
    printf("Zahl 2: ");
    scanf("%d", &b);

    if (a > b) {
      printf("Die erste Zahl muss kleiner als die zweiter sein! Bitte nocheinmal versuchen...\n\n");
      continue;
    }

    if (a > 6 || b > 6 || a < 1 || b < 1) {
      printf("Die Zahlen dürfen nur zwischen 1 und 6 sein!\n");
      continue;
    }
    
    break;
  }

  if (a == b) {
    printf("Pasch %d\n", a);
  }
  else if (a == 1 && b == 2) {
    printf("Maexchen\n");
  }
  else {
    printf("Groesste mögliche Zahl: %d%d\n", b, a);
  }

  return 0;
}