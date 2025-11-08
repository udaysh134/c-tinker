/**
 * -----------------------------------------------------------------------------
 * Program : 11_caseChange.c
 * Purpose : Convert a Lower case character to an Upper case and vice-versa
 * Authors : [Uday]
 * Date : Nov 08, 2025
 * -----------------------------------------------------------------------------
 */

#include <stdio.h>

int main() {
    char ch;

    printf("Enter an alphabet: ");
    scanf("%c", &ch);

    // We'll use difference of 32, to convert Upper to Lower and Lower to Upper case characters

    // For example ASCII values of (J, O, T, Y) are (74, 79, 84, 89) simultaneously
    // And (j, o, t, y) are (106, 111, 116, 121) simultaneously

    // Now if you notice, the difference between upper case and lower case ASCII values is always 32
    // Like O => o (79 - 111 = 32)
    // Like y => Y (121 - 89 = 32)

    // This means if we add 32 to ASCII value of J (i.e. 74), we'll get 106 (i.e. j)

    if (ch >= 'A' && ch <= 'Z') {
        ch = ch + 32;
    } else if (ch >= 'a' && ch <= 'z') {
        ch = ch - 32;
    } else {
        printf("Not an alphabet.\n");
        return 0;
    }

    printf("Changed case: %c\n", ch);
    return 0;
}