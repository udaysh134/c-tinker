/**
 * -----------------------------------------------------------------------------
 * Program : 31_opsOnArrElem.c
 * Purpose : Demonstrate some operation on elements of an integer array, using pointer.
 * Authors : [Uday]
 * Date : Jan 20, 2026
 * -----------------------------------------------------------------------------
 */

#include <stdio.h>

int main() {
    int arr[100], n, i;
    int *ptr; // Pointer to access array elements

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]); // Read array elements
    }

    ptr = arr; // Pointer points to base address of array

    printf("\nArray elements using pointer:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", *(ptr + i)); // Access elements using pointer arithmetic
    }

    printf("\n\nArray elements doubled using pointer:\n");
    for (i = 0; i < n; i++) {
        *(ptr + i) = *(ptr + i) * 2; // Double each element
        printf("%d ", *(ptr + i)); // Print updated value
    }

    printf("\n");
    return 0;
}