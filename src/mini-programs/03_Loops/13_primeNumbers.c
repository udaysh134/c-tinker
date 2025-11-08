/**
 * -----------------------------------------------------------------------------
 * Program : 13_primeNumbers.c
 * Purpose : Print Prime Numbers from 1 to a certain number
 * Authors : [Uday]
 * Date : Nov 08, 2025
 * -----------------------------------------------------------------------------
 */

#include <stdio.h>

int main() {
    int limit = 100, i, j, flag;
    // 'limit' defines the upper bound (100) up to which we want to find prime numbers
    // 'i' and 'j' are loop counters
    // 'flag' will be used as an indicator to check if a number is prime or not

    printf("Prime numbers between 1 and %d are:\n", limit);

    // Outer loop to check every number from 2 to 'limit'
    for (i = 2; i <= limit; i++) {
        flag = 0; // Start flag with 0 assuming the number will be prime

        // Inner loop checks if 'i' is divisible by any number from 2 to i/2
        // If it is divisible, it's not a prime number
        for (j = 2; j <= i / 2; j++) {
            if (i % j == 0) { // If remainder is 0, 'i' is not prime
                flag = 1; // Set flag to 1 indicating non-prime
                break;
            }
        }

        // If flag remains 0, the number is prime - print it
        if (flag == 0) printf("%d, ", i);
    }

    // This line removes the last comma and space after printing the final prime number
    // '\b' is a backspace character; here it’s used twice to first move cursor back
    // And then overwrite the trailing ", " left after the last printed prime
    printf("\b\b \b\b");

    return 0;
}