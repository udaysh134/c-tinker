/**
 * -----------------------------------------------------------------------------
 * Program : 20_strLength.c
 * Purpose : Find the length of a string without using any library function.
 * Authors : [Uday]
 * Date : Nov 19, 2025
 * -----------------------------------------------------------------------------
 */

#include <stdio.h>

int main() {
    int i = 0; // Variable to count the number of characters
    char str[100];

    printf("Enter a string: ");
    gets(str);

    // We'll use loop to iterate through every element of the string (we know strings are arrays in C)
    // Loop the string until the null terminator is found
    while (str[i] != '\0') { i++; }

    printf("Length of the string = %d\n", i);
    return 0;
}