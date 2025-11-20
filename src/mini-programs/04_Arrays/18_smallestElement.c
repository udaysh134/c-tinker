/**
 * -----------------------------------------------------------------------------
 * Program : 18_smallestElement.c
 * Purpose : Find the smallest element in an array of integers
 * Authors : [Uday]
 * Date : Nov 11, 2025
 * -----------------------------------------------------------------------------
 */

#include <stdio.h>

int main() {
    int n, i, arr[100], small;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    small = arr[0]; // Assume the first element is the smallest initially

    // Compare each element with 'small' to find the smallest
    for (i = 1; i < n; i++) {
        if (arr[i] < small) {
            small = arr[i];
        }
    }

    printf("Smallest number = %d\n", small);
    return 0;
}