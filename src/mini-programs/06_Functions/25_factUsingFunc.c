/**
 * -----------------------------------------------------------------------------
 * Program : 25_factUsingFunc.c
 * Purpose : Calculate the factorial of an inputted number using a "factorial" function.
 * Authors : [Uday]
 * Date : Dec 31, 2025
 * -----------------------------------------------------------------------------
 */

#include <stdio.h>

// Function Declaration and definition
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1); // Calling the same function inside itself, meaning recursion.
    }
}

int main() {
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);

    // Calling the function, passing the number as parameter to get that number's factorial.
    printf("Factorial of %d = %d\n", num, factorial(num));
    return 0;
}