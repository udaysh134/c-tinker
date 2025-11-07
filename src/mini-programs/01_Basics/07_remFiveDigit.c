/**
 * -----------------------------------------------------------------------------
 * Program : 07_remFiveDigit.c
 * Purpose : Get the remainder of a 5-digit number after dividing it by 3
 * Authors : [Uday]
 * Date : Nov 07, 2025
 * -----------------------------------------------------------------------------
 */

#include <stdio.h>

int main() {
    int num, rem;
    printf("Enter any 5-digit number: ");
    scanf("%d", &num);

    rem = num % 3; // Use of Modulus operator ("%") results remainder

    printf("Remainder after dividing %d by 3 = %d\n", num, rem);
    return 0;
}