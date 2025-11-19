/**
 * -----------------------------------------------------------------------------
 * Program : 22_palindrome.c
 * Purpose : Check if the inputted string and the integer follows Palindrome structure or not
 * Authors : [Uday]
 * Date : Nov 19, 2025
 * -----------------------------------------------------------------------------
 */

#include <stdio.h>
#include <string.h>

// Function Declarations
int isPalindromeStr(char str[]);
int isPalindromeInt(int num);


int main() {
    char str[100];
    int num;

    printf("Enter a string: ");
    gets(str);

    // Check if the string is a palindrome
    if (isPalindromeStr(str)) {
        printf("String is a Palindrome.\n");
    } else {
        printf("String is not a Palindrome.\n");
    }

    
    printf("\nEnter an integer: ");
    scanf("%d", &num);

    // Check if the integer is a palindrome
    if (isPalindromeInt(num)) {
        printf("Number is a Palindrome.\n");
    } else {
        printf("Number is not a Palindrome.\n");
    }

    return 0;
}


// ------=>> | FUNCTION DEFINITIONS | <<=------
int isPalindromeStr(char str[]) { // It takes an array of characters (string) as an argument, when used
    int i, len = strlen(str);

    // Compare characters from both ends moving inward
    for (i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1]) {
            return 0; // Not a Palindrome
        }
    }

    return 1; // String is a Palindrome
}

int isPalindromeInt(int num) { // It takes an integer as an argument, when used
    int rev = 0, temp = num;

    // Reversing the number using number removal technique (using Modulus)
    while (num > 0) {
        rev = rev * 10 + num % 10;
        num /= 10;
    }

    // We compare reversed number with original, it will returen 0 or 1 accordingly
    return (rev == temp);
}