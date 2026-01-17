/**
 * -----------------------------------------------------------------------------
 * Program : 28_swapArguments.c
 * Purpose : Demonstrate swapping using Call by Value and Call by Reference.
 * Authors : [Uday]
 * Date : Jan 17, 2026
 * -----------------------------------------------------------------------------
 */

#include <stdio.h>

// Function Declaration and definition
void swapByValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    printf("After swap (Call by Value): a = %d, b = %d\n", a, b);
}

void swapByReference(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}


int main() {
    int x, y;

    // Take input values
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    // Display values before swapping
    printf("Before swapping: x = %d, y = %d\n", x, y);

    // Call swap functions
    swapByValue(x, y);
    swapByReference(&x, &y);

    // Display values after call by reference
    printf("After swap (Call by Reference): x = %d, y = %d\n", x, y);

    return 0;
}