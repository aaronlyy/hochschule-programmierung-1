#include <stdio.h>
#include <string.h>

int main() {

  const char* correct_fac[] = {
    "1",
    "2",
    "6",
    "24",
    "120",
    "720",
    "5040",
    "40320",
    "362880",
    "3628800",
    "39916800",
    "479001600",
    "6227020800",
    "87178291200",
    "1307674368000",
    "20922789888000",
    "355687428096000",
    "6402373705728000",
    "121645100408832000",
    "2432902008176640000",
    "51090942171709440000",
    "1124000727777607680000",
    "25852016738884976640000",
    "620448401733239439360000",
    "15511210043330985984000000",
    "403291461126605635584000000",
    "10888869450418352160768000000",
    "304888344611713860501504000000",
    "8841761993739701954543616000000",
    "265252859812191058636308480000000"
  };

  int n;
  printf("Bitte gebe eine Zahl zwischen 1 und 30 ein: ");
  scanf("%d", &n);

  if (n > 30) return 0;

  unsigned long long faculty = 1;
  char fac_s[34];
  int correct = 0;

  for (int i = 1; i <= n; i++) {
    faculty *= i;

    snprintf(fac_s, sizeof(fac_s), "%llu", faculty);

    // strcmp returns 0 if strings are identical
    if (strcmp(fac_s, correct_fac[i-1]) == 0) {
        correct = 1;
    } else {
        correct = 0;
    }

    printf("%d! -> Berechnete Fakultaet: %llu | Richtiges Ergebnis: %s -- %s\n", i, faculty, correct_fac[i-1], (correct ? "Richtig" : "Falsch"));
  }

  return 1;
}