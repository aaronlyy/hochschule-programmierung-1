#include <stdio.h>

void entferne(char str[], char c);

int main() {

  char str[] = "Testwort";
  char str2[] = "Weihnachten";
  char str3[] = "Hund";
  char str4[] = "A";
  char str5[] = "";
  
  entferne(str, 'w');
  entferne(str2, 'h');
  entferne(str3, 'H');
  entferne(str4, 'c');
  entferne(str5, 'i');
  printf("%s\n", str);

}

void entferne(char str[], char c) {
  unsigned int index = 0;
  unsigned int char_index = 0;
  int found = 0;

  // find index of character
  while (str[index] != '\0') {
    if (str[index] == c) {
      char_index = index;
      found = 1;
      break;
    }
    index++;
  }

  // return if character could not be found
  if (!found) {
    return;
  }

  // iterate through array and change character at the current index with the next index
  // stop at null terminator
  while (str[char_index] != '\0') {
    str[char_index] = str[char_index + 1];
    char_index++;
  }
}