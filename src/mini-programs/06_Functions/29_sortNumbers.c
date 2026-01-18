/**
 * -----------------------------------------------------------------------------
 * Program : 29_sortNumbers.c
 * Purpose : Sort three numbers in ascending order using call by reference.
 * Authors : [Uday]
 * Date : Jan 17, 2026
 * -----------------------------------------------------------------------------
 */

#include <stdio.h>

// Function Declaration and definition
void sort(int *a, int *b, int *c) {
    int temp;

    // Compare and swap a and b
    if (*a > *b) {
        temp = *a;
        *a = *b;
        *b = temp;
    }

    // Compare and swap a and c
    if (*a > *c) {
        temp = *a;
        *a = *c;
        *c = temp;
    }

    // Compare and swap b and c
    if (*b > *c) {
        temp = *b;
        *b = *c;
        *c = temp;
    }
}


int main() {
    int x, y, z;

    // Take three numbers as input
    printf("Enter three numbers: ");
    scanf("%d %d %d", &x, &y, &z);

    // Sort numbers using function
    sort(&x, &y, &z);

    // Display sorted numbers
    printf("Numbers in ascending order: %d %d %d\n", x, y, z);

    return 0;
}