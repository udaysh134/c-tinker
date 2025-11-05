/**
 * -----------------------------------------------------------------------------
 * Program : 04_evenOdd.c
 * Purpose : Check if a number is Even or Odd
 * Authors : [Uday]
 * Date : Nov 05, 2025
 * -----------------------------------------------------------------------------
 */

#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    // If the given number completely divides by 2 without leaving any remainder, it's even for sure
    if (num % 2 == 0) {
        printf("%d is even.\n", num);
    } else {
        printf("%d is odd.\n", num);
    }
    
    return 0;
}