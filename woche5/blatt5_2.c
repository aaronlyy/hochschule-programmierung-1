#include <stdio.h>
#include <limits.h>

int main() {
  // create a file pointer using the FILE macro
  FILE* file_ptr;

  // try to open a file using its name and access mode (r = read)
  file_ptr = fopen("nums.txt", "r");

  // check if the file could be opened, if not exit
  if (file_ptr == NULL) {
    // show error message
    perror("Die Datei nums.txt konnte nicht geoeffnet werden");
    return 0;
  }

  long long max = LLONG_MIN;
  long long number;
  int number_count = 0;

  // iterate through all numbers while format is matched ("%d")
  // fscanf returns 1 if successful
  while(fscanf(file_ptr, "%d", &number) == 1) {
    number_count++;
    if (number > max) {
      max = number;
    }
  }

  // close file
  fclose(file_ptr);

  if (!number_count) {
    printf("Es konnte keine Zahl gefunden werden.\n");
    return 0;
  }

  // open new file using access mode w (write)
  file_ptr = fopen("max.txt", "w");

  // check if file was created successfully
  if (file_ptr == NULL) {
    // show error message
    perror("Fehler beim Erstellen der Datei max.txt");
    return 0;
  }

  // write max number in file
  fprintf(file_ptr, "%lld\n", max);
  printf("Die groesste Zahl wurde in max.txt gespeichert. (%lld)\n", max);

  // close file
  fclose(file_ptr);

  return 1;
}