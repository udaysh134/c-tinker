/**
 * -----------------------------------------------------------------------------
 * Program : 14_sumOfDigits.c
 * Purpose : Do the summation of all numbers of a 5-digit number using a loop
 * Authors : [Uday]
 * Date : Nov 10, 2025
 * -----------------------------------------------------------------------------
 */

#include <stdio.h>

int main() {
    int num, lastDigit, sum = 0;

    printf("Enter a five-digit number: ");
    scanf("%d", &num);

    // Loop runs until all digits are processed and nothing is left
    while (num > 0) {
        lastDigit = num % 10; // Get the last digit of the number using modulus operator (%)
        sum += lastDigit; // Add the extracted digit to the total sum
        num /= 10; // Remove the last digit from the number to re-run the remaining number and extract last digit again
    }

    printf("Sum of digits = %d\n", sum);
    return 0;
}