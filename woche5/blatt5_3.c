#include <stdio.h>

int main() {
  // file pointer
  FILE* file_ptr;

  // open file
  file_ptr = fopen("text.txt", "r");

  // check if file is open
  if (file_ptr == NULL) {
    perror("Datei text.txt konnte nicht geöffnet werden");
    return 0;
  }

  char c;
  unsigned long long total = 0;
  unsigned long long a = 0, e = 0, i = 0, o = 0, u = 0;

  // read content
  while(fscanf(file_ptr, "%c", &c) == 1) {
    switch (c) {
      case 'A':
        a++;
      case 'a':
        a++;
      case 'E':
        e++;
      case 'e':
        e++;
      case 'I':
        i++;
      case 'i':
        i++;
      case 'O':
        o++;
      case 'o':
        o++;
      case 'U':
        u++;
      case 'u':
        u++;
      default:
        total++;
    }
  }

  // close file
  fclose(file_ptr);

  printf("Gesamt: %lld\nA: %lld\nE: %lld\nI: %lld\nO: %lld\nU: %lld\n", total, a, e, i, o, u);
}