#include <stdio.h>
#include <limits.h>

int main() {
  unsigned int min = UINT_MAX;
  char counter = 0;
  int input_number;

  while(counter < 10) {
    printf("Bitte gebe eine positive Zahl > 0 ein (%d): ", counter + 1);
    scanf("%d", &input_number);

    if (input_number <= 0) {
      printf("Das war keine positive Zahl > 0!\n");
      continue;
    }

    if (input_number < min) {
      min = input_number;
    }

    counter++;
  }

  printf("Die kleinste eingegebene Zahl war %d.\n", min);

}