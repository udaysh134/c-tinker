/**
 * -----------------------------------------------------------------------------
 * Program : 05_sumFirstLast.c
 * Purpose : Do the summation of first and the last digit of a 4-digit number
 * Authors : [Uday]
 * Date : Nov 05, 2025
 * -----------------------------------------------------------------------------
 */

#include <stdio.h>

int main() {
    int num, first, last, sum;
    printf("Enter a 4-digit number: ");
    scanf("%d", &num);

    last = num % 10;
    first = num / 1000;
    sum = first + last;

    // The "%" operator (modulus) gives the remainder when dividing two numbers.
    // Using mod 10 returns the last digit of a number.
    // Dividing a 4-digit number by 1000 returns its first digit (as integer division discards the decimal part).

    printf("Sum of first and last digit = %d\n", sum);
    return 0;
}