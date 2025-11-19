/**
 * -----------------------------------------------------------------------------
 * Program : 21_strCompare.c
 * Purpose : Compare two strings if they're same or not, without using any library function
 * Authors : [Uday]
 * Date : Nov 19, 2025
 * -----------------------------------------------------------------------------
 */

#include <stdio.h>

int main() {
    char str1[100], str2[100]; // Arrays to store the two input strings

    // i -> index for traversal
    // flag -> indicates whether strings differ (0 = equal, 1 = not equal)
    int i = 0, flag = 0;

    printf("Enter first string: ");
    gets(str1);

    printf("Enter second string: ");
    gets(str2);

    // Compare each element of the string array (characters of the string) one by one
    while (str1[i] != '\0' || str2[i] != '\0') {
        // If any character does not match, the strings differ
        if (str1[i] != str2[i]) {
            flag = 1;
            break;
        }

        i++;
    }

    if (flag == 0) {
        printf("Strings are equal.\n");
    } else {
        printf("Strings are not equal.\n");
    }
    
    return 0;
}