/**
 * -----------------------------------------------------------------------------
 * Program : 06_swapTwoNums.c
 * Purpose : Swap two numbers without using a third variable as a container
 * Authors : [Uday]
 * Date : Nov 05, 2025
 * -----------------------------------------------------------------------------
 */

#include <stdio.h>

int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Before swapping: a = %d, b = %d\n", a, b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("After swapping: a = %d, b = %d\n", a, b);
    return 0;
}