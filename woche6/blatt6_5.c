#include <stdio.h>
#include <stdbool.h>

bool mauern(int kurz, int lang, int ziel);

int main() {
  printf("%d\n", mauern(8, 3, 12));
}

bool mauern(int klein, int lang, int ziel) {
  int maxLang = ziel / 5; // max usable big stones
  int usedLang = maxLang <= lang ? maxLang : lang; // get number big stones used
  int rest = ziel - usedLang * 5; // get number of small stones needed
  return rest <= klein; // check for enough small stones
}