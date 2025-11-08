/**
 * -----------------------------------------------------------------------------
 * Program : 03_leapYear.c
 * Purpose : Check if a year is a Leap Year or not
 * Authors : [Uday]
 * Date : Nov 05, 2025
 * -----------------------------------------------------------------------------
 */

#include <stdio.h>

int main() {
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);

    // Every 4 years => leap year
    // Every 100 years => skip it
    // Every 400 years => add it back

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("%d is a leap year.\n", year);
    } else {
        printf("%d is not a leap year.\n", year);
    }

    // A leap year happens every 4 years - except if it’s a century (like 1900), unless it’s divisible by 400 (like 2000)
    return 0;
}