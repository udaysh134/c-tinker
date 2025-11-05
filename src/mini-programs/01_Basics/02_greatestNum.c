/**
 * -----------------------------------------------------------------------------
 * Program : 02_greatestNum.c
 * Purpose : Find the greatest number among three provided ones
 * Authors : [Uday]
 * Date : Nov 05, 2025
 * -----------------------------------------------------------------------------
 */

#include <stdio.h>

int main() {
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    // Comparing one value with another to find which one's greater
    if (a > b && a > c) {
        printf("%d is the greatest.\n", a);
    } else if (b > a && b > c) {
        printf("%d is the greatest.\n", b);
    } else {
        printf("%d is the greatest.\n", c);
    }
    
    return 0;
}