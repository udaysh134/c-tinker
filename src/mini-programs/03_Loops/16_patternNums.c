/**
 * -----------------------------------------------------------------------------
 * Program : 16_patternNums.c
 * Purpose : Print a pattern of incrementing rows of numbers one below another creating a solid triangular shape, all using loop
 * Authors : [Uday]
 * Date : Nov 10, 2025
 * -----------------------------------------------------------------------------
 */

#include <stdio.h>

int main() {
    int i, j, rows = 5;

    // Outer loop controls the number of rows (1 to the maximum number "rows" variable has)
    for (i = 1; i <= rows; i++) {
        // Inner loop prints the current row number 'i' multiple times
        // For each row, the number of repetitions equals the row number itself
        for (j = 1; j <= i; j++) {
            printf("%d", i); // Print the current row number without a newline
        }

        // After printing all numbers in a row, move to the next line
        printf("\n");
    }

    return 0;
}