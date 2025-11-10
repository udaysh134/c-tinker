/**
 * -----------------------------------------------------------------------------
 * Program : 15_patternStars.c
 * Purpose : Print a pattern of incrementing rows of stars one below another creating a solid triangular shape, all using loop
 * Authors : [Uday]
 * Date : Nov 10, 2025
 * -----------------------------------------------------------------------------
 */

#include <stdio.h>

int main() {
    int i, j, rows = 5;
    char symbol = '*';

    // Outer loop controls the number of rows (from 1 to 5)
    for (i = 1; i <= rows; i++) {
        // Inner loop controls how many stars to print in each row
        // For each row 'i', it prints 'i' number of stars
        for (j = 1; j <= i; j++) {
            printf("%c", symbol); // Print a single star without moving to a new line
        }

        // After printing stars in a row, move to the next line
        printf("\n");
    }

    return 0;
}