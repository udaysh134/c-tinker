/**
 * -----------------------------------------------------------------------------
 * Program : 17_armstrongNum.c
 * Purpose : Check if an inputted integer is an Armstrong number or not.
 * Authors : [Uday]
 * Date : Nov 10, 2025
 * -----------------------------------------------------------------------------
 */

#include <stdio.h>
#include <math.h>

int main() {
    int num, temp, rem, n = 0;
    float result = 0.0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    temp = num; // Copy number into temp to preserve the original value

    // Count the number of digits in the number
    while (temp != 0) {
        temp /= 10;
        ++n;
    }

    temp = num; // Reset temp for the second loop

    // Calculate sum of each digit raised to the power 'n'
    while (temp != 0) {
        rem = temp % 10;
        result += pow(rem, n); // Add digit^n to result using 'pow()' function.
        temp /= 10;
    }


    if ((int)result == num) { // Converting it to integer using '(int)'
        printf("%d is an Armstrong number.\n", num);
    } else {
        printf("%d is not an Armstrong number.\n", num);
    }

    return 0;
}