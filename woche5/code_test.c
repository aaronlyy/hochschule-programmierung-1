#include <stdio.h>

int main()
{
    int a, b;
    int result = 0;

    // zuerst a und b einlesen:
    printf("a: ");
    scanf("%d", &a);
    printf("b: ");
    scanf("%d", &b);

    // division durch null ist nicht möglich, negative zahlen werden nicht behandelt
    if (b == 0 || a <= 0 || b <= 0) {
        return 0;
    }
    
    // a - b muss in klammern gesetzt werden, da sonst erst "größer als" überprüft wird
    while ((a - b) >= 0) { // es muss größer gleich sein, da es division ohne rest geben kann
        printf("a: %d, b: %d\n", a, b);
        result++;
        a = a - b;
    }
    
    printf("%d\n", result);
}

// test cases
// 0 0, division mit 2 nullen
// 1 0, division durch null
// 0 2, division null durch
// 1 1, selbe zahl
// 1 2, b größer als a
// 17 4, normale division mit rest
// 20 5, division bei der kein rest bleibt
// -1 -1, division mit 2 negativen gleichen zahlen
// -5 2, division negativ durch positiv