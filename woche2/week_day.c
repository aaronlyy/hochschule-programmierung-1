#include <stdio.h>
#include <stdbool.h>

int main() {
    // declaration of variables day, month & year of the type int
    int day, month, year;
    
    // format string
    printf("Tag, Monat, Jahr eingeben (Format: 24 12 2022)\n");

    // reading ints from stdin into the declared variables
    // variables are prefixed with the & operator because scanf is call by reference
    // input is saved into the declared variables
    scanf("%d %d %d", &day, &month, &year);
    
    // 1. Januar 1900 war Montag
    int shift = year - 1900; // subtract 1900 from current year
    shift = shift + shift / 4 + (day - 1); // adding leap years (years / 4) and all days till given date
    

    // adding all days in the year till given month
    if (month > 1) {
        shift = shift + 31;
    }
    if (month > 2) {
        shift = shift + 28;
    }
    if (month > 3) {
        shift = shift + 31;
    }
    if (month > 4) {
        shift = shift + 30;
    }
    if (month > 5) {
        shift = shift + 31;
    }
    if (month > 6) {
        shift = shift + 30;
    }
    if (month > 7) {
        shift = shift + 31;
    }
    if (month > 8) {
        shift = shift + 31;
    }
    if (month > 9) {
        shift = shift + 30;
    }
    if (month > 10) {
        shift = shift + 31;
    }
    if (month > 11) {
        shift = shift + 30;
    }

    // leap year correction
    if ((month == 1 || month == 2) && (year % 4 == 0) && year != 1900) {
        shift = shift - 1;
    }
    
    // remainder is day of the week
    switch(shift % 7) {
        case 0: printf("Montag\n");
            break;
        case 1: printf("Dienstag\n");
            break;
        case 2: printf("Mittwoch\n");
            break;
        case 3: printf("Donnerstag\n");
            break;
        case 4: printf("Freitag\n");
            break;
        case 5: printf("Samstag\n");
            break;
        case 6: printf("Sonntag\n");
            break;
    }
}
