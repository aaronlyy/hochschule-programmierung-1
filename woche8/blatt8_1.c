#include <stdio.h>

unsigned int string_length(char str[]);

int main() {
  char name[] = "aaron";
  printf("length: %u\n", string_length(name));
}

unsigned int string_length(char str[]) {
  unsigned int index = 0;
  char c;

  while(str[index] != '\0') {
    index++;
  }

  return index;
}