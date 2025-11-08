/**
 * -----------------------------------------------------------------------------
 * Program : 05_tempConvert.c
 * Purpose : Convert temperature from Celcius to Fahrenheit
 * Authors : [Uday]
 * Date : Nov 06, 2025
 * -----------------------------------------------------------------------------
 */

#include <stdio.h>

int main() {
    float c, f;

    printf("Enter temperature in Celcius: ");
    scanf("%f", &c);

    // Using the formula
    f = (c * 9 / 5) + 32;

    // Using ".2f" means we're allowing only 2 digits after decimal to be printed
    printf("Temperature in Fahrenheit = %.2f\n", f);
    return 0;
}