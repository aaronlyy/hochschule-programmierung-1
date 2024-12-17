#include <stdio.h>
#include <stdbool.h>

bool palindrom(char str[]);

int main() {

  char str[] = "Anna";
  char str2[] = "Lagerregal";
  char str3[] = "Weihnachten";
  char str4[] = "A";
  char str5[] = "";

  if (palindrom(str)) {
    printf("Yay, %s ist ein Palindrom\n", str);
  }
  else {
    printf("%s ist kein Palindrom\n", str);
  }
}

bool palindrom(char str[]) {
  unsigned int start = 0;
  unsigned int stop = 0;

  while (str[stop] != '\0') {
    stop++;
  }

  stop--;

  printf("%d\n", stop);

  while (start < stop) {
    printf("%d, %d\n", str[start], str[stop]);
    if (str[start] != str[stop] && str[start] - str[stop] != 32 && str[start] - str[stop] != -32) {
      return false;
    }
    start++;
    stop--;
  }

  return true;

}