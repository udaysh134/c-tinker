/**
 * -----------------------------------------------------------------------------
 * Program : 30_strLengPtr.c
 * Purpose : Find the length of a given string using pointer.
 * Authors : [Uday]
 * Date : Jan 19, 2026
 * -----------------------------------------------------------------------------
 */

#include <stdio.h>

int main() {
    char str[100], *ptr; // String array and pointer to traverse it
    int length = 0; // Stores length of the string

    printf("Enter a string: ");
    gets(str);

    ptr = str; // Pointer points to the first character

    while (*ptr != '\0') {
        length++;
        ptr++; // Move pointer to next character
    }

    printf("Length of the string = %d\n", length);
    return 0;
}