/**
 * -----------------------------------------------------------------------------
 * Program : 20_strReverse.c
 * Purpose : Reverse the content of a string using library function.
 * Authors : [Uday]
 * Date : Nov 17, 2025
 * -----------------------------------------------------------------------------
 */

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    printf("Enter a string: ");

    gets(str); // Reads the input string. gets() is another alternative to get input
    strrev(str); // Reverse the string using strrev() from <string.h>

    printf("Reversed string: %s\n", str);
    return 0;
}