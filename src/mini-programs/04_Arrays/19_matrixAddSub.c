/**
 * -----------------------------------------------------------------------------
 * Program : 19_matrixAddSub.c
 * Purpose : Perform basic addition and subtraction operations on Matrices using 2D Arrays
 * Authors : [Uday]
 * Date : Nov 15, 2025
 * -----------------------------------------------------------------------------
 */

#include <stdio.h>

int main() {
    int a[3][3], b[3][3]; // Matrices 'a' and 'b' with order of 3x3 (3 rows and 3 coloumns)
    int sum[3][3], diff[3][3]; // Matrices to store sum and difference results
    int i, j; // Loop counters

    printf("Enter elements of first 3x3 matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter elements of second 3x3 matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    // In a multi-dimensional array, this is how it looks (in reference with the above loops)
    // For 1st loop, it looks like this : [{}, {}], here 'i' is whole {} block as one single element
    // For 2nd loop, it looks like this : [{elem_1, elem_2, elem_3}, {elem_1, ...}], here 'j' is all elements inside {} block, for each {} block

    // Just for undersatnding 'i' = [{A, B, C}, {D, E, F}, {G, H, I}], so...
        /*
            i[0] = {A, B, C}
            i[1] = {D, E, F}
            i[2] = {G, H, I}
        */

    // Again, just for understanding 'j' = [{A, B, C}, {D, E, F}, {G, H, I}], so...
        /*
            j[0] = A
            j[1] = B
            j[2] = C
        */


    // Calculate the sum and difference of corresponding elements
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            sum[i][j] = a[i][j] + b[i][j]; // Element-wise addition
            diff[i][j] = a[i][j] - b[i][j]; // Element-wise subtraction
        }
    }

    // Display the resulting sum matrix
    printf("\nSum of matrices:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", sum[i][j]);
        }

        printf("\n"); // So that we can really represent rows and coloumns in the form of a Matrix by printing on the next line
    }

    // Display the resulting difference matrix
    printf("\nDifference of matrices:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", diff[i][j]);
        }

        printf("\n"); // So that we can really represent rows and coloumns in the form of a Matrix by printing on the next line
    }

    return 0;
}