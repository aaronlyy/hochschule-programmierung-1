#include <stdio.h>

int main() {

  // version 1, programm bricht ab bei eingabe einer negativen zahl

  int input_number;
  int max_number = 0;

  for (char i = 0; i < 10; i++) {
    printf("[v1] Bitte gib eine positive Zahl ein (no.: %d): ", i + 1);
    scanf("%d", &input_number);

    if (input_number < 0) {
      printf("[v1] Das war keine positive Zahl, adios!\n");
      return 0;
    }

    if (input_number > max_number) {
      max_number = input_number;
    }
  }

  printf("[v1] Die groesste eingegebene Zahl war %d\n", max_number);


  // reset max number
  max_number = 0;

  // version 2, programm ignoriert negative zahlen

  // counter to track how many numbers were valid
  char counter = 0;

  // ask for numbers till counter is 10
  while (counter < 10) { 
    printf("[v2] Bitte gib eine positive Zahl ein (no.: %d): ", counter + 1);
    scanf("%d", &input_number);

    // ignore the given number if not positive
    if (input_number < 0) {
      printf("[v2] Bitte nur positive Zahlen eingeben!\n");
      continue;
    }

    if (input_number > max_number) {
      max_number = input_number;
    }

    counter++;
  }

  printf("[v2] Die groesste eingegebene Zahl war %d\n", max_number);

  return 1;
}