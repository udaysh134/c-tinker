/**
 * -----------------------------------------------------------------------------
 * Program : 11_vowelConsonant.c
 * Purpose : Check if an inputted character is a Vowel or a Consonant
 * Authors : [Uday]
 * Date : Nov 08, 2025
 * -----------------------------------------------------------------------------
 */

#include <stdio.h>

int main() {
    char ch;

    printf("Enter an alphabet: ");
    scanf("%c", &ch);

    // Here "<" and ">" sign means less than Z (or z) and greater than A (or a), i.e., B to Y (or b to y)
    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            printf("%c is a vowel.\n", ch);
        } else {
            printf("%c is a consonant.\n", ch);
        }
    } else {
        printf("Not an alphabet.\n");
    }
    
    return 0;
}