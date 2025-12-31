/**
 * -----------------------------------------------------------------------------
 * Program : 26_fiboUsingFunc.c
 * Purpose : Get the fibonacci series upto a certain number of terms, using function
 * Authors : [Uday]
 * Date : Dec 31, 2025
 * -----------------------------------------------------------------------------
 */

#include <stdio.h>

// Function declaration and Definition
int fibonacci(int n) {
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        // Again using recursion to follow up with the series
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    int n, i;

    printf("Enter number of terms : ");
    scanf("%d", &n);

    printf("Fibonacci Series : ");
    for (i = 0; i < n; i++) {
        // Calling the function to get the series using, parameter
        printf("%d ", fibonacci(i));
    }

    printf("\n");
    return 0;
}