#include <stdio.h>

int main()
{
    int a, b;
    int result = 0;

    // TODO; zuerst a und b noch einlesen:
    
    
    // Dies soll Integer-Division a / b umsetzen:
    while (a - b > 0) {
        result++;
        a = a - b;
    }
    
    printf("%d\n", result);
}